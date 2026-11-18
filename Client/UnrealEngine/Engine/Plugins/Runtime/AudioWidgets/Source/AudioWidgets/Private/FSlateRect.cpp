// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// FSlateRect @ 14d8b68d0

FSlateRect * __thiscall
FSlateRect::FSlateRect
          (FSlateRect *this,FDeprecateVector2DParameter *param_1,
          FDeprecateVector2DParameter *param_2)

{
  this->Left = *(float *)param_1;
  this->Top = *(float *)&param_1->field_0x4;
  this->Right = *(float *)param_2;
  this->Bottom = *(float *)&param_2->field_0x4;
  return this;
}

// FSlateRect @ 14d8b6900

FSlateRect * __thiscall
FSlateRect::FSlateRect(FSlateRect *this,float param_1,float param_2,float param_3,float param_4)

{
  this->Bottom = param_4;
  this->Left = param_1;
  this->Top = param_2;
  this->Right = param_3;
  return this;
}

