// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 12

// GetWidgetStyle<FButtonStyle> @ 142539cb0

FButtonStyle * __thiscall
ISlateStyle::GetWidgetStyle<FButtonStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FButtonStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FButtonStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FButtonStyle *)
           (*pcVar1)(this,FButtonStyle::TypeName,local_res8,param_3,param_3 == (FButtonStyle *)0x0);
  if (pFVar4 == (FButtonStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FButtonStyle::FButtonStyle(&::Default);
      atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// GetWidgetStyle<FCheckBoxStyle> @ 142539e00

FCheckBoxStyle * __thiscall
ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FCheckBoxStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FCheckBoxStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FCheckBoxStyle *)
           (*pcVar1)(this,FCheckBoxStyle::TypeName,local_res8,param_3,
                     param_3 == (FCheckBoxStyle *)0x0);
  if (pFVar4 == (FCheckBoxStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FCheckBoxStyle::FCheckBoxStyle(&::Default);
      atexit(`FCheckBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// GetWidgetStyle<FComboButtonStyle> @ 142539f50

FComboButtonStyle * __thiscall
ISlateStyle::GetWidgetStyle<FComboButtonStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FComboButtonStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FComboButtonStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FComboButtonStyle *)
           (*pcVar1)(this,FComboButtonStyle::TypeName,local_res8,param_3,
                     param_3 == (FComboButtonStyle *)0x0);
  if (pFVar4 == (FComboButtonStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FComboButtonStyle::FComboButtonStyle(&::Default);
      atexit(`FComboButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// GetWidgetStyle<FEditableTextBoxStyle> @ 14253a0a0

FEditableTextBoxStyle * __thiscall
ISlateStyle::GetWidgetStyle<FEditableTextBoxStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FEditableTextBoxStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FEditableTextBoxStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FEditableTextBoxStyle *)
           (*pcVar1)(this,FEditableTextBoxStyle::TypeName,local_res8,param_3,
                     param_3 == (FEditableTextBoxStyle *)0x0);
  if (pFVar4 == (FEditableTextBoxStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FEditableTextBoxStyle::FEditableTextBoxStyle(&::Default);
      atexit(`FEditableTextBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// GetWidgetStyle<FScrollBarStyle> @ 14253a1f0

FScrollBarStyle * __thiscall
ISlateStyle::GetWidgetStyle<FScrollBarStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FScrollBarStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FScrollBarStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FScrollBarStyle *)
           (*pcVar1)(this,FScrollBarStyle::TypeName,local_res8,param_3,
                     param_3 == (FScrollBarStyle *)0x0);
  if (pFVar4 == (FScrollBarStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FScrollBarStyle::FScrollBarStyle(&::Default);
      atexit(`FScrollBarStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// GetWidgetStyle<FSearchBoxStyle> @ 14253a340

FSearchBoxStyle * __thiscall
ISlateStyle::GetWidgetStyle<FSearchBoxStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FSearchBoxStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FSearchBoxStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FSearchBoxStyle *)
           (*pcVar1)(this,FSearchBoxStyle::TypeName,local_res8,param_3,
                     param_3 == (FSearchBoxStyle *)0x0);
  if (pFVar4 == (FSearchBoxStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FSearchBoxStyle__6B_;
      FEditableTextBoxStyle::FEditableTextBoxStyle(&::Default.TextBoxStyle);
      FSlateFontInfo::FSlateFontInfo(&::Default.ActiveFontInfo);
      FSlateBrush::FSlateBrush(&::Default.UpArrowImage);
      FSlateBrush::FSlateBrush(&::Default.DownArrowImage);
      FSlateBrush::FSlateBrush(&::Default.GlassImage);
      FSlateBrush::FSlateBrush(&::Default.ClearImage);
      ::Default.ImageSizeOverride.bIsSet = false;
      ::Default.ImagePadding = (FMargin)ZEXT816(0);
      ::Default.bLeftAlignButtons_DEPRECATED = false;
      ::Default.bLeftAlignSearchResultButtons = false;
      ::Default.bLeftAlignGlassImageAndClearButton = false;
      atexit(`FSearchBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// GetWidgetStyle<FSpinBoxStyle> @ 14253a510

FSpinBoxStyle * __thiscall
ISlateStyle::GetWidgetStyle<FSpinBoxStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FSpinBoxStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FSpinBoxStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FSpinBoxStyle *)
           (*pcVar1)(this,FSpinBoxStyle::TypeName,local_res8,param_3,param_3 == (FSpinBoxStyle *)0x0
                    );
  if (pFVar4 == (FSpinBoxStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FSpinBoxStyle::FSpinBoxStyle(&::Default);
      atexit(`FSpinBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// GetWidgetStyle<FTableViewStyle> @ 14253a660

FTableViewStyle * __thiscall
ISlateStyle::GetWidgetStyle<FTableViewStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FTableViewStyle *param_3)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  FString *pFVar3;
  FTableViewStyle *pFVar4;
  FSlateBrush *pFVar5;
  ForAnyElementType FVar6;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  TVar2 = (TVector2<float>_u_0)param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_d8,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_c8);
    ::FString::ConcatFF(&local_e8,pFVar3,&local_d8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar6.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)&local_res8._s_0,(wchar_t *)FVar6.Data);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    TVar2 = local_res8;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      TVar2 = local_res8;
    }
  }
  local_res8 = TVar2;
  pFVar4 = (FTableViewStyle *)
           (*pcVar1)(this,FTableViewStyle::TypeName,local_res8,param_3,
                     param_3 == (FTableViewStyle *)0x0);
  if (pFVar4 == (FTableViewStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FTableViewStyle__6B_;
      local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pFVar5 = (FSlateBrush *)
               FSlateNoResource::FSlateNoResource
                         ((FSlateNoResource *)local_b8,
                          (FDeprecateVector2DParameter *)&local_res8._s_0);
      FSlateBrush::FSlateBrush(&::Default.BackgroundBrush,pFVar5);
      local_b8[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
      atexit(`FTableViewStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// GetWidgetStyle<FTextBlockStyle> @ 14253a820

FTextBlockStyle * __thiscall
ISlateStyle::GetWidgetStyle<FTextBlockStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FTextBlockStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FTextBlockStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FTextBlockStyle *)
           (*pcVar1)(this,FTextBlockStyle::TypeName,local_res8,param_3,
                     param_3 == (FTextBlockStyle *)0x0);
  if (pFVar4 == (FTextBlockStyle *)0x0) {
    pFVar4 = FTextBlockStyle::GetDefault();
  }
  return pFVar4;
}

// GetWidgetStyle<FToolBarStyle> @ 14253a910

FToolBarStyle * __thiscall
ISlateStyle::GetWidgetStyle<FToolBarStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FToolBarStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FToolBarStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FToolBarStyle *)
           (*pcVar1)(this,FToolBarStyle::TypeName,local_res8,param_3,param_3 == (FToolBarStyle *)0x0
                    );
  if (pFVar4 == (FToolBarStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FToolBarStyle::FToolBarStyle(&::Default);
      atexit(`FToolBarStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

// ~ISlateStyle @ 14254c8d0

void __thiscall ISlateStyle::~ISlateStyle(ISlateStyle *this)

{
  *this = (ISlateStyle)&___7ISlateStyle__6B_;
  return;
}

// GetWidgetStyleNames @ 14258a4b0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
ISlateStyle::GetWidgetStyleNames(ISlateStyle *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_ISlateStyle::GetWidgetStyleNames(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_ISlateStyle::GetWidgetStyleNames(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_ISlateStyle::GetWidgetStyleNames(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`ISlateStyle::GetWidgetStyleNames'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_ISlateStyle::GetWidgetStyleNames(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
         &`public:_virtual_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_ISlateStyle::GetWidgetStyleNames(void)const___ptr64'
          ::__l2::Dummy;
}

