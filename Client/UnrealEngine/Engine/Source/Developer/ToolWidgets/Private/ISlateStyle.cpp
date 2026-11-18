// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// GetWidgetStyle<FActionButtonStyle> @ 142d58aa0

FActionButtonStyle * __thiscall
ISlateStyle::GetWidgetStyle<FActionButtonStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FActionButtonStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FActionButtonStyle *pFVar4;
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
  pFVar4 = (FActionButtonStyle *)
           (*pcVar1)(this,FActionButtonStyle::TypeName,local_res8,param_3,
                     param_3 == (FActionButtonStyle *)0x0);
  if (pFVar4 == (FActionButtonStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FActionButtonStyle__6B_;
      FButtonStyle::FButtonStyle(&::Default.ButtonStyle);
      ::Default.ButtonContentPadding.bIsSet = false;
      FComboButtonStyle::FComboButtonStyle(&::Default.ComboButtonStyle);
      ::Default.bHasDownArrow = false;
      ::Default.ComboButtonContentPadding.bIsSet = false;
      ::Default.HorizontalContentAlignment.Value = '\x02';
      FTextBlockStyle::FTextBlockStyle(&::Default.TextBlockStyle);
      ::Default.IconBrush.bIsSet = false;
      ::Default.ActionButtonType.ComparisonIndex.Value = 0;
      ::Default.ActionButtonType.Number = 0;
      ::Default.IconButtonStyle.bIsSet = false;
      ::Default.IconColorAndOpacity.bIsSet = false;
      ::Default.IconNormalPadding.bIsSet = false;
      ::Default.IconPressedPadding.bIsSet = false;
      atexit(`FActionButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &::Default;
  }
  return pFVar4;
}

