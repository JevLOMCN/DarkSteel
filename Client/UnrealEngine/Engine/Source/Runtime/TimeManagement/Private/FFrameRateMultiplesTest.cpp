// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 12

// GetTestFlags @ 1460398b0

EAutomationTestFlags __thiscall FFrameRateMultiplesTest::GetTestFlags(FFrameRateMultiplesTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 1460398c0

bool __thiscall FFrameRateMultiplesTest::IsStressTest(FFrameRateMultiplesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1460398d0

uint __thiscall FFrameRateMultiplesTest::GetRequiredDeviceNum(FFrameRateMultiplesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1460398e0

FString * __thiscall
FFrameRateMultiplesTest::GetTestSourceFileName
          (FFrameRateMultiplesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\TimeManagementTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146039910

int __thiscall FFrameRateMultiplesTest::GetTestSourceFileLine(FFrameRateMultiplesTest *this)

{
  return 0x1c3;
}

// GetTests @ 146039920

/* WARNING: Removing unreachable block (ram,0x000146039a0d) */
/* WARNING: Removing unreachable block (ram,0x000146039ad8) */

void __thiscall
FFrameRateMultiplesTest::GetTests
          (FFrameRateMultiplesTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Time.FrameRateMultiples");
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

// RunTest @ 146039b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FFrameRateMultiplesTest::RunTest(FFrameRateMultiplesTest *this,FString *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  FFrameRate *pFVar4;
  FFrameRate FVar5;
  longlong lVar6;
  FFrameRate *pFVar7;
  longlong lVar8;
  undefined1 auStack_308 [32];
  FFrameRate local_2e8 [2];
  char local_2d8 [240];
  char local_1e8 [240];
  FFrameRate local_f8;
  FFrameRate *local_f0;
  FFrameRate *local_e8;
  FFrameRate *local_e0;
  FFrameRate *local_d8;
  FFrameRate *local_d0;
  FFrameRate *local_c8;
  FFrameRate *local_c0;
  FFrameRate *local_b8;
  FFrameRate local_a8 [4];
  FFrameRate local_88;
  FFrameRate local_80;
  FFrameRate local_78;
  FFrameRate local_70;
  FFrameRate local_68;
  FFrameRate local_60;
  FFrameRate local_58;
  FFrameRate local_50;
  FFrameRate local_48;
  FFrameRate local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_a8[0] = FCommonFrameRates::AllFrameRates[0].FrameRate;
  local_a8[1] = FCommonFrameRates::AllFrameRates[1].FrameRate;
  local_a8[2] = FCommonFrameRates::AllFrameRates[2].FrameRate;
  local_a8[3] = FCommonFrameRates::AllFrameRates[3].FrameRate;
  local_88 = FCommonFrameRates::AllFrameRates[4].FrameRate;
  local_80 = FCommonFrameRates::AllFrameRates[5].FrameRate;
  local_78 = FCommonFrameRates::AllFrameRates[6].FrameRate;
  local_70 = FCommonFrameRates::AllFrameRates[7].FrameRate;
  local_68 = FCommonFrameRates::AllFrameRates[8].FrameRate;
  local_60 = FCommonFrameRates::AllFrameRates[9].FrameRate;
  local_58 = FCommonFrameRates::AllFrameRates[10].FrameRate;
  local_50 = FCommonFrameRates::AllFrameRates[0xb].FrameRate;
  local_48 = FCommonFrameRates::AllFrameRates[0xc].FrameRate;
  local_40 = FCommonFrameRates::AllFrameRates[0xd].FrameRate;
  local_38 = 24000;
  local_34 = 1;
  local_2d8[0] = '\x01';
  local_2d8[1] = '\0';
  local_2d8[2] = '\x01';
  local_2d8[3] = '\0';
  local_2d8[4] = '\0';
  local_2d8[5] = '\x01';
  local_2d8[6] = '\0';
  local_2d8[7] = '\x01';
  local_2d8[8] = '\0';
  local_2d8[9] = '\x01';
  local_2d8[10] = '\x01';
  local_2d8[0xb] = '\0';
  local_2d8[0xc] = '\0';
  local_2d8[0xd] = '\0';
  local_2d8[0xe] = '\x01';
  local_2d8[0xf] = '\0';
  local_2d8[0x10] = '\x01';
  local_2d8[0x11] = '\0';
  local_2d8[0x12] = '\0';
  local_2d8[0x13] = '\x01';
  local_2d8[0x14] = '\0';
  local_2d8[0x15] = '\0';
  local_2d8[0x16] = '\x01';
  local_2d8[0x17] = '\0';
  local_2d8[0x18] = '\x01';
  local_2d8[0x19] = '\x01';
  local_2d8[0x1a] = '\0';
  local_2d8[0x1b] = '\0';
  local_2d8[0x1c] = '\0';
  local_2d8[0x1d] = '\x01';
  local_2d8[0x1e] = '\0';
  local_2d8[0x1f] = '\0';
  local_2d8[0x20] = '\x01';
  local_2d8[0x21] = '\0';
  local_2d8[0x22] = '\0';
  local_2d8[0x23] = '\x01';
  local_2d8[0x24] = '\0';
  local_2d8[0x25] = '\0';
  local_2d8[0x26] = '\0';
  local_2d8[0x27] = '\x01';
  local_2d8[0x28] = '\x01';
  local_2d8[0x29] = '\0';
  local_2d8[0x2a] = '\0';
  local_2d8[0x2b] = '\0';
  local_2d8[0x2c] = '\x01';
  local_2d8[0x2d] = '\0';
  local_2d8[0x2e] = '\0';
  local_2d8[0x2f] = '\0';
  local_2d8[0x30] = '\x01';
  local_2d8[0x31] = '\0';
  local_2d8[0x32] = '\0';
  local_2d8[0x33] = '\x01';
  local_2d8[0x34] = '\0';
  local_2d8[0x35] = '\x01';
  local_2d8[0x36] = '\0';
  local_2d8[0x37] = '\0';
  local_2d8[0x38] = '\0';
  local_2d8[0x39] = '\0';
  local_2d8[0x3a] = '\0';
  local_2d8[0x3b] = '\x01';
  local_2d8[0x3c] = '\0';
  local_2d8[0x3d] = '\0';
  local_2d8[0x3e] = '\0';
  local_2d8[0x3f] = '\0';
  local_2d8[0x40] = '\x01';
  local_2d8[0x41] = '\0';
  local_2d8[0x42] = '\0';
  local_2d8[0x43] = '\x01';
  local_2d8[0x44] = '\0';
  local_2d8[0x45] = '\x01';
  local_2d8[0x46] = '\x01';
  local_2d8[0x47] = '\0';
  local_2d8[0x48] = '\0';
  local_2d8[0x49] = '\0';
  local_2d8[0x4a] = '\x01';
  local_2d8[0x4b] = '\0';
  local_2d8[0x4c] = '\0';
  local_2d8[0x4d] = '\0';
  local_2d8[0x4e] = '\0';
  local_2d8[0x4f] = '\0';
  local_2d8[0x50] = '\x01';
  local_2d8[0x51] = '\0';
  local_2d8[0x52] = '\0';
  local_2d8[0x53] = '\0';
  local_2d8[0x54] = '\0';
  local_2d8[0x55] = '\x01';
  local_2d8[0x56] = '\0';
  local_2d8[0x57] = '\0';
  local_2d8[0x58] = '\0';
  local_2d8[0x59] = '\x01';
  local_2d8[0x5a] = '\0';
  local_2d8[0x5b] = '\0';
  local_2d8[0x5c] = '\0';
  local_2d8[0x5d] = '\0';
  local_2d8[0x5e] = '\0';
  local_2d8[0x5f] = '\0';
  local_2d8[0x60] = '\x01';
  local_2d8[0x61] = '\0';
  local_2d8[0x62] = '\x01';
  local_2d8[99] = '\0';
  local_2d8[100] = '\0';
  local_2d8[0x65] = '\0';
  local_2d8[0x66] = '\0';
  local_2d8[0x67] = '\0';
  local_2d8[0x68] = '\x01';
  local_2d8[0x69] = '\0';
  local_2d8[0x6a] = '\0';
  local_2d8[0x6b] = '\0';
  local_2d8[0x6c] = '\0';
  local_2d8[0x6d] = '\0';
  local_2d8[0x6e] = '\0';
  local_2d8[0x6f] = '\0';
  local_2d8[0x70] = '\x01';
  local_2d8[0x71] = '\0';
  local_2d8[0x72] = '\x01';
  local_2d8[0x73] = '\x01';
  local_2d8[0x74] = '\0';
  local_2d8[0x75] = '\0';
  local_2d8[0x76] = '\0';
  local_2d8[0x77] = '\x01';
  local_2d8[0x78] = '\0';
  local_2d8[0x79] = '\0';
  local_2d8[0x7a] = '\0';
  local_2d8[0x7b] = '\0';
  local_2d8[0x7c] = '\0';
  local_2d8[0x7d] = '\0';
  local_2d8[0x7e] = '\0';
  local_2d8[0x7f] = '\0';
  local_2d8[0x80] = '\x01';
  local_2d8[0x81] = '\0';
  local_2d8[0x82] = '\0';
  local_2d8[0x83] = '\0';
  local_2d8[0x84] = '\0';
  local_2d8[0x85] = '\0';
  local_2d8[0x86] = '\x01';
  local_2d8[0x87] = '\0';
  local_2d8[0x88] = '\0';
  local_2d8[0x89] = '\0';
  local_2d8[0x8a] = '\0';
  local_2d8[0x8b] = '\0';
  local_2d8[0x8c] = '\0';
  local_2d8[0x8d] = '\0';
  local_2d8[0x8e] = '\0';
  local_2d8[0x8f] = '\0';
  local_2d8[0x90] = '\x01';
  local_2d8[0x91] = '\x01';
  local_2d8[0x92] = '\0';
  local_2d8[0x93] = '\0';
  local_2d8[0x94] = '\0';
  local_2d8[0x95] = '\x01';
  local_2d8[0x96] = '\0';
  local_2d8[0x97] = '\0';
  local_2d8[0x98] = '\0';
  local_2d8[0x99] = '\0';
  local_2d8[0x9a] = '\0';
  local_2d8[0x9b] = '\0';
  local_2d8[0x9c] = '\0';
  local_2d8[0x9d] = '\0';
  local_2d8[0x9e] = '\0';
  local_2d8[0x9f] = '\0';
  local_2d8[0xa0] = '\x01';
  local_2d8[0xa1] = '\0';
  local_2d8[0xa2] = '\0';
  local_2d8[0xa3] = '\0';
  local_2d8[0xa4] = '\x01';
  local_2d8[0xa5] = '\0';
  local_2d8[0xa6] = '\0';
  local_2d8[0xa7] = '\0';
  local_2d8[0xa8] = '\0';
  local_2d8[0xa9] = '\0';
  local_2d8[0xaa] = '\0';
  local_2d8[0xab] = '\0';
  local_2d8[0xac] = '\0';
  local_2d8[0xad] = '\0';
  local_2d8[0xae] = '\0';
  local_2d8[0xaf] = '\0';
  local_2d8[0xb0] = '\x01';
  local_2d8[0xb1] = '\0';
  local_2d8[0xb2] = '\0';
  local_2d8[0xb3] = '\x01';
  local_2d8[0xb4] = '\0';
  local_2d8[0xb5] = '\0';
  local_2d8[0xb6] = '\0';
  local_2d8[0xb7] = '\0';
  local_2d8[0xb8] = '\0';
  local_2d8[0xb9] = '\0';
  local_2d8[0xba] = '\0';
  local_2d8[0xbb] = '\0';
  local_2d8[0xbc] = '\0';
  local_2d8[0xbd] = '\0';
  local_2d8[0xbe] = '\0';
  local_2d8[0xbf] = '\0';
  local_2d8[0xc0] = '\x01';
  local_2d8[0xc1] = '\x01';
  local_2d8[0xc2] = '\0';
  local_2d8[0xc3] = '\0';
  local_2d8[0xc4] = '\0';
  local_2d8[0xc5] = '\0';
  local_2d8[0xc6] = '\0';
  local_2d8[199] = '\0';
  local_2d8[200] = '\0';
  local_2d8[0xc9] = '\0';
  local_2d8[0xca] = '\0';
  local_2d8[0xcb] = '\0';
  local_2d8[0xcc] = '\0';
  local_2d8[0xcd] = '\0';
  local_2d8[0xce] = '\0';
  local_2d8[0xcf] = '\0';
  local_2d8[0xd0] = '\x01';
  local_2d8[0xd1] = '\0';
  local_2d8[0xd2] = '\0';
  local_2d8[0xd3] = '\0';
  local_2d8[0xd4] = '\0';
  local_2d8[0xd5] = '\0';
  local_2d8[0xd6] = '\0';
  local_2d8[0xd7] = '\0';
  local_2d8[0xd8] = '\0';
  local_2d8[0xd9] = '\0';
  local_2d8[0xda] = '\0';
  local_2d8[0xdb] = '\0';
  local_2d8[0xdc] = '\0';
  local_2d8[0xdd] = '\0';
  local_2d8[0xde] = '\0';
  local_2d8[0xdf] = '\0';
  local_2d8[0xe0] = 1;
  local_1e8[0] = '\x01';
  local_1e8[1] = '\0';
  local_1e8[2] = '\0';
  local_1e8[3] = '\0';
  local_1e8[4] = '\0';
  local_1e8[5] = '\0';
  local_1e8[6] = '\0';
  local_1e8[7] = '\0';
  local_1e8[8] = '\0';
  local_1e8[9] = '\0';
  local_1e8[10] = '\0';
  local_1e8[0xb] = '\0';
  local_1e8[0xc] = '\0';
  local_1e8[0xd] = '\0';
  local_1e8[0xe] = '\0';
  local_1e8[0xf] = '\0';
  local_1e8[0x10] = '\x01';
  local_1e8[0x11] = '\0';
  local_1e8[0x12] = '\0';
  local_1e8[0x13] = '\0';
  local_1e8[0x14] = '\0';
  local_1e8[0x15] = '\0';
  local_1e8[0x16] = '\0';
  local_1e8[0x17] = '\0';
  local_1e8[0x18] = '\0';
  local_1e8[0x19] = '\0';
  local_1e8[0x1a] = '\0';
  local_1e8[0x1b] = '\0';
  local_1e8[0x1c] = '\0';
  local_1e8[0x1d] = '\0';
  local_1e8[0x1e] = '\x01';
  local_1e8[0x1f] = '\0';
  local_1e8[0x20] = '\x01';
  local_1e8[0x21] = '\0';
  local_1e8[0x22] = '\0';
  local_1e8[0x23] = '\0';
  local_1e8[0x24] = '\0';
  local_1e8[0x25] = '\0';
  local_1e8[0x26] = '\0';
  local_1e8[0x27] = '\0';
  local_1e8[0x28] = '\0';
  local_1e8[0x29] = '\0';
  local_1e8[0x2a] = '\0';
  local_1e8[0x2b] = '\0';
  local_1e8[0x2c] = '\0';
  local_1e8[0x2d] = '\0';
  local_1e8[0x2e] = '\0';
  local_1e8[0x2f] = '\0';
  local_1e8[0x30] = '\x01';
  local_1e8[0x31] = '\0';
  local_1e8[0x32] = '\0';
  local_1e8[0x33] = '\0';
  local_1e8[0x34] = '\0';
  local_1e8[0x35] = '\0';
  local_1e8[0x36] = '\0';
  local_1e8[0x37] = '\0';
  local_1e8[0x38] = '\0';
  local_1e8[0x39] = '\0';
  local_1e8[0x3a] = '\0';
  local_1e8[0x3b] = '\0';
  local_1e8[0x3c] = '\0';
  local_1e8[0x3d] = '\x01';
  local_1e8[0x3e] = '\0';
  local_1e8[0x3f] = '\0';
  pFVar7 = local_a8;
  local_1e8[0x40] = '\x01';
  local_1e8[0x41] = '\0';
  local_1e8[0x42] = '\0';
  local_1e8[0x43] = '\0';
  local_1e8[0x44] = '\0';
  local_1e8[0x45] = '\0';
  local_1e8[0x46] = '\0';
  local_1e8[0x47] = '\0';
  lVar2 = 0;
  local_1e8[0x48] = '\0';
  local_1e8[0x49] = '\0';
  local_1e8[0x4a] = '\0';
  local_1e8[0x4b] = '\x01';
  lVar8 = 0xf;
  local_1e8[0x4c] = '\0';
  local_1e8[0x4d] = '\x01';
  local_1e8[0x4e] = '\0';
  local_1e8[0x4f] = '\0';
  local_1e8[0x50] = '\x01';
  local_1e8[0x51] = '\0';
  local_1e8[0x52] = '\0';
  local_1e8[0x53] = '\0';
  local_1e8[0x54] = '\0';
  local_1e8[0x55] = '\0';
  local_1e8[0x56] = '\0';
  local_1e8[0x57] = '\0';
  local_1e8[0x58] = '\0';
  local_1e8[0x59] = '\0';
  local_1e8[0x5a] = '\0';
  local_1e8[0x5b] = '\0';
  local_1e8[0x5c] = '\0';
  local_1e8[0x5d] = '\x01';
  local_1e8[0x5e] = '\0';
  local_1e8[0x5f] = '\0';
  local_1e8[0x60] = '\x01';
  local_1e8[0x61] = '\0';
  local_1e8[0x62] = '\0';
  local_1e8[99] = '\0';
  local_1e8[100] = '\0';
  local_1e8[0x65] = '\0';
  local_1e8[0x66] = '\0';
  local_1e8[0x67] = '\0';
  local_1e8[0x68] = '\0';
  local_1e8[0x69] = '\x01';
  local_1e8[0x6a] = '\x01';
  local_1e8[0x6b] = '\0';
  local_1e8[0x6c] = '\0';
  local_1e8[0x6d] = '\x01';
  local_1e8[0x6e] = '\0';
  local_1e8[0x6f] = '\0';
  local_1e8[0x70] = '\x01';
  local_1e8[0x71] = '\0';
  local_1e8[0x72] = '\0';
  local_1e8[0x73] = '\0';
  local_1e8[0x74] = '\0';
  local_1e8[0x75] = '\0';
  local_1e8[0x76] = '\0';
  local_1e8[0x77] = '\0';
  local_1e8[0x78] = '\0';
  local_1e8[0x79] = '\0';
  local_1e8[0x7a] = '\0';
  local_1e8[0x7b] = '\x01';
  local_1e8[0x7c] = '\0';
  local_1e8[0x7d] = '\0';
  local_1e8[0x7e] = '\x01';
  local_1e8[0x7f] = '\0';
  local_1e8[0x80] = '\x01';
  local_1e8[0x81] = '\0';
  local_1e8[0x82] = '\0';
  local_1e8[0x83] = '\0';
  local_1e8[0x84] = '\0';
  local_1e8[0x85] = '\0';
  local_1e8[0x86] = '\0';
  local_1e8[0x87] = '\x01';
  local_1e8[0x88] = '\x01';
  local_1e8[0x89] = '\x01';
  local_1e8[0x8a] = '\0';
  local_1e8[0x8b] = '\x01';
  local_1e8[0x8c] = '\0';
  local_1e8[0x8d] = '\0';
  local_1e8[0x8e] = '\x01';
  local_1e8[0x8f] = '\0';
  local_1e8[0x90] = '\x01';
  local_1e8[0x91] = '\0';
  local_1e8[0x92] = '\0';
  local_1e8[0x93] = '\0';
  local_1e8[0x94] = '\0';
  local_1e8[0x95] = '\0';
  local_1e8[0x96] = '\x01';
  local_1e8[0x97] = '\x01';
  local_1e8[0x98] = '\x01';
  local_1e8[0x99] = '\0';
  local_1e8[0x9a] = '\x01';
  local_1e8[0x9b] = '\x01';
  local_1e8[0x9c] = '\0';
  local_1e8[0x9d] = '\x01';
  local_1e8[0x9e] = '\0';
  local_1e8[0x9f] = '\x01';
  local_1e8[0xa0] = '\x01';
  local_1e8[0xa1] = '\0';
  local_1e8[0xa2] = '\0';
  local_1e8[0xa3] = '\0';
  local_1e8[0xa4] = '\0';
  local_1e8[0xa5] = '\0';
  local_1e8[0xa6] = '\0';
  local_1e8[0xa7] = '\0';
  local_1e8[0xa8] = '\0';
  local_1e8[0xa9] = '\0';
  local_1e8[0xaa] = '\0';
  local_1e8[0xab] = '\0';
  local_1e8[0xac] = '\0';
  local_1e8[0xad] = '\0';
  local_1e8[0xae] = '\0';
  local_1e8[0xaf] = '\0';
  local_1e8[0xb0] = '\x01';
  local_1e8[0xb1] = '\0';
  local_1e8[0xb2] = '\0';
  local_1e8[0xb3] = '\0';
  local_1e8[0xb4] = '\0';
  local_1e8[0xb5] = '\0';
  local_1e8[0xb6] = '\0';
  local_1e8[0xb7] = '\0';
  local_1e8[0xb8] = '\0';
  local_1e8[0xb9] = '\0';
  local_1e8[0xba] = '\0';
  local_1e8[0xbb] = '\0';
  local_1e8[0xbc] = '\0';
  local_1e8[0xbd] = '\0';
  local_1e8[0xbe] = '\0';
  local_1e8[0xbf] = '\0';
  local_1e8[0xc0] = '\x01';
  local_1e8[0xc1] = '\0';
  local_1e8[0xc2] = '\0';
  local_1e8[0xc3] = '\0';
  local_1e8[0xc4] = '\0';
  local_1e8[0xc5] = '\0';
  local_1e8[0xc6] = '\0';
  local_1e8[199] = '\0';
  local_1e8[200] = '\0';
  local_1e8[0xc9] = '\0';
  local_1e8[0xca] = '\0';
  local_1e8[0xcb] = '\0';
  local_1e8[0xcc] = '\0';
  local_1e8[0xcd] = '\0';
  local_1e8[0xce] = '\0';
  local_1e8[0xcf] = '\x01';
  local_1e8[0xd0] = '\x01';
  local_1e8[0xd1] = '\0';
  local_1e8[0xd2] = '\x01';
  local_1e8[0xd3] = '\x01';
  local_1e8[0xd4] = '\x01';
  local_1e8[0xd5] = '\x01';
  local_1e8[0xd6] = '\x01';
  local_1e8[0xd7] = '\x01';
  local_1e8[0xd8] = '\x01';
  local_1e8[0xd9] = '\x01';
  local_1e8[0xda] = '\x01';
  local_1e8[0xdb] = '\x01';
  local_1e8[0xdc] = '\x01';
  local_1e8[0xdd] = '\x01';
  local_1e8[0xde] = '\0';
  local_1e8[0xdf] = '\0';
  local_1e8[0xe0] = 1;
  do {
    FVar5 = *pFVar7;
    pFVar4 = local_a8;
    lVar3 = 0xf;
    local_2e8[0] = FVar5;
    do {
      local_f8 = *pFVar4;
      lVar1 = (longlong)local_2e8[0].Denominator * (longlong)local_f8.Numerator;
      lVar6 = (longlong)FVar5.Numerator * (longlong)local_f8.Denominator;
      if (local_2d8[lVar2] == '\0') {
        if ((lVar6 - lVar1 == 0 || lVar6 < lVar1) && (lVar1 % lVar6 == 0)) {
          local_e0 = local_2e8;
          local_d8 = &local_f8;
          `FFrameRateMultiplesTest::RunTest'::__l12::<lambda_2>::operator()(&local_e0);
          FVar5 = local_2e8[0];
        }
      }
      else if ((lVar6 - lVar1 != 0 && lVar1 <= lVar6) || (lVar1 % lVar6 != 0)) {
        local_f0 = local_2e8;
        local_e8 = &local_f8;
        `FFrameRateMultiplesTest::RunTest'::__l10::<lambda_1>::operator()(&local_f0);
        FVar5 = local_2e8[0];
      }
      lVar6 = (longlong)local_2e8[0].Denominator * (longlong)local_f8.Numerator;
      lVar1 = (longlong)local_f8.Denominator * (longlong)FVar5.Numerator;
      if (local_1e8[lVar2] == '\0') {
        if ((lVar6 - lVar1 == 0 || lVar6 < lVar1) && (lVar1 % lVar6 == 0)) {
          local_c0 = local_2e8;
          local_b8 = &local_f8;
          `FFrameRateMultiplesTest::RunTest'::__l17::<lambda_4>::operator()(&local_c0);
          FVar5 = local_2e8[0];
        }
      }
      else if ((lVar6 - lVar1 != 0 && lVar1 <= lVar6) || (lVar1 % lVar6 != 0)) {
        local_d0 = local_2e8;
        local_c8 = &local_f8;
        `FFrameRateMultiplesTest::RunTest'::__l15::<lambda_3>::operator()(&local_d0);
        FVar5 = local_2e8[0];
      }
      pFVar4 = pFVar4 + 1;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    pFVar7 = pFVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return true;
}

// GetBeautifiedTestName @ 14603a090

FString * __thiscall
FFrameRateMultiplesTest::GetBeautifiedTestName
          (FFrameRateMultiplesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Time.FrameRateMultiples");
  return __return_storage_ptr__;
}

// operator() @ 1504e11a0

bool __thiscall `FFrameRateMultiplesTest::RunTest'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701104>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701104>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1480

bool __thiscall `FFrameRateMultiplesTest::RunTest'::__l12::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701096>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701096>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1760

bool __thiscall `FFrameRateMultiplesTest::RunTest'::__l15::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701087>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701087>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1910

bool __thiscall `FFrameRateMultiplesTest::RunTest'::__l17::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701079>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701079>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

