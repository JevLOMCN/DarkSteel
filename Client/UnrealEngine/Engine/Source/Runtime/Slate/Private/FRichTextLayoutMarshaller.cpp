// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 10

// FRichTextLayoutMarshaller @ 142844770

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FRichTextLayoutMarshaller * __thiscall
FRichTextLayoutMarshaller::FRichTextLayoutMarshaller
          (FRichTextLayoutMarshaller *this,
          TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *param_1,
          ISlateStyle *param_2)

{
  FScriptContainerElement *pFVar1;
  FSharedReferencer<1> FVar2;
  void *pvVar3;
  atomic<int> *paVar4;
  FDefaultRichTextMarkupParser *pFVar5;
  FDefaultRichTextMarkupParser *pFVar6;
  ulonglong uVar7;
  TRawPtrProxy<FDefaultRichTextMarkupParser> local_res8;
  TSharedRef<FDefaultRichTextMarkupWriter,1> local_18;
  
  uVar7 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FRichTextLayoutMarshaller__6B_;
  pvVar3 = ThreadLocalStoragePointer;
  pFVar6 = (FDefaultRichTextMarkupParser *)0x0;
  *(undefined1 *)&this->_padding_ = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar5 = ::operator_new(0x38);
    local_res8.Object = pFVar6;
    if (pFVar5 != (FDefaultRichTextMarkupParser *)0x0) {
      local_res8.Object = FDefaultRichTextMarkupParser::FDefaultRichTextMarkupParser(pFVar5);
    }
    TSharedRef<FDefaultRichTextMarkupParser,1>::
    TSharedRef<FDefaultRichTextMarkupParser,1><FDefaultRichTextMarkupParser>(&::Parser,&local_res8);
    atexit(`FDefaultRichTextMarkupParser::GetStaticInstance'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&::_TSS0);
  }
  FVar2.ReferenceController = ::Parser.SharedReferenceCount.ReferenceController;
  pFVar5 = ::Parser.Object;
  if (::Parser.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &(::Parser.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  (this->Parser).Object = (IRichTextMarkupParser *)pFVar5;
  (this->Parser).SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar5 = ::operator_new(8);
  if (pFVar5 != (FDefaultRichTextMarkupParser *)0x0) {
    pFVar5->_padding_ = (longlong)&___7FDefaultRichTextMarkupWriter__6B_;
    pFVar6 = pFVar5;
  }
  local_res8.Object = pFVar6;
  TSharedRef<FDefaultRichTextMarkupWriter,1>::
  TSharedRef<FDefaultRichTextMarkupWriter,1><FDefaultRichTextMarkupWriter>
            (&local_18,(TRawPtrProxy<FDefaultRichTextMarkupWriter> *)&local_res8);
  (this->Writer).Object = (IRichTextMarkupWriter *)local_18.Object;
  (this->Writer).SharedReferenceCount.ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  (this->Decorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Decorators).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Decorators).ArrayNum = param_1->ArrayNum;
  (this->Decorators).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->InlineDecorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InlineDecorators).ArrayNum = 0;
  (this->InlineDecorators).ArrayMax = 0;
  this->DecoratorStyleSet = param_2;
  this->FontSizeMultiplier = 1.0;
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FRichTextLayoutMarshaller @ 142844920

FRichTextLayoutMarshaller * __thiscall
FRichTextLayoutMarshaller::FRichTextLayoutMarshaller
          (FRichTextLayoutMarshaller *this,TSharedPtr<IRichTextMarkupParser,1> *param_1,
          TSharedPtr<IRichTextMarkupWriter,1> *param_2,
          TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *param_3,
          ISlateStyle *param_4)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRichTextLayoutMarshaller__6B_;
  (this->Parser).Object = param_1->Object;
  (this->Parser).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IRichTextMarkupParser *)0x0;
  (this->Writer).Object = param_2->Object;
  (this->Writer).SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IRichTextMarkupWriter *)0x0;
  (this->Decorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Decorators).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Decorators).ArrayNum = param_3->ArrayNum;
  (this->Decorators).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  this->DecoratorStyleSet = param_4;
  (this->InlineDecorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InlineDecorators).ArrayNum = 0;
  (this->InlineDecorators).ArrayMax = 0;
  this->FontSizeMultiplier = 1.0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  pFVar1 = (param_3->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FRichTextLayoutMarshaller @ 142849950

void __thiscall
FRichTextLayoutMarshaller::~FRichTextLayoutMarshaller(FRichTextLayoutMarshaller *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRichTextLayoutMarshaller__6B_;
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(this->InlineDecorators).AllocatorInstance.Data,
             (this->InlineDecorators).ArrayNum);
  pFVar1 = (this->InlineDecorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(this->Decorators).AllocatorInstance.Data,
             (this->Decorators).ArrayNum);
  pFVar1 = (this->Decorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Writer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Parser).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  return;
}

// AppendRunsForText @ 142852210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRichTextLayoutMarshaller::AppendRunsForText
          (FRichTextLayoutMarshaller *this,int param_1,FTextRunParseResults *param_2,
          FString *param_3,FTextBlockStyle *param_4,TSharedRef<FString,1> *param_5,
          FTextLayout *param_6,TArray<TSharedRef<IRun,1>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *param_8,
          TMap<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>_>
          *param_9,TMap<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,0>_>
                   *param_10)

{
  undefined1 *puVar1;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *pTVar2;
  atomic<int> aVar3;
  undefined4 uVar4;
  ISlateStyle *pIVar5;
  FSlateTextUnderlineLineHighlighter *pFVar6;
  UObject *pUVar7;
  FDeprecateVector2DParameter FVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FSlateTextUnderlineLineHighlighter *pFVar16;
  FSharedReferencer<1> FVar17;
  FSlateTextStrikeLineHighlighter *pFVar18;
  FSlateTextRun *pFVar19;
  FRichTextLayoutMarshaller *pFVar20;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *pTVar21;
  TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>,FDefaultSetAllocator>
  *this_00;
  TArray<TSharedRef<IRun,1>,TSizedDefaultAllocator<32>_> *pTVar22;
  FString *pFVar23;
  bool bVar24;
  atomic<int> aVar25;
  int iVar26;
  int iVar27;
  TReferenceControllerBase<1> *pTVar28;
  longlong *plVar29;
  FString *pFVar30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar31;
  FName *pFVar32;
  longlong lVar33;
  undefined1 auVar34 [8];
  TSharedPtr<FSlateTextUnderlineLineHighlighter,1> *pTVar35;
  TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_> *pTVar36;
  TSharedRef<FSlateTextUnderlineLineHighlighter,1> *pTVar37;
  TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_> *pTVar38;
  ISlateTextLineHighlighter *this_01;
  wchar_t *pwVar39;
  TReferenceControllerBase<1> *pTVar40;
  FTextBlockStyle *pFVar41;
  ISlateTextLineHighlighter *pIVar42;
  TReferenceControllerBase<1> *pTVar43;
  int iVar44;
  atomic<int> *paVar45;
  TReferenceControllerBase<1> *pTVar46;
  undefined1 auStackY_458 [32];
  undefined1 local_408 [4];
  int local_404;
  FString *local_3f8;
  FTextBlockStyle *local_3e8;
  undefined8 local_3e0;
  FSlateTextUnderlineLineHighlighter *local_3d8;
  FSharedReferencer<1> local_3d0;
  FSlateTextStrikeLineHighlighter *local_3c8;
  FSharedReferencer<1> local_3c0;
  undefined1 local_3b8 [8];
  int local_3b0;
  FSlateTextUnderlineLineHighlighter *local_3ac;
  undefined4 local_3a4;
  FSlateTextUnderlineLineHighlighter *local_3a0;
  TReferenceControllerBase<1> *local_398;
  int local_390;
  FSlateTextUnderlineLineHighlighter *local_38c;
  undefined4 local_384;
  FSlateTextStrikeLineHighlighter *local_380;
  TReferenceControllerBase<1> *local_378;
  FSlateTextRun *local_370;
  FSharedReferencer<1> FStack_368;
  FSlateTextRun *local_360;
  TReferenceControllerBase<1> *local_358;
  FRichTextLayoutMarshaller *local_350;
  TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,0>,FDefaultSetAllocator>
  *local_348;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *local_340;
  TReferenceControllerBase<1> *local_338;
  TReferenceControllerBase<1> *local_330;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_328;
  TPairInitializer<FTextBlockStyle_const_*_const_&,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_const_&>
  local_308;
  TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>,FDefaultSetAllocator>
  *local_2f8;
  TRawPtrProxy<FSlateTextStrikeLineHighlighter> local_2f0;
  TArray<TSharedRef<IRun,1>,TSizedDefaultAllocator<32>_> *local_2e8;
  undefined8 local_2e0;
  FSharedReferencer<1> local_2d8;
  undefined8 local_2d0;
  FSharedReferencer<1> local_2c8;
  undefined8 local_2c0;
  FSharedReferencer<1> local_2b8;
  undefined8 local_2b0;
  FSharedReferencer<1> local_2a8;
  TSharedPtr<ITextDecorator,1> local_2a0;
  TPairInitializer<FString_const_&,FString_&&> local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  TSharedRef<FSlateTextRun,1> local_258;
  FTextBlockStyle **local_248;
  FSlateTextUnderlineLineHighlighter **local_240;
  TSharedRef<FSlateTextStrikeLineHighlighter,1> local_238;
  FTextBlockStyle **local_228;
  FSlateTextStrikeLineHighlighter **local_220;
  longlong local_218;
  FString *local_210;
  undefined1 local_208 [40];
  int local_1e0;
  undefined4 uStack_1dc;
  FLinearColor_u_0 local_1d8;
  undefined4 local_1c8;
  FLinearColor_u_0 local_1b8;
  undefined4 local_1a8;
  undefined1 local_198 [8];
  TReferenceControllerBase<1> *local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FName local_158;
  TSharedRef<FSlateTextUnderlineLineHighlighter,1> local_150;
  FLinearColor_u_0 local_138;
  FLinearColor_u_0 local_128;
  FName local_118 [2];
  longlong local_108;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FString local_e0;
  undefined1 local_c8 [16];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_2e8 = param_7;
  local_340 = param_8;
  local_3e0 = (FSlateTextUnderlineLineHighlighter *)param_5;
  local_2f8 = (TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>,FDefaultSetAllocator>
               *)param_9;
  local_348 = (TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,0>,FDefaultSetAllocator>
               *)param_10;
  local_3b8 = (undefined1  [8])param_4;
  local_370 = (FSlateTextRun *)0x0;
  FStack_368.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_404 = param_1;
  local_3f8 = param_3;
  local_350 = this;
  TryGetDecorator(this,&local_2a0,param_3,param_2);
  if (local_2a0.Object != (ITextDecorator *)0x0) {
    if ((local_2a0.Object == (ITextDecorator *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar46 = (TReferenceControllerBase<1> *)0x0;
    pTVar28 = (TReferenceControllerBase<1> *)param_6->_padding_;
    pcVar10 = *(code **)((longlong)*local_2a0.Object + 0x10);
    pTVar40 = pTVar28;
    pTVar43 = pTVar46;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar28->SharedReferenceCount;
      do {
        pTVar40 = pTVar46;
        pTVar43 = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142852343;
        LOCK();
        aVar25 = pTVar28->SharedReferenceCount;
        bVar24 = aVar3 == aVar25;
        if (bVar24) {
          pTVar28->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar25 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar25;
      } while (!bVar24);
      pTVar40 = pTVar28;
      pTVar43 = (TReferenceControllerBase<1> *)param_6->_padding_;
    }
LAB_142852343:
    pTVar28 = (TReferenceControllerBase<1> *)&pTVar43->SharedReferenceCount;
    if (pTVar43 == (TReferenceControllerBase<1> *)0x0) {
      pTVar28 = pTVar46;
    }
    if ((pTVar28 != (TReferenceControllerBase<1> *)&param_6->_padding_) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((pTVar43 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_338 = pTVar43;
    local_330 = pTVar40;
    if ((pTVar43 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    plVar29 = (longlong *)(*pcVar10)(local_2a0.Object,local_198,&local_338,param_2);
    local_2d8.ReferenceController = (TReferenceControllerBase<1> *)plVar29[1];
    local_370 = (FSlateTextRun *)*plVar29;
    if (local_2d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2d8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2d8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2e0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_368,&local_2d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_190);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_330);
    goto LAB_142852f2a;
  }
  pFVar30 = ::FString::FString(&local_e0,&param_2->Name);
  FRunInfo::FRunInfo((FRunInfo *)local_c8,pFVar30);
  pIVar42 = (ISlateTextLineHighlighter *)0x0;
  iVar27 = 0;
  local_328._padding_._4_4_ = 1;
  puVar1 = &(param_2->MetaData).field_0x10;
  local_328._padding_._0_4_ = 0;
  pTVar2 = &param_2->MetaData;
  local_328.UnvisitedBitMask = 0xffffffff;
  local_328.CurrentBitIndex = 0;
  local_328.BaseBitIndex = 0;
  local_328.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_2->MetaData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_328);
  }
  TStack_280._padding_ = CONCAT44(local_328._padding_._4_4_,(undefined4)local_328._padding_);
  TStack_280.CurrentBitIndex = local_328.CurrentBitIndex;
  TStack_280.UnvisitedBitMask = local_328.UnvisitedBitMask;
  TStack_280._28_4_ = local_328._28_4_;
  TStack_280.BaseBitIndex = local_328.BaseBitIndex;
  local_1e0 = *(int *)&(param_2->MetaData).field_0x8 - *(int *)&(param_2->MetaData).field_0x34;
  local_208._16_8_ = local_328.Array;
  uStack_260 = CONCAT44(uStack_1dc,local_1e0);
  TStack_280.Array = local_328.Array;
  local_290.Value = (FString *)pTVar2;
  local_208._0_8_ = pTVar2;
  local_208._8_8_ = TStack_280._padding_;
  local_208._24_8_ = TStack_280._16_8_;
  local_208._32_8_ = TStack_280._24_8_;
  pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_208,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_2->MetaData).field_0x28);
  pFVar30 = local_3f8;
  local_108 = pTVar31->_padding_;
  pTVar11 = pTVar31->Array;
  uVar12._0_4_ = pTVar31->UnvisitedBitMask;
  uVar12._4_4_ = pTVar31->CurrentBitIndex;
  uStack_f0 = *(undefined8 *)&pTVar31->BaseBitIndex;
  pTStack_100 = pTVar11;
  local_f8 = uVar12;
  while( true ) {
    pFVar23 = local_290.Value;
    if (*(int *)((longlong)local_290.Value + 8) - *(int *)((longlong)local_290.Value + 0x34) !=
        (int)uStack_260) {
      local_408[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_408);
    }
    pFVar20 = local_350;
    auVar34 = local_3b8;
    pFVar6 = local_3e0;
    if (((TStack_280.CurrentBitIndex == uVar12._4_4_) && (TStack_280.Array == pTVar11)) &&
       ((TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
         *)pFVar23 == pTVar2)) break;
    local_218 = (longlong)TStack_280.CurrentBitIndex * 0x20 + *(longlong *)pFVar23;
    iVar44 = *(int *)(local_218 + 0x14) - *(int *)(local_218 + 0x10);
    if (iVar44 < 0) {
      iVar44 = iVar27;
    }
    local_210 = ::FString::Mid(pFVar30,&local_188,*(int *)(local_218 + 0x10),iVar44);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(local_c8 + 0x10),&local_290,(bool *)&local_218);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
  }
  iVar44 = ((*(FString **)&local_3e0->field_0x0)->Data).ArrayNum;
  iVar26 = iVar44 + -1;
  if (iVar44 == 0) {
    iVar26 = 0;
  }
  local_3e0 = (FSlateTextUnderlineLineHighlighter *)CONCAT44(local_3e0._4_4_,iVar26);
  if ((param_2->Name).Data.ArrayNum < 2) {
LAB_1428526fe:
    iVar44 = (param_2->OriginalRange).BeginIndex;
    pFVar30 = ::FString::Mid(local_3f8,&local_168,iVar44,(param_2->OriginalRange).EndIndex - iVar44)
    ;
    iVar44 = (pFVar30->Data).ArrayNum;
    iVar26 = iVar44 + -1;
    if (iVar44 == 0) {
      iVar26 = iVar27;
    }
    ::FString::AppendChars
              (*(FString **)&pFVar6->field_0x0,(wchar_t *)(pFVar30->Data).AllocatorInstance.Data,
               iVar26);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  else {
    pIVar5 = local_350->DecoratorStyleSet;
    pFVar32 = ::FName::FName(local_118,(wchar_t *)(param_2->Name).Data.AllocatorInstance.Data);
    lVar33 = (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FTextBlockStyle::TypeName,*pFVar32,0);
    if (lVar33 == 0) goto LAB_1428526fe;
    iVar44 = (param_2->ContentRange).BeginIndex;
    pFVar30 = ::FString::Mid(local_3f8,&local_178,iVar44,(param_2->ContentRange).EndIndex - iVar44);
    iVar44 = (pFVar30->Data).ArrayNum;
    iVar26 = iVar44 + -1;
    if (iVar44 == 0) {
      iVar26 = 0;
    }
    ::FString::AppendChars
              (*(FString **)&pFVar6->field_0x0,(wchar_t *)(pFVar30->Data).AllocatorInstance.Data,
               iVar26);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    pIVar5 = pFVar20->DecoratorStyleSet;
    if ((param_2->Name).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(param_2->Name).Data.AllocatorInstance.Data;
    }
    pFVar32 = ::FName::FName(&local_158,pwVar39);
    auVar34 = (undefined1  [8])
              ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                        (pIVar5,*pFVar32,(char *)0x0,(FTextBlockStyle *)0x0);
    local_3b8 = auVar34;
  }
  pTVar28 = *(TReferenceControllerBase<1> **)&pFVar6->field_0x0;
  pFVar6 = (FSlateTextUnderlineLineHighlighter *)
           ((FSharedReferencer<1> *)&pFVar6->field_0x8)->ReferenceController;
  aVar3 = pTVar28->SharedReferenceCount;
  iVar44 = (int)aVar3 + -1;
  if (aVar3 == (atomic<int>)0x0) {
    iVar44 = iVar27;
  }
  local_3e0 = (FSlateTextUnderlineLineHighlighter *)CONCAT44(iVar44,(undefined4)local_3e0);
  if (pFVar6 == (FSlateTextUnderlineLineHighlighter *)0x0) {
    paVar45 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar45 = (atomic<int> *)&pFVar6->field_0x8;
    LOCK();
    *paVar45 = (atomic<int>)((int)*paVar45 + 1);
    UNLOCK();
  }
  local_3e8 = (FTextBlockStyle *)auVar34;
  pTVar35 = ::operator_new(0x380);
  pFVar16 = local_3e0;
  if (pTVar35 == (TSharedPtr<FSlateTextUnderlineLineHighlighter,1> *)0x0) {
    pTVar35 = (TSharedPtr<FSlateTextUnderlineLineHighlighter,1> *)0x0;
  }
  else {
    (pTVar35->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar35[1].Object = (FSlateTextUnderlineLineHighlighter *)0x0;
    pTVar35->Object = (FSlateTextUnderlineLineHighlighter *)&___7FSlateTextRun__6B_;
    ::FString::FString((FString *)&pTVar35[1].SharedReferenceCount,(FString *)local_c8);
    pTVar35[2].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar35[3].Object = (FSlateTextUnderlineLineHighlighter *)0x0;
    pTVar35[4].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&pTVar35[5].Object = 0;
    *(undefined4 *)((longlong)&pTVar35[5].Object + 4) = 0x80;
    *(undefined4 *)&pTVar35[5].SharedReferenceCount.ReferenceController = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar35[5].SharedReferenceCount.ReferenceController + 4) = 0;
    pTVar35[6].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&pTVar35[7].Object = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&pTVar35[2].SharedReferenceCount,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)(local_c8 + 0x10));
    pTVar35[7].SharedReferenceCount.ReferenceController = pTVar28;
    pTVar35[8].Object = pFVar6;
    if (pFVar6 != (FSlateTextUnderlineLineHighlighter *)0x0) {
      LOCK();
      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
      UNLOCK();
    }
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(pTVar35 + 9),(FTextBlockStyle *)local_3b8);
    pTVar35[0x37].Object = pFVar16;
    if ((((pTVar35->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0)
        && (pTVar35[1].Object != (FSlateTextUnderlineLineHighlighter *)0x0)) &&
       ((0 < *(int *)&(pTVar35[1].Object)->field_0x8 &&
        (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar24)))) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  local_308.Value = pTVar35;
  TSharedRef<FSlateTextRun,1>::TSharedRef<FSlateTextRun,1><FSlateTextRun>
            (&local_258,(TRawPtrProxy<FSlateTextRun> *)&local_308.Value);
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  if ((local_258.Object != (FSlateTextRun *)0x0) && (local_350->FontSizeMultiplier != 0.0)) {
    ((local_258.Object)->Style).Font.Size =
         local_350->FontSizeMultiplier * ((local_258.Object)->Style).Font.Size;
  }
  local_2c8.ReferenceController = local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_370 = local_258.Object;
  local_2d0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_368,&local_2c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c8.ReferenceController);
  this_00 = local_2f8;
  pFVar41 = local_3e8;
  if ((local_3e8->UnderlineBrush).ResourceName == (FName)0x0) {
    pUVar7 = (local_3e8->UnderlineBrush).ResourceObject.field0_0x0.DebugPtr;
    lVar33 = 0;
    if (pUVar7 != (UObject *)0x0) {
      lVar33 = *(longlong *)&pUVar7->field_0x18;
    }
    if (lVar33 != 0) goto LAB_14285291c;
  }
  else {
LAB_14285291c:
    pTVar36 = TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>,FDefaultSetAllocator>
              ::Find(local_2f8,local_3e8);
    if (pTVar36 ==
        (TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_> *)0x0) {
      local_3d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14285295e:
      local_1c8._0_1_ = (pFVar41->ColorAndOpacity).ColorUseRule;
      local_1c8._1_1_ = (pFVar41->ColorAndOpacity).ColorTableId;
      local_1c8._2_2_ = *(undefined2 *)&(pFVar41->ColorAndOpacity).field_0x12;
      local_128._0_8_ = *(undefined8 *)&(pFVar41->ShadowColorAndOpacity).field0_0x0;
      local_128._8_8_ = *(undefined8 *)((longlong)&(pFVar41->ShadowColorAndOpacity).field0_0x0 + 8);
      local_1d8._0_8_ = *(undefined8 *)&(pFVar41->ColorAndOpacity).SpecifiedColor.field0_0x0;
      local_1d8._8_8_ =
           *(undefined8 *)((longlong)&(pFVar41->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
      pTVar37 = FSlateTextUnderlineLineHighlighter::Create
                          (&local_150,&pFVar41->UnderlineBrush,&pFVar41->Font,
                           (FSlateColor *)&local_1d8._s_0,
                           *(FDeprecateVector2DParameter *)&pFVar41->ShadowOffset,
                           (FLinearColor *)&local_128._s_0);
      local_2b8.ReferenceController = (pTVar37->SharedReferenceCount).ReferenceController;
      local_3d8 = pTVar37->Object;
      if (local_2b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_2b8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_2b8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2c0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3d0,&local_2b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_150.SharedReferenceCount.ReferenceController);
      local_248 = &local_3e8;
      local_240 = &local_3d8;
      TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FTextBlockStyle_const_*_const_&,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_const_&>_>
                (this_00,&local_308,(bool *)&local_248);
      if ((local_3d8 == (FSlateTextUnderlineLineHighlighter *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar24)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      local_3d8 = *(FSlateTextUnderlineLineHighlighter **)&pTVar36->field_0x8;
      local_3d0.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar36->field_0x10;
      if (local_3d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_3d0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_3d0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pFVar41 = local_3e8;
      }
      if (local_3d8 == (FSlateTextUnderlineLineHighlighter *)0x0) {
        local_3d8 = (FSlateTextUnderlineLineHighlighter *)0x0;
        goto LAB_14285295e;
      }
    }
    FVar17.ReferenceController = local_3d0.ReferenceController;
    pFVar6 = local_3d8;
    if (local_3d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_3d8 == (FSlateTextUnderlineLineHighlighter *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar21 = local_340;
    if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar17.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar17.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_398 = FVar17.ReferenceController;
    local_3a0 = pFVar6;
    local_3a4 = 1;
    local_3ac = pFVar16;
    local_3b0 = local_404;
    pFVar9 = (local_340->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)(local_3b8 + 8)) &&
        ((FScriptContainerElement *)(local_3b8 + 8) < pFVar9 + (longlong)local_340->ArrayMax * 0x20)
        ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar27 = pTVar21->ArrayNum;
    if (iVar27 == pTVar21->ArrayMax) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar21->AllocatorInstance,&pTVar21->ArrayMax);
    }
    pTVar21->ArrayNum = iVar27 + 1;
    pFVar9 = (pTVar21->AllocatorInstance).Data;
    lVar33 = (longlong)iVar27 * 0x20;
    *(int *)(pFVar9 + lVar33) = local_3b0;
    *(FSlateTextUnderlineLineHighlighter **)(pFVar9 + lVar33 + 4) = local_3ac;
    *(undefined4 *)(pFVar9 + lVar33 + 0xc) = local_3a4;
    *(FSlateTextUnderlineLineHighlighter **)(pFVar9 + lVar33 + 0x10) = local_3a0;
    *(TReferenceControllerBase<1> **)(pFVar9 + lVar33 + 0x18) = local_398;
    if (local_398 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_398->SharedReferenceCount = (atomic<int>)((int)local_398->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_398);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar17.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar17.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d0.ReferenceController);
  }
  pFVar41 = local_3e8;
  if ((local_3e8->StrikeBrush).ResourceName == (FName)0x0) {
    pUVar7 = (local_3e8->StrikeBrush).ResourceObject.field0_0x0.DebugPtr;
    lVar33 = 0;
    if (pUVar7 != (UObject *)0x0) {
      lVar33 = *(longlong *)&pUVar7->field_0x18;
    }
    if (lVar33 != 0) goto LAB_142852be9;
  }
  else {
LAB_142852be9:
    pTVar38 = TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,0>,FDefaultSetAllocator>
              ::Find(local_348,local_3e8);
    if (pTVar38 ==
        (TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_> *)0x0) {
      local_3c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_142852c28:
      uVar4._0_1_ = (pFVar41->ColorAndOpacity).ColorUseRule;
      uVar4._1_1_ = (pFVar41->ColorAndOpacity).ColorTableId;
      uVar4._2_2_ = *(undefined2 *)&(pFVar41->ColorAndOpacity).field_0x12;
      FVar8 = *(FDeprecateVector2DParameter *)&pFVar41->ShadowOffset;
      uVar12 = *(undefined8 *)&(pFVar41->ShadowColorAndOpacity).field0_0x0;
      uVar13 = *(undefined8 *)((longlong)&(pFVar41->ShadowColorAndOpacity).field0_0x0 + 8);
      local_3f8 = (FString *)CONCAT44(local_3f8._4_4_,uVar4);
      uVar14 = *(undefined8 *)&(pFVar41->ColorAndOpacity).SpecifiedColor.field0_0x0;
      uVar15 = *(undefined8 *)((longlong)&(pFVar41->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
      this_01 = ::operator_new(0x150);
      if (this_01 != (ISlateTextLineHighlighter *)0x0) {
        local_1a8 = local_3f8._0_4_;
        local_1b8._0_8_ = uVar14;
        local_1b8._8_8_ = uVar15;
        local_138._0_8_ = uVar12;
        local_138._8_8_ = uVar13;
        ISlateTextLineHighlighter::ISlateTextLineHighlighter
                  (this_01,&pFVar41->StrikeBrush,&pFVar41->Font,(FSlateColor *)&local_1b8._s_0,FVar8
                   ,(FLinearColor *)&local_138._s_0);
        this_01->_padding_ = (longlong)&___7FSlateTextStrikeLineHighlighter__6B_;
        pIVar42 = this_01;
      }
      local_2f0.Object = (FSlateTextStrikeLineHighlighter *)pIVar42;
      TSharedRef<FSlateTextStrikeLineHighlighter,1>::
      TSharedRef<FSlateTextStrikeLineHighlighter,1><FSlateTextStrikeLineHighlighter>
                (&local_238,&local_2f0);
      local_2a8.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
      if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3c8 = local_238.Object;
      local_2b0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3c0,&local_2a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_238.SharedReferenceCount.ReferenceController);
      local_228 = &local_3e8;
      local_220 = &local_3c8;
      TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FTextBlockStyle_const_*_const_&,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_const_&>_>
                (local_348,
                 (TPairInitializer<FTextBlockStyle_const_*_const_&,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_const_&>
                  *)local_3b8,(bool *)&local_228);
      if ((local_3c8 == (FSlateTextStrikeLineHighlighter *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar24)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      local_3c8 = *(FSlateTextStrikeLineHighlighter **)&pTVar38->field_0x8;
      local_3c0.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar38->field_0x10;
      if (local_3c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_3c0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_3c0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pFVar41 = local_3e8;
      }
      if (local_3c8 == (FSlateTextStrikeLineHighlighter *)0x0) {
        local_3c8 = (FSlateTextStrikeLineHighlighter *)0x0;
        goto LAB_142852c28;
      }
    }
    FVar17.ReferenceController = local_3c0.ReferenceController;
    pFVar18 = local_3c8;
    if (local_3c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_3c8 == (FSlateTextStrikeLineHighlighter *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar21 = local_340;
    if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar17.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar17.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_378 = FVar17.ReferenceController;
    local_380 = pFVar18;
    local_384 = 1;
    local_38c = pFVar16;
    local_390 = local_404;
    pFVar9 = (local_340->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_390) &&
        ((FScriptContainerElement *)&local_390 < pFVar9 + (longlong)local_340->ArrayMax * 0x20)) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar27 = pTVar21->ArrayNum;
    if (iVar27 == pTVar21->ArrayMax) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar21->AllocatorInstance,&pTVar21->ArrayMax);
    }
    pTVar21->ArrayNum = iVar27 + 1;
    pFVar9 = (pTVar21->AllocatorInstance).Data;
    lVar33 = (longlong)iVar27 * 0x20;
    *(int *)(pFVar9 + lVar33) = local_390;
    *(FSlateTextUnderlineLineHighlighter **)(pFVar9 + lVar33 + 4) = local_38c;
    *(undefined4 *)(pFVar9 + lVar33 + 0xc) = local_384;
    *(FSlateTextStrikeLineHighlighter **)(pFVar9 + lVar33 + 0x10) = local_380;
    *(TReferenceControllerBase<1> **)(pFVar9 + lVar33 + 0x18) = local_378;
    if (local_378 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_378->SharedReferenceCount = (atomic<int>)((int)local_378->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar17.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar17.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c0.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c8 + 0x10));
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
LAB_142852f2a:
  pFVar19 = local_370;
  if ((local_370 == (FSlateTextRun *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar17.ReferenceController = FStack_368.ReferenceController;
  if (FStack_368.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_368.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_368.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar19 == (FSlateTextRun *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar22 = local_2e8;
  local_360 = pFVar19;
  local_358 = FVar17.ReferenceController;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = (local_2e8->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_360) &&
      ((FScriptContainerElement *)&local_360 < pFVar9 + (longlong)local_2e8->ArrayMax * 0x10)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar27 = pTVar22->ArrayNum;
  if (iVar27 == pTVar22->ArrayMax) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
  }
  pFVar9 = (pTVar22->AllocatorInstance).Data;
  pTVar22->ArrayNum = iVar27 + 1;
  *(FSlateTextRun **)(pFVar9 + (longlong)iVar27 * 0x10) = local_360;
  *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar27 * 0x10 + 8) = local_358;
  if (local_358 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_358->SharedReferenceCount = (atomic<int>)((int)local_358->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_358);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_368.ReferenceController);
  return;
}

// Create @ 142864580

TSharedRef<FRichTextLayoutMarshaller,1> * __cdecl
FRichTextLayoutMarshaller::Create
          (TSharedRef<FRichTextLayoutMarshaller,1> *__return_storage_ptr__,
          TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *param_1,
          ISlateStyle *param_2)

{
  FScriptContainerElement *pFVar1;
  FRichTextLayoutMarshaller *this;
  TRawPtrProxy<FRichTextLayoutMarshaller> local_res8;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> local_18;
  
  this = ::operator_new(0x60);
  local_res8.Object = (FRichTextLayoutMarshaller *)0x0;
  if (this != (FRichTextLayoutMarshaller *)0x0) {
    local_18.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    local_res8.Object = FRichTextLayoutMarshaller(this,&local_18,param_2);
  }
  TSharedRef<FRichTextLayoutMarshaller,1>::
  TSharedRef<FRichTextLayoutMarshaller,1><FRichTextLayoutMarshaller>
            (__return_storage_ptr__,&local_res8);
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// Create @ 142864620

TSharedRef<FRichTextLayoutMarshaller,1> * __cdecl
FRichTextLayoutMarshaller::Create
          (TSharedRef<FRichTextLayoutMarshaller,1> *__return_storage_ptr__,
          TSharedPtr<IRichTextMarkupParser,1> *param_1,TSharedPtr<IRichTextMarkupWriter,1> *param_2,
          TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *param_3,
          ISlateStyle *param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  IRichTextMarkupWriter *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  IRichTextMarkupParser *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  FRichTextLayoutMarshaller *pFVar8;
  TRawPtrProxy<FRichTextLayoutMarshaller> local_res8;
  
  pFVar8 = ::operator_new(0x60);
  local_res8.Object = (FRichTextLayoutMarshaller *)0x0;
  if (pFVar8 != (FRichTextLayoutMarshaller *)0x0) {
    pFVar3 = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = param_3->ArrayNum;
    iVar2 = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
    pIVar4 = param_2->Object;
    pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
    (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_2->Object = (IRichTextMarkupWriter *)0x0;
    pIVar6 = param_1->Object;
    pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IRichTextMarkupParser *)0x0;
    (pFVar8->Parser).SharedReferenceCount.ReferenceController = pTVar7;
    (pFVar8->Parser).Object = pIVar6;
    (pFVar8->Writer).Object = pIVar4;
    (pFVar8->Writer).SharedReferenceCount.ReferenceController = pTVar5;
    (pFVar8->Decorators).AllocatorInstance.Data = pFVar3;
    *(undefined1 *)&pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FRichTextLayoutMarshaller__6B_;
    (pFVar8->Decorators).ArrayNum = iVar1;
    (pFVar8->Decorators).ArrayMax = iVar2;
    pFVar8->DecoratorStyleSet = param_4;
    (pFVar8->InlineDecorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->InlineDecorators).ArrayNum = 0;
    (pFVar8->InlineDecorators).ArrayMax = 0;
    pFVar8->FontSizeMultiplier = 1.0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    DestructItems<TSharedRef<ITextDecorator,1>,int>((TSharedRef<ITextDecorator,1> *)0x0,0);
    local_res8.Object = pFVar8;
  }
  TSharedRef<FRichTextLayoutMarshaller,1>::
  TSharedRef<FRichTextLayoutMarshaller,1><FRichTextLayoutMarshaller>
            (__return_storage_ptr__,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  pFVar3 = (param_3->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// GetText @ 14287b450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRichTextLayoutMarshaller::GetText
          (FRichTextLayoutMarshaller *this,FString *param_1,FTextLayout *param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  IRichTextMarkupWriter *pIVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  void *_Src;
  FRichTextLayoutMarshaller *pFVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_178 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  ForAnyElementType local_120;
  undefined8 local_118;
  ForAnyElementType local_110;
  undefined8 local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  uint local_f0;
  void *local_e8;
  ulonglong local_e0;
  FTextLayout *local_d8;
  FScriptContainerElement *local_d0;
  FRichTextLayoutMarshaller *local_c8;
  FString *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar1 = (param_2->LineModels).ArrayNum;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  local_d8 = param_2;
  local_c8 = this;
  local_c0 = param_1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_120,0,(int *)((longlong)&local_118 + 4));
  }
  local_f0 = (param_2->LineModels).ArrayNum;
  uVar11 = (ulonglong)(int)local_f0;
  pFVar15 = (param_2->LineModels).AllocatorInstance.Data;
  pFVar17 = pFVar15 + 0x30;
  local_d0 = pFVar15 + uVar11 * 0x70;
  while( true ) {
    pFVar13 = local_d0;
    if ((param_2->LineModels).ArrayNum != (int)uVar11) {
      local_128 = 0;
      `TCheckedPointerIterator<FTextLayout::FLineModel_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_128);
    }
    pFVar7 = local_c8;
    if (pFVar15 == pFVar13) {
      if (((local_c8->Writer).Object == (IRichTextMarkupWriter *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar4 = (pFVar7->Writer).Object;
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_120,local_c0);
      DestructItems<IRichTextMarkupWriter::FRichTextLine,int>
                ((FRichTextLine *)local_120.Data,(int)local_118);
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      return;
    }
    uVar1 = *(uint *)pFVar17;
    local_110.Data = (FScriptContainerElement *)0x0;
    local_108 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,uVar1,&local_110,0,(int *)((longlong)&local_108 + 4));
    }
    uVar1 = *(uint *)pFVar17;
    puVar14 = *(undefined8 **)(pFVar17 + -8);
    puVar16 = puVar14 + (longlong)(int)uVar1 * 6;
    while( true ) {
      if (*(uint *)pFVar17 != uVar1) {
        local_127[0] = 0;
        `TCheckedPointerIterator<FTextLayout::FRunModel_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_127);
      }
      if (puVar14 == puVar16) break;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      (**(code **)(*(longlong *)*puVar14 + 0x88))((longlong *)*puVar14,&local_e8);
      _Src = local_e8;
      local_100.Data = (FScriptContainerElement *)0x0;
      lVar12 = (longlong)(int)local_e0;
      local_f8 = CONCAT44(local_f8._4_4_,(int)local_e0);
      if ((int)local_e0 == 0) {
        local_f8 = local_e0 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_e0,0,&local_100,(int)local_e0,(int *)((longlong)&local_f8 + 4));
        memcpy(local_100.Data,_Src,lVar12 * 2);
      }
      pTVar2 = (TReferenceControllerBase<1> *)puVar14[1];
      plVar3 = (longlong *)*puVar14;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = (FString *)(**(code **)(*plVar3 + 0x90))();
      ::FString::FString((FString *)local_b8,pFVar10);
      local_7c = 0x80;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      local_a8._8_8_ = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_74 = 0;
      local_68 = (ForElementType<FSetElementId>)0x0;
      local_60 = 0;
      local_78 = 0xffffffff;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)local_a8,
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(pFVar10 + 1));
      local_58.Data = local_100.Data;
      local_50 = (int)local_f8;
      local_4c = local_f8._4_4_;
      local_100.Data = (FScriptContainerElement *)0x0;
      local_f8 = 0;
      iVar9 = (int)local_108;
      if ((int)local_108 == local_108._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x870,&local_110,(int *)((longlong)&local_108 + 4));
      }
      local_108 = CONCAT44(local_108._4_4_,iVar9 + 1);
      IRichTextMarkupWriter::FRichTextRun::FRichTextRun
                ((FRichTextRun *)(local_110.Data + (longlong)iVar9 * 0x70),(FRichTextRun *)local_b8)
      ;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_a8,0,local_a8._8_4_);
      iVar9 = SUB84(local_a8._8_8_,4);
      local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
      if (iVar9 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_80 = 0;
      if (0x80 < local_7c) {
        local_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b8._0_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      puVar14 = puVar14 + 6;
    }
    if (((local_120.Data <= (FScriptContainerElement *)&local_110) &&
        ((FScriptContainerElement *)&local_110 < local_120.Data + (longlong)local_118._4_4_ * 0x10))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) break;
    iVar9 = (int)local_118;
    if ((int)local_118 == local_118._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_120,(int *)((longlong)&local_118 + 4));
    }
    FVar6.Data = local_110.Data;
    local_118 = CONCAT44(local_118._4_4_,iVar9 + 1);
    pFVar13 = local_120.Data + (longlong)iVar9 * 0x10;
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    iVar9 = (int)local_108;
    *(int *)(pFVar13 + 8) = (int)local_108;
    if ((int)local_108 == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,(int)local_108,0,(ForAnyElementType *)pFVar13,(int)local_108,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      ConstructItems<IRichTextMarkupWriter::FRichTextRun,IRichTextMarkupWriter::FRichTextRun,int>
                (*pFVar13,(FRichTextRun *)FVar6.Data,iVar9);
    }
    DestructItems<IRichTextMarkupWriter::FRichTextRun,int>
              ((FRichTextRun *)local_110.Data,(int)local_108);
    if ((FRichTextRun *)local_110.Data != (FRichTextRun *)0x0) {
      FMemory::Free(local_110.Data);
    }
    pFVar15 = pFVar15 + 0x70;
    pFVar17 = pFVar17 + 0x70;
    uVar11 = (ulonglong)local_f0;
    param_2 = local_d8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SetFontSizeMultiplier @ 142896930

void __thiscall
FRichTextLayoutMarshaller::SetFontSizeMultiplier(FRichTextLayoutMarshaller *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0.0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8088057849462128550>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\RichTextLayoutMarshaller.cpp"
                       ,0x5a,"NewFontSizeMultiplier != 0.0f");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->FontSizeMultiplier = param_1;
  }
  return;
}

// SetText @ 14289a4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRichTextLayoutMarshaller::SetText
          (FRichTextLayoutMarshaller *this,FString *param_1,FTextLayout *param_2)

{
  IRichTextMarkupParser *pIVar1;
  code *pcVar2;
  TSharedRef<IRun,1> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FTextLineParseResults *pFVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FString *pFVar12;
  FString *pFVar13;
  atomic<int> *paVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_1c8 [32];
  undefined1 local_168 [8];
  TArray<FTextLayout::FNewLineData,TSizedDefaultAllocator<32>_> local_160;
  TSharedRef<IRun,1> *local_150;
  undefined8 local_148;
  FTextLineParseResults *local_140;
  ulonglong local_138;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> local_130;
  longlong local_120;
  FTextLayout *local_118;
  void *local_110;
  undefined8 local_108;
  TSharedRef<FString,1> local_100;
  TRawPtrProxy<FString> local_f0;
  TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  void *local_a8;
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar18 = 0;
  local_140 = (FTextLineParseResults *)0x0;
  local_138 = 0;
  local_110 = (void *)0x0;
  local_108 = 0;
  local_118 = param_2;
  if (((this->Parser).Object == (IRichTextMarkupParser *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->Parser).Object;
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_140,param_1,&local_110);
  uVar15 = local_138 & 0xffffffff;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  if ((int)local_138 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  if (0 < (int)local_138) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(int)local_138,&local_160.AllocatorInstance,0,&local_160.ArrayMax);
    uVar15 = local_138 & 0xffffffff;
  }
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = 0;
  local_e8._40_4_ = 0;
  local_e8._44_4_ = 0x80;
  local_e8._48_4_ = 0xffffffff;
  local_e8._52_4_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  if (0 < (int)uVar15) {
    local_120 = 0;
    do {
      lVar7 = local_120;
      pFVar13 = (FString *)0x0;
      uVar10 = 0;
      if ((int)uVar18 < (int)uVar15) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = local_140;
      pFVar12 = ::operator_new(0x10);
      if (pFVar12 != (FString *)0x0) {
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
        pFVar13 = pFVar12;
      }
      local_f0.Object = pFVar13;
      TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_100,&local_f0);
      local_150 = (TSharedRef<IRun,1> *)0x0;
      local_148 = 0;
      iVar11 = *(int *)((longlong)&(pFVar6->Runs).ArrayNum + lVar7);
      lVar17 = *(longlong *)((longlong)&(pFVar6->Runs).AllocatorInstance.Data + lVar7);
      lVar19 = (longlong)iVar11 * 0x70 + lVar17;
      while( true ) {
        if (*(int *)((longlong)&(pFVar6->Runs).ArrayNum + lVar7) != iVar11) {
          local_168[0] = 0;
          `TCheckedPointerIterator<FTextRunParseResults_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_168);
        }
        lVar8 = local_120;
        if (lVar17 == lVar19) break;
        (**(code **)(this->_padding_ + 0x38))(this,uVar18,lVar17,&local_110);
        lVar17 = lVar17 + 0x70;
      }
      iVar11 = local_160.ArrayNum;
      if (local_160.ArrayNum == local_160.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_160.AllocatorInstance,&local_160.ArrayMax);
      }
      pTVar3 = local_150;
      uVar4 = (int)local_148;
      uVar5 = local_148._4_4_;
      pFVar16 = local_160.AllocatorInstance.Data + (longlong)iVar11 * 0x20;
      local_160.ArrayNum = iVar11 + 1;
      local_150 = (TSharedRef<IRun,1> *)0x0;
      local_148 = 0;
      if (local_100.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        paVar14 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar14 = &(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar14 = (atomic<int>)((int)*paVar14 + 1);
        UNLOCK();
      }
      *(FString **)&pFVar16->field_0x0 = local_100.Object;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) =
           local_100.SharedReferenceCount.ReferenceController;
      if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        *paVar14 = (atomic<int>)((int)*paVar14 + 1);
        UNLOCK();
      }
      *(TSharedRef<IRun,1> **)(pFVar16 + 0x10) = pTVar3;
      *(undefined4 *)(pFVar16 + 0x18) = uVar4;
      *(undefined4 *)(pFVar16 + 0x1c) = uVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)0x0,0);
      DestructItems<TSharedRef<IRun,1>,int>(local_150,(int)local_148);
      if (local_150 != (TSharedRef<IRun,1> *)0x0) {
        FMemory::Free(local_150);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      uVar15 = local_138 & 0xffffffff;
      local_120 = lVar8 + 0x18;
      uVar18 = uVar18 + 1;
      param_2 = local_118;
    } while ((int)uVar18 < (int)local_138);
  }
  FTextLayout::AddLines(param_2,&local_160);
  FTextLayout::SetLineHighlights(param_2,&local_130);
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
  if ((FTextLineHighlight *)local_130.AllocatorInstance.Data != (FTextLineHighlight *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  DestructItems<FTextLayout::FNewLineData,int>
            ((FNewLineData *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
  if ((FNewLineData *)local_160.AllocatorInstance.Data != (FNewLineData *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  DestructItems<FTextLineParseResults,int>(local_140,(int)local_138);
  if (local_140 != (FTextLineParseResults *)0x0) {
    FMemory::Free(local_140);
  }
  return;
}

// TryGetDecorator @ 14289e4b0

TSharedPtr<ITextDecorator,1> * __thiscall
FRichTextLayoutMarshaller::TryGetDecorator
          (FRichTextLayoutMarshaller *this,TSharedPtr<ITextDecorator,1> *__return_storage_ptr__,
          FString *param_1,FTextRunParseResults *param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TSharedPtr<ITextDecorator,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = 0;
  uVar8 = uVar9;
  do {
    if (((int)uVar8 < 0) || ((this->InlineDecorators).ArrayNum <= (int)uVar8)) {
      while( true ) {
        if (((int)uVar9 < 0) || ((this->Decorators).ArrayNum <= (int)uVar9)) {
          __return_storage_ptr__->Object = (ITextDecorator *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          return __return_storage_ptr__;
        }
        if (((int)uVar9 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<ITextDecorator,1> *)(*pcVar3)();
          return pTVar6;
        }
        lVar10 = (longlong)(int)uVar9;
        plVar1 = *(longlong **)((this->Decorators).AllocatorInstance.Data + lVar10 * 0x10);
        cVar5 = (**(code **)(*plVar1 + 8))(plVar1,param_2,param_1);
        if (cVar5 != '\0') break;
        uVar9 = uVar9 + 1;
      }
      uVar8 = 0;
      if ((int)uVar9 < (this->Decorators).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<ITextDecorator,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar7 = (this->Decorators).AllocatorInstance.Data;
LAB_14289e65b:
      __return_storage_ptr__->Object = *(ITextDecorator **)(pFVar7 + lVar10 * 0x10);
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + lVar10 * 0x10 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
    if (((int)uVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<ITextDecorator,1> *)(*pcVar3)();
      return pTVar6;
    }
    lVar10 = (longlong)(int)uVar8;
    plVar1 = *(longlong **)((this->InlineDecorators).AllocatorInstance.Data + lVar10 * 0x10);
    cVar5 = (**(code **)(*plVar1 + 8))(plVar1,param_2,param_1);
    if (cVar5 != '\0') {
      uVar9 = 0;
      if ((int)uVar8 < (this->InlineDecorators).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<ITextDecorator,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar7 = (this->InlineDecorators).AllocatorInstance.Data;
      goto LAB_14289e65b;
    }
    uVar8 = uVar8 + 1;
  } while( true );
}

