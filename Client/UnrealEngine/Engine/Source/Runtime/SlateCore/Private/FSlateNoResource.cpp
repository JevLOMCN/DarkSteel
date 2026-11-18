// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FSlateNoResource @ 142546070

FSlateNoResource * __thiscall
FSlateNoResource::FSlateNoResource(FSlateNoResource *this,FDeprecateVector2DParameter *param_1)

{
  FMargin local_18;
  
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,NoDrawType,(FName)0x0,&local_18,NoTile,NoImage,param_1,
             &FLinearColor::White,(UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateNoResource__6B_;
  return this;
}

