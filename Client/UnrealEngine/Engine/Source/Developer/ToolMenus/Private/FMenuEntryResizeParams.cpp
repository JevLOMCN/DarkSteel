// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// FMenuEntryResizeParams @ 142c37af0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
FMenuEntryResizeParams::FMenuEntryResizeParams(FMenuEntryResizeParams *this)

{
  (this->ClippingPriority).Value = 0;
  (this->ClippingPriority).bIsSet = false;
  *(undefined8 *)&(this->ClippingPriority).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ClippingPriority).Getter = 0;
  *(undefined8 *)&(this->ClippingPriority).Getter.field_0x8 = 0;
  (this->AllowClipping).Value = false;
  (this->AllowClipping).bIsSet = false;
  *(undefined8 *)&(this->AllowClipping).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AllowClipping).Getter = 0;
  *(undefined8 *)&(this->AllowClipping).Getter.field_0x8 = 0;
  (this->VisibleInOverflow).Value = false;
  (this->VisibleInOverflow).bIsSet = false;
  *(undefined8 *)&(this->VisibleInOverflow).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->VisibleInOverflow).Getter = 0;
  *(undefined8 *)&(this->VisibleInOverflow).Getter.field_0x8 = 0;
  (this->Wrapping).Allow.Value = false;
  (this->Wrapping).Allow.bIsSet = false;
  *(undefined8 *)&(this->Wrapping).Allow.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Wrapping).Allow.Getter = 0;
  *(undefined8 *)&(this->Wrapping).Allow.Getter.field_0x8 = 0;
  (this->Wrapping).Priority.Value = 0;
  (this->Wrapping).Priority.bIsSet = false;
  *(undefined8 *)&(this->Wrapping).Priority.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Wrapping).Priority.Getter = 0;
  *(undefined8 *)&(this->Wrapping).Priority.Getter.field_0x8 = 0;
  (this->Wrapping).Mode.Value = Preferred;
  (this->Wrapping).Mode.bIsSet = false;
  *(undefined8 *)&(this->Wrapping).Mode.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Wrapping).Mode.Getter = 0;
  *(undefined8 *)&(this->Wrapping).Mode.Getter.field_0x8 = 0;
  (this->Wrapping).VerticalOverflowBehavior.bIsSet = false;
  (this->Wrapping).ForceNewLine.bIsSet = false;
  return this;
}

// operator= @ 142c3d4c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
FMenuEntryResizeParams::operator=(FMenuEntryResizeParams *this,FMenuEntryResizeParams *param_1)

{
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *pTVar1;
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *pTVar2;
  TOptional<bool> *pTVar3;
  TOptional<bool> *pTVar4;
  
  (this->ClippingPriority).Value = (param_1->ClippingPriority).Value;
  (this->ClippingPriority).bIsSet = (param_1->ClippingPriority).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ClippingPriority).Getter,&(param_1->ClippingPriority).Getter);
  (this->AllowClipping).Value = (param_1->AllowClipping).Value;
  (this->AllowClipping).bIsSet = (param_1->AllowClipping).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AllowClipping).Getter,&(param_1->AllowClipping).Getter);
  (this->VisibleInOverflow).Value = (param_1->VisibleInOverflow).Value;
  (this->VisibleInOverflow).bIsSet = (param_1->VisibleInOverflow).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->VisibleInOverflow).Getter,&(param_1->VisibleInOverflow).Getter);
  (this->Wrapping).Allow.Value = (param_1->Wrapping).Allow.Value;
  (this->Wrapping).Allow.bIsSet = (param_1->Wrapping).Allow.bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Wrapping).Allow.Getter,&(param_1->Wrapping).Allow.Getter);
  (this->Wrapping).Priority.Value = (param_1->Wrapping).Priority.Value;
  (this->Wrapping).Priority.bIsSet = (param_1->Wrapping).Priority.bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Wrapping).Priority.Getter,&(param_1->Wrapping).Priority.Getter);
  (this->Wrapping).Mode.Value = (param_1->Wrapping).Mode.Value;
  (this->Wrapping).Mode.bIsSet = (param_1->Wrapping).Mode.bIsSet;
  TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Wrapping).Mode.Getter,&(param_1->Wrapping).Mode.Getter);
  pTVar1 = &(param_1->Wrapping).VerticalOverflowBehavior;
  pTVar2 = &(this->Wrapping).VerticalOverflowBehavior;
  if (pTVar1 != pTVar2) {
    if ((param_1->Wrapping).VerticalOverflowBehavior.bIsSet == false) {
      if ((this->Wrapping).VerticalOverflowBehavior.bIsSet != false) {
        (this->Wrapping).VerticalOverflowBehavior.bIsSet = false;
      }
    }
    else {
      pTVar2->TypedValue = pTVar1->TypedValue;
      (this->Wrapping).VerticalOverflowBehavior.bIsSet = true;
    }
  }
  pTVar3 = &(param_1->Wrapping).ForceNewLine;
  pTVar4 = &(this->Wrapping).ForceNewLine;
  if (pTVar3 != pTVar4) {
    if ((param_1->Wrapping).ForceNewLine.bIsSet == false) {
      if ((this->Wrapping).ForceNewLine.bIsSet != false) {
        (this->Wrapping).ForceNewLine.bIsSet = false;
        return this;
      }
    }
    else {
      pTVar4->TypedValue = pTVar3->TypedValue;
      (this->Wrapping).ForceNewLine.bIsSet = true;
    }
  }
  return this;
}

