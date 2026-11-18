// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 12

// GetTestFlags @ 14603a1c0

EAutomationTestFlags __thiscall
FFrameTimeToSecondsConversionTest::GetTestFlags(FFrameTimeToSecondsConversionTest *this)

{
  return EngineFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 14603a1d0

bool __thiscall
FFrameTimeToSecondsConversionTest::IsStressTest(FFrameTimeToSecondsConversionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14603a1e0

uint __thiscall
FFrameTimeToSecondsConversionTest::GetRequiredDeviceNum(FFrameTimeToSecondsConversionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14603a1f0

FString * __thiscall
FFrameTimeToSecondsConversionTest::GetTestSourceFileName
          (FFrameTimeToSecondsConversionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\TimeManagementTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14603a220

int __thiscall
FFrameTimeToSecondsConversionTest::GetTestSourceFileLine(FFrameTimeToSecondsConversionTest *this)

{
  return 0x232;
}

// GetTests @ 14603a230

/* WARNING: Removing unreachable block (ram,0x00014603a31d) */
/* WARNING: Removing unreachable block (ram,0x00014603a3e8) */

void __thiscall
FFrameTimeToSecondsConversionTest::GetTests
          (FFrameTimeToSecondsConversionTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Time.FrameConversion");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14603a410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FFrameTimeToSecondsConversionTest::RunTest(FFrameTimeToSecondsConversionTest *this,FString *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  FFrameRate *pFVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_1b8 [32];
  int local_198 [2];
  double local_190;
  int local_188 [2];
  int local_180;
  float fStack_17c;
  double *local_178;
  int *local_170;
  double *local_168;
  int *local_160;
  double local_158;
  int local_150;
  float fStack_14c;
  double local_148;
  double local_140;
  FFrameRate local_138;
  FFrameRate local_130;
  FFrameRate local_128;
  FFrameRate local_120;
  FFrameRate local_118;
  FFrameRate local_110;
  FFrameRate local_108;
  FFrameRate local_100;
  FFrameRate local_f8;
  FFrameRate local_f0;
  FFrameRate local_e8;
  FFrameRate local_e0;
  FFrameRate local_d8;
  FFrameRate local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  FFrameRate local_c0;
  ulonglong local_b8;
  
  dVar9 = __real_c1e0000000000000;
  dVar8 = __real_41dfffffffc00000;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = __real_3e45798ee2308c3a;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pFVar10 = &local_138;
  uVar21 = (undefined4)__real_3ff0000000000000;
  uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_138 = FCommonFrameRates::AllFrameRates[0].FrameRate;
  local_130 = FCommonFrameRates::AllFrameRates[1].FrameRate;
  local_128 = FCommonFrameRates::AllFrameRates[2].FrameRate;
  local_120 = FCommonFrameRates::AllFrameRates[3].FrameRate;
  local_118 = FCommonFrameRates::AllFrameRates[4].FrameRate;
  local_110 = FCommonFrameRates::AllFrameRates[5].FrameRate;
  local_108 = FCommonFrameRates::AllFrameRates[6].FrameRate;
  local_100 = FCommonFrameRates::AllFrameRates[7].FrameRate;
  local_f8 = FCommonFrameRates::AllFrameRates[8].FrameRate;
  local_f0 = FCommonFrameRates::AllFrameRates[9].FrameRate;
  local_e8 = FCommonFrameRates::AllFrameRates[10].FrameRate;
  local_e0 = FCommonFrameRates::AllFrameRates[0xb].FrameRate;
  local_d8 = FCommonFrameRates::AllFrameRates[0xc].FrameRate;
  local_d0 = FCommonFrameRates::AllFrameRates[0xd].FrameRate;
  local_c8 = 24000;
  local_c4 = 1;
  fVar20 = ::FFrameTime::MaxSubframe;
  do {
    iVar1 = pFVar10->Denominator;
    local_140 = (double)pFVar10->Numerator;
    local_198[0] = 0;
    dVar3 = (double)iVar1;
    dVar4 = (double)CONCAT44(uVar22,uVar21) / dVar3;
    dVar2 = (double)CONCAT44(uVar22,uVar21) / local_140;
    dVar18 = local_140 * __real_404e000000000000 * dVar4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar18;
    in_XMM1 = roundpd(in_XMM1,auVar12,1);
    dVar11 = dVar18 - in_XMM1._0_8_;
    auVar13._0_8_ = (double)(int)dVar11 + dVar18;
    auVar13._8_8_ = 0;
    auVar16 = roundpd(ZEXT416((uint)(float)dVar11),auVar13,1);
    if (dVar8 <= auVar16._0_8_) {
      auVar16._0_8_ = dVar8;
    }
    if (auVar16._0_8_ <= dVar9) {
      auVar16._0_8_ = dVar9;
    }
    dVar11 = auVar16._0_8_;
    if (0 < (int)dVar11) {
      fStack_14c = 0.0;
      do {
        dVar18 = local_140;
        local_190 = ((double)((longlong)local_198[0] * (longlong)iVar1) + (double)fStack_14c * dVar3
                    ) * dVar2;
        local_148 = (double)local_198[0] * dVar3 * dVar2;
        local_150 = local_198[0];
        if (dVar5 < (double)CONCAT44((uint)((ulonglong)(local_148 - local_190) >> 0x20) & uVar7,
                                     SUB84(local_148 - local_190,0) & uVar6)) {
          local_178 = &local_190;
          local_170 = local_198;
          local_168 = &local_148;
          `FFrameTimeToSecondsConversionTest::RunTest'::__l8::<lambda_1>::operator()(&local_178);
          fVar20 = ::FFrameTime::MaxSubframe;
        }
        dVar19 = dVar18 * local_190 * dVar4;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar19;
        auVar17 = roundpd(auVar16,auVar14,1);
        dVar18 = dVar19 - auVar17._0_8_;
        if (dVar8 <= auVar17._0_8_) {
          auVar17._0_8_ = dVar8;
        }
        if (auVar17._0_8_ <= dVar9) {
          auVar17._0_8_ = dVar9;
        }
        local_180 = (int)auVar17._0_8_ + (int)dVar18;
        fStack_17c = (float)dVar18 - (float)(int)dVar18;
        if ((0.0 < fStack_17c) && (fVar20 <= fStack_17c)) {
          fStack_17c = fVar20;
        }
        if (fVar20 <= fStack_17c) {
          fStack_17c = fVar20;
        }
        if (fStack_17c <= 0.0) {
          fStack_17c = 0.0;
        }
        auVar15._0_8_ = (double)(int)dVar18 + dVar19;
        auVar15._8_8_ = 0;
        auVar16 = roundpd(auVar17,auVar15,1);
        if (dVar8 <= auVar16._0_8_) {
          auVar16._0_8_ = dVar8;
        }
        if (auVar16._0_8_ <= dVar9) {
          auVar16._0_8_ = dVar9;
        }
        local_188[0] = (int)auVar16._0_8_;
        if (local_180 != local_198[0]) {
          local_178 = (double *)local_188;
          local_170 = local_198;
          local_168 = &local_190;
          `FFrameTimeToSecondsConversionTest::RunTest'::__l8::<lambda_2>::operator()(&local_178);
          fVar20 = ::FFrameTime::MaxSubframe;
        }
        if (local_188[0] != local_198[0]) {
          local_178 = (double *)local_188;
          local_170 = local_198;
          local_168 = &local_190;
          `FFrameTimeToSecondsConversionTest::RunTest'::__l8::<lambda_3>::operator()(&local_178);
          fVar20 = ::FFrameTime::MaxSubframe;
        }
        local_158 = ((double)((longlong)local_180 * (longlong)iVar1) + (double)fStack_17c * dVar3) *
                    dVar2;
        in_XMM1._0_8_ =
             (double)CONCAT44((uint)((ulonglong)(local_158 - local_190) >> 0x20) & uVar7,
                              SUB84(local_158 - local_190,0) & uVar6);
        in_XMM1._8_8_ = 0;
        if (dVar5 < in_XMM1._0_8_) {
          local_178 = &local_158;
          local_170 = local_198;
          local_168 = &local_190;
          local_160 = &local_180;
          `FFrameTimeToSecondsConversionTest::RunTest'::__l8::<lambda_4>::operator()(&local_178);
          fVar20 = ::FFrameTime::MaxSubframe;
        }
        local_198[0] = local_198[0] + 1;
      } while (local_198[0] < (int)dVar11);
    }
    uVar21 = (undefined4)__real_3ff0000000000000;
    uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != &local_c0);
  return true;
}

// GetBeautifiedTestName @ 14603a8a0

FString * __thiscall
FFrameTimeToSecondsConversionTest::GetBeautifiedTestName
          (FFrameTimeToSecondsConversionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Time.FrameConversion");
  return __return_storage_ptr__;
}

// operator() @ 1504e1130

bool __thiscall
`FFrameTimeToSecondsConversionTest::RunTest'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701033>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701033>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1420

bool __thiscall
`FFrameTimeToSecondsConversionTest::RunTest'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701023>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701023>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1550

bool __thiscall
`FFrameTimeToSecondsConversionTest::RunTest'::__l8::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701018>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701018>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1830

bool __thiscall
`FFrameTimeToSecondsConversionTest::RunTest'::__l8::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701011>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_18,L"Frame: %d Subframe: %f");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701011>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e18df;
    }
  }
  bVar2 = false;
LAB_1504e18df:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

