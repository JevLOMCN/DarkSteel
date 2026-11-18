// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgetsCore
// Functions: 1

// SetAttribute<FSlateColor,FSlateColor> @ 14d7e7490

bool __thiscall
SWidget::SetAttribute<FSlateColor,FSlateColor>
          (SWidget *this,TAttribute<FSlateColor> *param_1,TAttribute<FSlateColor> *param_2,
          EInvalidateWidgetReason param_3)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<FSlateColor>::IdenticalTo(param_1,param_2);
  if (!bVar1) {
    bVar1 = TAttribute<FSlateColor>::IsBound(param_1);
    bVar2 = TAttribute<FSlateColor>::IsBound(param_2);
    TAttribute<FSlateColor>::operator=(param_1,param_2);
    EVar3 = param_3 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_3;
    }
    Invalidate(this,EVar3);
    return true;
  }
  return false;
}

