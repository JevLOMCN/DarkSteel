// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// AutoTest @ 14162a310

void __cdecl FPlatformMathTest<FGenericPlatformMath>::AutoTest(void)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  
  if ((uint)ABS(SQRT(CompilerHiddenConstants::MinusOne)) < 0x7f800001) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsNaN(sqrtf(MinusOne))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x99,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((uint)SQRT(CompilerHiddenConstants::MinusOne) & 0x7f800000) != 0x7f800000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsFinite(sqrtf(MinusOne))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9a,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = __real_bf800000;
  if (((uint)(__real_bf800000 / CompilerHiddenConstants::Zero) & 0x7f800000) != 0x7f800000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsFinite(-1.0f / Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar2 = __real_3f800000;
  if (((uint)(__real_3f800000 / CompilerHiddenConstants::Zero) & 0x7f800000) != 0x7f800000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsFinite(1.0f / Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x7f800000 < (uint)ABS(fVar3 / CompilerHiddenConstants::Zero)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(-1.0f / Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x7f800000 < (uint)ABS(fVar2 / CompilerHiddenConstants::Zero)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(1.0f / Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x7f800000 < (uint)ABS(CompilerHiddenConstants::FloatMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(FloatMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9f,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((uint)CompilerHiddenConstants::FloatMax & 0x7f800000) == 0x7f800000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsFinite(FloatMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa0,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x7f800000 < (uint)ABS(CompilerHiddenConstants::Zero)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa1,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((uint)CompilerHiddenConstants::Zero & 0x7f800000) == 0x7f800000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsFinite(Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa2,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x7f800000 < (uint)ABS(CompilerHiddenConstants::One)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(One)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa3,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((uint)CompilerHiddenConstants::One & 0x7f800000) == 0x7f800000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsFinite(One)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x7f800000 < (uint)ABS(CompilerHiddenConstants::MinusOneE37)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(MinusOneE37)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa5,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((uint)CompilerHiddenConstants::MinusOneE37 & 0x7f800000) == 0x7f800000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsFinite(MinusOneE37)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa6,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = FGenericPlatformMath::FloorLog2((uint)(longlong)CompilerHiddenConstants::Zero);
  if (uVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)Zero) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = FGenericPlatformMath::FloorLog2((uint)(longlong)CompilerHiddenConstants::One);
  if (uVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)One) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa8,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = FGenericPlatformMath::FloorLog2((uint)(longlong)CompilerHiddenConstants::Two);
  if (uVar5 != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)Two) == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa9,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = FGenericPlatformMath::FloorLog2((uint)(longlong)CompilerHiddenConstants::Twelve);
  if (uVar5 != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)Twelve) == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xaa,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = FGenericPlatformMath::FloorLog2((uint)(longlong)CompilerHiddenConstants::Sixteen);
  if (uVar5 != 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)Sixteen) == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xab,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// AutoTest @ 14162a800

void __cdecl FPlatformMathTest<FMicrosoftPlatformMathBase>::AutoTest(void)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = _isnan((double)SQRT(CompilerHiddenConstants::MinusOne));
  if (iVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsNaN(sqrtf(MinusOne))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x99,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _finite((double)SQRT(CompilerHiddenConstants::MinusOne));
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsFinite(sqrtf(MinusOne))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9a,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = __real_bf800000;
  iVar5 = _finite((double)(__real_bf800000 / CompilerHiddenConstants::Zero));
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsFinite(-1.0f / Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar2 = __real_3f800000;
  iVar5 = _finite((double)(__real_3f800000 / CompilerHiddenConstants::Zero));
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsFinite(1.0f / Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _isnan((double)(fVar3 / CompilerHiddenConstants::Zero));
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(-1.0f / Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _isnan((double)(fVar2 / CompilerHiddenConstants::Zero));
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(1.0f / Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _isnan((double)CompilerHiddenConstants::FloatMax);
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(FloatMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0x9f,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _finite((double)CompilerHiddenConstants::FloatMax);
  if (iVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsFinite(FloatMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa0,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _isnan((double)CompilerHiddenConstants::Zero);
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa1,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _finite((double)CompilerHiddenConstants::Zero);
  if (iVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsFinite(Zero)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa2,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _isnan((double)CompilerHiddenConstants::One);
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(One)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa3,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _finite((double)CompilerHiddenConstants::One);
  if (iVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsFinite(One)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _isnan((double)CompilerHiddenConstants::MinusOneE37);
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MathPlatform::IsNaN(MinusOneE37)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa5,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = _finite((double)CompilerHiddenConstants::MinusOneE37);
  if (iVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::IsFinite(MinusOneE37)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa6,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = 0x1f;
  uVar6 = (uint)(longlong)CompilerHiddenConstants::Zero;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar7 = 0;
  if (uVar6 != 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)Zero) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = 0x1f;
  uVar6 = (uint)(longlong)CompilerHiddenConstants::One;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar7 = 0;
  if (uVar6 != 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)One) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa8,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = 0x1f;
  uVar6 = (uint)(longlong)CompilerHiddenConstants::Two;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar7 = 0;
  if (uVar6 != 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)Two) == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xa9,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = 0x1f;
  uVar6 = (uint)(longlong)CompilerHiddenConstants::Twelve;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar7 = 0;
  if (uVar6 != 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)Twelve) == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xaa,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = 0x1f;
  uVar6 = (uint)(longlong)CompilerHiddenConstants::Sixteen;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar7 = 0;
  if (uVar6 != 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MathPlatform::FloorLog2((uint32)Sixteen) == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                       ,0xab,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

