// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// ComputeDesiredSize @ 1425d1fa0

TVector2<double> * __thiscall
UE::Slate::Private::SEmptyLeftWidget::ComputeDesiredSize
          (SEmptyLeftWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 1425d1fc0

TVector2<double> * __thiscall
UE::Slate::Test::Private::SEmptyLeftWidget::ComputeDesiredSize
          (SEmptyLeftWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// OnPaint @ 1425efc40

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Slate::Private::SEmptyLeftWidget::OnPaint
          (SEmptyLeftWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  return param_5;
}

// OnPaint @ 1425efc50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Slate::Test::Private::SEmptyLeftWidget::OnPaint
          (SEmptyLeftWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  return param_5;
}

