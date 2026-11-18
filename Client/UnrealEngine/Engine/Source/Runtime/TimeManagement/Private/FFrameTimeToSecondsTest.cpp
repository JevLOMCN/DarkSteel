// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 9

// GetTestFlags @ 146036110

EAutomationTestFlags __thiscall FFrameTimeToSecondsTest::GetTestFlags(FFrameTimeToSecondsTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 146036120

bool __thiscall FFrameTimeToSecondsTest::IsStressTest(FFrameTimeToSecondsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146036130

uint __thiscall FFrameTimeToSecondsTest::GetRequiredDeviceNum(FFrameTimeToSecondsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146036140

FString * __thiscall
FFrameTimeToSecondsTest::GetTestSourceFileName
          (FFrameTimeToSecondsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\TimeManagementTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146036170

int __thiscall FFrameTimeToSecondsTest::GetTestSourceFileLine(FFrameTimeToSecondsTest *this)

{
  return 0x53;
}

// GetTests @ 146036180

/* WARNING: Removing unreachable block (ram,0x00014603626d) */
/* WARNING: Removing unreachable block (ram,0x000146036338) */

void __thiscall
FFrameTimeToSecondsTest::GetTests
          (FFrameTimeToSecondsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Time.ToSeconds");
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

// RunTest @ 146036360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FFrameTimeToSecondsTest::RunTest(FFrameTimeToSecondsTest *this,FString *param_1)

{
  double dVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_218 [32];
  float local_1f8 [2];
  float local_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  float *local_1d8;
  float *local_1d0;
  double local_1c8 [46];
  ulonglong local_58;
  
  fVar3 = __real_36c9539c;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1c8[0] = ___xmm_bfc51eb851eb851fbfc5555555555561;
  local_1c8[1] = (double)_UNK_1511da268;
  local_1c8[4] = (double)___xmm_bfb999999999999abfc333333558f4b0;
  local_1c8[5] = (double)_UNK_1511da248;
  local_1c8[8] = (double)___xmm_bfb5555559a0d84dbfb6de8ca11bfd43;
  local_1c8[9] = (double)_UNK_1511da228;
  local_1c8[0xc] = (double)___xmm_bfb29a485cd7b903bfb3f7ced916872b;
  local_1c8[0xd] = (double)_UNK_1511da208;
  local_1c8[2] = (double)___xmm_bfc3f7ced916872bbfc4a6921735ee34;
  local_1c8[3] = (double)_UNK_1511da258;
  local_1c8[0x10] = (double)___xmm_bfa6de8ca11bfd4abfa8bf258bf258ba;
  local_1c8[0x11] = (double)_UNK_1511da1e8;
  local_1c8[6] = (double)___xmm_bfb83c131d5acb72bfb92c5f92c5f92a;
  local_1c8[7] = (double)_UNK_1511da238;
  local_1c8[0x14] = (double)___xmm_3f5b4e81b4e81a1b0000000000000000;
  local_1c8[0x15] = (double)_UNK_1511da0a8;
  local_1c8[10] = (double)___xmm_bfb4e81b4e81b4ebbfb5555555555553;
  local_1c8[0xb] = (double)_UNK_1511da218;
  local_1c8[0x18] = (double)___xmm_3fa999999999999a3f911110ffe30533;
  local_1c8[0x19] = (double)_UNK_1511da0c8;
  local_1c8[0xe] = (double)___xmm_bfa999999999999abfb11111155c940e;
  local_1c8[0xf] = (double)_UNK_1511da1f8;
  local_1c8[0x1c] = (double)___xmm_3fb111110cc58e193faf0fb38a94d248;
  local_1c8[0x1d] = (double)_UNK_1511da0e8;
  local_1c8[0x12] = (double)___xmm_bfa1111119a81700bfa4237fa89e60eb;
  local_1c8[0x13] = (double)_UNK_1511da1d8;
  local_1c8[0x20] = (double)___xmm_3fb810624dd2f1aa3fb6b2dbd1942382;
  local_1c8[0x21] = (double)_UNK_1511da108;
  local_1c8[0x16] = (double)___xmm_3f85d867c3ece2b83f75d867c3ece27f;
  local_1c8[0x17] = (double)_UNK_1511da0b8;
  local_1c8[0x24] = (double)___xmm_3fbaf72015d867ac3fba06d3a06d3a1f;
  local_1c8[0x25] = (double)_UNK_1511da128;
  local_1c8[0x1a] = (double)___xmm_3fac54a6921735e93faa740da740da79;
  local_1c8[0x1b] = (double)_UNK_1511da0d8;
  local_1c8[0x28] = (double)___xmm_3fc58bf258bf25803fc5555555555561;
  local_1c8[0x29] = (double)_UNK_1511da148;
  local_1c8[0x1e] = (double)___xmm_3fb5c28f5c28f5c33fb5555555555553;
  local_1c8[0x1f] = (double)_UNK_1511da0f8;
  local_1c8[0x2c] = (double)__real_3fc777777551b5ee;
  lVar5 = 0;
  local_1c8[0x22] = (double)___xmm_3fb999999999999a3fb99999954e16a0;
  local_1c8[0x23] = (double)_UNK_1511da118;
  iVar4 = FCommonFrameRates::AllFrameRates[7].FrameRate.Denominator;
  local_1c8[0x26] = (double)___xmm_3fbdddddd9925afc3fbc54a692173606;
  local_1c8[0x27] = (double)_UNK_1511da138;
  dVar1 = __real_3ff0000000000000 / (double)FCommonFrameRates::AllFrameRates[7].FrameRate.Numerator;
  local_1c8[0x2a] = (double)___xmm_3fc6b2dbd19423743fc604189374bc6a;
  local_1c8[0x2b] = (double)_UNK_1511da158;
  do {
    local_1e8 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar5);
    fStack_1ec = (float)((ulonglong)local_1e8 >> 0x20);
    _local_1f0 = CONCAT44(fStack_1ec,(float)*(double *)((longlong)local_1c8 + lVar5));
    local_1f8[0] = (float)(((double)((longlong)(int)local_1e8 * (longlong)iVar4) +
                           (double)fStack_1ec * (double)iVar4) * dVar1);
    if (fVar3 < (float)((uint)(local_1f8[0] - (float)*(double *)((longlong)local_1c8 + lVar5)) &
                       uVar2)) {
      local_1e0 = &local_1e8;
      local_1d8 = local_1f8;
      local_1d0 = &local_1f0;
      `FFrameTimeToSecondsTest::RunTest'::__l4::<lambda_1>::operator()(&local_1e0);
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 < 0x168);
  return true;
}

// GetBeautifiedTestName @ 1460365f0

FString * __thiscall
FFrameTimeToSecondsTest::GetBeautifiedTestName
          (FFrameTimeToSecondsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Time.ToSeconds");
  return __return_storage_ptr__;
}

// operator() @ 1504e0e90

bool __thiscall `FFrameTimeToSecondsTest::RunTest'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701523>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701523>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

