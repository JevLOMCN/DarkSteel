// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// FRichTextDecorator @ 146988280

FRichTextDecorator * __thiscall
FRichTextDecorator::FRichTextDecorator(FRichTextDecorator *this,URichTextBlock *param_1)

{
  this->Owner = param_1;
  this->_padding_ = (longlong)&___7FRichTextDecorator__6B_;
  return this;
}

// ~FRichTextDecorator @ 146991f90

void __thiscall FRichTextDecorator::~FRichTextDecorator(FRichTextDecorator *this)

{
  this->_padding_ = (longlong)&___7ITextDecorator__6B_;
  return;
}

// operator() @ 1469980d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall `FRichTextDecorator::Create'::__l9::<lambda_1>::operator()(void *this)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  short sVar5;
  FSlateApplication *pFVar6;
  TSharedRef<FSlateFontMeasure,1> local_18;
  
  pFVar6 = FSlateApplication::Get();
  lVar2 = *(longlong *)&pFVar6->field_0x60;
  if (*(longlong *)(lVar2 + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      sVar5 = (*pcVar3)();
      return sVar5;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar2 + 8),&local_18);
  sVar5 = FSlateFontMeasure::GetBaseline(local_18.Object,this,__real_3f800000);
  fVar1 = *(float *)((longlong)this + 0x60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (short)(int)((float)(int)sVar5 - fVar1);
}

// Create @ 1469b15a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<ISlateRun,1> * __thiscall
FRichTextDecorator::Create
          (FRichTextDecorator *this,TSharedRef<ISlateRun,1> *__return_storage_ptr__,
          TSharedRef<FTextLayout,1> *param_1,FTextRunParseResults *param_2,FString *param_3,
          TSharedRef<FString,1> *param_4,ISlateStyle *param_5)

{
  undefined1 *puVar1;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  URichTextBlock *pUVar7;
  code *pcVar8;
  FSlateTextRun *pFVar9;
  FSharedReferencer<1> FVar10;
  TSharedRef<FString,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined8 this_00;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *pTVar13;
  bool bVar14;
  FString *pFVar15;
  FText *pFVar16;
  longlong lVar17;
  TSharedRef<ISlateRun,1> *pTVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  TSharedRef<FSlateWidgetRun,1> *pTVar21;
  TSharedRef<FSlateTextRun,1> *pTVar22;
  undefined1 *puVar23;
  int iVar24;
  FTextBlockStyle *pFVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  undefined1 auStackY_708 [32];
  undefined1 local_6d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_6d0;
  FDelegateAllocation local_6c8;
  FTextRange local_6b8;
  FSlateTextRun *local_6b0;
  FSharedReferencer<1> local_6a8;
  short local_6a0;
  undefined1 local_69e;
  undefined1 local_698 [8];
  ForAnyElementType FStack_690;
  int local_688;
  TSharedRef<FString,1> *local_680;
  SWidget *local_678;
  TReferenceControllerBase<1> *local_670;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_668;
  int iStack_660;
  uint uStack_65c;
  undefined1 *local_658;
  undefined4 uStack_650;
  int iStack_64c;
  int local_648;
  int iStack_644;
  int iStack_640;
  undefined4 uStack_63c;
  int local_634;
  int local_630;
  undefined1 local_62c [20];
  TSharedRef<ISlateRun,1> *local_618;
  undefined8 local_610;
  FSharedReferencer<1> local_608;
  TSharedRef<FString_const_,1> local_600;
  undefined8 local_5f0;
  FSharedReferencer<1> local_5e8;
  TSharedRef<FString_const_,1> local_5e0;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_5d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5c8;
  undefined8 uStack_5a8;
  longlong local_5a0;
  FString *local_598;
  FDestructionSentinel local_590;
  FDestructionSentinel local_578;
  FDestructionSentinel local_560;
  FDestructionSentinel local_548;
  FDelegateAllocation *local_530;
  undefined1 local_528 [24];
  undefined1 local_510 [40];
  bool local_4e8;
  TSharedRef<FSlateTextRun,1> local_4e0;
  FText local_4d0;
  FString local_4c0;
  FString local_4b0;
  TSharedRef<FSlateWidgetRun,1> local_4a0;
  FString local_490;
  FSlateFontInfo local_480;
  float local_420;
  FSlateFontInfo local_418;
  FTextBlockStyle local_3b8;
  undefined1 local_d8 [16];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_c8;
  ITextData *local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_708;
  local_680 = param_4;
  local_6b8.EndIndex = -1;
  iVar4 = (param_4->Object->Data).ArrayNum;
  iVar24 = (param_2->ContentRange).BeginIndex;
  local_6b8.BeginIndex = iVar4 + -1;
  if (iVar4 == 0) {
    local_6b8.BeginIndex = 0;
  }
  local_62c._4_8_ = param_3;
  local_62c._12_8_ = param_1;
  local_618 = __return_storage_ptr__;
  pFVar15 = ::FString::Mid(param_3,&local_4c0,iVar24,(param_2->ContentRange).EndIndex - iVar24);
  pFVar16 = FText::FromString(&local_4d0,pFVar15);
  pFVar15 = ::FString::FString(&local_490,&param_2->Name);
  local_d8._0_8_ = (pFVar15->Data).AllocatorInstance.Data;
  (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8._8_4_ = (pFVar15->Data).ArrayNum;
  local_d8._12_4_ = (pFVar15->Data).ArrayMax;
  (pFVar15->Data).ArrayNum = 0;
  (pFVar15->Data).ArrayMax = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Hash.InlineData[0] = 0;
  local_c8.Hash.InlineData[1] = 0;
  local_c8.Hash.InlineData[2] = 0;
  local_c8.Hash.InlineData[3] = 0;
  local_c8.Hash._padding_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._40_8_ = 0x8000000000;
  local_c8.Elements._48_8_ = 0xffffffff;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8._72_8_ = 0;
  local_c8.Elements._16_8_ = 0;
  local_c8.Elements._24_8_ = 0;
  local_78 = (pFVar16->TextData).Reference;
  if (local_78 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78 + 8))();
  }
  local_70 = pFVar16->Flags;
  pFVar6 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (local_4d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4d0.TextData.Reference + 0x10))();
  }
  if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
  }
  iVar4 = *(int *)&(param_2->MetaData).field_0x28;
  puVar1 = &(param_2->MetaData).field_0x10;
  pTVar2 = &param_2->MetaData;
  iStack_660 = 0;
  uStack_65c = 1;
  iStack_64c = iStack_660;
  local_648 = iStack_660;
  if (iVar4 != 0) {
    puVar28 = *(uint **)&(param_2->MetaData).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)puVar1;
    }
    uVar27 = *puVar28;
    local_648 = 0;
    iStack_660 = 0;
    while (uVar27 == 0) {
      lVar17 = (longlong)iStack_660;
      local_648 = local_648 + 0x20;
      iStack_660 = iStack_660 + 1;
      iStack_64c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_660) goto LAB_1469b17bd;
      uVar27 = puVar28[lVar17 + 1];
    }
    uStack_65c = -uVar27 & uVar27;
    uVar3 = (ulonglong)uStack_65c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_634 = (int)lVar17;
    iStack_64c = local_634 + -1 + local_648;
    if (iVar4 < iStack_64c) {
      iStack_64c = iVar4;
    }
  }
LAB_1469b17bd:
  iStack_640 = *(int *)&(param_2->MetaData).field_0x8 - *(int *)&(param_2->MetaData).field_0x34;
  uVar27 = *(uint *)&(param_2->MetaData).field_0x28;
  uStack_650 = 0xffffffff;
  uVar26 = uVar27 & 0xffffffe0;
  TStack_5c8._padding_ = CONCAT44(uStack_65c,iStack_660);
  TStack_5c8.CurrentBitIndex = iStack_64c;
  TStack_5c8.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar27 >> 5;
  TStack_5c8._28_4_ = iStack_64c;
  TStack_5c8.BaseBitIndex = local_648;
  uStack_5a8 = CONCAT44(uStack_63c,iStack_640);
  local_668 = pTVar2;
  local_658 = puVar1;
  iStack_644 = iStack_64c;
  local_5d0 = pTVar2;
  TStack_5c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar27 < 0) || (iVar4 < (int)uVar27)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar18 = (TSharedRef<ISlateRun,1> *)(*pcVar8)();
    return pTVar18;
  }
  this_00 = local_62c._4_8_;
  uVar5 = *(uint *)&(param_2->MetaData).field_0x28;
  if (uVar27 != uVar5) {
    puVar23 = *(undefined1 **)&(param_2->MetaData).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar1;
    }
    uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar24 * 4);
    while (uVar27 == 0) {
      lVar17 = (longlong)iVar24;
      uVar26 = uVar26 + 0x20;
      iVar24 = iVar24 + 1;
      uVar27 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar24) goto LAB_1469b18c0;
      uVar27 = *(uint *)(puVar23 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_630 = (int)lVar17;
    uVar27 = local_630 + -1 + uVar26;
    if ((int)uVar5 < (int)uVar27) {
      uVar27 = uVar5;
    }
  }
LAB_1469b18c0:
  while( true ) {
    pTVar13 = local_5d0;
    if (*(int *)&local_5d0->field_0x8 - *(int *)&local_5d0->field_0x34 != (int)uStack_5a8) {
      local_6d8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_6d8);
    }
    if (((TStack_5c8.CurrentBitIndex == uVar27) &&
        (TStack_5c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar13 == pTVar2)
       ) break;
    local_5a0 = (longlong)TStack_5c8.CurrentBitIndex * 0x20 + *(longlong *)pTVar13;
    local_598 = ::FString::Mid((FString *)this_00,&local_4b0,*(int *)(local_5a0 + 0x10),
                               *(int *)(local_5a0 + 0x14) - *(int *)(local_5a0 + 0x10));
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(local_d8 + 0x10),(TPairInitializer<FString_const_&,FString_&&> *)local_62c,
               (bool *)&local_5a0);
    if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
    }
    TStack_5c8.UnvisitedBitMask = TStack_5c8.UnvisitedBitMask & ~TStack_5c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5c8);
  }
  pUVar7 = this->Owner;
  if (pUVar7->bOverrideDefaultStyle == false) {
    if (((pUVar7->StyleInstance).Object == (FSlateStyleSet *)0x0) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8671678771809485003>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlock.cpp"
                            ,0xcb,"StyleInstance.IsValid()"), bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar18 = (TSharedRef<ISlateRun,1> *)(*pcVar8)();
      return pTVar18;
    }
    lVar17 = 0x4f0;
  }
  else {
    lVar17 = 0x200;
  }
  pFVar25 = (FTextBlockStyle *)((longlong)&pUVar7->_padding_ + lVar17);
  local_6a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (**(code **)(this->_padding_ + 0x18))(this,&local_678,local_d8,pFVar25);
  pTVar11 = local_680;
  if (local_678 == (SWidget *)0x0) {
    FTextBlockStyle::FTextBlockStyle(&local_3b8,pFVar25);
    pTVar11 = local_680;
    (**(code **)(this->_padding_ + 0x20))(this,local_d8,&local_3b8,local_680->Object);
    local_5e0.Object = pTVar11->Object;
    iVar4 = ((local_5e0.Object)->Data).ArrayNum;
    local_6b8.EndIndex = iVar4 + -1;
    local_5e0.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (iVar4 == 0) {
      local_6b8.EndIndex = 0;
    }
    if (local_5e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar22 = FSlateTextRun::Create
                        (&local_4e0,(FRunInfo *)local_d8,&local_5e0,&local_3b8,&local_6b8);
    local_5e8.ReferenceController = (pTVar22->SharedReferenceCount).ReferenceController;
    local_6b0 = pTVar22->Object;
    if (local_5e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5e8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_5e8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_5f0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_6a8,&local_5e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4e0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e0.SharedReferenceCount.ReferenceController);
    FTextBlockStyle::~FTextBlockStyle(&local_3b8);
  }
  else {
    ::FString::AppendChar(local_680->Object,L'\x200b');
    iVar4 = (pTVar11->Object->Data).ArrayNum;
    local_6b8.EndIndex = iVar4 + -1;
    if (iVar4 == 0) {
      local_6b8.EndIndex = 0;
    }
    FSlateFontInfo::FSlateFontInfo(&local_418,&pFVar25->Font);
    local_420 = *(float *)&(pFVar25->ShadowOffset).field_0x4;
    if (0.0 <= local_420) {
      local_420 = 0.0;
    }
    FSlateFontInfo::FSlateFontInfo(&local_480,&local_418);
    local_6d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_6c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_6c8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_6d0,(FWriteAccessScope *)&local_548);
    local_530 = &local_6c8;
    puVar19 = UE::Core::Private::DelegateAllocate(0x80,&local_6c8);
    if (puVar19 != (undefined8 *)0x0) {
      *puVar19 = &___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar20 = FDelegateHandle::GenerateNewID();
      puVar19[2] = uVar20;
      *puVar19 = &TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::`9'::<lambda_1>_>
                  ::_vftable_;
      FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(puVar19 + 3),&local_480);
      *(float *)(puVar19 + 0xf) = local_420;
    }
    if (local_548.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_548.Accessor,&local_548);
    }
    local_6a0 = 0;
    local_69e = 1;
    local_698 = (undefined1  [8])0x0;
    FStack_690.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_6d0,(FWriteAccessScope *)&local_590);
    if (FStack_690.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_690.Data);
    }
    FStack_690.Data = (FScriptContainerElement *)local_6c8.DelegateAllocator;
    local_688 = local_6c8.DelegateSize;
    local_6c8.DelegateSize = 0;
    local_6c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_590.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_590.Accessor,&local_590);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_6d0,(FWriteAccessScope *)&local_578);
    if ((local_6c8.DelegateSize != 0) &&
       (local_6c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_6c8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_6c8,0,0,0x10);
      local_6c8.DelegateSize = 0;
    }
    if (local_578.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_578.Accessor,&local_578);
    }
    if (local_6c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_6c8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_6d0.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_480.CompositeFont.SharedReferenceCount.ReferenceController);
    if ((local_678 == (SWidget *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar18 = (TSharedRef<ISlateRun,1> *)(*pcVar8)();
      return pTVar18;
    }
    pTVar12 = local_670;
    if (local_670 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_670->SharedReferenceCount = (atomic<int>)((int)local_670->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_678 == (SWidget *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar18 = (TSharedRef<ISlateRun,1> *)(*pcVar8)();
      return pTVar18;
    }
    local_528._0_8_ = local_678;
    local_528._8_8_ = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_528._16_2_ = local_6a0;
    local_528[0x12] = (bool)local_69e;
    TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy> *)local_510,
               (TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy> *)local_698);
    local_4e8 = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    local_600.Object = pTVar11->Object;
    local_600.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_600.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_600.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_600.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar21 = FSlateWidgetRun::Create
                        (&local_4a0,(TSharedRef<FTextLayout,1> *)local_62c._12_8_,
                         (FRunInfo *)local_d8,&local_600,(FWidgetRunInfo *)local_528,&local_6b8);
    local_608.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
    local_6b0 = (FSlateTextRun *)pTVar21->Object;
    if (local_608.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_608.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_608.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_610 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_6a8,&local_608);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_608.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_600.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_510);
    if ((void *)local_510._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_510._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_510);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_528._8_8_);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_698,
               (FWriteAccessScope *)&local_560);
    if ((local_688 != 0) &&
       ((ForElementType<TAlignedBytes<16,16>_>)FStack_690.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_690.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_690,0,0,0x10);
      local_688 = 0;
    }
    if (local_560.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_560.Accessor,&local_560);
    }
    if ((ForElementType<TAlignedBytes<16,16>_>)FStack_690.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(FStack_690.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_698);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_418.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  pFVar9 = local_6b0;
  if ((local_6b0 == (FSlateTextRun *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar18 = (TSharedRef<ISlateRun,1> *)(*pcVar8)();
    return pTVar18;
  }
  pTVar18 = local_618;
  FVar10.ReferenceController = local_6a8.ReferenceController;
  local_618->Object = (ISlateRun *)pFVar9;
  (local_618->SharedReferenceCount).ReferenceController = local_6a8.ReferenceController;
  if (local_6a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6a8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6a8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_618->Object == (ISlateRun *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar18 = (TSharedRef<ISlateRun,1> *)(*pcVar8)();
    return pTVar18;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_670);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  if (local_78 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78 + 0x10))();
  }
  local_c8._72_8_ = local_c8._72_8_ & 0xffffffff00000000;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d8 + 0x10));
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  return pTVar18;
}

// CreateDecoratorText @ 1469bccd0

void __thiscall
FRichTextDecorator::CreateDecoratorText
          (FRichTextDecorator *this,FTextRunInfo *param_1,FTextBlockStyle *param_2,FString *param_3)

{
  return;
}

// CreateDecoratorWidget @ 1469bd130

TSharedPtr<SWidget,1> * __thiscall
FRichTextDecorator::CreateDecoratorWidget
          (FRichTextDecorator *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FTextRunInfo *param_1,FTextBlockStyle *param_2)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Supports @ 146a1f5f0

bool __thiscall
FRichTextDecorator::Supports
          (FRichTextDecorator *this,FTextRunParseResults *param_1,FString *param_2)

{
  return false;
}

