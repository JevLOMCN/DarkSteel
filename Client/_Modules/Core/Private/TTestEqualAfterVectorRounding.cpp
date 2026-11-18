// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator()<int> @ 141c62440

bool __thiscall
TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&`FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest'::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
::operator()<int>(TTestEqualAfterVectorRounding<FMathVectorRoundToIntHalfToEvenTestsClass,&VectorRoundToIntHalfToEvenTest,&_FMathVectorRoundToIntHalfToEvenTestsClass::MathVectorRoundToIntHalfToEvenTest_::__l2::FMathVectorRoundToIntHalfToEvenTestsRoundToInt::RoundToInt>
                  *this,wchar_t *param_1,float param_2,int param_3,bool param_4)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  float fVar5;
  __m128 local_48;
  __m128 local_38 [2];
  
  if (param_4) {
    fVar5 = FMath::RoundHalfToEven(param_2);
    local_48.m128_i32[0] = (int)fVar5;
    local_38[0]._0_4_ = (undefined4)param_2;
    local_38[0]._4_4_ = (undefined4)param_2;
    local_38[0]._8_4_ = (undefined4)param_2;
    local_38[0]._12_4_ = (undefined4)param_2;
    local_48.m128_i32[1] = local_48.m128_i32[0];
    local_48.m128_i32[2] = (int)local_48.m128_f32[0];
    local_48.m128_i32[3] = (int)local_48.m128_f32[0];
    bVar3 = TestVectorsEqualBitwise(local_38,&local_48);
    if (!bVar3) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_48,param_1);
      (*pcVar2)(pFVar1,&local_48,0);
      if ((void *)CONCAT44(local_48.m128_i32[1],local_48.m128_i32[0]) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_48.m128_i32[1],local_48.m128_i32[0]));
      }
    }
  }
  local_48.m128_i32[0] = (int)param_2;
  local_48.m128_i32[1] = (int)param_2;
  local_48.m128_i32[2] = (int)param_2;
  local_48.m128_i32[3] = (int)param_2;
  local_38[0]._0_4_ = param_3;
  local_38[0]._4_4_ = param_3;
  local_38[0]._8_4_ = param_3;
  local_38[0]._12_4_ = param_3;
  bVar3 = TestVectorsEqualBitwise(&local_48,local_38);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,param_1);
    (*pcVar2)(pFVar1,&local_48,0);
    if ((void *)CONCAT44(local_48.m128_i32[1],local_48.m128_i32[0]) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_48.m128_i32[1],local_48.m128_i32[0]));
    }
  }
  return true;
}

