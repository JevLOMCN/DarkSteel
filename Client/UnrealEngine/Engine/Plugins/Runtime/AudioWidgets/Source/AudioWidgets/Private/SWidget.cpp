// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// SetAttribute<TOptional<UE::Math::TVector2<double>_>,TOptional<UE::Math::TVector2<double>_>_> @ 14d8a5260

bool __thiscall
SWidget::
SetAttribute<TOptional<UE::Math::TVector2<double>_>,TOptional<UE::Math::TVector2<double>_>_>
          (SWidget *this,TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_1,
          TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_2,
          EInvalidateWidgetReason param_3)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::IdenticalTo(param_1,param_2);
  if (!bVar1) {
    bVar1 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::IsBound(param_1);
    bVar2 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::IsBound(param_2);
    TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=(param_1,param_2);
    EVar3 = param_3 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_3;
    }
    Invalidate(this,EVar3);
    return true;
  }
  return false;
}

