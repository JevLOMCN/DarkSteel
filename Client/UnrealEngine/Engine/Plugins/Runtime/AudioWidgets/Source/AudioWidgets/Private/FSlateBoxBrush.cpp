// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// FSlateBoxBrush @ 14d8b6860

FSlateBoxBrush * __thiscall
FSlateBoxBrush::FSlateBoxBrush
          (FSlateBoxBrush *this,UObject *param_1,FMargin *param_2,FSlateColor *param_3,Type param_4)

{
  TVector2<float>_u_0 local_18 [2];
  
  local_18[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Box,(FName)0x0,param_2,NoTile,param_4,
             (FDeprecateVector2DParameter *)&local_18[0]._s_0,param_3,param_1,false);
  *(undefined ***)this = &___7FSlateBoxBrush__6B_;
  return this;
}

