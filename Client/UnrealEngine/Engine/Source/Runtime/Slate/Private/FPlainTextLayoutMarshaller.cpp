// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FPlainTextLayoutMarshaller @ 142844690

FPlainTextLayoutMarshaller * __thiscall
FPlainTextLayoutMarshaller::FPlainTextLayoutMarshaller(FPlainTextLayoutMarshaller *this)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_48;
  undefined2 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPlainTextLayoutMarshaller__6B_;
  this_00 = &(this->bIsPassword).Getter;
  *(undefined4 *)&(this->bIsPassword).Getter.field_0x14 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->bIsPassword).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->bIsPassword).Getter.field_0x10 = 0;
  (this->bIsPassword).Value = false;
  (this->bIsPassword).bIsSet = true;
  local_30 = 0x100;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// ~FPlainTextLayoutMarshaller @ 1428498f0

void __thiscall
FPlainTextLayoutMarshaller::~FPlainTextLayoutMarshaller(FPlainTextLayoutMarshaller *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FPlainTextLayoutMarshaller__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsPassword).Getter);
  pvVar1 = *(void **)&(this->bIsPassword).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsPassword).Getter);
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  return;
}

// Create @ 142864530

TSharedRef<FPlainTextLayoutMarshaller,1> * __cdecl
FPlainTextLayoutMarshaller::Create(TSharedRef<FPlainTextLayoutMarshaller,1> *__return_storage_ptr__)

{
  FPlainTextLayoutMarshaller *this;
  TRawPtrProxy<FPlainTextLayoutMarshaller> local_res8 [4];
  
  this = ::operator_new(0x30);
  local_res8[0].Object = (FPlainTextLayoutMarshaller *)0x0;
  if (this != (FPlainTextLayoutMarshaller *)0x0) {
    local_res8[0].Object = FPlainTextLayoutMarshaller(this);
  }
  TSharedRef<FPlainTextLayoutMarshaller,1>::
  TSharedRef<FPlainTextLayoutMarshaller,1><FPlainTextLayoutMarshaller>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// GetText @ 14287b2d0

void __thiscall
FPlainTextLayoutMarshaller::GetText
          (FPlainTextLayoutMarshaller *this,FString *param_1,FTextLayout *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_res18 [8];
  
  uVar10 = 0;
  if (0 < (param_2->LineModels).ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (param_2->LineModels).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_2->LineModels).AllocatorInstance.Data;
      if ((0 < (int)uVar10) && (param_1 != (FString *)0x0)) {
        ::FString::AppendChars(param_1,L"\r\n",2);
      }
      uVar7 = 0;
      if (0 < *(int *)(pFVar1 + lVar8 + 0x30)) {
        lVar9 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar7 < *(int *)(pFVar1 + lVar8 + 0x30)) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)(pFVar1 + lVar8 + 0x28);
          if (param_1 != (FString *)0x0) {
            plVar3 = *(longlong **)(lVar2 + lVar9);
            (**(code **)(*plVar3 + 0x88))(plVar3,param_1);
          }
          plVar3 = *(longlong **)(lVar2 + lVar9);
          (**(code **)(*plVar3 + 8))(plVar3,local_res18);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 0x30;
        } while ((int)uVar7 < *(int *)(pFVar1 + lVar8 + 0x30));
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x70;
    } while ((int)uVar10 < (param_2->LineModels).ArrayNum);
  }
  return;
}

// SetIsPassword @ 142896ea0

void __thiscall
FPlainTextLayoutMarshaller::SetIsPassword
          (FPlainTextLayoutMarshaller *this,TAttribute<bool> *param_1)

{
  (this->bIsPassword).Value = param_1->Value;
  (this->bIsPassword).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsPassword).Getter,&param_1->Getter);
  return;
}

// SetText @ 142899750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPlainTextLayoutMarshaller::SetText
          (FPlainTextLayoutMarshaller *this,FString *param_1,FTextLayout *param_2)

{
  FTextBlockStyle *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FSharedReferencer<1> FVar7;
  FSlateTextUnderlineLineHighlighter *pFVar8;
  FSlateTextStrikeLineHighlighter *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TSharedRef<FSlateTextUnderlineLineHighlighter,1> *pTVar13;
  longlong lVar14;
  TSharedRef<FSlateTextStrikeLineHighlighter,1> *pTVar15;
  bool *pbVar16;
  FString *__return_storage_ptr__;
  FString *pFVar17;
  FSlateTextRun *pFVar18;
  FSharedReferencer<1> FVar19;
  atomic<int> *paVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  char cVar23;
  uint uVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_358 [32];
  ForAnyElementType local_300;
  undefined8 local_2f8;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> local_2f0;
  TArray<FTextLayout::FNewLineData,TSizedDefaultAllocator<32>_> local_2e0;
  TSharedRef<FString,1> local_2c8;
  TArray<FTextRange,TSizedDefaultAllocator<32>_> local_2b8;
  FSlateTextRun *local_2a8;
  TReferenceControllerBase<1> *pTStack_2a0;
  FSlateTextRun *local_298;
  TReferenceControllerBase<1> *pTStack_290;
  FSlateTextUnderlineLineHighlighter *local_288;
  FSharedReferencer<1> FStack_280;
  FTextLineHighlight local_278;
  FTextLineHighlight local_258;
  FSlateTextStrikeLineHighlighter *local_238;
  FSharedReferencer<1> FStack_230;
  undefined4 local_228;
  uint uStack_224;
  undefined4 local_220;
  uint uStack_21c;
  TRawPtrProxy<FString> local_218;
  TRawPtrProxy<FSlatePasswordRun> local_210;
  TRawPtrProxy<FSlateTextRun> local_208;
  FString *local_200;
  FTextLayout *local_1f8;
  undefined8 local_1f0;
  FSharedReferencer<1> local_1e8;
  undefined8 local_1e0;
  FSharedReferencer<1> local_1d8 [2];
  TSharedRef<FSlatePasswordRun,1> local_1c8;
  TSharedRef<FString_const_,1> local_1b8;
  TSharedRef<FSlateTextRun,1> local_1a8;
  TSharedRef<FString_const_,1> local_198;
  FLinearColor_u_0 local_188;
  undefined4 local_178;
  FLinearColor_u_0 local_168;
  undefined4 local_158;
  FLinearColor_u_0 local_148;
  TSharedRef<FSlateTextUnderlineLineHighlighter,1> local_138;
  FLinearColor_u_0 local_128;
  TSharedRef<FSlateTextStrikeLineHighlighter,1> local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [24];
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  uVar24 = 0;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  pFVar1 = (FTextBlockStyle *)(param_2 + 1);
  local_200 = param_1;
  local_1f8 = param_2;
  FTextRange::CalculateLineRangesFromString(param_1,&local_2b8);
  uVar21 = local_2b8._8_8_ & 0xffffffff;
  local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.ArrayNum = 0;
  local_2e0.ArrayMax = 0;
  if (local_2b8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar21);
  }
  if (0 < local_2b8.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_2b8.ArrayNum,&local_2e0.AllocatorInstance,0,&local_2e0.ArrayMax);
    uVar21 = local_2b8._8_8_ & 0xffffffff;
  }
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  local_288 = (FSlateTextUnderlineLineHighlighter *)0x0;
  FStack_280.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2[3]._padding_ == 0) {
    pTVar2 = param_2[2].LineBreakIterator.SharedReferenceCount.ReferenceController;
    lVar25 = 0;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      lVar25._0_4_ = pTVar2[1].SharedReferenceCount;
      lVar25._4_4_ = pTVar2[1].WeakReferenceCount;
    }
    if (lVar25 != 0) goto LAB_142899827;
  }
  else {
LAB_142899827:
    local_178 = *(undefined4 *)param_2[1].LineViewsToJustify.Hash.InlineData;
    local_148._0_8_ = *(undefined8 *)&param_2[1].LineViewsToJustify.Hash.SecondaryData.field_0x4;
    local_148._8_8_ = *(undefined8 *)&param_2[1].LineViewsToJustify.field_0x4c;
    local_188._0_8_ = *(undefined8 *)&param_2[1].LineViewsToJustify.Elements.field_0x28;
    local_188._8_8_ = *(undefined8 *)&param_2[1].LineViewsToJustify.Elements.field_0x30;
    pTVar13 = FSlateTextUnderlineLineHighlighter::Create
                        (&local_138,(FSlateBrush *)&param_2[2].TextLayoutSize.WrappedWidth,
                         (FSlateFontInfo *)&param_2[1]._padding_,(FSlateColor *)&local_188._s_0,
                         *(FDeprecateVector2DParameter *)
                          &param_2[1].LineViewsToJustify.Hash._padding_,
                         (FLinearColor *)&local_148._s_0);
    local_1e8.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
    local_288 = pTVar13->Object;
    if (local_1e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1e8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_280,&local_1e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    uVar21 = local_2b8._8_8_ & 0xffffffff;
  }
  lVar14._0_1_ = param_2[2].ApplyLineHeightToBottomLine;
  lVar14._1_3_ = *(undefined3 *)&param_2[2].field_0xb9;
  lVar14._4_4_ = param_2[2].TextLayoutSize.DrawWidth;
  local_238 = (FSlateTextStrikeLineHighlighter *)0x0;
  FStack_230.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (lVar14 == 0) {
    lVar25 = *(longlong *)&param_2[2].LineViewsToJustify.Elements.field_0x8;
    lVar14 = 0;
    if (lVar25 != 0) {
      lVar14 = *(longlong *)(lVar25 + 0x18);
    }
    if (lVar14 == 0) goto LAB_14289998f;
  }
  local_158 = *(undefined4 *)param_2[1].LineViewsToJustify.Hash.InlineData;
  local_128._0_8_ = *(undefined8 *)&param_2[1].LineViewsToJustify.Hash.SecondaryData.field_0x4;
  local_128._8_8_ = *(undefined8 *)&param_2[1].LineViewsToJustify.field_0x4c;
  local_168._0_8_ = *(undefined8 *)&param_2[1].LineViewsToJustify.Elements.field_0x28;
  local_168._8_8_ = *(undefined8 *)&param_2[1].LineViewsToJustify.Elements.field_0x30;
  pTVar15 = FSlateTextStrikeLineHighlighter::Create
                      (&local_118,(FSlateBrush *)&param_2[2]._padding_,
                       (FSlateFontInfo *)&param_2[1]._padding_,(FSlateColor *)&local_168._s_0,
                       *(FDeprecateVector2DParameter *)&param_2[1].LineViewsToJustify.Hash._padding_
                       ,(FLinearColor *)&local_128._s_0);
  local_1d8[0].ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
  local_238 = pTVar15->Object;
  if (local_1d8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1d8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_230,local_1d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  uVar21 = local_2b8._8_8_ & 0xffffffff;
LAB_14289998f:
  if ((this->bIsPassword).bIsSet == false) {
    cVar23 = '\0';
  }
  else {
    pbVar16 = TAttribute<bool>::Get(&this->bIsPassword);
    uVar21 = local_2b8._8_8_ & 0xffffffff;
    cVar23 = *pbVar16;
  }
  if (0 < (int)uVar21) {
    lVar25 = 0;
    do {
      pFVar17 = (FString *)0x0;
      uVar11 = 0;
      if ((int)uVar24 < (int)uVar21) {
        uVar11 = ~uVar24 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar26 = local_2b8.AllocatorInstance.Data + lVar25;
      __return_storage_ptr__ = ::operator_new(0x10);
      if (__return_storage_ptr__ != (FString *)0x0) {
        pFVar17 = ::FString::Mid(param_1,__return_storage_ptr__,*(int *)pFVar26,
                                 *(int *)(pFVar26 + 4) - *(int *)pFVar26);
      }
      local_218.Object = pFVar17;
      TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_2c8,&local_218);
      FVar7.ReferenceController = local_2c8.SharedReferenceCount.ReferenceController;
      local_300.Data = (FScriptContainerElement *)0x0;
      local_2f8 = 0;
      if (cVar23 == '\0') {
        local_198.Object = local_2c8.Object;
        local_198.SharedReferenceCount.ReferenceController =
             local_2c8.SharedReferenceCount.ReferenceController;
        if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_a8._0_8_ = (FScriptContainerElement *)0x0;
        local_78 = (void *)0x0;
        local_98 = (void *)0x0;
        uStack_60 = 0;
        uStack_90 = 0;
        uStack_70 = 0x8000000000;
        local_68 = 0xffffffff;
        local_58 = (void *)0x0;
        uStack_50 = 0;
        local_a8._8_4_ = 0;
        local_a8._12_4_ = 0;
        local_88 = 0;
        uStack_80 = 0;
        pFVar18 = ::operator_new(0x380);
        if (pFVar18 == (FSlateTextRun *)0x0) {
          pFVar18 = (FSlateTextRun *)0x0;
        }
        else {
          pFVar18 = FSlateTextRun::FSlateTextRun(pFVar18,(FRunInfo *)local_a8,&local_198,pFVar1);
          if ((((pFVar18 != (FSlateTextRun *)0x0) && (*(longlong *)&pFVar18->field_0x8 != 0)) &&
              (*(longlong *)&pFVar18->field_0x10 != 0)) &&
             ((0 < *(int *)(*(longlong *)&pFVar18->field_0x10 + 8) &&
              (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!InObject || !InObject->DoesSharedInstanceExist()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x7a5,L"Trying to share an already-shared object"), bVar10)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_208.Object = pFVar18;
        TSharedRef<FSlateTextRun,1>::TSharedRef<FSlateTextRun,1><FSlateTextRun>
                  (&local_1a8,&local_208);
        FVar19.ReferenceController = local_1a8.SharedReferenceCount.ReferenceController;
        local_298 = local_1a8.Object;
        pTStack_290 = local_1a8.SharedReferenceCount.ReferenceController;
        if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (((local_300.Data <= (FScriptContainerElement *)&local_298) &&
            ((FScriptContainerElement *)&local_298 <
             local_300.Data + (longlong)local_2f8._4_4_ * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar12 = (int)local_2f8;
        if ((int)local_2f8 == local_2f8._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_300,(int *)((longlong)&local_2f8 + 4));
        }
        local_2f8 = CONCAT44(local_2f8._4_4_,iVar12 + 1);
        *(FSlateTextRun **)(local_300.Data + (longlong)iVar12 * 0x10) = local_298;
        *(TReferenceControllerBase<1> **)(local_300.Data + (longlong)iVar12 * 0x10 + 8) =
             pTStack_290;
        if (pTStack_290 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_290->SharedReferenceCount =
               (atomic<int>)((int)pTStack_290->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_290);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&local_98,0);
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
        FVar19.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
        if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_a8._0_8_);
          FVar19.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
        }
      }
      else {
        local_1b8.Object = local_2c8.Object;
        local_1b8.SharedReferenceCount.ReferenceController =
             local_2c8.SharedReferenceCount.ReferenceController;
        if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_108._0_8_ = (FScriptContainerElement *)0x0;
        local_d8 = (void *)0x0;
        local_f8._0_8_ = (FScriptContainerElement *)0x0;
        uStack_c0 = 0;
        local_f8._8_8_ = 0;
        uStack_d0 = 0x8000000000;
        local_c8 = 0xffffffff;
        local_b8 = (void *)0x0;
        uStack_b0 = 0;
        local_108._8_4_ = 0;
        local_108._12_4_ = 0;
        local_f8._16_8_ = 0;
        uStack_e0 = 0;
        pFVar18 = ::operator_new(0x380);
        if (pFVar18 == (FSlateTextRun *)0x0) {
          pFVar18 = (FSlateTextRun *)0x0;
        }
        else {
          FSlateTextRun::FSlateTextRun(pFVar18,(FRunInfo *)local_108,&local_1b8,pFVar1);
          *(undefined ***)pFVar18 = &___7FSlatePasswordRun__6B_;
          if ((((*(longlong *)&pFVar18->field_0x8 != 0) && (*(longlong *)&pFVar18->field_0x10 != 0))
              && (0 < *(int *)(*(longlong *)&pFVar18->field_0x10 + 8))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!InObject || !InObject->DoesSharedInstanceExist()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x7a5,L"Trying to share an already-shared object"), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_210.Object = (FSlatePasswordRun *)pFVar18;
        TSharedRef<FSlatePasswordRun,1>::TSharedRef<FSlatePasswordRun,1><FSlatePasswordRun>
                  (&local_1c8,&local_210);
        FVar19.ReferenceController = local_1c8.SharedReferenceCount.ReferenceController;
        local_2a8 = (FSlateTextRun *)local_1c8.Object;
        pTStack_2a0 = local_1c8.SharedReferenceCount.ReferenceController;
        if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (((local_300.Data <= (FScriptContainerElement *)&local_2a8) &&
            ((FScriptContainerElement *)&local_2a8 <
             local_300.Data + (longlong)local_2f8._4_4_ * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar12 = (int)local_2f8;
        if ((int)local_2f8 == local_2f8._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_300,(int *)((longlong)&local_2f8 + 4));
        }
        local_2f8 = CONCAT44(local_2f8._4_4_,iVar12 + 1);
        *(FSlateTextRun **)(local_300.Data + (longlong)iVar12 * 0x10) = local_2a8;
        *(TReferenceControllerBase<1> **)(local_300.Data + (longlong)iVar12 * 0x10 + 8) =
             pTStack_2a0;
        if (pTStack_2a0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_2a0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_2a0->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_2a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_f8,0,local_f8._8_4_);
        bVar10 = local_f8._12_4_ != 0;
        local_f8._8_8_ = (ulonglong)(uint)local_f8._12_4_ << 0x20;
        if (bVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
        }
        uVar11 = uStack_d0._4_4_;
        local_c8 = 0xffffffff;
        uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
        if (0x80 < uVar11) {
          uStack_d0 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
        }
        if (local_d8 != (void *)0x0) {
          FMemory::Free(local_d8);
        }
        if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_f8._0_8_);
        }
        FVar19.ReferenceController = local_1b8.SharedReferenceCount.ReferenceController;
        if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_108._0_8_);
          FVar19.ReferenceController = local_1b8.SharedReferenceCount.ReferenceController;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar19.ReferenceController);
      if (local_288 != (FSlateTextUnderlineLineHighlighter *)0x0) {
        if ((local_288 == (FSlateTextUnderlineLineHighlighter *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar19.ReferenceController = FStack_280.ReferenceController;
        pFVar8 = local_288;
        if (FStack_280.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_280.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_280.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_288 == (FSlateTextUnderlineLineHighlighter *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar19.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        uStack_224 = *(int *)(pFVar26 + 4) - *(int *)pFVar26;
        local_228 = 0;
        local_278.Range = (FTextRange)((ulonglong)uStack_224 << 0x20);
        local_278.ZOrder = 1;
        local_278.Highlighter.Object = (ILineHighlighter *)pFVar8;
        local_278.Highlighter.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
        if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar19.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_278.LineIndex = uVar24;
        if (((local_2f0.AllocatorInstance.Data <= &local_278) &&
            (&local_278 <
             (FTextLineHighlight *)
             (local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayMax * 0x20))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar12 = local_2f0.ArrayNum;
        if (local_2f0.ArrayNum == local_2f0.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_2f0.AllocatorInstance,&local_2f0.ArrayMax);
        }
        pFVar22 = local_2f0.AllocatorInstance.Data + (longlong)iVar12 * 0x20;
        local_2f0.ArrayNum = iVar12 + 1;
        *(int *)&pFVar22->field_0x0 = local_278.LineIndex;
        *(FTextRange *)(pFVar22 + 4) = local_278.Range;
        *(int *)(pFVar22 + 0xc) = local_278.ZOrder;
        *(ILineHighlighter **)(pFVar22 + 0x10) = local_278.Highlighter.Object;
        *(TReferenceControllerBase<1> **)(pFVar22 + 0x18) =
             local_278.Highlighter.SharedReferenceCount.ReferenceController;
        if (local_278.Highlighter.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_278.Highlighter.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_278.Highlighter.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_278.Highlighter.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
      }
      if (local_238 != (FSlateTextStrikeLineHighlighter *)0x0) {
        if ((local_238 == (FSlateTextStrikeLineHighlighter *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar19.ReferenceController = FStack_230.ReferenceController;
        pFVar9 = local_238;
        if (FStack_230.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_230.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_230.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_238 == (FSlateTextStrikeLineHighlighter *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar19.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        uStack_21c = *(int *)(pFVar26 + 4) - *(int *)pFVar26;
        local_220 = 0;
        local_258.Range = (FTextRange)((ulonglong)uStack_21c << 0x20);
        local_258.ZOrder = 1;
        local_258.Highlighter.Object = (ILineHighlighter *)pFVar9;
        local_258.Highlighter.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
        if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar19.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_258.LineIndex = uVar24;
        if (((local_2f0.AllocatorInstance.Data <= &local_258) &&
            (&local_258 <
             (FTextLineHighlight *)
             (local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayMax * 0x20))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar12 = local_2f0.ArrayNum;
        if (local_2f0.ArrayNum == local_2f0.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_2f0.AllocatorInstance,&local_2f0.ArrayMax);
        }
        local_2f0.ArrayNum = iVar12 + 1;
        pFVar26 = local_2f0.AllocatorInstance.Data + (longlong)iVar12 * 0x20;
        *(int *)&pFVar26->field_0x0 = local_258.LineIndex;
        *(FTextRange *)(pFVar26 + 4) = local_258.Range;
        *(int *)(pFVar26 + 0xc) = local_258.ZOrder;
        *(ILineHighlighter **)(pFVar26 + 0x10) = local_258.Highlighter.Object;
        *(TReferenceControllerBase<1> **)(pFVar26 + 0x18) =
             local_258.Highlighter.SharedReferenceCount.ReferenceController;
        if (local_258.Highlighter.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_258.Highlighter.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_258.Highlighter.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_258.Highlighter.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
      }
      iVar12 = local_2e0.ArrayNum;
      if (local_2e0.ArrayNum == local_2e0.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_2e0.AllocatorInstance,&local_2e0.ArrayMax);
      }
      FVar4.Data = local_300.Data;
      uVar5 = (int)local_2f8;
      uVar6 = local_2f8._4_4_;
      pFVar26 = local_2e0.AllocatorInstance.Data + (longlong)iVar12 * 0x20;
      local_2e0.ArrayNum = iVar12 + 1;
      local_300.Data = (FScriptContainerElement *)0x0;
      local_2f8 = 0;
      if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        paVar20 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar20 = &(FVar7.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar20 = (atomic<int>)((int)*paVar20 + 1);
        UNLOCK();
      }
      *(FString **)&pFVar26->field_0x0 = local_2c8.Object;
      *(TReferenceControllerBase<1> **)(pFVar26 + 8) = FVar7.ReferenceController;
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar20 = (atomic<int>)((int)*paVar20 + 1);
        UNLOCK();
      }
      *(FScriptContainerElement **)(pFVar26 + 0x10) = FVar4.Data;
      *(undefined4 *)(pFVar26 + 0x18) = uVar5;
      *(undefined4 *)(pFVar26 + 0x1c) = uVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)0x0,0);
      DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)local_300.Data,(int)local_2f8);
      if ((TSharedRef<IRun,1> *)local_300.Data != (TSharedRef<IRun,1> *)0x0) {
        FMemory::Free(local_300.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      uVar21 = local_2b8._8_8_ & 0xffffffff;
      uVar24 = uVar24 + 1;
      lVar25 = lVar25 + 8;
      param_1 = local_200;
      param_2 = local_1f8;
    } while ((int)uVar24 < local_2b8.ArrayNum);
  }
  FTextLayout::AddLines(param_2,&local_2e0);
  FTextLayout::SetLineHighlights(param_2,&local_2f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_230.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_280.ReferenceController);
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)local_2f0.AllocatorInstance.Data,local_2f0.ArrayNum);
  if ((FTextLineHighlight *)local_2f0.AllocatorInstance.Data != (FTextLineHighlight *)0x0) {
    FMemory::Free(local_2f0.AllocatorInstance.Data);
  }
  DestructItems<FTextLayout::FNewLineData,int>
            ((FNewLineData *)local_2e0.AllocatorInstance.Data,local_2e0.ArrayNum);
  if ((FNewLineData *)local_2e0.AllocatorInstance.Data != (FNewLineData *)0x0) {
    FMemory::Free(local_2e0.AllocatorInstance.Data);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return;
}

