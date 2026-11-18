// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 6

// Find @ 14d7a7900

FMediaIOCommonDisplayModeInfo * __cdecl
FMediaIOCommonDisplayModes::Find
          (int param_1,int param_2,FFrameRate *param_3,EMediaIOStandardType param_4)

{
  FFrameRate *pFVar1;
  double dVar2;
  
  pFVar1 = &MediaIOCommonDisplayModeInfo::AllCommonDisplayModes[0].FrameRate;
  while ((((((FMediaIOCommonDisplayModeInfo *)(pFVar1 + -1))->Width != param_1 ||
           (((FMediaIOCommonDisplayModeInfo *)(pFVar1 + -1))->Height != param_2)) ||
          (dVar2 = (double)pFVar1->Numerator / (double)pFVar1->Denominator -
                   (double)param_3->Numerator / (double)param_3->Denominator,
          __real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (*(EMediaIOStandardType *)(pFVar1 + 1) != param_4))) {
    pFVar1 = pFVar1 + 5;
    if (0x154d913f7 < (longlong)pFVar1) {
      return (FMediaIOCommonDisplayModeInfo *)0x0;
    }
  }
  return (FMediaIOCommonDisplayModeInfo *)(pFVar1 + -1);
}

// Find @ 14d7a7980

FMediaIOCommonDisplayModeResolutionInfo * __cdecl
FMediaIOCommonDisplayModes::Find(int param_1,int param_2)

{
  FMediaIOCommonDisplayModeResolutionInfo *pFVar1;
  
  pFVar1 = MediaIOCommonDisplayModeInfo::AllCommonDisplayModeResolutions;
  while ((pFVar1->Width != param_1 || (pFVar1->Height != param_2))) {
    pFVar1 = pFVar1 + 1;
    if (0x154d9099f < (longlong)pFVar1) {
      return (FMediaIOCommonDisplayModeResolutionInfo *)0x0;
    }
  }
  return pFVar1;
}

// GetAllModes @ 14d7a9000

TArrayView<FMediaIOCommonDisplayModeInfo_const_,int> * __cdecl
FMediaIOCommonDisplayModes::GetAllModes
          (TArrayView<FMediaIOCommonDisplayModeInfo_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = MediaIOCommonDisplayModeInfo::AllCommonDisplayModes;
  __return_storage_ptr__->ArrayNum = 0x42;
  return __return_storage_ptr__;
}

// GetAllResolutions @ 14d7a9020

TArrayView<FMediaIOCommonDisplayModeResolutionInfo_const_,int> * __cdecl
FMediaIOCommonDisplayModes::GetAllResolutions
          (TArrayView<FMediaIOCommonDisplayModeResolutionInfo_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = MediaIOCommonDisplayModeInfo::AllCommonDisplayModeResolutions;
  __return_storage_ptr__->ArrayNum = 0xc;
  return __return_storage_ptr__;
}

// GetMediaIOCommonDisplayModeInfoName @ 14d7ab390

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FMediaIOCommonDisplayModes::GetMediaIOCommonDisplayModeInfoName
          (FText *__return_storage_ptr__,int param_1,int param_2,FFrameRate *param_3,
          EMediaIOStandardType param_4)

{
  ITextData *pIVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FSharedReferencer<1> FVar7;
  FFrameRate *pFVar8;
  FMediaIOCommonDisplayModeResolutionInfo *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  double dVar12;
  undefined1 local_d8 [8];
  FText local_d0;
  TSharedPtr<FCulture,1> local_c0;
  TSharedPtr<FCulture,1> local_b0;
  TSharedPtr<FCulture,1> local_a0;
  TSharedPtr<FCulture,1> local_90;
  FNumberFormattingOptions local_80;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  pFVar8 = &MediaIOCommonDisplayModeInfo::AllCommonDisplayModes[0].FrameRate;
  do {
    if ((((((FMediaIOCommonDisplayModeInfo *)(pFVar8 + -1))->Width == param_1) &&
         (((FMediaIOCommonDisplayModeInfo *)(pFVar8 + -1))->Height == param_2)) &&
        (dVar12 = (double)pFVar8->Numerator / (double)pFVar8->Denominator -
                  (double)param_3->Numerator / (double)param_3->Denominator,
        (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee2308c3a)) && (*(EMediaIOStandardType *)(pFVar8 + 1) == param_4)) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (((FText *)(pFVar8 + 2))->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_d8);
      }
      __return_storage_ptr__->Flags = *(uint *)(pFVar8 + 3);
      return __return_storage_ptr__;
    }
    pFVar8 = pFVar8 + 5;
  } while ((longlong)pFVar8 < 0x154d913f8);
  FNumberFormattingOptions::FNumberFormattingOptions(&local_80);
  local_80.AlwaysSign = false;
  local_80.UseGrouping = false;
  local_80.MaximumFractionalDigits = 2;
  pFVar2 = FText::GetEmpty();
  local_d0.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 8))(local_d0.TextData.Reference,local_d8);
  }
  local_d0.Flags = pFVar2->Flags;
  if (param_4 == Progressive) {
    pwVar11 = L"p";
    pwVar10 = L"Progressive_Short";
  }
  else if (param_4 == Interlaced) {
    pwVar11 = L"i";
    pwVar10 = L"Interlaced_Short";
  }
  else {
    if (param_4 != ProgressiveSegmentedFrame) goto LAB_14d7ab512;
    pwVar11 = L"psf";
    pwVar10 = L"ProgressiveSegmentedFrame_Short";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_c0,L"CommonDisplayMode",pwVar10,pwVar11);
  FText::operator=(&local_d0,pFVar2);
  if (local_c0.Object != (FCulture *)0x0) {
    (**(code **)((((local_c0.Object)->Implementation).Ptr)->ICULocale).language)();
  }
LAB_14d7ab512:
  pFVar9 = MediaIOCommonDisplayModeInfo::AllCommonDisplayModeResolutions;
  while ((pFVar9->Width != param_1 || (pFVar9->Height != param_2))) {
    pFVar9 = pFVar9 + 1;
    if (0x154d9099f < (longlong)pFVar9) {
      local_90.Object = (FCulture *)local_d0.TextData.Reference;
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 8))
                  (local_d0.TextData.Reference,local_d8);
      }
      local_90.SharedReferenceCount.ReferenceController._0_4_ = local_d0.Flags;
      local_c0.Object = (FCulture *)0x0;
      local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar2 = FText::AsNumber(&local_58,(double)param_3->Numerator / (double)param_3->Denominator,
                               &local_80,&local_c0);
      local_b0.Object = (FCulture *)0x0;
      local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar3 = FText::AsNumber(&local_48,param_2,(FNumberFormattingOptions *)0x0,&local_b0);
      local_a0.Object = (FCulture *)0x0;
      local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar4 = FText::AsNumber(&local_38,param_1,(FNumberFormattingOptions *)0x0,&local_a0);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"CommonDisplayMode",L"Undefined_ModeResolution",
                          L"{0}x{1}x{2}{3}");
      pFVar6 = FTextFormat::FTextFormat(&local_28,pFVar5,Default);
      FText::Format<FText,FText,FText,FText>
                (__return_storage_ptr__,pFVar6,pFVar4,pFVar3,pFVar2,(FText *)&local_90);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
      FVar7.ReferenceController = local_c0.SharedReferenceCount.ReferenceController;
LAB_14d7ab633:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      return __return_storage_ptr__;
    }
  }
  local_b0.Object = (FCulture *)local_d0.TextData.Reference;
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 8))(local_d0.TextData.Reference,local_d8);
  }
  local_b0.SharedReferenceCount.ReferenceController._0_4_ = local_d0.Flags;
  local_90.Object = (FCulture *)0x0;
  local_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = FText::AsNumber(&local_68,(double)param_3->Numerator / (double)param_3->Denominator,
                           &local_80,&local_90);
  local_a0.Object = (FCulture *)(pFVar9->Name).TextData.Reference;
  if (local_a0.Object != (FCulture *)0x0) {
    (*(code *)((((local_a0.Object)->Implementation).Ptr)->ICULocale)._padding_)
              (local_a0.Object,local_d8);
  }
  local_a0.SharedReferenceCount.ReferenceController._0_4_ = (pFVar9->Name).Flags;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_c0,L"CommonDisplayMode",L"Undefined_Mode",L"{0}x{1}{2}");
  pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar3,Default);
  FText::Format<FText,FText,FText>
            (__return_storage_ptr__,pFVar6,(FText *)&local_a0,pFVar2,(FText *)&local_b0);
  FVar7.ReferenceController = local_90.SharedReferenceCount.ReferenceController;
  if (local_c0.Object != (FCulture *)0x0) {
    (**(code **)((((local_c0.Object)->Implementation).Ptr)->ICULocale).language)();
    FVar7.ReferenceController = local_90.SharedReferenceCount.ReferenceController;
  }
  goto LAB_14d7ab633;
}

// GetMediaIOCommonDisplayModeResolutionInfoName @ 14d7ab740

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FMediaIOCommonDisplayModes::GetMediaIOCommonDisplayModeResolutionInfoName
          (FText *__return_storage_ptr__,int param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FMediaIOCommonDisplayModeResolutionInfo *pFVar6;
  undefined1 local_res20 [8];
  TSharedPtr<FCulture,1> local_68;
  TSharedPtr<FCulture,1> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar6 = MediaIOCommonDisplayModeInfo::AllCommonDisplayModeResolutions;
  while ((pFVar6->Width != param_1 || (pFVar6->Height != param_2))) {
    pFVar6 = pFVar6 + 1;
    if (0x154d9099f < (longlong)pFVar6) {
      local_58.Object = (FCulture *)0x0;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar2 = FText::AsNumber(&local_38,param_2,(FNumberFormattingOptions *)0x0,&local_58);
      local_68.Object = (FCulture *)0x0;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar3 = FText::AsNumber(&local_28,param_1,(FNumberFormattingOptions *)0x0,&local_68);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"CommonDisplayMode",L"Undefined_Resolution",L"{0}x{1}");
      pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
      FText::Format<FText,FText>(__return_storage_ptr__,pFVar5,pFVar3,pFVar2);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar6->Name).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
  }
  __return_storage_ptr__->Flags = (pFVar6->Name).Flags;
  return __return_storage_ptr__;
}

