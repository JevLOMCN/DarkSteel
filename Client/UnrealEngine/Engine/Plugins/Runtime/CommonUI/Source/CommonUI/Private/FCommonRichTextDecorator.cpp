// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 5

// ~FCommonRichTextDecorator @ 14a7b1670

void __thiscall FCommonRichTextDecorator::~FCommonRichTextDecorator(FCommonRichTextDecorator *this)

{
  this->_padding_ = (longlong)&___7ITextDecorator__6B_;
  return;
}

// operator() @ 14a7b6430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float __thiscall `FCommonRichTextDecorator::Create'::__l45::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  FSlateApplication *pFVar5;
  float fVar6;
  TSharedRef<FSlateFontMeasure,1> local_28 [2];
  
  pFVar5 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar5->field_0x60;
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar1 + 8),local_28);
  sVar4 = FSlateFontMeasure::GetBaseline(local_28[0].Object,this,__real_3f800000);
  fVar6 = *(float *)((longlong)this + 0x60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return (float)(int)sVar4 - fVar6;
}

// Create @ 14a7c7b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<ISlateRun,1> * __thiscall
FCommonRichTextDecorator::Create
          (FCommonRichTextDecorator *this,TSharedRef<ISlateRun,1> *__return_storage_ptr__,
          TSharedRef<FTextLayout,1> *param_1,FTextRunParseResults *param_2,FString *param_3,
          TSharedRef<FString,1> *param_4,ISlateStyle *param_5)

{
  undefined1 *puVar1;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  undefined4 uVar9;
  FSlateTextRun *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FCommonRichTextDecorator *pFVar12;
  TSharedRef<FString,1> *pTVar13;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *pTVar14;
  bool bVar15;
  uint uVar16;
  FColor FVar17;
  int iVar18;
  FString *pFVar19;
  FText *pFVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar21;
  URichTextBlock *this_00;
  FTextBlockStyle *pFVar22;
  TSharedRef<ISlateRun,1> *pTVar23;
  undefined4 extraout_var;
  UObject *pUVar25;
  undefined8 *puVar26;
  ulong64 uVar27;
  TSharedRef<FSlateWidgetRun,1> *pTVar28;
  TSharedRef<FSlateTextRun,1> *pTVar29;
  byte bVar30;
  longlong lVar31;
  wchar_t *pwVar32;
  FSharedReferencer<1> FVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint *puVar37;
  uint uVar38;
  double dVar39;
  float fVar40;
  undefined1 auStackY_7a8 [32];
  undefined1 local_778;
  undefined1 local_777 [7];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_770;
  FDelegateAllocation local_768;
  FTextRange local_758;
  short local_750;
  undefined1 local_74e;
  undefined1 local_748 [8];
  ForAnyElementType FStack_740;
  int local_738;
  FSlateTextRun *local_730;
  FSharedReferencer<1> local_728;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_720;
  undefined1 auStack_718 [16];
  uint uStack_708;
  uint uStack_704;
  undefined8 uStack_700;
  undefined8 local_6f8;
  SWidget *local_6f0;
  TReferenceControllerBase<1> *local_6e8;
  FCommonRichTextDecorator *local_6e0;
  TSharedRef<FString,1> *local_6d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6d0;
  longlong *local_6b0;
  int iStack_6a8;
  uint uStack_6a4;
  undefined1 *local_6a0;
  undefined4 uStack_698;
  uint uStack_694;
  int local_690;
  uint uStack_68c;
  int iStack_688;
  undefined4 uStack_684;
  int local_680;
  int local_67c;
  FName local_678;
  TSharedRef<FTextLayout,1> *local_670;
  TSharedRef<ISlateRun,1> *local_668;
  undefined8 local_660;
  FSharedReferencer<1> local_658;
  TSharedRef<FString_const_,1> local_650;
  undefined8 local_640;
  FSharedReferencer<1> local_638;
  TSharedRef<FString_const_,1> local_630;
  undefined1 local_620 [8];
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_618;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_610;
  undefined8 uStack_5f0;
  TObjectPtr<UObject_const_>_u_0 local_5e8;
  TObjectPtr<UObject>_u_0 local_5e0;
  int local_5d8;
  undefined1 local_5d4;
  undefined1 local_5d3;
  undefined1 local_5d2;
  TObjectPtr<UObject>_u_0 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  FCompositeFont *local_5b8;
  TReferenceControllerBase<1> *local_5b0;
  FName local_5a8;
  float local_5a0;
  int local_59c;
  float local_598;
  EFontFallback local_594;
  undefined1 local_593;
  undefined1 local_592;
  float local_590;
  longlong local_588;
  FString *local_580;
  FDestructionSentinel local_578;
  FDestructionSentinel local_560;
  FDestructionSentinel local_548;
  FDestructionSentinel local_530;
  FDelegateAllocation *local_518;
  undefined1 local_510 [24];
  undefined1 local_4f8 [40];
  bool local_4d0;
  FString local_4c8;
  undefined2 local_4b7;
  undefined1 local_4b5;
  FText local_4b0;
  TSharedRef<FSlateWidgetRun,1> local_4a0;
  TSharedRef<FSlateTextRun,1> local_490;
  FString local_480;
  FString local_470;
  FText local_460;
  FText local_450;
  FSlateFontInfo local_440;
  float local_3e0;
  undefined1 local_3d8 [736];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ForElementType<FSetElementId> FStack_90;
  ulonglong uStack_80;
  FText local_78;
  ulonglong local_68;
  byte *pbVar24;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  local_6d8 = param_4;
  local_758.EndIndex = -1;
  iVar34 = (param_2->ContentRange).BeginIndex;
  iVar18 = (param_4->Object->Data).ArrayNum;
  local_758.BeginIndex = iVar18 + -1;
  if (iVar18 == 0) {
    local_758.BeginIndex = 0;
  }
  local_6e0 = this;
  local_670 = param_1;
  local_668 = __return_storage_ptr__;
  pFVar19 = ::FString::Mid(param_3,&local_470,iVar34,(param_2->ContentRange).EndIndex - iVar34);
  pFVar20 = FText::FromString(&local_460,pFVar19);
  pFVar19 = ::FString::FString(&local_4c8,&param_2->Name);
  local_d8._0_8_ = (pFVar19->Data).AllocatorInstance.Data;
  (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8._8_4_ = (pFVar19->Data).ArrayNum;
  local_d8._12_4_ = (pFVar19->Data).ArrayMax;
  (pFVar19->Data).ArrayNum = 0;
  (pFVar19->Data).ArrayMax = 0;
  FStack_90.InlineData[0] = '\0';
  FStack_90.InlineData[1] = '\0';
  FStack_90.InlineData[2] = '\0';
  FStack_90.InlineData[3] = '\0';
  FStack_90._padding_ = 0;
  local_c8._0_8_ = 0;
  local_c8._16_8_ = 0;
  uStack_b0 = 0;
  local_c8._8_8_ = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0x8000000000;
  local_98 = 0xffffffff;
  FStack_90.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_80 = 0;
  FText::FText(&local_78,pFVar20);
  pFVar5 = (pFVar19->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_460.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
  }
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  puVar1 = &(param_2->MetaData).field_0x10;
  uVar16 = 1;
  pTVar2 = &param_2->MetaData;
  local_6d0._padding_._4_4_ = 1;
  local_6d0.UnvisitedBitMask = 0xffffffff;
  local_6d0._padding_._0_4_ = 0;
  local_6d0.CurrentBitIndex = 0;
  local_6d0.BaseBitIndex = 0;
  local_6d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_2->MetaData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6d0);
  }
  auStack_718._0_8_ = CONCAT44(local_6d0._padding_._4_4_,(undefined4)local_6d0._padding_);
  TStack_610.CurrentBitIndex = local_6d0.CurrentBitIndex;
  TStack_610.UnvisitedBitMask = local_6d0.UnvisitedBitMask;
  uStack_700._4_4_ = local_6d0._28_4_;
  uStack_700._0_4_ = local_6d0.BaseBitIndex;
  local_6f8 = CONCAT44(local_6f8._4_4_,
                       *(int *)&(param_2->MetaData).field_0x8 -
                       *(int *)&(param_2->MetaData).field_0x34);
  auStack_718._8_8_ = local_6d0.Array;
  TStack_610.Array = local_6d0.Array;
  uStack_5f0 = local_6f8;
  local_720 = pTVar2;
  local_618 = pTVar2;
  TStack_610._padding_ = auStack_718._0_8_;
  TStack_610._24_8_ = uStack_700;
  _uStack_708 = TStack_610._16_8_;
  pTVar21 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_f8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_2->MetaData).field_0x28);
  auStack_718._0_8_ = pTVar21->_padding_;
  pTVar8 = pTVar21->Array;
  uVar9 = pTVar21->CurrentBitIndex;
  auStack_718._8_8_ = pTVar21->Array;
  uStack_708 = pTVar21->UnvisitedBitMask;
  uStack_704 = pTVar21->CurrentBitIndex;
  uStack_700._0_4_ = pTVar21->BaseBitIndex;
  uStack_700._4_4_ = *(undefined4 *)&pTVar21->field_0x1c;
  while( true ) {
    pTVar14 = local_618;
    if (*(int *)&local_618->field_0x8 - *(int *)&local_618->field_0x34 != (int)uStack_5f0) {
      local_778 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_778);
    }
    if (((TStack_610.CurrentBitIndex == uVar9) && (TStack_610.Array == pTVar8)) &&
       (pTVar14 == pTVar2)) break;
    local_588 = (longlong)TStack_610.CurrentBitIndex * 0x20 + *(longlong *)pTVar14;
    local_580 = ::FString::Mid(param_3,&local_480,*(int *)(local_588 + 0x10),
                               *(int *)(local_588 + 0x14) - *(int *)(local_588 + 0x10));
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_c8,(TPairInitializer<FString_const_&,FString_&&> *)(local_620 + 4),
               (bool *)&local_588);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
    TStack_610.UnvisitedBitMask = TStack_610.UnvisitedBitMask & ~TStack_610._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_610);
  }
  this_00 = (URichTextBlock *)FWeakObjectPtr::Get(&(local_6e0->Owner).WeakPtr);
  pFVar22 = URichTextBlock::GetCurrentDefaultTextStyle(this_00);
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_3d8,pFVar22);
  uVar38 = (uint)uStack_a0;
  iStack_6a8 = 0;
  local_690 = 0;
  uStack_694 = 0;
  if ((uint)uStack_a0 != 0) {
    puVar37 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar37 = local_a8;
    }
    uVar35 = *puVar37;
    while (uVar35 == 0) {
      lVar31 = (longlong)iStack_6a8;
      local_690 = local_690 + 0x20;
      iStack_6a8 = iStack_6a8 + 1;
      uStack_694 = (uint)uStack_a0;
      if ((int)(((uint)uStack_a0 - 1) + ((int)((uint)uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
          iStack_6a8) goto LAB_14a7c7ef1;
      uVar35 = puVar37[lVar31 + 1];
    }
    uVar16 = -uVar35 & uVar35;
    uVar4 = (ulonglong)uVar16 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_680 = (int)lVar31;
    uStack_694 = local_690 + -1 + local_680;
    if ((int)(uint)uStack_a0 < (int)uStack_694) {
      uStack_694 = (uint)uStack_a0;
    }
  }
LAB_14a7c7ef1:
  local_720 = (TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
               *)local_c8;
  local_6a0 = local_c8 + 0x10;
  uVar35 = (uint)uStack_a0 & 0xffffffe0;
  iStack_688 = local_c8._8_4_ - local_98._4_4_;
  uStack_698 = 0xffffffff;
  uStack_708 = 0xffffffff;
  auStack_718._8_8_ = local_6a0;
  uStack_704 = uStack_694;
  auStack_718._0_8_ = CONCAT44(uVar16,iStack_6a8);
  iVar34 = (int)(uint)uStack_a0 >> 5;
  uStack_700._4_4_ = uStack_694;
  uStack_700._0_4_ = local_690;
  local_6f8 = CONCAT44(uStack_684,iStack_688);
  bVar30 = (byte)uStack_a0;
  local_6b0 = (longlong *)local_720;
  uStack_6a4 = uVar16;
  uStack_68c = uStack_694;
  if ((int)(uint)uStack_a0 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar23 = (TSharedRef<ISlateRun,1> *)(*pcVar7)();
      return pTVar23;
    }
  }
  fVar40 = __real_3b808081;
  if (uVar38 != (uint)uStack_a0) {
    puVar37 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar37 = local_a8;
    }
    uVar16 = -1 << (bVar30 & 0x1f) & puVar37[iVar34];
    while (uVar16 == 0) {
      lVar31 = (longlong)iVar34;
      uVar35 = uVar35 + 0x20;
      iVar34 = iVar34 + 1;
      uVar38 = (uint)uStack_a0;
      if ((int)(((int)((uint)uStack_a0 - 1) >> 0x1f & 0x1fU) + ((uint)uStack_a0 - 1)) >> 5 < iVar34)
      goto LAB_14a7c8000;
      uVar16 = puVar37[lVar31 + 1];
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar31 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_67c = (int)lVar31;
    uVar38 = local_67c + -1 + uVar35;
    if ((int)(uint)uStack_a0 < (int)uVar38) {
      uVar38 = (uint)uStack_a0;
    }
  }
LAB_14a7c8000:
  do {
    pTVar2 = local_720;
    if ((int)*(longlong *)((longlong)local_720 + 8) - *(int *)((longlong)local_720 + 0x34) !=
        (int)local_6f8) {
      local_777[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_777);
    }
    lVar31 = (longlong)(int)uStack_704;
    iVar34 = 0;
    if (((uStack_704 == uVar38) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_718._8_8_ ==
         (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
       (pTVar2 == (TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
                   *)local_c8)) {
      iVar18 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))
                         ();
      pFVar12 = local_6e0;
      if ((iVar18 == 1) && (UE::CommonUI::CommonRichTextBlock::bApplyMobileScaleOnTextRuns != 0)) {
        pUVar25 = FWeakObjectPtr::Get(&(local_6e0->Owner).WeakPtr);
        local_3d8._80_4_ = (float)local_3d8._80_4_ * *(float *)&pUVar25[0x33].field_0xc;
      }
      local_728.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (**(code **)(pFVar12->_padding_ + 0x18))(pFVar12,&local_6f0,local_d8,local_3d8);
      pTVar13 = local_6d8;
      if (local_6f0 == (SWidget *)0x0) {
        pFVar19 = FText::ToString(&local_78);
        pTVar13 = local_6d8;
        iVar18 = (pFVar19->Data).ArrayNum;
        iVar36 = iVar18 + -1;
        if (iVar18 == 0) {
          iVar36 = iVar34;
        }
        ::FString::AppendChars
                  (local_6d8->Object,(wchar_t *)(pFVar19->Data).AllocatorInstance.Data,iVar36);
        local_630.Object = pTVar13->Object;
        iVar18 = ((local_630.Object)->Data).ArrayNum;
        local_630.SharedReferenceCount.ReferenceController =
             (pTVar13->SharedReferenceCount).ReferenceController;
        local_758.EndIndex = iVar18 + -1;
        if (iVar18 == 0) {
          local_758.EndIndex = iVar34;
        }
        if (local_630.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar29 = FSlateTextRun::Create
                            (&local_490,(FRunInfo *)local_d8,&local_630,(FTextBlockStyle *)local_3d8
                             ,&local_758);
        local_638.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
        local_730 = pTVar29->Object;
        if (local_638.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_638.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_638.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_640 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_728,&local_638);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_638.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_490.SharedReferenceCount.ReferenceController);
        FVar33.ReferenceController = local_630.SharedReferenceCount.ReferenceController;
      }
      else {
        ::FString::AppendChar(local_6d8->Object,L'\x200b');
        iVar18 = (pTVar13->Object->Data).ArrayNum;
        local_758.EndIndex = iVar18 + -1;
        if (iVar18 == 0) {
          local_758.EndIndex = iVar34;
        }
        local_5e8.DebugPtr = (UObject *)local_3d8._8_8_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UObject *)local_3d8._8_8_ != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_3d8._8_8_);
        }
        local_5e0.DebugPtr = (UObject *)local_3d8._16_8_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UObject *)local_3d8._16_8_ != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_3d8._16_8_);
        }
        local_5d8 = local_3d8._24_4_;
        local_5d4 = local_3d8[0x1c];
        local_5d3 = local_3d8[0x1d];
        local_5d2 = local_3d8[0x1e];
        local_5d0.DebugPtr = (UObject *)local_3d8._32_8_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UObject *)local_3d8._32_8_ != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_3d8._32_8_);
        }
        local_5b8 = (FCompositeFont *)local_3d8._56_8_;
        local_5c8 = local_3d8._40_8_;
        uStack_5c0 = local_3d8._48_8_;
        local_5b0 = (TReferenceControllerBase<1> *)local_3d8._64_8_;
        if ((TReferenceControllerBase<1> *)local_3d8._64_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *(atomic<int> *)(local_3d8._64_8_ + 8) =
               (atomic<int>)((int)*(atomic<int> *)(local_3d8._64_8_ + 8) + 1);
          UNLOCK();
        }
        local_5a8.ComparisonIndex.Value = local_3d8._72_4_;
        local_5a8.Number = local_3d8._76_4_;
        fVar40 = (float)local_3d8._128_4_;
        if (0.0 <= (float)local_3d8._128_4_) {
          fVar40 = 0.0;
        }
        local_59c = local_3d8._84_4_;
        local_594 = local_3d8[0x5c];
        local_5a0 = (float)local_3d8._80_4_;
        local_593 = local_3d8[0x5d];
        local_598 = (float)local_3d8._88_4_;
        local_592 = local_3d8[0x5e];
        local_590 = (float)local_3d8._96_4_;
        FSlateFontInfo::FSlateFontInfo(&local_440,(FSlateFontInfo *)&local_5e8.ObjectPtr);
        local_770.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_768.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_768.DelegateSize = 0;
        local_3e0 = fVar40;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_770,(FWriteAccessScope *)&local_530);
        local_518 = &local_768;
        puVar26 = UE::Core::Private::DelegateAllocate(0x80,&local_768);
        if (puVar26 != (undefined8 *)0x0) {
          *puVar26 = &
                     ___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar27 = FDelegateHandle::GenerateNewID();
          puVar26[2] = uVar27;
          *puVar26 = &
                     ___7__TBaseFunctorDelegateInstance___A6AFXZUFDefaultDelegateUserPolicy__V<lambda_1>__CN___Create_FCommonRichTextDecorator__UEAA_AV__TSharedRef_VISlateRun___00__AEBV__TSharedRef_VFTextLayout___00__AEBUFTextRunParseResults__AEBVFString__AEBV__TSharedRef_VFString___00__PEBVISlateStyle___Z___V__6B_
          ;
          FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(puVar26 + 3),&local_440);
          *(float *)(puVar26 + 0xf) = local_3e0;
        }
        if (local_530.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_530.Accessor,&local_530);
        }
        local_750 = 0;
        local_74e = 1;
        local_748 = (undefined1  [8])0x0;
        FStack_740.Data = (FScriptContainerElement *)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_770,(FWriteAccessScope *)&local_578);
        if (FStack_740.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_740.Data);
        }
        FStack_740.Data = (FScriptContainerElement *)local_768.DelegateAllocator;
        local_738 = local_768.DelegateSize;
        local_768.DelegateSize = 0;
        local_768.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        if (local_578.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_578.Accessor,&local_578);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_770,(FWriteAccessScope *)&local_560);
        if ((local_768.DelegateSize != 0) &&
           (local_768.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_768.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_768,0,0,0x10);
          local_768.DelegateSize = 0;
        }
        if (local_560.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_560.Accessor,&local_560);
        }
        if (local_768.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_768.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_770.AccessDetector);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_440.CompositeFont.SharedReferenceCount.ReferenceController);
        if ((local_6f0 == (SWidget *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar23 = (TSharedRef<ISlateRun,1> *)(*pcVar7)();
          return pTVar23;
        }
        pTVar11 = local_6e8;
        if (local_6e8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_6e8->SharedReferenceCount = (atomic<int>)((int)local_6e8->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_6f0 == (SWidget *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar23 = (TSharedRef<ISlateRun,1> *)(*pcVar7)();
          return pTVar23;
        }
        local_510._0_8_ = local_6f0;
        local_510._8_8_ = pTVar11;
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_510._16_2_ = local_750;
        local_510[0x12] = (bool)local_74e;
        TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy> *)local_4f8,
                   (TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy> *)local_748);
        local_4d0 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        local_650.Object = pTVar13->Object;
        local_650.SharedReferenceCount.ReferenceController =
             (pTVar13->SharedReferenceCount).ReferenceController;
        if (local_650.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_650.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_650.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar28 = FSlateWidgetRun::Create
                            (&local_4a0,local_670,(FRunInfo *)local_d8,&local_650,
                             (FWidgetRunInfo *)local_510,&local_758);
        local_658.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
        local_730 = (FSlateTextRun *)pTVar28->Object;
        if (local_658.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_658.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_658.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_660 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_728,&local_658);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_658.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4a0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_650.SharedReferenceCount.ReferenceController);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f8);
        if ((void *)local_4f8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_4f8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_4f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_510._8_8_);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_748,
                   (FWriteAccessScope *)&local_548);
        if ((local_738 != 0) &&
           ((ForElementType<TAlignedBytes<16,16>_>)FStack_740.Data !=
            (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)FStack_740.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_740,0,0,0x10)
          ;
          local_738 = 0;
        }
        if (local_548.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_548.Accessor,&local_548);
        }
        if ((ForElementType<TAlignedBytes<16,16>_>)FStack_740.Data !=
            (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free(FStack_740.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_748);
        FVar33.ReferenceController = local_5b0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar33.ReferenceController);
      pFVar10 = local_730;
      if ((local_730 == (FSlateTextRun *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar23 = (TSharedRef<ISlateRun,1> *)(*pcVar7)();
        return pTVar23;
      }
      pTVar23 = local_668;
      FVar33.ReferenceController = local_728.ReferenceController;
      local_668->Object = (ISlateRun *)pFVar10;
      (local_668->SharedReferenceCount).ReferenceController = local_728.ReferenceController;
      if (local_728.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_728.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_728.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_668->Object == (ISlateRun *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar23 = (TSharedRef<ISlateRun,1> *)(*pcVar7)();
        return pTVar23;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6e8)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar33.ReferenceController);
      FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_3d8);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if (FStack_90.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_90.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
      if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_d8._0_8_);
      }
      return pTVar23;
    }
    lVar6 = *(longlong *)pTVar2;
    iVar34 = *(int *)(lVar6 + 8 + lVar31 * 0x28);
    lVar3 = lVar6 + lVar31 * 0x28;
    if (iVar34 == SupportedMarkupKeys::Color.Data.ArrayNum) {
      if (1 < iVar34) {
        iVar34 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)(lVar6 + lVar31 * 0x28),
                            (wchar_t *)SupportedMarkupKeys::Color.Data.AllocatorInstance.Data);
        bVar15 = iVar34 == 0;
        goto LAB_14a7c80a9;
      }
LAB_14a7c82ef:
      FVar17 = FColor::FromHex((FString *)local_620);
      pbVar24 = (byte *)CONCAT44(extraout_var,FVar17.field0_0x0);
      local_3d8._108_4_ = FLinearColor::sRGBToLinearTable[pbVar24[1]];
      local_3d8._112_4_ = FLinearColor::sRGBToLinearTable[*pbVar24];
      local_3d8[0x78] = UseColor_Specified;
      local_3d8._104_4_ = FLinearColor::sRGBToLinearTable[pbVar24[2]];
      local_3d8._116_4_ = (float)pbVar24[3] * fVar40;
      local_3d8._121_2_ = local_4b7;
      local_3d8[0x7b] = local_4b5;
    }
    else {
      bVar15 = iVar34 + SupportedMarkupKeys::Color.Data.ArrayNum == 1;
LAB_14a7c80a9:
      if (bVar15) goto LAB_14a7c82ef;
      iVar34 = *(int *)(lVar6 + 8 + lVar31 * 0x28);
      if (iVar34 == SupportedMarkupKeys::FontFace.Data.ArrayNum) {
        if (1 < iVar34) {
          iVar34 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(lVar6 + lVar31 * 0x28),
                              (wchar_t *)SupportedMarkupKeys::FontFace.Data.AllocatorInstance.Data);
          bVar15 = iVar34 == 0;
          goto LAB_14a7c80e5;
        }
LAB_14a7c82c3:
        if (*(int *)(lVar3 + 0x18) == 0) {
          pwVar32 = L"";
        }
        else {
          pwVar32 = *(wchar_t **)(lVar3 + 0x10);
        }
        ::FName::FName(&local_678,pwVar32);
        local_3d8._72_4_ = local_678.ComparisonIndex.Value;
        local_3d8._76_4_ = local_678.Number;
      }
      else {
        bVar15 = iVar34 + SupportedMarkupKeys::FontFace.Data.ArrayNum == 1;
LAB_14a7c80e5:
        if (bVar15) goto LAB_14a7c82c3;
        iVar34 = *(int *)(lVar6 + 8 + lVar31 * 0x28);
        if (iVar34 == SupportedMarkupKeys::Size.Data.ArrayNum) {
          if (1 < iVar34) {
            iVar34 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar6 + lVar31 * 0x28),
                                (wchar_t *)SupportedMarkupKeys::Size.Data.AllocatorInstance.Data);
            bVar15 = iVar34 == 0;
            goto LAB_14a7c8121;
          }
LAB_14a7c8296:
          if (*(int *)(lVar3 + 0x18) == 0) {
            pwVar32 = L"";
          }
          else {
            pwVar32 = *(wchar_t **)(lVar3 + 0x10);
          }
          dVar39 = _wtof(pwVar32);
          local_3d8._80_4_ = (undefined4)dVar39;
        }
        else {
          bVar15 = iVar34 + SupportedMarkupKeys::Size.Data.ArrayNum == 1;
LAB_14a7c8121:
          if (bVar15) goto LAB_14a7c8296;
          iVar34 = *(int *)(lVar6 + 8 + lVar31 * 0x28);
          if (iVar34 == SupportedMarkupKeys::Case.Data.ArrayNum) {
            if (1 < iVar34) {
              iVar34 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(lVar6 + lVar31 * 0x28),
                                  (wchar_t *)SupportedMarkupKeys::Case.Data.AllocatorInstance.Data);
              bVar15 = iVar34 == 0;
              goto LAB_14a7c8159;
            }
LAB_14a7c81ae:
            iVar34 = *(int *)(lVar3 + 0x18);
            if (iVar34 == SupportedMarkupKeys::Case_Lower.Data.ArrayNum) {
              if (1 < iVar34) {
                iVar34 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(lVar3 + 0x10),
                                    (wchar_t *)
                                    SupportedMarkupKeys::Case_Lower.Data.AllocatorInstance.Data);
                bVar15 = iVar34 == 0;
                goto LAB_14a7c81de;
              }
            }
            else {
              bVar15 = iVar34 + SupportedMarkupKeys::Case_Lower.Data.ArrayNum == 1;
LAB_14a7c81de:
              if (!bVar15) {
                iVar34 = *(int *)(lVar3 + 0x18);
                if (iVar34 == SupportedMarkupKeys::Case_Upper.Data.ArrayNum) {
                  if (1 < iVar34) {
                    iVar34 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)(lVar3 + 0x10),
                                        (wchar_t *)
                                        SupportedMarkupKeys::Case_Upper.Data.AllocatorInstance.Data)
                    ;
                    bVar15 = iVar34 == 0;
                    goto LAB_14a7c8211;
                  }
                }
                else {
                  bVar15 = iVar34 + SupportedMarkupKeys::Case_Upper.Data.ArrayNum == 1;
LAB_14a7c8211:
                  if (!bVar15) goto LAB_14a7c8370;
                }
                pFVar20 = FText::ToUpper(&local_78,&local_450);
                FText::operator=(&local_78,pFVar20);
                if (local_450.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_450.TextData.Reference + 0x10))();
                }
                goto LAB_14a7c8370;
              }
            }
            pFVar20 = FText::ToLower(&local_78,&local_4b0);
            FText::operator=(&local_78,pFVar20);
            if (local_4b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_4b0.TextData.Reference + 0x10))();
            }
          }
          else {
            bVar15 = iVar34 + SupportedMarkupKeys::Case.Data.ArrayNum == 1;
LAB_14a7c8159:
            if (bVar15) goto LAB_14a7c81ae;
            iVar34 = *(int *)(lVar6 + 8 + lVar31 * 0x28);
            if (iVar34 == SupportedMarkupKeys::Material.Data.ArrayNum) {
              if (1 < iVar34) {
                iVar34 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(lVar6 + lVar31 * 0x28),
                                    (wchar_t *)
                                    SupportedMarkupKeys::Material.Data.AllocatorInstance.Data);
                bVar15 = iVar34 == 0;
                goto LAB_14a7c818d;
              }
LAB_14a7c8198:
              if (*(int *)(lVar3 + 0x18) < 2) {
                local_3d8._16_8_ = (UObject *)0x0;
              }
            }
            else {
              bVar15 = iVar34 + SupportedMarkupKeys::Material.Data.ArrayNum == 1;
LAB_14a7c818d:
              if (bVar15) goto LAB_14a7c8198;
            }
          }
        }
      }
    }
LAB_14a7c8370:
    uStack_708 = uStack_708 & ~auStack_718._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_718);
  } while( true );
}

// CreateDecoratorWidget @ 14a7d12f0

TSharedPtr<SWidget,1> * __thiscall
FCommonRichTextDecorator::CreateDecoratorWidget
          (FCommonRichTextDecorator *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FTextRunInfo *param_1,FTextBlockStyle *param_2)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Supports @ 14a81ec80

bool __thiscall
FCommonRichTextDecorator::Supports
          (FCommonRichTextDecorator *this,FTextRunParseResults *param_1,FString *param_2)

{
  int iVar1;
  
  iVar1 = (param_1->Name).Data.ArrayNum;
  if (iVar1 != SupportedMarkupKeys::Text.Data.ArrayNum) {
    return iVar1 + SupportedMarkupKeys::Text.Data.ArrayNum == 1;
  }
  if (1 < iVar1) {
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Name).Data.AllocatorInstance.Data,
                       (wchar_t *)SupportedMarkupKeys::Text.Data.AllocatorInstance.Data);
    return iVar1 == 0;
  }
  return true;
}

