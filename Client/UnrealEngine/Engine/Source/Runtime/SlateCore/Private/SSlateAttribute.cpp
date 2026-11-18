// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// Callback @ 142568680

int __thiscall `FSlateAttributeTest::RunTest'::__l9::SSlateAttribute::Callback(void *this)

{
  return 0;
}

// ComputeDesiredSize @ 142568810

TVector2<double> * __thiscall
`FSlateAttributeTest::RunTest'::__l9::SSlateAttribute::ComputeDesiredSize
          (void *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// OnPaint @ 14258cf50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
`FSlateAttributeTest::RunTest'::__l9::SSlateAttribute::OnPaint
          (void *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  return param_5;
}

