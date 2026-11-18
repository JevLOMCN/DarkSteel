// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 11

// GetTestFlags @ 146038c00

EAutomationTestFlags __thiscall
FFrameTimeConversionTest::GetTestFlags(FFrameTimeConversionTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 146038c10

bool __thiscall FFrameTimeConversionTest::IsStressTest(FFrameTimeConversionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146038c20

uint __thiscall FFrameTimeConversionTest::GetRequiredDeviceNum(FFrameTimeConversionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146038c30

FString * __thiscall
FFrameTimeConversionTest::GetTestSourceFileName
          (FFrameTimeConversionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\TimeManagementTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146038c60

int __thiscall FFrameTimeConversionTest::GetTestSourceFileLine(FFrameTimeConversionTest *this)

{
  return 0x16b;
}

// GetTests @ 146038c70

/* WARNING: Removing unreachable block (ram,0x000146038d5d) */
/* WARNING: Removing unreachable block (ram,0x000146038e28) */

void __thiscall
FFrameTimeConversionTest::GetTests
          (FFrameTimeConversionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Time.Conversion");
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

// RunTest @ 146038e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FFrameTimeConversionTest::RunTest(FFrameTimeConversionTest *this,FString *param_1)

{
  float fVar1;
  uint uVar2;
  FFrameRate FVar3;
  FFrameRate FVar4;
  FFrameTime *pFVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_228 [32];
  FFrameTime local_208;
  FFrameTime local_200;
  FFrameTime local_1f8 [2];
  FFrameTime local_1e8;
  undefined4 local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  float local_1b4;
  undefined4 local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  float local_19c;
  undefined4 local_198;
  float local_194;
  undefined4 local_190;
  float local_18c;
  undefined4 local_188;
  float local_184;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  undefined4 local_170;
  float local_16c;
  undefined4 local_168;
  float local_164;
  undefined4 local_160;
  float local_15c;
  undefined4 local_158;
  float local_154;
  undefined4 local_150;
  float local_14c;
  undefined8 local_148;
  undefined4 local_140;
  float local_13c;
  undefined4 local_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  undefined4 local_128;
  float local_124;
  undefined4 local_120;
  float local_11c;
  undefined4 local_118;
  float local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  FFrameTime *local_78;
  FFrameTime *local_70;
  FFrameTime *local_68;
  FFrameTime local_60;
  FFrameTime local_58;
  ulonglong local_50;
  
  FVar3 = FCommonFrameRates::AllFrameRates[7].FrameRate;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_38d1b717;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_228;
  lVar6 = 0;
  local_1dc = ::FFrameTime::MaxSubframe;
  if (__real_3d4cccd0 <= ::FFrameTime::MaxSubframe) {
    local_1dc = __real_3d4cccd0;
  }
  local_1e8.FrameNumber.Value = -5;
  local_1d4 = ::FFrameTime::MaxSubframe;
  if (__real_3e23d708 <= ::FFrameTime::MaxSubframe) {
    local_1d4 = __real_3e23d708;
  }
  local_1e8.SubFrame = 0.0;
  local_1cc = ::FFrameTime::MaxSubframe;
  if (__real_3ea3d70a <= ::FFrameTime::MaxSubframe) {
    local_1cc = __real_3ea3d70a;
  }
  local_1e0 = 0xfffffffb;
  local_1c4 = ::FFrameTime::MaxSubframe;
  if (__real_3f000000 <= ::FFrameTime::MaxSubframe) {
    local_1c4 = __real_3f000000;
  }
  local_1d8 = 0xfffffffb;
  local_18c = ::FFrameTime::MaxSubframe;
  if (__real_3f0ccccc <= ::FFrameTime::MaxSubframe) {
    local_18c = __real_3f0ccccc;
  }
  local_1d0 = 0xfffffffb;
  local_184 = ::FFrameTime::MaxSubframe;
  if (__real_3f28f5c4 <= ::FFrameTime::MaxSubframe) {
    local_184 = __real_3f28f5c4;
  }
  if (local_1c4 <= 0.0) {
    local_1c4 = 0.0;
  }
  local_1c8 = 0xfffffffb;
  local_1c0 = 0xfffffffd;
  local_17c = ::FFrameTime::MaxSubframe;
  if (__real_3f51eb84 <= ::FFrameTime::MaxSubframe) {
    local_17c = __real_3f51eb84;
  }
  if (local_1dc <= 0.0) {
    local_1dc = 0.0;
  }
  local_1bc = 0.0;
  if (local_1d4 <= 0.0) {
    local_1d4 = 0.0;
  }
  local_1b8 = 0xfffffffd;
  if (local_1cc <= 0.0) {
    local_1cc = 0.0;
  }
  if (local_18c <= 0.0) {
    local_18c = 0.0;
  }
  if (local_184 <= 0.0) {
    local_184 = 0.0;
  }
  if (local_17c <= 0.0) {
    local_17c = 0.0;
  }
  local_174 = ::FFrameTime::MaxSubframe;
  if (::FFrameTime::MaxSubframe <= 0.0) {
    local_174 = 0.0;
  }
  local_1b0 = 0xfffffffd;
  local_1a8 = 0xfffffffd;
  local_1a0 = 0xfffffffd;
  local_198 = 0xfffffffd;
  local_190 = 0xfffffffd;
  local_188 = 0xfffffffd;
  local_180 = 0xfffffffd;
  local_178 = 0xfffffffd;
  local_170 = 0xfffffffe;
  local_168 = 0xfffffffe;
  local_160 = 0xfffffffe;
  local_158 = 0xfffffffe;
  local_150 = 0xfffffffe;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 1;
  local_118 = 1;
  pFVar5 = TestTimes;
  local_110 = 1;
  local_108 = 1;
  local_100 = 1;
  local_f8 = 2;
  local_f0 = 2;
  local_e8 = 2;
  local_e0 = 2;
  local_d8 = 2;
  local_d0 = 3;
  local_c8 = 3;
  local_c0 = 3;
  local_b8 = 3;
  local_b0 = 3;
  local_a8 = 5;
  local_a0 = 5;
  local_98 = 5;
  local_90 = 5;
  local_88 = 5;
  lVar7 = lVar6;
  local_1b4 = local_1dc;
  local_1ac = local_1d4;
  local_1a4 = local_1cc;
  local_19c = local_1c4;
  local_194 = local_1c4;
  local_16c = local_1c4;
  local_164 = local_18c;
  local_15c = local_184;
  local_154 = local_17c;
  local_14c = local_174;
  local_13c = local_1dc;
  local_134 = local_1d4;
  local_12c = local_1cc;
  local_124 = local_1c4;
  local_11c = local_1c4;
  local_114 = local_18c;
  local_10c = local_184;
  local_104 = local_17c;
  local_fc = local_174;
  local_f4 = local_1c4;
  local_ec = local_18c;
  local_e4 = local_184;
  local_dc = local_17c;
  local_d4 = local_174;
  local_c4 = local_1dc;
  local_bc = local_1d4;
  local_b4 = local_1cc;
  local_ac = local_1c4;
  local_9c = local_1dc;
  local_94 = local_1d4;
  local_8c = local_1cc;
  local_84 = local_1c4;
  do {
    local_1f8[0] = *(FFrameTime *)((longlong)&TestTimes[0].FrameNumber.Value + lVar7);
    ConvertFrameTime((FFrameTime)&local_208,(FFrameRate)local_1f8[0],FVar3);
    local_200 = *(FFrameTime *)((longlong)&local_1e8.FrameNumber.Value + lVar7);
    if (local_208.FrameNumber.Value == local_200.FrameNumber.Value.Value) {
      if (fVar1 < (float)((uint)(local_208.SubFrame - local_200.SubFrame) & uVar2))
      goto LAB_1460391ad;
    }
    else {
LAB_1460391ad:
      local_78 = local_1f8;
      local_70 = &local_208;
      local_68 = &local_200;
      `FFrameTimeConversionTest::RunTest'::__l5::<lambda_1>::operator()(&local_78);
    }
    FVar4 = FCommonFrameRates::AllFrameRates[7].FrameRate;
    lVar7 = lVar7 + 8;
  } while (lVar7 < 0x168);
  local_1e8.SubFrame = ::FFrameTime::MaxSubframe;
  if (__real_3ba3ad00 <= ::FFrameTime::MaxSubframe) {
    local_1e8.SubFrame = __real_3ba3ad00;
  }
  local_1dc = ::FFrameTime::MaxSubframe;
  if (__real_3d610e10 <= ::FFrameTime::MaxSubframe) {
    local_1dc = __real_3d610e10;
  }
  local_1e8.FrameNumber.Value = -5;
  local_1e0 = 0xfffffffb;
  if (local_1e8.SubFrame <= 0.0) {
    local_1e8.SubFrame = 0.0;
  }
  local_1d8 = 0xfffffffb;
  local_1d0 = 0xfffffffb;
  if (local_1dc <= 0.0) {
    local_1dc = 0.0;
  }
  local_1c8 = 0xfffffffb;
  local_1c0 = 0xfffffffd;
  local_1b8 = 0xfffffffd;
  local_1d4 = ::FFrameTime::MaxSubframe;
  if (__real_3e28ca8c <= ::FFrameTime::MaxSubframe) {
    local_1d4 = __real_3e28ca8c;
  }
  local_1cc = ::FFrameTime::MaxSubframe;
  if (__real_3ea63bd8 <= ::FFrameTime::MaxSubframe) {
    local_1cc = __real_3ea63bd8;
  }
  local_1b0 = 0xfffffffd;
  local_1a8 = 0xfffffffd;
  if (local_1d4 <= 0.0) {
    local_1d4 = 0.0;
  }
  local_1a0 = 0xfffffffd;
  local_198 = 0xfffffffd;
  if (local_1cc <= 0.0) {
    local_1cc = 0.0;
  }
  local_190 = 0xfffffffd;
  local_188 = 0xfffffffd;
  local_180 = 0xfffffffd;
  local_1c4 = ::FFrameTime::MaxSubframe;
  if (__real_3f01269e <= ::FFrameTime::MaxSubframe) {
    local_1c4 = __real_3f01269e;
  }
  local_1bc = ::FFrameTime::MaxSubframe;
  if (__real_3b446900 <= ::FFrameTime::MaxSubframe) {
    local_1bc = __real_3b446900;
  }
  local_178 = 0xfffffffe;
  local_170 = 0xfffffffe;
  if (local_1c4 <= 0.0) {
    local_1c4 = 0.0;
  }
  local_168 = 0xfffffffe;
  if (local_1bc <= 0.0) {
    local_1bc = 0.0;
  }
  local_1b4 = ::FFrameTime::MaxSubframe;
  if (__real_3d58df00 <= ::FFrameTime::MaxSubframe) {
    local_1b4 = __real_3d58df00;
  }
  local_1ac = ::FFrameTime::MaxSubframe;
  if (__real_3e26bec8 <= ::FFrameTime::MaxSubframe) {
    local_1ac = __real_3e26bec8;
  }
  if (local_1b4 <= 0.0) {
    local_1b4 = 0.0;
  }
  if (local_1ac <= 0.0) {
    local_1ac = 0.0;
  }
  local_1a4 = ::FFrameTime::MaxSubframe;
  if (__real_3ea535f6 <= ::FFrameTime::MaxSubframe) {
    local_1a4 = __real_3ea535f6;
  }
  local_19c = ::FFrameTime::MaxSubframe;
  if (__real_3f00a3ac <= ::FFrameTime::MaxSubframe) {
    local_19c = __real_3f00a3ac;
  }
  if (local_1a4 <= 0.0) {
    local_1a4 = 0.0;
  }
  if (local_19c <= 0.0) {
    local_19c = 0.0;
  }
  local_18c = ::FFrameTime::MaxSubframe;
  if (__real_3f0d6d34 <= ::FFrameTime::MaxSubframe) {
    local_18c = __real_3f0d6d34;
  }
  local_184 = ::FFrameTime::MaxSubframe;
  if (__real_3f298ef6 <= ::FFrameTime::MaxSubframe) {
    local_184 = __real_3f298ef6;
  }
  if (local_18c <= 0.0) {
    local_18c = 0.0;
  }
  if (local_184 <= 0.0) {
    local_184 = 0.0;
  }
  local_17c = ::FFrameTime::MaxSubframe;
  if (__real_3f527a40 <= ::FFrameTime::MaxSubframe) {
    local_17c = __real_3f527a40;
  }
  local_174 = ::FFrameTime::MaxSubframe;
  if (__real_3b02f100 <= ::FFrameTime::MaxSubframe) {
    local_174 = __real_3b02f100;
  }
  if (local_17c <= 0.0) {
    local_17c = 0.0;
  }
  if (local_174 <= 0.0) {
    local_174 = 0.0;
  }
  local_16c = ::FFrameTime::MaxSubframe;
  if (__real_3f006234 <= ::FFrameTime::MaxSubframe) {
    local_16c = __real_3f006234;
  }
  if (local_16c <= 0.0) {
    local_16c = 0.0;
  }
  local_160 = 0xfffffffe;
  local_164 = ::FFrameTime::MaxSubframe;
  if (__real_3f0d2bbc <= ::FFrameTime::MaxSubframe) {
    local_164 = __real_3f0d2bbc;
  }
  local_158 = 0xfffffffe;
  local_15c = ::FFrameTime::MaxSubframe;
  if (__real_3f294d7e <= ::FFrameTime::MaxSubframe) {
    local_15c = __real_3f294d7e;
  }
  local_150 = 0xffffffff;
  local_148 = 0;
  if (local_164 <= 0.0) {
    local_164 = 0.0;
  }
  local_140 = 0;
  local_138 = 0;
  if (local_15c <= 0.0) {
    local_15c = 0.0;
  }
  local_130 = 0;
  local_128 = 0;
  local_120 = 1;
  local_154 = ::FFrameTime::MaxSubframe;
  if (__real_3f5238c6 <= ::FFrameTime::MaxSubframe) {
    local_154 = __real_3f5238c6;
  }
  local_14c = ::FFrameTime::MaxSubframe;
  if (__real_3a82f000 <= ::FFrameTime::MaxSubframe) {
    local_14c = __real_3a82f000;
  }
  local_118 = 1;
  local_110 = 1;
  if (local_154 <= 0.0) {
    local_154 = 0.0;
  }
  local_108 = 1;
  local_100 = 1;
  if (local_14c <= 0.0) {
    local_14c = 0.0;
  }
  local_f8 = 2;
  local_f0 = 2;
  local_e8 = 2;
  local_134 = ::FFrameTime::MaxSubframe;
  if (__real_3e23ad24 <= ::FFrameTime::MaxSubframe) {
    local_134 = __real_3e23ad24;
  }
  local_13c = ::FFrameTime::MaxSubframe;
  if (__real_3d4c9870 <= ::FFrameTime::MaxSubframe) {
    local_13c = __real_3d4c9870;
  }
  local_e0 = 2;
  if (local_134 <= 0.0) {
    local_134 = 0.0;
  }
  if (local_13c <= 0.0) {
    local_13c = 0.0;
  }
  local_124 = ::FFrameTime::MaxSubframe;
  if (__real_3effbe88 <= ::FFrameTime::MaxSubframe) {
    local_124 = __real_3effbe88;
  }
  local_12c = ::FFrameTime::MaxSubframe;
  if (__real_3ea3ad24 <= ::FFrameTime::MaxSubframe) {
    local_12c = __real_3ea3ad24;
  }
  if (local_124 <= 0.0) {
    local_124 = 0.0;
  }
  if (local_12c <= 0.0) {
    local_12c = 0.0;
  }
  local_114 = ::FFrameTime::MaxSubframe;
  if (__real_3f0c6752 <= ::FFrameTime::MaxSubframe) {
    local_114 = __real_3f0c6752;
  }
  local_11c = ::FFrameTime::MaxSubframe;
  if (__real_3eff3b98 <= ::FFrameTime::MaxSubframe) {
    local_11c = __real_3eff3b98;
  }
  if (local_114 <= 0.0) {
    local_114 = 0.0;
  }
  if (local_11c <= 0.0) {
    local_11c = 0.0;
  }
  local_104 = ::FFrameTime::MaxSubframe;
  if (__real_3f51745c <= ::FFrameTime::MaxSubframe) {
    local_104 = __real_3f51745c;
  }
  local_10c = ::FFrameTime::MaxSubframe;
  if (__real_3f288914 <= ::FFrameTime::MaxSubframe) {
    local_10c = __real_3f288914;
  }
  if (local_104 <= 0.0) {
    local_104 = 0.0;
  }
  if (local_10c <= 0.0) {
    local_10c = 0.0;
  }
  local_f4 = ::FFrameTime::MaxSubframe;
  if (__real_3efeb8a6 <= ::FFrameTime::MaxSubframe) {
    local_f4 = __real_3efeb8a6;
  }
  local_fc = ::FFrameTime::MaxSubframe;
  if (__real_3f7f7d10 <= ::FFrameTime::MaxSubframe) {
    local_fc = __real_3f7f7d10;
  }
  if (local_f4 <= 0.0) {
    local_f4 = 0.0;
  }
  if (local_fc <= 0.0) {
    local_fc = 0.0;
  }
  local_e4 = ::FFrameTime::MaxSubframe;
  if (__real_3f28479c <= ::FFrameTime::MaxSubframe) {
    local_e4 = __real_3f28479c;
  }
  local_ec = ::FFrameTime::MaxSubframe;
  if (__real_3f0c25da <= ::FFrameTime::MaxSubframe) {
    local_ec = __real_3f0c25da;
  }
  if (local_e4 <= 0.0) {
    local_e4 = 0.0;
  }
  if (local_ec <= 0.0) {
    local_ec = 0.0;
  }
  local_d8 = 2;
  local_dc = ::FFrameTime::MaxSubframe;
  if (__real_3f5132e4 <= ::FFrameTime::MaxSubframe) {
    local_dc = __real_3f5132e4;
  }
  local_d4 = ::FFrameTime::MaxSubframe;
  if (__real_3f7f3b96 <= ::FFrameTime::MaxSubframe) {
    local_d4 = __real_3f7f3b96;
  }
  local_c8 = 3;
  local_c0 = 3;
  if (local_dc <= 0.0) {
    local_dc = 0.0;
  }
  local_b8 = 3;
  local_b0 = 3;
  if (local_d4 <= 0.0) {
    local_d4 = 0.0;
  }
  local_a0 = 5;
  local_98 = 5;
  fVar8 = ::FFrameTime::MaxSubframe;
  if (__real_3f7f3b98 <= ::FFrameTime::MaxSubframe) {
    fVar8 = __real_3f7f3b98;
  }
  local_c4 = ::FFrameTime::MaxSubframe;
  if (__real_3d4051d0 <= ::FFrameTime::MaxSubframe) {
    local_c4 = __real_3d4051d0;
  }
  local_90 = 5;
  local_88 = 5;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (local_c4 <= 0.0) {
    local_c4 = 0.0;
  }
  local_d0 = CONCAT44(fVar8,2);
  local_bc = ::FFrameTime::MaxSubframe;
  if (__real_3e209b80 <= ::FFrameTime::MaxSubframe) {
    local_bc = __real_3e209b80;
  }
  local_b4 = ::FFrameTime::MaxSubframe;
  if (__real_3ea22450 <= ::FFrameTime::MaxSubframe) {
    local_b4 = __real_3ea22450;
  }
  if (local_bc <= 0.0) {
    local_bc = 0.0;
  }
  if (local_b4 <= 0.0) {
    local_b4 = 0.0;
  }
  local_ac = ::FFrameTime::MaxSubframe;
  if (__real_3efe35b4 <= ::FFrameTime::MaxSubframe) {
    local_ac = __real_3efe35b4;
  }
  fVar8 = ::FFrameTime::MaxSubframe;
  if (__real_3f7eb8a6 <= ::FFrameTime::MaxSubframe) {
    fVar8 = __real_3f7eb8a6;
  }
  if (local_ac <= 0.0) {
    local_ac = 0.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  local_9c = ::FFrameTime::MaxSubframe;
  if (__real_3d3822c0 <= ::FFrameTime::MaxSubframe) {
    local_9c = __real_3d3822c0;
  }
  local_a8 = CONCAT44(fVar8,4);
  local_94 = ::FFrameTime::MaxSubframe;
  if (__real_3e1e8fb8 <= ::FFrameTime::MaxSubframe) {
    local_94 = __real_3e1e8fb8;
  }
  if (local_9c <= 0.0) {
    local_9c = 0.0;
  }
  if (local_94 <= 0.0) {
    local_94 = 0.0;
  }
  local_8c = ::FFrameTime::MaxSubframe;
  if (__real_3ea11e70 <= ::FFrameTime::MaxSubframe) {
    local_8c = __real_3ea11e70;
  }
  local_84 = ::FFrameTime::MaxSubframe;
  if (__real_3efd2fd2 <= ::FFrameTime::MaxSubframe) {
    local_84 = __real_3efd2fd2;
  }
  if (local_8c <= 0.0) {
    local_8c = 0.0;
  }
  local_194 = local_19c;
  if (local_84 <= 0.0) {
    local_84 = 0.0;
  }
  do {
    local_1f8[0] = *(FFrameTime *)((longlong)&TestTimes[0].FrameNumber.Value + lVar6);
    ConvertFrameTime((FFrameTime)&local_208,(FFrameRate)local_1f8[0],FVar4);
    local_200 = *(FFrameTime *)((longlong)&local_1e8.FrameNumber.Value + lVar6);
    if (local_208.FrameNumber.Value == local_200.FrameNumber.Value.Value) {
      if (fVar1 < (float)((uint)(local_208.SubFrame - local_200.SubFrame) & uVar2))
      goto LAB_146039720;
    }
    else {
LAB_146039720:
      local_78 = local_1f8;
      local_70 = &local_208;
      local_68 = &local_200;
      `FFrameTimeConversionTest::RunTest'::__l8::<lambda_2>::operator()(&local_78);
    }
    FVar3 = FCommonFrameRates::AllFrameRates[7].FrameRate;
    lVar6 = lVar6 + 8;
  } while (lVar6 < 0x168);
  do {
    local_60 = *pFVar5;
    ConvertFrameTime((FFrameTime)&local_200,(FFrameRate)local_60,FVar3);
    local_208 = *pFVar5;
    local_1f8[0] = local_200;
    local_58 = local_208;
    if (local_200.FrameNumber.Value.Value == local_208.FrameNumber.Value.Value) {
      local_1f8[0].SubFrame = local_200.SubFrame;
      fVar8 = local_1f8[0].SubFrame - local_208.SubFrame;
      if (fVar1 < (float)((uint)fVar8 & uVar2)) goto LAB_1460397bb;
    }
    else {
LAB_1460397bb:
      local_78 = &local_60;
      local_70 = &local_200;
      local_68 = &local_58;
      `FFrameTimeConversionTest::RunTest'::__l11::<lambda_3>::operator()(&local_78);
    }
    pFVar5 = pFVar5 + 1;
    if (0x154beeab7 < (longlong)pFVar5) {
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 146039840

FString * __thiscall
FFrameTimeConversionTest::GetBeautifiedTestName
          (FFrameTimeConversionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Time.Conversion");
  return __return_storage_ptr__;
}

// operator() @ 1504e0fa0

bool __thiscall `FFrameTimeConversionTest::RunTest'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701237>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701237>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1300

bool __thiscall `FFrameTimeConversionTest::RunTest'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701206>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701206>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1640

bool __thiscall `FFrameTimeConversionTest::RunTest'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701188>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701188>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

