// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 3

// FMenuEntryStyleParams @ 142c37b90

FMenuEntryStyleParams * __thiscall
FMenuEntryStyleParams::FMenuEntryStyleParams
          (FMenuEntryStyleParams *this,FMenuEntryStyleParams *param_1)

{
  bool bVar1;
  EHorizontalAlignment EVar2;
  
  this->bNoIndent = param_1->bNoIndent;
  EVar2 = param_1->HorizontalAlignment;
  (this->VerticalAlignment).bIsSet = false;
  this->HorizontalAlignment = EVar2;
  bVar1 = (param_1->VerticalAlignment).bIsSet;
  (this->VerticalAlignment).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->VerticalAlignment).TypedValue = (param_1->VerticalAlignment).TypedValue;
  }
  (this->SizeRule).bIsSet = false;
  bVar1 = (param_1->SizeRule).bIsSet;
  (this->SizeRule).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->SizeRule).TypedValue = (param_1->SizeRule).TypedValue;
  }
  (this->MinSize).bIsSet = false;
  bVar1 = (param_1->MinSize).bIsSet;
  (this->MinSize).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->MinSize).TypedValue = (param_1->MinSize).TypedValue;
  }
  (this->MaxSize).bIsSet = false;
  bVar1 = (param_1->MaxSize).bIsSet;
  (this->MaxSize).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->MaxSize).TypedValue = (param_1->MaxSize).TypedValue;
  }
  (this->DesiredWidth).bIsSet = false;
  bVar1 = (param_1->DesiredWidth).bIsSet;
  (this->DesiredWidth).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->DesiredWidth).TypedValue = (param_1->DesiredWidth).TypedValue;
  }
  (this->DesiredHeight).bIsSet = false;
  bVar1 = (param_1->DesiredHeight).bIsSet;
  (this->DesiredHeight).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->DesiredHeight).TypedValue = (param_1->DesiredHeight).TypedValue;
  }
  (this->FillSize).bIsSet = false;
  bVar1 = (param_1->FillSize).bIsSet;
  (this->FillSize).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->FillSize).TypedValue = (param_1->FillSize).TypedValue;
  }
  (this->FillSizeMin).bIsSet = false;
  bVar1 = (param_1->FillSizeMin).bIsSet;
  (this->FillSizeMin).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->FillSizeMin).TypedValue = (param_1->FillSizeMin).TypedValue;
  }
  (this->MinimumSize).Value = (param_1->MinimumSize).Value;
  (this->MinimumSize).bIsSet = (param_1->MinimumSize).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinimumSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->MinimumSize).Getter);
  (this->MaximumSize).Value = (param_1->MaximumSize).Value;
  (this->MaximumSize).bIsSet = (param_1->MaximumSize).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaximumSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->MaximumSize).Getter);
  (this->DesiredWidthOverride).Value.Size = (param_1->DesiredWidthOverride).Value.Size;
  (this->DesiredWidthOverride).bIsSet = (param_1->DesiredWidthOverride).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredWidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->DesiredWidthOverride).Getter);
  (this->DesiredHeightOverride).Value.Size = (param_1->DesiredHeightOverride).Value.Size;
  (this->DesiredHeightOverride).bIsSet = (param_1->DesiredHeightOverride).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredHeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->DesiredHeightOverride).Getter);
  return this;
}

// operator= @ 142c3d610

FMenuEntryStyleParams * __thiscall
FMenuEntryStyleParams::operator=(FMenuEntryStyleParams *this,FMenuEntryStyleParams *param_1)

{
  this->bNoIndent = param_1->bNoIndent;
  this->HorizontalAlignment = param_1->HorizontalAlignment;
  if (&param_1->VerticalAlignment != &this->VerticalAlignment) {
    if ((param_1->VerticalAlignment).bIsSet == false) {
      if ((this->VerticalAlignment).bIsSet != false) {
        (this->VerticalAlignment).bIsSet = false;
      }
    }
    else {
      (this->VerticalAlignment).TypedValue = (param_1->VerticalAlignment).TypedValue;
      (this->VerticalAlignment).bIsSet = true;
    }
  }
  if (&param_1->SizeRule != &this->SizeRule) {
    if ((param_1->SizeRule).bIsSet == false) {
      if ((this->SizeRule).bIsSet != false) {
        (this->SizeRule).bIsSet = false;
      }
    }
    else {
      (this->SizeRule).TypedValue = (param_1->SizeRule).TypedValue;
      (this->SizeRule).bIsSet = true;
    }
  }
  if (&param_1->MinSize != &this->MinSize) {
    if ((param_1->MinSize).bIsSet == false) {
      if ((this->MinSize).bIsSet != false) {
        (this->MinSize).bIsSet = false;
      }
    }
    else {
      (this->MinSize).TypedValue = (param_1->MinSize).TypedValue;
      (this->MinSize).bIsSet = true;
    }
  }
  if (&param_1->MaxSize != &this->MaxSize) {
    if ((param_1->MaxSize).bIsSet == false) {
      if ((this->MaxSize).bIsSet != false) {
        (this->MaxSize).bIsSet = false;
      }
    }
    else {
      (this->MaxSize).TypedValue = (param_1->MaxSize).TypedValue;
      (this->MaxSize).bIsSet = true;
    }
  }
  if (&param_1->DesiredWidth != &this->DesiredWidth) {
    if ((param_1->DesiredWidth).bIsSet == false) {
      if ((this->DesiredWidth).bIsSet != false) {
        (this->DesiredWidth).bIsSet = false;
      }
    }
    else {
      (this->DesiredWidth).TypedValue = (param_1->DesiredWidth).TypedValue;
      (this->DesiredWidth).bIsSet = true;
    }
  }
  if (&param_1->DesiredHeight != &this->DesiredHeight) {
    if ((param_1->DesiredHeight).bIsSet == false) {
      if ((this->DesiredHeight).bIsSet != false) {
        (this->DesiredHeight).bIsSet = false;
      }
    }
    else {
      (this->DesiredHeight).TypedValue = (param_1->DesiredHeight).TypedValue;
      (this->DesiredHeight).bIsSet = true;
    }
  }
  if (&param_1->FillSize != &this->FillSize) {
    if ((param_1->FillSize).bIsSet == false) {
      if ((this->FillSize).bIsSet != false) {
        (this->FillSize).bIsSet = false;
      }
    }
    else {
      (this->FillSize).TypedValue = (param_1->FillSize).TypedValue;
      (this->FillSize).bIsSet = true;
    }
  }
  if (&param_1->FillSizeMin != &this->FillSizeMin) {
    if ((param_1->FillSizeMin).bIsSet == false) {
      if ((this->FillSizeMin).bIsSet != false) {
        (this->FillSizeMin).bIsSet = false;
      }
    }
    else {
      (this->FillSizeMin).TypedValue = (param_1->FillSizeMin).TypedValue;
      (this->FillSizeMin).bIsSet = true;
    }
  }
  (this->MinimumSize).Value = (param_1->MinimumSize).Value;
  (this->MinimumSize).bIsSet = (param_1->MinimumSize).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinimumSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->MinimumSize).Getter);
  (this->MaximumSize).Value = (param_1->MaximumSize).Value;
  (this->MaximumSize).bIsSet = (param_1->MaximumSize).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaximumSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->MaximumSize).Getter);
  (this->DesiredWidthOverride).Value.Size = (param_1->DesiredWidthOverride).Value.Size;
  (this->DesiredWidthOverride).bIsSet = (param_1->DesiredWidthOverride).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredWidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->DesiredWidthOverride).Getter);
  (this->DesiredHeightOverride).Value.Size = (param_1->DesiredHeightOverride).Value.Size;
  (this->DesiredHeightOverride).bIsSet = (param_1->DesiredHeightOverride).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredHeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->DesiredHeightOverride).Getter);
  return this;
}

// operator= @ 142c3d810

FMenuEntryStyleParams * __thiscall
FMenuEntryStyleParams::operator=(FMenuEntryStyleParams *this,FMenuEntryStyleParams *param_1)

{
  this->bNoIndent = param_1->bNoIndent;
  this->HorizontalAlignment = param_1->HorizontalAlignment;
  if (&param_1->VerticalAlignment != &this->VerticalAlignment) {
    if ((param_1->VerticalAlignment).bIsSet == false) {
      if ((this->VerticalAlignment).bIsSet != false) {
        (this->VerticalAlignment).bIsSet = false;
      }
    }
    else {
      (this->VerticalAlignment).TypedValue = (param_1->VerticalAlignment).TypedValue;
      (this->VerticalAlignment).bIsSet = true;
    }
  }
  if (&param_1->SizeRule != &this->SizeRule) {
    if ((param_1->SizeRule).bIsSet == false) {
      if ((this->SizeRule).bIsSet != false) {
        (this->SizeRule).bIsSet = false;
      }
    }
    else {
      (this->SizeRule).TypedValue = (param_1->SizeRule).TypedValue;
      (this->SizeRule).bIsSet = true;
    }
  }
  if (&param_1->MinSize != &this->MinSize) {
    if ((param_1->MinSize).bIsSet == false) {
      if ((this->MinSize).bIsSet != false) {
        (this->MinSize).bIsSet = false;
      }
    }
    else {
      (this->MinSize).TypedValue = (param_1->MinSize).TypedValue;
      (this->MinSize).bIsSet = true;
    }
  }
  if (&param_1->MaxSize != &this->MaxSize) {
    if ((param_1->MaxSize).bIsSet == false) {
      if ((this->MaxSize).bIsSet != false) {
        (this->MaxSize).bIsSet = false;
      }
    }
    else {
      (this->MaxSize).TypedValue = (param_1->MaxSize).TypedValue;
      (this->MaxSize).bIsSet = true;
    }
  }
  if (&param_1->DesiredWidth != &this->DesiredWidth) {
    if ((param_1->DesiredWidth).bIsSet == false) {
      if ((this->DesiredWidth).bIsSet != false) {
        (this->DesiredWidth).bIsSet = false;
      }
    }
    else {
      (this->DesiredWidth).TypedValue = (param_1->DesiredWidth).TypedValue;
      (this->DesiredWidth).bIsSet = true;
    }
  }
  if (&param_1->DesiredHeight != &this->DesiredHeight) {
    if ((param_1->DesiredHeight).bIsSet == false) {
      if ((this->DesiredHeight).bIsSet != false) {
        (this->DesiredHeight).bIsSet = false;
      }
    }
    else {
      (this->DesiredHeight).TypedValue = (param_1->DesiredHeight).TypedValue;
      (this->DesiredHeight).bIsSet = true;
    }
  }
  if (&param_1->FillSize != &this->FillSize) {
    if ((param_1->FillSize).bIsSet == false) {
      if ((this->FillSize).bIsSet != false) {
        (this->FillSize).bIsSet = false;
      }
    }
    else {
      (this->FillSize).TypedValue = (param_1->FillSize).TypedValue;
      (this->FillSize).bIsSet = true;
    }
  }
  if (&param_1->FillSizeMin != &this->FillSizeMin) {
    if ((param_1->FillSizeMin).bIsSet == false) {
      if ((this->FillSizeMin).bIsSet != false) {
        (this->FillSizeMin).bIsSet = false;
      }
    }
    else {
      (this->FillSizeMin).TypedValue = (param_1->FillSizeMin).TypedValue;
      (this->FillSizeMin).bIsSet = true;
    }
  }
  (this->MinimumSize).Value = (param_1->MinimumSize).Value;
  (this->MinimumSize).bIsSet = (param_1->MinimumSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinimumSize).Getter,&(param_1->MinimumSize).Getter);
  (this->MaximumSize).Value = (param_1->MaximumSize).Value;
  (this->MaximumSize).bIsSet = (param_1->MaximumSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaximumSize).Getter,&(param_1->MaximumSize).Getter);
  (this->DesiredWidthOverride).Value.Size = (param_1->DesiredWidthOverride).Value.Size;
  (this->DesiredWidthOverride).bIsSet = (param_1->DesiredWidthOverride).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->DesiredWidthOverride).Getter,&(param_1->DesiredWidthOverride).Getter);
  (this->DesiredHeightOverride).Value.Size = (param_1->DesiredHeightOverride).Value.Size;
  (this->DesiredHeightOverride).bIsSet = (param_1->DesiredHeightOverride).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->DesiredHeightOverride).Getter,&(param_1->DesiredHeightOverride).Getter);
  return this;
}

