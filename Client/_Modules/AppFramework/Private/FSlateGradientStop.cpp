// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FSlateGradientStop<UE::Math::TVector2<float>_> @ 143040010

FSlateGradientStop * __thiscall
FSlateGradientStop::FSlateGradientStop<UE::Math::TVector2<float>_>
          (FSlateGradientStop *this,TVector2<float> *param_1,FLinearColor *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_2->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  (this->Position).field0_0x0 = param_1->field0_0x0;
  *(undefined8 *)&(this->Color).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar2;
  return this;
}

