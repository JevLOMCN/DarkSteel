// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// MathVectorRoundToIntHalfToEvenTest @ 141c95590

bool __thiscall
FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest
          (FMathVectorRoundToIntHalfToEvenTestsClass *this)

{
  float fVar1;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&_FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest_::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  local_res8 [4];
  
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-Zero",0.0,0,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-One",__real_3f800000,1,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-LessHalf",__real_3fb33333,1,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegGreaterHalf",__real_bfb33333,-1,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-LessNearHalf",__real_3fbfffff,1,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegGreaterNearHalf",__real_bfbfffff,-1,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-Half",__real_3fc00000,2,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegHalf",__real_bfc00000,-2,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-GreaterNearHalf",__real_3fc00001,2,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegLesserNearHalf",__real_bfc00001,-2,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-GreaterThanHalf",__real_3fcccccd,2,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegLesserThanHalf",__real_bfcccccd,-2,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-TwoToOneBitPrecision",__real_4a7ffffd,0x3fffff,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-TwoToOneBitPrecision",__real_4a7ffffe,0x400000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-TwoToOneBitPrecision",__real_4a7fffff,0x400000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-TwoToOneBitPrecision",__real_4a800000,0x400000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-TwoToOneBitPrecision",__real_4a800001,0x400000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegTwoToOneBitPrecision",__real_ca7ffffd,-0x3fffff,
                    true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegTwoToOneBitPrecision",__real_ca7ffffe,-0x400000,
                    true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegTwoToOneBitPrecision",__real_ca7fffff,-0x400000,
                    true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegTwoToOneBitPrecision",__real_ca800000,-0x400000,
                    true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegTwoToOneBitPrecision",__real_ca800001,-0x400000,
                    true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-OneToZeroBitPrecision",__real_4afffffe,0x7fffff,true)
  ;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-OneToZeroBitPrecision",__real_4affffff,0x800000,true)
  ;
  fVar1 = __real_4b000000;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-OneToZeroBitPrecision",__real_4b000000,0x800000,true)
  ;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-OneToZeroBitPrecision",fVar1,0x800000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-OneToZeroBitPrecision",__real_4b000002,0x800002,true)
  ;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegOneToZeroBitPrecision",__real_cafffffe,-0x7fffff,
                    true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegOneToZeroBitPrecision",__real_caffffff,-0x800000,
                    true);
  fVar1 = __real_cb000000;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegOneToZeroBitPrecision",__real_cb000000,-0x800000,
                    true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegOneToZeroBitPrecision",fVar1,-0x800000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegOneToZeroBitPrecision",__real_cb000002,-0x800002,
                    true);
  fVar1 = __real_4b800000;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-ZeroBitPrecision",__real_4b800000,0x1000000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-ZeroBitPrecision",fVar1,0x1000000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-ZeroBitPrecision",fVar1,0x1000000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-ZeroBitPrecision",fVar1,0x1000000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-ZeroBitPrecision",__real_4b800001,0x1000002,true);
  fVar1 = __real_cb800000;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegZeroBitPrecision",__real_cb800000,-0x1000000,true)
  ;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegZeroBitPrecision",fVar1,-0x1000000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegZeroBitPrecision",fVar1,-0x1000000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegZeroBitPrecision",fVar1,-0x1000000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-NegZeroBitPrecision",__real_cb800001,-0x1000002,true)
  ;
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-FloatMax",__real_ff7fffff,-0x80000000,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-FloatMin",__real_00800000,0,true);
  TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
  ::operator()<int>(local_res8,L"VectorRound32-FloatMin",__real_80800000,0,true);
  return true;
}

