// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FRichTextSyntaxHighlighterTextLayoutMarshaller @ 142844a70

FRichTextSyntaxHighlighterTextLayoutMarshaller * __thiscall
FRichTextSyntaxHighlighterTextLayoutMarshaller::FRichTextSyntaxHighlighterTextLayoutMarshaller
          (FRichTextSyntaxHighlighterTextLayoutMarshaller *this,
          TSharedPtr<ISyntaxTokenizer,1> *param_1,FSyntaxTextStyle *param_2)

{
  ISyntaxTokenizer *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pIVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (ISyntaxTokenizer *)0x0;
  FPlainTextLayoutMarshaller::FPlainTextLayoutMarshaller((FPlainTextLayoutMarshaller *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FSyntaxHighlighterTextLayoutMarshaller__6B_;
  this->_padding_ = (longlong)pIVar1;
  this->_padding_ = (longlong)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->_padding_ = (longlong)&___7FRichTextSyntaxHighlighterTextLayoutMarshaller__6B_;
  FTextBlockStyle::FTextBlockStyle
            (&(this->SyntaxTextStyle).NormalTextStyle,&param_2->NormalTextStyle);
  FTextBlockStyle::FTextBlockStyle(&(this->SyntaxTextStyle).NodeTextStyle,&param_2->NodeTextStyle);
  FTextBlockStyle::FTextBlockStyle
            (&(this->SyntaxTextStyle).NodeAttributeKeyTextStyle,&param_2->NodeAttributeKeyTextStyle)
  ;
  FTextBlockStyle::FTextBlockStyle
            (&(this->SyntaxTextStyle).NodeAttribueAssignmentTextStyle,
             &param_2->NodeAttribueAssignmentTextStyle);
  FTextBlockStyle::FTextBlockStyle
            (&(this->SyntaxTextStyle).NodeAttributeValueTextStyle,
             &param_2->NodeAttributeValueTextStyle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FRichTextSyntaxHighlighterTextLayoutMarshaller @ 1428499c0

void __thiscall
FRichTextSyntaxHighlighterTextLayoutMarshaller::~FRichTextSyntaxHighlighterTextLayoutMarshaller
          (FRichTextSyntaxHighlighterTextLayoutMarshaller *this)

{
  this->_padding_ = (longlong)&___7FRichTextSyntaxHighlighterTextLayoutMarshaller__6B_;
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NodeAttributeValueTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NodeAttribueAssignmentTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NodeAttributeKeyTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NodeTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NormalTextStyle);
  this->_padding_ = (longlong)&___7FSyntaxHighlighterTextLayoutMarshaller__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  this->_padding_ = (longlong)&___7FPlainTextLayoutMarshaller__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  return;
}

// Create @ 142864760

TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> * __cdecl
FRichTextSyntaxHighlighterTextLayoutMarshaller::Create
          (TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> *__return_storage_ptr__,
          FSyntaxTextStyle *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  FString *pFVar8;
  FRichTextSyntaxHighlighterTextLayoutMarshaller *this;
  FRichTextSyntaxHighlighterTextLayoutMarshaller *pFVar9;
  longlong lVar10;
  FRichTextSyntaxHighlighterTextLayoutMarshaller *pFVar11;
  TRawPtrProxy<FRichTextSyntaxHighlighterTextLayoutMarshaller> local_res8;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  TSharedRef<FSyntaxTokenizer,1> local_38;
  
  pFVar11 = (FRichTextSyntaxHighlighterTextLayoutMarshaller *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pFVar8 = ::FString::FString((FString *)&local_38,L"</>");
  pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar8->Data).ArrayNum;
  iVar2 = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  iVar7 = (int)local_50;
  if ((int)local_50 == local_50._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar10 = (longlong)iVar7;
  *(FScriptContainerElement **)(local_58.Data + lVar10 * 0x10) = pFVar3;
  *(int *)(local_58.Data + lVar10 * 0x10 + 8) = iVar1;
  *(int *)(local_58.Data + lVar10 * 0x10 + 0xc) = iVar2;
  local_50._0_4_ = iVar7 + 1;
  pFVar8 = ::FString::FString((FString *)&local_38,L"<");
  pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar8->Data).ArrayNum;
  iVar2 = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar10 = (longlong)(int)local_50;
  *(FScriptContainerElement **)(local_58.Data + lVar10 * 0x10) = pFVar3;
  *(int *)(local_58.Data + lVar10 * 0x10 + 8) = iVar1;
  *(int *)(local_58.Data + lVar10 * 0x10 + 0xc) = iVar2;
  local_50._0_4_ = (int)local_50 + 1;
  pFVar8 = ::FString::FString((FString *)&local_38,L">");
  pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar8->Data).ArrayNum;
  iVar2 = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar10 = (longlong)(int)local_50;
  *(FScriptContainerElement **)(local_58.Data + lVar10 * 0x10) = pFVar3;
  *(int *)(local_58.Data + lVar10 * 0x10 + 8) = iVar1;
  *(int *)(local_58.Data + lVar10 * 0x10 + 0xc) = iVar2;
  local_50._0_4_ = (int)local_50 + 1;
  pFVar8 = ::FString::FString((FString *)&local_38,L"=");
  pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar8->Data).ArrayNum;
  iVar2 = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar10 = (longlong)(int)local_50;
  *(FScriptContainerElement **)(local_58.Data + lVar10 * 0x10) = pFVar3;
  *(int *)(local_58.Data + lVar10 * 0x10 + 8) = iVar1;
  *(int *)(local_58.Data + lVar10 * 0x10 + 0xc) = iVar2;
  local_50._0_4_ = (int)local_50 + 1;
  pFVar8 = ::FString::FString((FString *)&local_38,L"\"");
  pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar8->Data).ArrayNum;
  iVar2 = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  iVar7 = (int)local_50;
  if ((int)local_50 == local_50._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
  lVar10 = (longlong)iVar7;
  *(FScriptContainerElement **)(local_58.Data + lVar10 * 0x10) = pFVar3;
  *(int *)(local_58.Data + lVar10 * 0x10 + 8) = iVar1;
  *(int *)(local_58.Data + lVar10 * 0x10 + 0xc) = iVar2;
  this = ::operator_new(0xeb0);
  FVar4.Data = local_58.Data;
  pFVar9 = pFVar11;
  if (this != (FRichTextSyntaxHighlighterTextLayoutMarshaller *)0x0) {
    iVar1 = (int)local_50;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = CONCAT44(local_40._4_4_,(int)local_50);
    if ((int)local_50 == 0) {
      local_40 = local_50 & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_50,0,&local_48,(int)local_50,(int *)((longlong)&local_40 + 4));
      ConstructItems<FSyntaxTokenizer::FRule,FSyntaxTokenizer::FRule,int>
                (local_48.Data,(FRule *)FVar4.Data,iVar1);
    }
    pFVar9 = ::operator_new(0x18);
    FVar4.Data = local_48.Data;
    if (pFVar9 != (FRichTextSyntaxHighlighterTextLayoutMarshaller *)0x0) {
      uVar5 = (int)local_40;
      iVar1 = local_40._4_4_;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      uVar6 = local_40;
      pFVar9->_padding_ = (longlong)&___7FSyntaxTokenizer__6B_;
      pFVar9->_padding_ = (longlong)FVar4.Data;
      local_40._0_1_ = (undefined1)uVar5;
      local_40._1_1_ = SUB41(uVar5,1);
      local_40._2_2_ = SUB42(uVar5,2);
      *(bool *)&pFVar9->_padding_ = (bool)(undefined1)local_40;
      *(undefined1 *)((longlong)&pFVar9->_padding_ + 1) = local_40._1_1_;
      *(undefined2 *)((longlong)&pFVar9->_padding_ + 2) = local_40._2_2_;
      ((TAttribute<bool> *)&pFVar9->_padding_)->_padding_ = iVar1;
      local_40 = uVar6;
      DestructItems<FSyntaxTokenizer::FRule,int>((FRule *)0x0,0);
      pFVar11 = pFVar9;
    }
    local_res8.Object = pFVar11;
    TSharedRef<FSyntaxTokenizer,1>::TSharedRef<FSyntaxTokenizer,1><FSyntaxTokenizer>
              (&local_38,(TRawPtrProxy<FSyntaxTokenizer> *)&local_res8);
    DestructItems<FSyntaxTokenizer::FRule,int>((FRule *)local_48.Data,(int)local_40);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FPlainTextLayoutMarshaller::FPlainTextLayoutMarshaller((FPlainTextLayoutMarshaller *)this);
    *(undefined1 *)&this->_padding_ = 1;
    this->_padding_ = (longlong)&___7FSyntaxHighlighterTextLayoutMarshaller__6B_;
    this->_padding_ = (longlong)local_38.Object;
    this->_padding_ = (longlong)local_38.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FRichTextSyntaxHighlighterTextLayoutMarshaller__6B_;
    FTextBlockStyle::FTextBlockStyle
              (&(this->SyntaxTextStyle).NormalTextStyle,&param_1->NormalTextStyle);
    FTextBlockStyle::FTextBlockStyle(&(this->SyntaxTextStyle).NodeTextStyle,&param_1->NodeTextStyle)
    ;
    FTextBlockStyle::FTextBlockStyle
              (&(this->SyntaxTextStyle).NodeAttributeKeyTextStyle,
               &param_1->NodeAttributeKeyTextStyle);
    FTextBlockStyle::FTextBlockStyle
              (&(this->SyntaxTextStyle).NodeAttribueAssignmentTextStyle,
               &param_1->NodeAttribueAssignmentTextStyle);
    FTextBlockStyle::FTextBlockStyle
              (&(this->SyntaxTextStyle).NodeAttributeValueTextStyle,
               &param_1->NodeAttributeValueTextStyle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar11 = (FRichTextSyntaxHighlighterTextLayoutMarshaller *)&DAT_00000001;
    pFVar9 = this;
  }
  local_res8.Object = pFVar9;
  TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1>::
  TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1><FRichTextSyntaxHighlighterTextLayoutMarshaller>
            (__return_storage_ptr__,&local_res8);
  if (pFVar11 != (FRichTextSyntaxHighlighterTextLayoutMarshaller *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  DestructItems<FSyntaxTokenizer::FRule,int>((FRule *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// ParseTokens @ 1428908e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRichTextSyntaxHighlighterTextLayoutMarshaller::ParseTokens
          (FRichTextSyntaxHighlighterTextLayoutMarshaller *this,FString *param_1,
          FTextLayout *param_2,
          TArray<ISyntaxTokenizer::FTokenizedLine,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  FDeprecateVector2DParameter FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FTextRange FVar10;
  FSlateTextUnderlineLineHighlighter *pFVar11;
  FSharedReferencer<1> FVar12;
  FSlateTextStrikeLineHighlighter *pFVar13;
  char *pcVar14;
  FSharedReferencer<1> FVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FString *pFVar19;
  FSlateTextRun *pFVar20;
  TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_> *pTVar21;
  ISlateTextLineHighlighter *pIVar22;
  longlong lVar23;
  TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_> *pTVar24;
  ForAnyElementType FVar25;
  atomic<int> *paVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  char cVar29;
  FTextBlockStyle *pFVar30;
  uint uVar31;
  int iVar32;
  char *pcVar33;
  undefined1 auStackY_428 [32];
  char local_3d8;
  FTextBlockStyle *local_3d0;
  undefined1 local_3c8 [4];
  uint local_3c4;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> local_3c0;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  FString local_3a0;
  TArray<FTextLayout::FNewLineData,TSizedDefaultAllocator<32>_> local_390;
  FSlateTextUnderlineLineHighlighter *local_380;
  FSharedReferencer<1> FStack_378;
  FSlateTextStrikeLineHighlighter *local_370;
  FSharedReferencer<1> FStack_368;
  TSharedRef<FString,1> local_360;
  FTextLineHighlight local_350;
  FTextLineHighlight local_330;
  FSlateTextRun *local_308;
  TReferenceControllerBase<1> *pTStack_300;
  uint local_2f8;
  FString local_2f0;
  int local_2e0;
  int iStack_2dc;
  char *local_2d8;
  longlong local_2d0;
  FRichTextSyntaxHighlighterTextLayoutMarshaller *local_2c8;
  FScriptContainerElement *local_2c0;
  char *local_2b8;
  FTextLayout *local_2b0;
  undefined1 local_2a8 [8];
  TRawPtrProxy<FString> local_2a0;
  FString *local_298;
  TRawPtrProxy<FSlateTextRun> local_290;
  TArray<ISyntaxTokenizer::FTokenizedLine,TSizedDefaultAllocator<32>_> *local_288;
  TSharedRef<FSlateTextRun,1> local_278;
  undefined8 local_268;
  FSharedReferencer<1> local_260;
  undefined8 local_258;
  FSharedReferencer<1> local_250;
  TRawPtrProxy<FSlateTextUnderlineLineHighlighter> local_248;
  TRawPtrProxy<FSlateTextStrikeLineHighlighter> local_240;
  TSharedRef<FSlateTextStrikeLineHighlighter,1> local_238;
  FTextBlockStyle **local_228;
  FSlateTextStrikeLineHighlighter **local_220;
  TSharedRef<FSlateTextUnderlineLineHighlighter,1> local_218;
  FTextBlockStyle **local_208;
  FSlateTextUnderlineLineHighlighter **local_200;
  FLinearColor_u_0 local_1f8;
  undefined4 local_1e8;
  FLinearColor_u_0 local_1d8;
  undefined4 local_1c8;
  FLinearColor_u_0 local_1b8;
  FLinearColor_u_0 local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_168;
  TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,0>,FDefaultSetAllocator>
  local_118;
  TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_428;
  uVar31 = param_3->ArrayNum;
  local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.ArrayNum = 0;
  local_390.ArrayMax = 0;
  local_2c8 = this;
  local_2b0 = param_2;
  local_298 = param_1;
  local_288 = param_3;
  if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
  }
  if (0 < (int)uVar31) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar31,&local_390.AllocatorInstance,0,&local_390.ArrayMax);
  }
  iVar18 = param_3->ArrayNum;
  cVar29 = '\0';
  local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c0.ArrayNum = 0;
  local_3c0.ArrayMax = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  local_118.Elements._0_8_ = 0;
  local_118.Elements._8_8_ = 0;
  local_118.Elements._32_8_ = 0;
  local_118.Elements._40_4_ = 0;
  local_118.Elements._44_4_ = 0x80;
  local_118.Elements._48_4_ = 0xffffffff;
  local_118.Elements._52_4_ = 0;
  local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_118.HashSize = 0;
  local_3d8 = '\0';
  local_3c4 = 0;
  if (0 < iVar18) {
    local_2d0 = 0;
    do {
      lVar23 = local_2d0;
      uVar31 = local_3c4;
      uVar17 = 0;
      if ((int)local_3c4 < iVar18) {
        uVar17 = ~local_3c4 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar28 = (param_3->AllocatorInstance).Data + lVar23;
      local_2c0 = pFVar28;
      pFVar19 = ::operator_new(0x10);
      local_2a0.Object = (FString *)0x0;
      if (pFVar19 != (FString *)0x0) {
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
        local_2a0.Object = pFVar19;
      }
      TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_360,&local_2a0);
      local_3b0.Data = (FScriptContainerElement *)0x0;
      local_3a8 = 0;
      local_2f8 = *(uint *)(pFVar28 + 0x10);
      uVar27 = (ulonglong)(int)local_2f8;
      pcVar33 = *(char **)(pFVar28 + 8);
      local_2b8 = pcVar33 + uVar27 * 0xc;
      while( true ) {
        pcVar14 = local_2b8;
        local_2d8 = pcVar33;
        if (*(int *)(pFVar28 + 0x10) != (int)uVar27) {
          local_3c8[0] = 0;
          `TCheckedPointerIterator<ISyntaxTokenizer::FToken_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_3c8);
        }
        if (pcVar33 == pcVar14) break;
        ::FString::Mid(local_298,&local_3a0,*(int *)(pcVar33 + 4),
                       *(int *)(pcVar33 + 8) - *(int *)(pcVar33 + 4));
        iVar18 = ((local_360.Object)->Data).ArrayNum;
        iVar32 = 0;
        local_2e0 = iVar18 + -1;
        if (iVar18 == 0) {
          local_2e0 = iVar32;
        }
        iStack_2dc = local_3a0.Data.ArrayNum + -1;
        if (local_3a0.Data.ArrayNum == 0) {
          iStack_2dc = iVar32;
        }
        iStack_2dc = iStack_2dc + local_2e0;
        if (local_3a0.Data.ArrayNum != 0) {
          iVar32 = local_3a0.Data.ArrayNum + -1;
        }
        ::FString::AppendChars
                  (local_360.Object,(wchar_t *)local_3a0.Data.AllocatorInstance.Data,iVar32);
        pFVar19 = ::FString::FString(&local_188,L"SyntaxHighlight.Normal");
        local_178.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = (pFVar19->Data).ArrayNum;
        local_178.Data.ArrayMax = (pFVar19->Data).ArrayMax;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
        local_168.Elements._32_8_ = 0;
        local_168.Elements._0_8_ = 0;
        local_168.Hash.InlineData[0] = '\0';
        local_168.Hash.InlineData[1] = '\0';
        local_168.Hash.InlineData[2] = '\0';
        local_168.Hash.InlineData[3] = '\0';
        local_168.Hash._padding_ = 0;
        local_168.Elements._8_8_ = 0;
        local_168.Elements._40_8_ = 0x8000000000;
        local_168.Elements._48_8_ = 0xffffffff;
        local_168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_168._72_8_ = 0;
        local_168.Elements._16_8_ = 0;
        local_168.Elements._24_8_ = 0;
        pFVar28 = (pFVar19->Data).AllocatorInstance.Data;
        if (pFVar28 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar28);
        }
        iVar18 = local_3a0.Data.ArrayNum;
        FVar25.Data = local_3a0.Data.AllocatorInstance.Data;
        local_3d0 = &(this->SyntaxTextStyle).NormalTextStyle;
        local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_3a0.Data.ArrayNum == 0) {
          local_2f0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_3a0.Data.ArrayNum,0,(ForAnyElementType *)&local_2f0,
                     local_3a0.Data.ArrayNum,&local_2f0.Data.ArrayMax);
          memcpy(local_2f0.Data.AllocatorInstance.Data,FVar25.Data,(longlong)iVar18 * 2);
        }
        pFVar19 = ::FString::TrimEnd(&local_2f0,&local_198);
        iVar18 = (pFVar19->Data).ArrayNum;
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        if (1 < iVar18) {
          bVar16 = false;
          if (*pcVar33 == '\0') {
            if (cVar29 == '\0') {
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_3a0.Data.ArrayNum != 0) {
                FVar25.Data = local_3a0.Data.AllocatorInstance.Data;
              }
              iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"<");
              if (iVar18 == 0) {
                ::FString::operator=(&local_178,L"SyntaxHighlight.Node");
                cVar29 = '\x01';
                local_3d0 = &(this->SyntaxTextStyle).NodeTextStyle;
                bVar16 = true;
                local_3d8 = cVar29;
              }
              else {
                FVar25.Data = (FScriptContainerElement *)L"";
                if (local_3a0.Data.ArrayNum != 0) {
                  FVar25.Data = local_3a0.Data.AllocatorInstance.Data;
                }
                iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"</>");
                if (iVar18 == 0) {
                  ::FString::operator=(&local_178,L"SyntaxHighlight.Node");
                  local_3d0 = &(this->SyntaxTextStyle).NodeTextStyle;
                  bVar16 = true;
                }
              }
            }
            else if (cVar29 == '\x02') {
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_3a0.Data.ArrayNum != 0) {
                FVar25.Data = local_3a0.Data.AllocatorInstance.Data;
              }
              iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L">");
              if (iVar18 == 0) {
                ::FString::operator=(&local_178,L"SyntaxHighlight.Node");
                local_3d0 = &(this->SyntaxTextStyle).NodeTextStyle;
                cVar29 = '\0';
                local_3d8 = cVar29;
              }
              else {
                FVar25.Data = (FScriptContainerElement *)L"";
                if (local_3a0.Data.ArrayNum != 0) {
                  FVar25.Data = local_3a0.Data.AllocatorInstance.Data;
                }
                iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"=");
                if (iVar18 == 0) {
                  ::FString::operator=(&local_178,L"SyntaxHighlight.NodeAttribueAssignment");
                  local_3d0 = &(this->SyntaxTextStyle).NodeAttribueAssignmentTextStyle;
                  cVar29 = '\x03';
                  goto LAB_142890e6b;
                }
              }
            }
            else if (cVar29 == '\x03') {
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_3a0.Data.ArrayNum != 0) {
                FVar25.Data = local_3a0.Data.AllocatorInstance.Data;
              }
              iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"\"");
              if (iVar18 == 0) {
                ::FString::operator=(&local_178,L"SyntaxHighlight.NodeAttributeValue");
                cVar29 = '\x04';
LAB_142890e64:
                local_3d0 = &(this->SyntaxTextStyle).NodeAttributeValueTextStyle;
LAB_142890e6b:
                bVar16 = true;
                local_3d8 = cVar29;
              }
            }
            else if (cVar29 == '\x04') {
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_3a0.Data.ArrayNum != 0) {
                FVar25.Data = local_3a0.Data.AllocatorInstance.Data;
              }
              iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"\"");
              if (iVar18 == 0) {
                ::FString::operator=(&local_178,L"SyntaxHighlight.NodeAttributeValue");
                cVar29 = '\x02';
                goto LAB_142890e64;
              }
            }
          }
          if ((*pcVar33 == '\x01') || (!bVar16)) {
            if (cVar29 == '\x01') {
              ::FString::operator=(&local_178,L"SyntaxHighlight.Node");
              local_3d0 = &(this->SyntaxTextStyle).NodeTextStyle;
              local_3d8 = '\x02';
            }
            else if (cVar29 == '\x02') {
              ::FString::operator=(&local_178,L"SyntaxHighlight.NodeAttributeKey");
              local_3d0 = &(this->SyntaxTextStyle).NodeAttributeKeyTextStyle;
            }
            else if (cVar29 == '\x04') {
              ::FString::operator=(&local_178,L"SyntaxHighlight.NodeAttributeValue");
              local_3d0 = &(this->SyntaxTextStyle).NodeAttributeValueTextStyle;
            }
          }
        }
        FVar12.ReferenceController = local_360.SharedReferenceCount.ReferenceController;
        pFVar30 = local_3d0;
        if (local_360.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_360.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_360.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar20 = ::operator_new(0x380);
        FVar10.EndIndex = iStack_2dc;
        FVar10.BeginIndex = local_2e0;
        if (pFVar20 == (FSlateTextRun *)0x0) {
          pFVar20 = (FSlateTextRun *)0x0;
        }
        else {
          *(undefined8 *)&pFVar20->field_0x8 = 0;
          *(undefined8 *)&pFVar20->field_0x10 = 0;
          *(undefined ***)pFVar20 = &___7FSlateTextRun__6B_;
          ::FString::FString(&(pFVar20->RunInfo).Name,&local_178);
          *(undefined8 *)&(pFVar20->RunInfo).MetaData = 0;
          *(undefined8 *)&(pFVar20->RunInfo).MetaData.field_0x8 = 0;
          *(undefined8 *)&(pFVar20->RunInfo).MetaData.field_0x20 = 0;
          *(undefined4 *)&(pFVar20->RunInfo).MetaData.field_0x28 = 0;
          *(undefined4 *)&(pFVar20->RunInfo).MetaData.field_0x2c = 0x80;
          *(undefined4 *)&(pFVar20->RunInfo).MetaData.field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar20->RunInfo).MetaData.field_0x34 = 0;
          *(undefined8 *)&(pFVar20->RunInfo).MetaData.field_0x40 = 0;
          *(undefined4 *)&(pFVar20->RunInfo).MetaData.field_0x48 = 0;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)&(pFVar20->RunInfo).MetaData,&local_168);
          (pFVar20->Text).Object = local_360.Object;
          (pFVar20->Text).SharedReferenceCount.ReferenceController =
               local_360.SharedReferenceCount.ReferenceController;
          if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar12.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          FTextBlockStyle::FTextBlockStyle(&pFVar20->Style,pFVar30);
          pFVar20->Range = FVar10;
          if ((((*(longlong *)&pFVar20->field_0x8 != 0) && (*(longlong *)&pFVar20->field_0x10 != 0))
              && (0 < *(int *)(*(longlong *)&pFVar20->field_0x10 + 8))) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!InObject || !InObject->DoesSharedInstanceExist()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x7a5,L"Trying to share an already-shared object"), bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_290.Object = pFVar20;
        TSharedRef<FSlateTextRun,1>::TSharedRef<FSlateTextRun,1><FSlateTextRun>
                  (&local_278,&local_290);
        FVar15.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
        if (local_278.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
           ) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
        }
        else {
          LOCK();
          (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_278.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          LOCK();
          paVar26 = &(FVar15.ReferenceController)->SharedReferenceCount;
          *paVar26 = (atomic<int>)((int)*paVar26 + 1);
          UNLOCK();
        }
        local_308 = local_278.Object;
        pTStack_300 = local_278.SharedReferenceCount.ReferenceController;
        if (((local_3b0.Data <= (FScriptContainerElement *)&local_308) &&
            ((FScriptContainerElement *)&local_308 <
             local_3b0.Data + (longlong)local_3a8._4_4_ * 0x10)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar18 = (int)local_3a8;
        if ((int)local_3a8 == local_3a8._4_4_) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_3b0,(int *)((longlong)&local_3a8 + 4));
        }
        local_3a8 = CONCAT44(local_3a8._4_4_,iVar18 + 1);
        *(FSlateTextRun **)(local_3b0.Data + (longlong)iVar18 * 0x10) = local_308;
        *(TReferenceControllerBase<1> **)(local_3b0.Data + (longlong)iVar18 * 0x10 + 8) =
             pTStack_300;
        if (pTStack_300 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_300->SharedReferenceCount =
               (atomic<int>)((int)pTStack_300->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_300);
        pFVar30 = local_3d0;
        if ((local_3d0->UnderlineBrush).ResourceName == (FName)0x0) {
          pUVar3 = (local_3d0->UnderlineBrush).ResourceObject.field0_0x0.DebugPtr;
          lVar23 = 0;
          if (pUVar3 != (UObject *)0x0) {
            lVar23 = *(longlong *)&pUVar3->field_0x18;
          }
          if (lVar23 != 0) goto LAB_14289114a;
        }
        else {
LAB_14289114a:
          pTVar21 = TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>,FDefaultSetAllocator>
                    ::Find(&local_c8,local_3d0);
          if (pTVar21 ==
              (TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_> *)
              0x0) {
            FStack_378.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_142891191:
            local_380 = (FSlateTextUnderlineLineHighlighter *)0x0;
            FVar4 = *(FDeprecateVector2DParameter *)&pFVar30->ShadowOffset;
            uVar6 = *(undefined8 *)&(pFVar30->ShadowColorAndOpacity).field0_0x0;
            uVar7 = *(undefined8 *)((longlong)&(pFVar30->ShadowColorAndOpacity).field0_0x0 + 8);
            uVar1._0_1_ = (pFVar30->ColorAndOpacity).ColorUseRule;
            uVar1._1_1_ = (pFVar30->ColorAndOpacity).ColorTableId;
            uVar1._2_2_ = *(undefined2 *)&(pFVar30->ColorAndOpacity).field_0x12;
            uVar8 = *(undefined8 *)&(pFVar30->ColorAndOpacity).SpecifiedColor.field0_0x0;
            uVar9 = *(undefined8 *)
                     ((longlong)&(pFVar30->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
            pIVar22 = ::operator_new(0x150);
            if (pIVar22 == (ISlateTextLineHighlighter *)0x0) {
              pIVar22 = (ISlateTextLineHighlighter *)0x0;
            }
            else {
              local_1d8._0_8_ = uVar8;
              local_1d8._8_8_ = uVar9;
              local_1c8 = uVar1;
              local_1b8._0_8_ = uVar6;
              local_1b8._8_8_ = uVar7;
              ISlateTextLineHighlighter::ISlateTextLineHighlighter
                        (pIVar22,&pFVar30->UnderlineBrush,&pFVar30->Font,
                         (FSlateColor *)&local_1d8._s_0,FVar4,(FLinearColor *)&local_1b8._s_0);
              pIVar22->_padding_ = (longlong)&___7FSlateTextUnderlineLineHighlighter__6B_;
            }
            local_248.Object = (FSlateTextUnderlineLineHighlighter *)pIVar22;
            TSharedRef<FSlateTextUnderlineLineHighlighter,1>::
            TSharedRef<FSlateTextUnderlineLineHighlighter,1><FSlateTextUnderlineLineHighlighter>
                      (&local_218,&local_248);
            FVar12.ReferenceController = local_218.SharedReferenceCount.ReferenceController;
            local_260.ReferenceController = local_218.SharedReferenceCount.ReferenceController;
            if (local_218.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_380 = local_218.Object;
            local_268 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_378,&local_260);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_260.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            local_208 = &local_3d0;
            local_200 = &local_380;
            TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FTextBlockStyle_const_*_const_&,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_const_&>_>
                      (&local_c8,
                       (TPairInitializer<FTextBlockStyle_const_*_const_&,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_const_&>
                        *)(local_2a8 + 4),(bool *)&local_208);
            uVar31 = local_3c4;
            if ((local_380 == (FSlateTextUnderlineLineHighlighter *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), uVar31 = local_3c4, bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            local_380 = *(FSlateTextUnderlineLineHighlighter **)&pTVar21->field_0x8;
            FStack_378.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar21->field_0x10;
            if (FStack_378.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_378.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_378.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
              pFVar30 = local_3d0;
            }
            if (local_380 == (FSlateTextUnderlineLineHighlighter *)0x0) goto LAB_142891191;
          }
          FVar12.ReferenceController = FStack_378.ReferenceController;
          pFVar11 = local_380;
          if (FStack_378.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_378.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_378.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_380 == (FSlateTextUnderlineLineHighlighter *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar12.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            (FVar12.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_350.Highlighter.SharedReferenceCount.ReferenceController =
               FVar12.ReferenceController;
          local_350.Highlighter.Object = (ILineHighlighter *)pFVar11;
          local_350.ZOrder = 1;
          local_350.LineIndex = uVar31;
          local_350.Range = FVar10;
          if (((local_3c0.AllocatorInstance.Data <= &local_350) &&
              (&local_350 <
               (FTextLineHighlight *)
               (local_3c0.AllocatorInstance.Data + (longlong)local_3c0.ArrayMax * 0x20))) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar18 = local_3c0.ArrayNum;
          if (local_3c0.ArrayNum == local_3c0.ArrayMax) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_3c0.AllocatorInstance,&local_3c0.ArrayMax);
          }
          local_3c0.ArrayNum = iVar18 + 1;
          pFVar28 = local_3c0.AllocatorInstance.Data + (longlong)iVar18 * 0x20;
          *(int *)&pFVar28->field_0x0 = local_350.LineIndex;
          *(FTextRange *)(pFVar28 + 4) = local_350.Range;
          *(int *)(pFVar28 + 0xc) = local_350.ZOrder;
          *(ILineHighlighter **)(pFVar28 + 0x10) = local_350.Highlighter.Object;
          *(TReferenceControllerBase<1> **)(pFVar28 + 0x18) =
               local_350.Highlighter.SharedReferenceCount.ReferenceController;
          if (local_350.Highlighter.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_350.Highlighter.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_350.Highlighter.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_350.Highlighter.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_378.ReferenceController);
        }
        pFVar30 = local_3d0;
        if ((local_3d0->StrikeBrush).ResourceName == (FName)0x0) {
          pUVar3 = (local_3d0->StrikeBrush).ResourceObject.field0_0x0.DebugPtr;
          lVar23 = 0;
          if (pUVar3 != (UObject *)0x0) {
            lVar23 = *(longlong *)&pUVar3->field_0x18;
          }
          if (lVar23 != 0) goto LAB_142891478;
        }
        else {
LAB_142891478:
          pTVar24 = TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,0>,FDefaultSetAllocator>
                    ::Find(&local_118,local_3d0);
          if (pTVar24 ==
              (TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_> *)0x0)
          {
            FStack_368.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_1428914bf:
            local_370 = (FSlateTextStrikeLineHighlighter *)0x0;
            FVar4 = *(FDeprecateVector2DParameter *)&pFVar30->ShadowOffset;
            uVar6 = *(undefined8 *)&(pFVar30->ShadowColorAndOpacity).field0_0x0;
            uVar7 = *(undefined8 *)((longlong)&(pFVar30->ShadowColorAndOpacity).field0_0x0 + 8);
            uVar2._0_1_ = (pFVar30->ColorAndOpacity).ColorUseRule;
            uVar2._1_1_ = (pFVar30->ColorAndOpacity).ColorTableId;
            uVar2._2_2_ = *(undefined2 *)&(pFVar30->ColorAndOpacity).field_0x12;
            uVar8 = *(undefined8 *)&(pFVar30->ColorAndOpacity).SpecifiedColor.field0_0x0;
            uVar9 = *(undefined8 *)
                     ((longlong)&(pFVar30->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
            pIVar22 = ::operator_new(0x150);
            if (pIVar22 == (ISlateTextLineHighlighter *)0x0) {
              pIVar22 = (ISlateTextLineHighlighter *)0x0;
            }
            else {
              local_1f8._0_8_ = uVar8;
              local_1f8._8_8_ = uVar9;
              local_1e8 = uVar2;
              local_1a8._0_8_ = uVar6;
              local_1a8._8_8_ = uVar7;
              ISlateTextLineHighlighter::ISlateTextLineHighlighter
                        (pIVar22,&pFVar30->StrikeBrush,&pFVar30->Font,(FSlateColor *)&local_1f8._s_0
                         ,FVar4,(FLinearColor *)&local_1a8._s_0);
              pIVar22->_padding_ = (longlong)&___7FSlateTextStrikeLineHighlighter__6B_;
            }
            local_240.Object = (FSlateTextStrikeLineHighlighter *)pIVar22;
            TSharedRef<FSlateTextStrikeLineHighlighter,1>::
            TSharedRef<FSlateTextStrikeLineHighlighter,1><FSlateTextStrikeLineHighlighter>
                      (&local_238,&local_240);
            FVar12.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
            local_250.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
            if (local_238.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_370 = local_238.Object;
            local_258 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_368,&local_250);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_250.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            local_228 = &local_3d0;
            local_220 = &local_370;
            TSet<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>,TDefaultMapHashableKeyFuncs<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FTextBlockStyle_const_*_const_&,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_const_&>_>
                      (&local_118,
                       (TPairInitializer<FTextBlockStyle_const_*_const_&,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_const_&>
                        *)local_2a8,(bool *)&local_228);
            uVar31 = local_3c4;
            if ((local_370 == (FSlateTextStrikeLineHighlighter *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), uVar31 = local_3c4, bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            local_370 = *(FSlateTextStrikeLineHighlighter **)&pTVar24->field_0x8;
            FStack_368.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar24->field_0x10;
            if (FStack_368.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_368.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_368.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
              pFVar30 = local_3d0;
            }
            if (local_370 == (FSlateTextStrikeLineHighlighter *)0x0) goto LAB_1428914bf;
          }
          FVar12.ReferenceController = FStack_368.ReferenceController;
          pFVar13 = local_370;
          if (FStack_368.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_368.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_368.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_370 == (FSlateTextStrikeLineHighlighter *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar12.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            (FVar12.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_330.Highlighter.SharedReferenceCount.ReferenceController =
               FVar12.ReferenceController;
          local_330.Highlighter.Object = (ILineHighlighter *)pFVar13;
          local_330.ZOrder = 1;
          local_330.LineIndex = uVar31;
          local_330.Range = FVar10;
          if (((local_3c0.AllocatorInstance.Data <= &local_330) &&
              (&local_330 <
               (FTextLineHighlight *)
               (local_3c0.AllocatorInstance.Data + (longlong)local_3c0.ArrayMax * 0x20))) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar18 = local_3c0.ArrayNum;
          if (local_3c0.ArrayNum == local_3c0.ArrayMax) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_3c0.AllocatorInstance,&local_3c0.ArrayMax);
          }
          local_3c0.ArrayNum = iVar18 + 1;
          pFVar28 = local_3c0.AllocatorInstance.Data + (longlong)iVar18 * 0x20;
          *(int *)&pFVar28->field_0x0 = local_330.LineIndex;
          *(FTextRange *)(pFVar28 + 4) = local_330.Range;
          *(int *)(pFVar28 + 0xc) = local_330.ZOrder;
          *(ILineHighlighter **)(pFVar28 + 0x10) = local_330.Highlighter.Object;
          *(TReferenceControllerBase<1> **)(pFVar28 + 0x18) =
               local_330.Highlighter.SharedReferenceCount.ReferenceController;
          if (local_330.Highlighter.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_330.Highlighter.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_330.Highlighter.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_330.Highlighter.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_368.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar15.ReferenceController);
        local_168._72_8_ = local_168._72_8_ & 0xffffffff00000000;
        if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_168.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_168.Elements);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
        }
        pcVar33 = local_2d8 + 0xc;
        uVar27 = (ulonglong)local_2f8;
        pFVar28 = local_2c0;
        this = local_2c8;
        cVar29 = local_3d8;
      }
      iVar18 = local_390.ArrayNum;
      if (local_390.ArrayNum == local_390.ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_390.AllocatorInstance,&local_390.ArrayMax);
      }
      FVar25.Data = local_3b0.Data;
      uVar1 = (int)local_3a8;
      uVar2 = local_3a8._4_4_;
      pFVar28 = local_390.AllocatorInstance.Data + (longlong)iVar18 * 0x20;
      local_390.ArrayNum = iVar18 + 1;
      local_3b0.Data = (FScriptContainerElement *)0x0;
      local_3a8 = 0;
      if (local_360.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        paVar26 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar26 = &(local_360.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar26 = (atomic<int>)((int)*paVar26 + 1);
        UNLOCK();
      }
      *(FString **)&pFVar28->field_0x0 = local_360.Object;
      *(TReferenceControllerBase<1> **)(pFVar28 + 8) =
           local_360.SharedReferenceCount.ReferenceController;
      if (local_360.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        *paVar26 = (atomic<int>)((int)*paVar26 + 1);
        UNLOCK();
      }
      *(FScriptContainerElement **)(pFVar28 + 0x10) = FVar25.Data;
      *(undefined4 *)(pFVar28 + 0x18) = uVar1;
      *(undefined4 *)(pFVar28 + 0x1c) = uVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_360.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)0x0,0);
      DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)local_3b0.Data,(int)local_3a8);
      if ((TSharedRef<IRun,1> *)local_3b0.Data != (TSharedRef<IRun,1> *)0x0) {
        FMemory::Free(local_3b0.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_360.SharedReferenceCount.ReferenceController);
      local_3c4 = uVar31 + 1;
      local_2d0 = local_2d0 + 0x18;
      iVar18 = local_288->ArrayNum;
      param_2 = local_2b0;
      param_3 = local_288;
    } while ((int)local_3c4 < iVar18);
  }
  FTextLayout::AddLines(param_2,&local_390);
  FTextLayout::SetLineHighlights(param_2,&local_3c0);
  local_118.HashSize = 0;
  if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextStrikeLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118.Elements);
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextBlockStyle_const_*,TSharedPtr<FSlateTextUnderlineLineHighlighter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)local_3c0.AllocatorInstance.Data,local_3c0.ArrayNum);
  if ((FTextLineHighlight *)local_3c0.AllocatorInstance.Data != (FTextLineHighlight *)0x0) {
    FMemory::Free(local_3c0.AllocatorInstance.Data);
  }
  DestructItems<FTextLayout::FNewLineData,int>
            ((FNewLineData *)local_390.AllocatorInstance.Data,local_390.ArrayNum);
  if ((FNewLineData *)local_390.AllocatorInstance.Data != (FNewLineData *)0x0) {
    FMemory::Free(local_390.AllocatorInstance.Data);
  }
  DestructItems<ISyntaxTokenizer::FTokenizedLine,int>
            ((FTokenizedLine *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  pFVar28 = (param_3->AllocatorInstance).Data;
  if (pFVar28 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar28);
  }
  return;
}

