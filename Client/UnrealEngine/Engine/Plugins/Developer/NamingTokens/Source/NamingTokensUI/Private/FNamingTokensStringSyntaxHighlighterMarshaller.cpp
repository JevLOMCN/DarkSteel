// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 8

// FNamingTokensStringSyntaxHighlighterMarshaller @ 14d0ee2f0

FNamingTokensStringSyntaxHighlighterMarshaller * __thiscall
FNamingTokensStringSyntaxHighlighterMarshaller::FNamingTokensStringSyntaxHighlighterMarshaller
          (FNamingTokensStringSyntaxHighlighterMarshaller *this,
          TSharedPtr<ISyntaxTokenizer,1> *param_1,FSyntaxTextStyle *param_2)

{
  TSharedPtr<ISyntaxTokenizer,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (ISyntaxTokenizer *)0x0;
  FSyntaxHighlighterTextLayoutMarshaller::FSyntaxHighlighterTextLayoutMarshaller
            ((FSyntaxHighlighterTextLayoutMarshaller *)this,&local_18);
  this->_padding_ = (longlong)&___7FNamingTokensStringSyntaxHighlighterMarshaller__6B_;
  FTextBlockStyle::FTextBlockStyle
            (&(this->SyntaxTextStyle).NormalTextStyle,&param_2->NormalTextStyle);
  FTextBlockStyle::FTextBlockStyle
            (&(this->SyntaxTextStyle).ArgumentTextStyle,&param_2->ArgumentTextStyle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FNamingTokensStringSyntaxHighlighterMarshaller @ 14d0f0100

void __thiscall
FNamingTokensStringSyntaxHighlighterMarshaller::~FNamingTokensStringSyntaxHighlighterMarshaller
          (FNamingTokensStringSyntaxHighlighterMarshaller *this)

{
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).ArgumentTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NormalTextStyle);
  FSyntaxHighlighterTextLayoutMarshaller::~FSyntaxHighlighterTextLayoutMarshaller
            ((FSyntaxHighlighterTextLayoutMarshaller *)this);
  return;
}

// Create @ 14d0fb540

TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1> * __cdecl
FNamingTokensStringSyntaxHighlighterMarshaller::Create
          (TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1> *__return_storage_ptr__,
          FSyntaxTextStyle *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FString *pFVar8;
  TSharedRef<FSyntaxTokenizer,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1> *pTVar11;
  longlong lVar12;
  wchar_t **ppwVar13;
  ForAnyElementType local_78;
  int local_70;
  int iStack_6c;
  TArray<FSyntaxTokenizer::FRule,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<ISyntaxTokenizer,1> local_58;
  TSharedRef<FSyntaxTokenizer,1> local_48;
  FString local_38;
  
  ppwVar13 = Operators;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  iStack_6c = 0;
  do {
    pFVar8 = ::FString::FString(&local_38,*ppwVar13);
    pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = (pFVar8->Data).ArrayNum;
    iVar3 = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if (local_70 == iStack_6c) {
      local_70 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_78,&iStack_6c);
    }
    FVar6.Data = local_78.Data;
    iVar1 = local_70 + 1;
    ppwVar13 = ppwVar13 + 1;
    lVar12 = (longlong)local_70;
    *(FScriptContainerElement **)(local_78.Data + lVar12 * 0x10) = pFVar4;
    *(int *)(local_78.Data + lVar12 * 0x10 + 8) = iVar2;
    *(int *)(local_78.Data + lVar12 * 0x10 + 0xc) = iVar3;
    local_70 = iVar1;
  } while (ppwVar13 != (wchar_t **)L"/Script/NamingTokensUI");
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_68.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_68.AllocatorInstance,iVar1,&local_68.ArrayMax);
    ConstructItems<FSyntaxTokenizer::FRule,FSyntaxTokenizer::FRule,int>
              (local_68.AllocatorInstance.Data,(FRule *)FVar6.Data,iVar1);
  }
  pTVar9 = FSyntaxTokenizer::Create(&local_48,&local_68);
  pTVar10 = ::operator_new(0x620);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FNamingTokensStringSyntaxHighlighterMarshaller *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNamingTokensStringSyntaxHighlighterMarshaller___00_SharedPointerInternals__6B_
    ;
    local_58.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    local_58.Object = (ISyntaxTokenizer *)pTVar9->Object;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSyntaxHighlighterTextLayoutMarshaller::FSyntaxHighlighterTextLayoutMarshaller
              ((FSyntaxHighlighterTextLayoutMarshaller *)(pTVar10 + 1),&local_58);
    pTVar10[1]._padding_ = (longlong)&___7FNamingTokensStringSyntaxHighlighterMarshaller__6B_;
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(pTVar10 + 6),&param_1->NormalTextStyle);
    FTextBlockStyle::FTextBlockStyle
              ((FTextBlockStyle *)(pTVar10 + 0x34),&param_1->ArgumentTextStyle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
    __return_storage_ptr__->Object = (FNamingTokensStringSyntaxHighlighterMarshaller *)(pTVar10 + 1)
    ;
    if ((FNamingTokensStringSyntaxHighlighterMarshaller *)(pTVar10 + 1) ==
        (FNamingTokensStringSyntaxHighlighterMarshaller *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1> *)(*pcVar5)();
        return pTVar11;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  DestructItems<FSyntaxTokenizer::FRule,int>((FRule *)local_78.Data,local_70);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return __return_storage_ptr__;
}

// GetDefaultArgumentStyle @ 14d108450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTextBlockStyle * __cdecl
FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultArgumentStyle(void)

{
  FName FVar1;
  FName *pFVar2;
  FSlateFontInfo *pFVar3;
  ISlateStyle *pIVar4;
  FTextBlockStyle *pFVar5;
  FName local_res8 [4];
  FFontOutlineSettings local_a8;
  uint local_78;
  FSlateFontInfo local_70;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(local_res8,L"NormalText");
      FVar1 = *pFVar2;
      pIVar4 = FAppStyle::Get();
      pFVar5 = (FTextBlockStyle *)
               (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTextBlockStyle::TypeName,FVar1,0,1);
      if (pFVar5 == (FTextBlockStyle *)0x0) {
        pFVar5 = FTextBlockStyle::GetDefault();
      }
      FTextBlockStyle::FTextBlockStyle(&DefaultArgumentStyle,pFVar5);
      atexit(`FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultArgumentStyle'::__l2::
             _dynamic_atexit_destructor_for__DefaultArgumentStyle__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_a8.OutlineSize = 0;
  local_a8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_a8.bMiteredCorners = false;
  local_a8.bSeparateFillAlpha = false;
  local_a8.bApplyOutlineToDropShadows = false;
  local_a8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(local_res8,"Bold");
  pFVar3 = FCoreStyle::GetDefaultFontStyle(&local_70,*pFVar2,__real_41200000,&local_a8);
  FSlateFontInfo::operator=(&DefaultArgumentStyle.Font,pFVar3);
  local_78 = local_78 & 0xffffff00;
  DefaultArgumentStyle.ColorAndOpacity.ColorUseRule = (undefined1)local_78;
  DefaultArgumentStyle.ColorAndOpacity.ColorTableId = local_78._1_1_;
  DefaultArgumentStyle.ColorAndOpacity._18_2_ = local_78._2_2_;
  DefaultArgumentStyle.ColorAndOpacity.SpecifiedColor.field0_0x0 =
       (FLinearColor_u_0)(FLinearColor_u_0)___xmm_3f8000003f8000003f8000003f800000;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.CompositeFont.SharedReferenceCount.ReferenceController);
  return &DefaultArgumentStyle;
}

// GetDefaultNormalStyle @ 14d1085d0

FTextBlockStyle * __cdecl
FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultNormalStyle(void)

{
  FName FVar1;
  FName *pFVar2;
  ISlateStyle *pIVar3;
  FTextBlockStyle *pFVar4;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(local_res8,L"NormalText");
      FVar1 = *pFVar2;
      pIVar3 = FAppStyle::Get();
      pFVar4 = (FTextBlockStyle *)
               (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTextBlockStyle::TypeName,FVar1,0,1);
      if (pFVar4 == (FTextBlockStyle *)0x0) {
        pFVar4 = FTextBlockStyle::GetDefault();
      }
      FTextBlockStyle::FTextBlockStyle(&DefaultNormalStyle,pFVar4);
      atexit(`FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultNormalStyle'::__l2::
             _dynamic_atexit_destructor_for__DefaultNormalStyle__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultNormalStyle;
    }
  }
  return &DefaultNormalStyle;
}

// ParseTokens @ 14d112190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNamingTokensStringSyntaxHighlighterMarshaller::ParseTokens
          (FNamingTokensStringSyntaxHighlighterMarshaller *this,FString *param_1,
          FTextLayout *param_2,
          TArray<ISyntaxTokenizer::FTokenizedLine,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateTextRun *pFVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t wVar6;
  ForAnyElementType FVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  FString *pFVar14;
  TSharedRef<FSlateTextRun,1> *pTVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  char *pcVar21;
  FScriptContainerElement *pFVar22;
  TReferenceControllerBase<1> *this_00;
  undefined1 auStackY_498 [32];
  undefined1 local_447;
  undefined1 local_446 [6];
  ForAnyElementType local_440;
  undefined8 local_438;
  TArray<FTextLayout::FNewLineData,TSizedDefaultAllocator<32>_> local_430;
  TReferenceControllerBase<1> *local_420;
  FSlateTextRun *local_418;
  TReferenceControllerBase<1> *local_410;
  uint local_408;
  uint local_404;
  TReferenceControllerBase<1> *local_400;
  FTextRange local_3f8;
  char *local_3f0;
  FScriptContainerElement *local_3e8;
  FScriptContainerElement *local_3e0;
  TSharedRef<FString_const_,1> local_3d8;
  FString *local_3c8;
  TArray<ISyntaxTokenizer::FTokenizedLine,TSizedDefaultAllocator<32>_> *local_3c0;
  FScriptContainerElement *local_3b8;
  FTextLayout *local_3b0;
  TSharedRef<FSlateTextRun,1> local_3a8;
  FString local_398;
  FTextBlockStyle local_388;
  undefined1 local_a8 [16];
  undefined1 local_98 [64];
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  uVar1 = param_3->ArrayNum;
  local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_430.ArrayNum = 0;
  local_430.ArrayMax = 0;
  local_3c8 = param_1;
  local_3c0 = param_3;
  local_3b0 = param_2;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar1,&local_430.AllocatorInstance,0,&local_430.ArrayMax);
  }
  local_404 = param_3->ArrayNum;
  uVar18 = (ulonglong)(int)local_404;
  pFVar22 = (param_3->AllocatorInstance).Data;
  bVar5 = false;
  local_3b8 = pFVar22 + uVar18 * 0x18;
  pFVar20 = pFVar22 + 0x10;
  do {
    pFVar10 = local_3b8;
    local_3e8 = pFVar22;
    local_3e0 = pFVar20;
    if (param_3->ArrayNum != (int)uVar18) {
      local_447 = 0;
      `TCheckedPointerIterator<ISyntaxTokenizer::FTokenizedLine,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_447);
    }
    if (pFVar22 == pFVar10) {
      FTextLayout::AddLines(local_3b0,&local_430);
      DestructItems<FTextLayout::FNewLineData,int>
                ((FNewLineData *)local_430.AllocatorInstance.Data,local_430.ArrayNum);
      if ((FNewLineData *)local_430.AllocatorInstance.Data != (FNewLineData *)0x0) {
        FMemory::Free(local_430.AllocatorInstance.Data);
      }
      DestructItems<ISyntaxTokenizer::FTokenizedLine,int>
                ((FTokenizedLine *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
      pFVar20 = (param_3->AllocatorInstance).Data;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
      return;
    }
    pTVar13 = ::operator_new(0x20);
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      this_00 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_400 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_420 = (TReferenceControllerBase<1> *)&DAT_00000010;
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar13->SharedReferenceCount = (atomic<int>)0x1;
      this_00 = pTVar13 + 1;
      pTVar13->WeakReferenceCount = (atomic<int>)0x1;
      pTVar13->_padding_ =
           (longlong)&___7__TIntrusiveReferenceController_VFString___00_SharedPointerInternals__6B_;
      pTVar13[1]._padding_ = 0;
      pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
      local_420 = this_00;
      local_400 = this_00;
      if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_408 = *(uint *)pFVar20;
    uVar18 = (ulonglong)(int)local_408;
    pcVar21 = *(char **)(pFVar20 + -8);
    local_440.Data = (FScriptContainerElement *)0x0;
    local_438 = 0;
    local_3f0 = pcVar21 + uVar18 * 0xc;
    while( true ) {
      if (*(int *)pFVar20 != (int)uVar18) {
        local_446[0] = 0;
        `TCheckedPointerIterator<ISyntaxTokenizer::FToken_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_446);
      }
      if (pcVar21 == local_3f0) break;
      iVar19 = *(int *)(pcVar21 + 8) - *(int *)(pcVar21 + 4);
      if ((param_1->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar20 = (FScriptContainerElement *)((longlong)pwVar16 + (longlong)*(int *)(pcVar21 + 4) * 2)
      ;
      local_3f8.BeginIndex = (int)this_00->SharedReferenceCount + -1;
      if (this_00->SharedReferenceCount == (atomic<int>)0x0) {
        local_3f8.BeginIndex = 0;
      }
      local_3f8.EndIndex = local_3f8.BeginIndex + iVar19;
      ::FString::AppendChars((FString *)this_00,(wchar_t *)pFVar20,iVar19);
      pFVar14 = ::FString::FString(&local_398,L"SyntaxHighlight.Template.Normal");
      local_a8._0_8_ = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8._8_4_ = (pFVar14->Data).ArrayNum;
      local_a8._12_4_ = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      local_98._32_8_ = 0;
      local_98._0_8_ = 0;
      local_98._56_8_ = 0;
      local_98._8_8_ = 0;
      local_98._40_8_ = 0x8000000000;
      local_98._48_8_ = 0xffffffff;
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_98._16_8_ = 0;
      local_98._24_8_ = 0;
      pFVar22 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar22 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar22);
      }
      FTextBlockStyle::FTextBlockStyle(&local_388,&(this->SyntaxTextStyle).NormalTextStyle);
      bVar11 = false;
      if (*pcVar21 == '\0') {
        if (bVar5) {
          wVar6 = u__[0];
          if (iVar19 != 0) {
            iVar12 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar20,L"}",(longlong)iVar19);
            if (iVar12 != 0) goto LAB_14d112478;
            wVar6 = L"}"[iVar19];
          }
          if (wVar6 == L'\0') {
            ::FString::operator=((FString *)local_a8,L"SyntaxHighlight.Template.Normal");
            FSlateFontInfo::operator=
                      (&local_388.Font,&(this->SyntaxTextStyle).ArgumentTextStyle.Font);
            local_388.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
                 *(undefined8 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.SpecifiedColor.
                   field0_0x0;
            local_388.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
                 *(undefined8 *)
                  ((longlong)
                   &(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.SpecifiedColor.
                    field0_0x0 + 8);
            local_388.ColorAndOpacity.ColorUseRule =
                 (this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.ColorUseRule;
            local_388.ColorAndOpacity.ColorTableId =
                 (this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.ColorTableId;
            local_388.ColorAndOpacity._18_2_ =
                 *(undefined2 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.field_0x12;
            local_388.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
                 *(undefined8 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.SpecifiedColor.
                   field0_0x0;
            local_388.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
                 *(undefined8 *)
                  ((longlong)
                   &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.SpecifiedColor
                    .field0_0x0 + 8);
            local_388.ShadowOffset = (this->SyntaxTextStyle).ArgumentTextStyle.ShadowOffset;
            local_388.ShadowColorAndOpacity.field0_0x0._0_8_ =
                 *(undefined8 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.ShadowColorAndOpacity.field0_0x0;
            local_388.ShadowColorAndOpacity.field0_0x0._8_8_ =
                 *(undefined8 *)
                  ((longlong)
                   &(this->SyntaxTextStyle).ArgumentTextStyle.ShadowColorAndOpacity.field0_0x0 + 8);
            local_388.SelectedBackgroundColor.ColorUseRule =
                 (this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.ColorUseRule;
            local_388.SelectedBackgroundColor.ColorTableId =
                 (this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.ColorTableId;
            local_388.SelectedBackgroundColor._18_2_ =
                 *(undefined2 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.field_0x12;
            local_388.HighlightColor.ColorUseRule =
                 (this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.ColorUseRule;
            local_388.HighlightColor.ColorTableId =
                 (this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.ColorTableId;
            local_388.HighlightColor._18_2_ =
                 *(undefined2 *)&(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.field_0x12
            ;
            local_388.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
                 *(undefined8 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.SpecifiedColor.
                   field0_0x0;
            local_388.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
                 *(undefined8 *)
                  ((longlong)
                   &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.SpecifiedColor.
                    field0_0x0 + 8);
            FSlateBrush::operator=
                      (&local_388.HighlightShape,
                       &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightShape);
            FSlateBrush::operator=
                      (&local_388.StrikeBrush,&(this->SyntaxTextStyle).ArgumentTextStyle.StrikeBrush
                      );
            FSlateBrush::operator=
                      (&local_388.UnderlineBrush,
                       &(this->SyntaxTextStyle).ArgumentTextStyle.UnderlineBrush);
            local_388.TransformPolicy = (this->SyntaxTextStyle).ArgumentTextStyle.TransformPolicy;
            local_388.OverflowPolicy = (this->SyntaxTextStyle).ArgumentTextStyle.OverflowPolicy;
            bVar5 = false;
          }
        }
        else {
          wVar6 = u__[0];
          if (iVar19 != 0) {
            iVar12 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar20,L"{",(longlong)iVar19);
            if (iVar12 != 0) goto LAB_14d112478;
            wVar6 = L"{"[iVar19];
          }
          if (wVar6 == L'\0') {
            ::FString::operator=((FString *)local_a8,L"SyntaxHighlight.Template.Argument");
            FSlateFontInfo::operator=
                      (&local_388.Font,&(this->SyntaxTextStyle).ArgumentTextStyle.Font);
            local_388.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
                 *(undefined8 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.SpecifiedColor.
                   field0_0x0;
            local_388.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
                 *(undefined8 *)
                  ((longlong)
                   &(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.SpecifiedColor.
                    field0_0x0 + 8);
            local_388.ColorAndOpacity.ColorUseRule =
                 (this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.ColorUseRule;
            local_388.ColorAndOpacity.ColorTableId =
                 (this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.ColorTableId;
            local_388.ColorAndOpacity._18_2_ =
                 *(undefined2 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.field_0x12;
            local_388.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
                 *(undefined8 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.SpecifiedColor.
                   field0_0x0;
            local_388.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
                 *(undefined8 *)
                  ((longlong)
                   &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.SpecifiedColor
                    .field0_0x0 + 8);
            local_388.ShadowOffset = (this->SyntaxTextStyle).ArgumentTextStyle.ShadowOffset;
            local_388.ShadowColorAndOpacity.field0_0x0._0_8_ =
                 *(undefined8 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.ShadowColorAndOpacity.field0_0x0;
            local_388.ShadowColorAndOpacity.field0_0x0._8_8_ =
                 *(undefined8 *)
                  ((longlong)
                   &(this->SyntaxTextStyle).ArgumentTextStyle.ShadowColorAndOpacity.field0_0x0 + 8);
            local_388.SelectedBackgroundColor.ColorUseRule =
                 (this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.ColorUseRule;
            local_388.SelectedBackgroundColor.ColorTableId =
                 (this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.ColorTableId;
            local_388.SelectedBackgroundColor._18_2_ =
                 *(undefined2 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.field_0x12;
            local_388.HighlightColor.ColorUseRule =
                 (this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.ColorUseRule;
            local_388.HighlightColor.ColorTableId =
                 (this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.ColorTableId;
            local_388.HighlightColor._18_2_ =
                 *(undefined2 *)&(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.field_0x12
            ;
            local_388.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
                 *(undefined8 *)
                  &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.SpecifiedColor.
                   field0_0x0;
            local_388.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
                 *(undefined8 *)
                  ((longlong)
                   &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.SpecifiedColor.
                    field0_0x0 + 8);
            FSlateBrush::operator=
                      (&local_388.HighlightShape,
                       &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightShape);
            FSlateBrush::operator=
                      (&local_388.StrikeBrush,&(this->SyntaxTextStyle).ArgumentTextStyle.StrikeBrush
                      );
            FSlateBrush::operator=
                      (&local_388.UnderlineBrush,
                       &(this->SyntaxTextStyle).ArgumentTextStyle.UnderlineBrush);
            local_388.TransformPolicy = (this->SyntaxTextStyle).ArgumentTextStyle.TransformPolicy;
            local_388.OverflowPolicy = (this->SyntaxTextStyle).ArgumentTextStyle.OverflowPolicy;
            bVar5 = true;
            bVar11 = true;
          }
        }
      }
LAB_14d112478:
      if (((*pcVar21 == '\x01') || (!bVar11)) && (bVar5)) {
        ::FString::operator=((FString *)local_a8,L"SyntaxHighlight.Template.Argument");
        FSlateFontInfo::operator=(&local_388.Font,&(this->SyntaxTextStyle).ArgumentTextStyle.Font);
        local_388.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
             *(undefined8 *)
              &(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.SpecifiedColor.field0_0x0;
        local_388.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
             *(undefined8 *)
              ((longlong)
               &(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.SpecifiedColor.field0_0x0
              + 8);
        local_388.ColorAndOpacity.ColorUseRule =
             (this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.ColorUseRule;
        local_388.ColorAndOpacity.ColorTableId =
             (this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.ColorTableId;
        local_388.ColorAndOpacity._18_2_ =
             *(undefined2 *)&(this->SyntaxTextStyle).ArgumentTextStyle.ColorAndOpacity.field_0x12;
        local_388.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
             *(undefined8 *)
              &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.SpecifiedColor.
               field0_0x0;
        local_388.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
             *(undefined8 *)
              ((longlong)
               &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.SpecifiedColor.
                field0_0x0 + 8);
        local_388.ShadowOffset = (this->SyntaxTextStyle).ArgumentTextStyle.ShadowOffset;
        local_388.ShadowColorAndOpacity.field0_0x0._0_8_ =
             *(undefined8 *)
              &(this->SyntaxTextStyle).ArgumentTextStyle.ShadowColorAndOpacity.field0_0x0;
        local_388.ShadowColorAndOpacity.field0_0x0._8_8_ =
             *(undefined8 *)
              ((longlong)&(this->SyntaxTextStyle).ArgumentTextStyle.ShadowColorAndOpacity.field0_0x0
              + 8);
        local_388.SelectedBackgroundColor.ColorUseRule =
             (this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.ColorUseRule;
        local_388.SelectedBackgroundColor.ColorTableId =
             (this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.ColorTableId;
        local_388.SelectedBackgroundColor._18_2_ =
             *(undefined2 *)
              &(this->SyntaxTextStyle).ArgumentTextStyle.SelectedBackgroundColor.field_0x12;
        local_388.HighlightColor.ColorUseRule =
             (this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.ColorUseRule;
        local_388.HighlightColor.ColorTableId =
             (this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.ColorTableId;
        local_388.HighlightColor._18_2_ =
             *(undefined2 *)&(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.field_0x12;
        local_388.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
             *(undefined8 *)
              &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.SpecifiedColor.field0_0x0;
        local_388.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
             *(undefined8 *)
              ((longlong)
               &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightColor.SpecifiedColor.field0_0x0 +
              8);
        FSlateBrush::operator=
                  (&local_388.HighlightShape,
                   &(this->SyntaxTextStyle).ArgumentTextStyle.HighlightShape);
        FSlateBrush::operator=
                  (&local_388.StrikeBrush,&(this->SyntaxTextStyle).ArgumentTextStyle.StrikeBrush);
        FSlateBrush::operator=
                  (&local_388.UnderlineBrush,
                   &(this->SyntaxTextStyle).ArgumentTextStyle.UnderlineBrush);
        local_388.TransformPolicy = (this->SyntaxTextStyle).ArgumentTextStyle.TransformPolicy;
        local_388.OverflowPolicy = (this->SyntaxTextStyle).ArgumentTextStyle.OverflowPolicy;
      }
      this_00 = local_400;
      local_3d8.Object = (FString *)local_400;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3d8.SharedReferenceCount.ReferenceController = pTVar13;
      pTVar15 = FSlateTextRun::Create
                          (&local_3a8,(FRunInfo *)local_a8,&local_3d8,&local_388,&local_3f8);
      pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar15->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3d8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3d8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        local_400 = this_00;
      }
      local_418 = pFVar3;
      local_410 = pTVar2;
      if (((local_440.Data <= (FScriptContainerElement *)&local_418) &&
          ((FScriptContainerElement *)&local_418 < local_440.Data + (longlong)local_438._4_4_ * 0x10
          )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar19 = (int)local_438;
      if ((int)local_438 == local_438._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_440,(int *)((longlong)&local_438 + 4));
      }
      local_438 = CONCAT44(local_438._4_4_,iVar19 + 1);
      *(FSlateTextRun **)(local_440.Data + (longlong)iVar19 * 0x10) = local_418;
      *(TReferenceControllerBase<1> **)(local_440.Data + (longlong)iVar19 * 0x10 + 8) = local_410;
      if (local_410 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_410->SharedReferenceCount = (atomic<int>)((int)local_410->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_410)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FTextBlockStyle::~FTextBlockStyle(&local_388);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      pcVar21 = pcVar21 + 0xc;
      uVar18 = (ulonglong)local_408;
      pFVar20 = local_3e0;
      param_1 = local_3c8;
    }
    iVar19 = local_430.ArrayNum;
    if (local_430.ArrayNum == local_430.ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_430.AllocatorInstance,&local_430.ArrayMax);
    }
    FVar7.Data = local_440.Data;
    uVar8 = (int)local_438;
    uVar9 = local_438._4_4_;
    local_430.ArrayNum = iVar19 + 1;
    lVar17 = (longlong)iVar19 * 0x20;
    local_440.Data = (FScriptContainerElement *)0x0;
    local_438 = 0;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      *(TReferenceControllerBase<1> **)&local_430.AllocatorInstance.Data[lVar17].field_0x0 =
           local_420;
      *(undefined8 *)(local_430.AllocatorInstance.Data + lVar17 + 8) = 0;
    }
    else {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      *(TReferenceControllerBase<1> **)&local_430.AllocatorInstance.Data[lVar17].field_0x0 =
           local_420;
      *(TReferenceControllerBase<1> **)(local_430.AllocatorInstance.Data + lVar17 + 8) = pTVar13;
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FScriptContainerElement **)(local_430.AllocatorInstance.Data + lVar17 + 0x10) = FVar7.Data;
    *(undefined4 *)(local_430.AllocatorInstance.Data + lVar17 + 0x18) = uVar8;
    *(undefined4 *)(local_430.AllocatorInstance.Data + lVar17 + 0x1c) = uVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)0x0,0);
    DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)local_440.Data,(int)local_438);
    if ((TSharedRef<IRun,1> *)local_440.Data != (TSharedRef<IRun,1> *)0x0) {
      FMemory::Free(local_440.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    pFVar22 = local_3e8 + 0x18;
    uVar18 = (ulonglong)local_404;
    pFVar20 = pFVar20 + 0x18;
    param_3 = local_3c0;
  } while( true );
}

// SetArgumentStyle @ 14d119c90

void __thiscall
FNamingTokensStringSyntaxHighlighterMarshaller::SetArgumentStyle
          (FNamingTokensStringSyntaxHighlighterMarshaller *this,FTextBlockStyle *param_1)

{
  FTextBlockStyle::operator=(&(this->SyntaxTextStyle).ArgumentTextStyle,param_1);
  return;
}

// SetNormalStyle @ 14d11a4e0

void __thiscall
FNamingTokensStringSyntaxHighlighterMarshaller::SetNormalStyle
          (FNamingTokensStringSyntaxHighlighterMarshaller *this,FTextBlockStyle *param_1)

{
  FTextBlockStyle::operator=(&(this->SyntaxTextStyle).NormalTextStyle,param_1);
  return;
}

