// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// RoundToInt @ 141c95d00

int __cdecl
`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::
FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt(float param_1)

{
  float fVar1;
  
  fVar1 = FMath::RoundHalfToEven(param_1);
  return (int)fVar1;
}

