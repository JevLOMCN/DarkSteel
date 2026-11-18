// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// ComputeDesiredSize @ 1425d2220

TVector2<double> * __thiscall
UE::Slate::Test::Private::SSingleChild::ComputeDesiredSize
          (SSingleChild *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// GetChildren @ 1425dfcf0

FChildren * __thiscall UE::Slate::Test::Private::SSingleChild::GetChildren(SSingleChild *this)

{
  return (FChildren *)&this->ChildSlot;
}

// OnArrangeChildren @ 1425ecc30

void __thiscall
UE::Slate::Test::Private::SSingleChild::OnArrangeChildren
          (SSingleChild *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  return;
}

// OnPaint @ 1425f05b0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Slate::Test::Private::SSingleChild::OnPaint
          (SSingleChild *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  return param_5;
}

