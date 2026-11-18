// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// PaintDropIndicator @ 14a801d60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<UObject_*>::PaintDropIndicator
          (STableRow<UObject_*> *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  EItemDropZone EVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((this->ItemDropZone).bIsSet != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->PaintDropIndicatorEvent,&local_38);
    if (((*(int *)&(this->PaintDropIndicatorEvent).field_0x10 == 0) ||
        (plVar6 = *(longlong **)&(this->PaintDropIndicatorEvent).field_0x8,
        plVar6 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      pcVar2 = *(code **)(this->_padding_ + 0x88);
      if (((this->ItemDropZone).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      param_5 = (*pcVar2)(this,(this->ItemDropZone).TypedValue,param_1,param_2,param_3,param_4,
                          param_5,param_6,param_7);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if (((this->ItemDropZone).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      EVar1 = (this->ItemDropZone).TypedValue;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->PaintDropIndicatorEvent,&local_20);
      if (*(int *)&(this->PaintDropIndicatorEvent).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->PaintDropIndicatorEvent).field_0x8;
      }
      param_5 = (**(code **)(*plVar6 + 0x60))
                          (plVar6,EVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
    }
  }
  return param_5;
}

