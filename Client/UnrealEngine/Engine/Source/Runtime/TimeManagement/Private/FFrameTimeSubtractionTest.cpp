// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 12

// GetTestFlags @ 146037a70

EAutomationTestFlags __thiscall
FFrameTimeSubtractionTest::GetTestFlags(FFrameTimeSubtractionTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 146037a80

bool __thiscall FFrameTimeSubtractionTest::IsStressTest(FFrameTimeSubtractionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146037a90

uint __thiscall FFrameTimeSubtractionTest::GetRequiredDeviceNum(FFrameTimeSubtractionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146037aa0

FString * __thiscall
FFrameTimeSubtractionTest::GetTestSourceFileName
          (FFrameTimeSubtractionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\TimeManagementTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146037ad0

int __thiscall FFrameTimeSubtractionTest::GetTestSourceFileLine(FFrameTimeSubtractionTest *this)

{
  return 0xef;
}

// GetTests @ 146037ae0

/* WARNING: Removing unreachable block (ram,0x000146037bcd) */
/* WARNING: Removing unreachable block (ram,0x000146037c98) */

void __thiscall
FFrameTimeSubtractionTest::GetTests
          (FFrameTimeSubtractionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Time.Subtraction");
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

// RunTest @ 146037cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FFrameTimeSubtractionTest::RunTest(FFrameTimeSubtractionTest *this,FString *param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auStack_228 [32];
  int local_208;
  float fStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
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
  undefined4 local_148;
  float local_144;
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
  undefined4 local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int *local_60;
  undefined8 *local_58;
  ulonglong local_50;
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_38d1b717;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1e8._0_4_ = 0xffffffeb;
  local_1e8._4_4_ = ::FFrameTime::MaxSubframe;
  if (__real_3f666666 <= ::FFrameTime::MaxSubframe) {
    local_1e8._4_4_ = __real_3f666666;
  }
  local_1e0 = 0xffffffec;
  fVar7 = ::FFrameTime::MaxSubframe;
  if (__real_3e6147b0 <= ::FFrameTime::MaxSubframe) {
    fVar7 = __real_3e6147b0;
  }
  auVar5 = ZEXT416((uint)fVar7);
  local_1dc = 0.0;
  local_1cc = ::FFrameTime::MaxSubframe;
  if (__real_3f0a3d70 <= ::FFrameTime::MaxSubframe) {
    local_1cc = __real_3f0a3d70;
  }
  if (local_1e8._4_4_ <= 0.0) {
    local_1e8._4_4_ = 0.0;
  }
  local_1d8 = 0xffffffec;
  local_1d0 = 0xffffffec;
  local_1c4 = ::FFrameTime::MaxSubframe;
  if (__real_3f666664 <= ::FFrameTime::MaxSubframe) {
    local_1c4 = __real_3f666664;
  }
  if (fVar7 <= 0.0) {
    auVar5 = ZEXT816(0) << 0x20;
  }
  local_1c8 = 0xffffffec;
  if (local_1cc <= 0.0) {
    local_1cc = 0.0;
  }
  local_1c0 = 0xffffffef;
  fVar7 = ::FFrameTime::MaxSubframe;
  if (__real_3dccccd0 <= ::FFrameTime::MaxSubframe) {
    fVar7 = __real_3dccccd0;
  }
  if (local_1c4 <= 0.0) {
    local_1c4 = 0.0;
  }
  local_1bc = local_1e8._4_4_;
  local_1d4 = auVar5._0_4_;
  local_1ac = local_1d4;
  local_1a4 = local_1cc;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_19c = local_1c4;
  local_194 = local_1e8._4_4_;
  local_184 = local_1d4;
  local_17c = local_1cc;
  local_174 = local_1c4;
  local_16c = local_1e8._4_4_;
  local_15c = local_1d4;
  local_154 = local_1cc;
  local_14c = local_1c4;
  local_144 = local_1e8._4_4_;
  local_134 = local_1d4;
  local_12c = local_1cc;
  local_124 = local_1c4;
  local_11c = local_1e8._4_4_;
  local_10c = local_1d4;
  local_104 = local_1cc;
  local_fc = local_1c4;
  local_f4 = local_1e8._4_4_;
  local_1b8 = 0xfffffff0;
  local_1b4 = 0.0;
  local_1b0 = 0xfffffff0;
  local_1a8 = 0xfffffff0;
  local_1a0 = 0xfffffff0;
  local_198 = 0xfffffff0;
  local_190 = 0xfffffff1;
  local_18c = 0.0;
  local_188 = 0xfffffff1;
  local_180 = 0xfffffff1;
  local_178 = 0xfffffff1;
  local_170 = 0xfffffff2;
  local_168 = 0xfffffff3;
  local_164 = 0.0;
  local_160 = 0xfffffff3;
  local_158 = 0xfffffff3;
  local_150 = 0xfffffff3;
  local_148 = 0xfffffff5;
  local_140 = 0xfffffff6;
  local_13c = 0.0;
  local_138 = 0xfffffff6;
  local_130 = 0xfffffff6;
  local_128 = 0xfffffff6;
  local_120 = 0xfffffff8;
  local_118 = 0xfffffff9;
  local_114 = 0.0;
  local_110 = 0xfffffff9;
  local_108 = 0xfffffff9;
  local_100 = 0xfffffff9;
  local_f8 = 0xfffffffa;
  local_f0 = 0xfffffffb;
  local_ec = 0.0;
  lVar4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_e4 = local_1d4;
  local_dc = local_1cc;
  local_d4 = local_1c4;
  local_cc = local_1e8._4_4_;
  local_bc = local_1d4;
  local_b4 = local_1cc;
  local_ac = local_1c4;
  local_a4 = local_1e8._4_4_;
  local_94 = local_1d4;
  local_8c = local_1cc;
  local_84 = local_1c4;
  local_e8 = 0xfffffffb;
  local_e0 = 0xfffffffb;
  local_d8 = 0xfffffffb;
  local_d0 = 0xfffffffb;
  local_c8 = 0xfffffffc;
  local_c4 = 0.0;
  local_c0 = 0xfffffffc;
  local_b8 = 0xfffffffc;
  local_b0 = 0xfffffffc;
  local_a8 = 0xffffffff;
  lVar3 = lVar4;
  fVar6 = ::FFrameTime::MaxSubframe;
  do {
    local_70 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar3);
    local_1f8._4_4_ = (float)((ulonglong)local_70 >> 0x20);
    auVar5 = roundps(auVar5,ZEXT416((uint)(local_1f8._4_4_ - fVar7)),1);
    fStack_204 = (local_1f8._4_4_ - fVar7) - auVar5._0_4_;
    if (fVar6 <= fStack_204) {
      fStack_204 = fVar6;
    }
    local_208 = (int)auVar5._0_4_ + -10 + (int)local_70;
    local_200 = *(undefined8 *)((longlong)&local_1e8 + lVar3);
    if (fStack_204 <= 0.0) {
      fStack_204 = 0.0;
    }
    local_1f8 = CONCAT44(fStack_204,local_208);
    if ((local_208 != (int)local_200) ||
       (local_78._4_4_ = (float)((ulonglong)local_200 >> 0x20),
       fVar1 < (float)((uint)(fStack_204 - local_78._4_4_) & uVar2))) {
      local_68 = &local_70;
      local_60 = &local_208;
      local_58 = &local_200;
      local_78 = local_200;
      `FFrameTimeSubtractionTest::RunTest'::__l5::<lambda_1>::operator()(&local_68);
      fVar6 = ::FFrameTime::MaxSubframe;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 < 0x168);
  local_1e8._0_4_ = 0xffffffeb;
  local_1e8._4_4_ = fVar6;
  if (__real_3e4ccccc <= fVar6) {
    local_1e8._4_4_ = __real_3e4ccccc;
  }
  local_1e0 = 0xffffffeb;
  local_1dc = fVar6;
  if (__real_3e99999a <= fVar6) {
    local_1dc = __real_3e99999a;
  }
  local_1d8 = 0xffffffeb;
  fVar7 = fVar6;
  if (__real_3f051eb8 <= fVar6) {
    fVar7 = __real_3f051eb8;
  }
  auVar5 = ZEXT416((uint)fVar7);
  if (local_1e8._4_4_ <= 0.0) {
    local_1e8._4_4_ = 0.0;
  }
  local_1d0 = 0xffffffeb;
  local_1c8 = 0xffffffec;
  local_1cc = fVar6;
  if (__real_3f570a3c <= fVar6) {
    local_1cc = __real_3f570a3c;
  }
  if (local_1dc <= 0.0) {
    local_1dc = 0.0;
  }
  local_1c0 = 0xffffffef;
  if (fVar7 <= 0.0) {
    auVar5 = ZEXT816(0) << 0x20;
  }
  local_1b8 = 0xffffffef;
  local_1c4 = fVar6;
  if (__real_3e4cccc8 <= fVar6) {
    local_1c4 = __real_3e4cccc8;
  }
  if (local_1cc <= 0.0) {
    local_1cc = 0.0;
  }
  local_1bc = local_1e8._4_4_;
  fVar7 = fVar6;
  if (__real_3f4ccccc <= fVar6) {
    fVar7 = __real_3f4ccccc;
  }
  local_1d4 = auVar5._0_4_;
  if (local_1c4 <= 0.0) {
    local_1c4 = 0.0;
  }
  local_1b4 = local_1dc;
  local_1ac = local_1d4;
  local_1a4 = local_1cc;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_194 = local_1e8._4_4_;
  local_19c = local_1c4;
  local_18c = local_1dc;
  local_184 = local_1d4;
  local_17c = local_1cc;
  local_174 = local_1c4;
  local_16c = local_1e8._4_4_;
  local_164 = local_1dc;
  local_15c = local_1d4;
  local_154 = local_1cc;
  local_14c = local_1c4;
  local_144 = local_1e8._4_4_;
  local_13c = local_1dc;
  local_134 = local_1d4;
  local_12c = local_1cc;
  local_124 = local_1c4;
  local_11c = local_1e8._4_4_;
  local_114 = local_1dc;
  local_10c = local_1d4;
  local_104 = local_1cc;
  local_fc = local_1c4;
  local_f4 = local_1e8._4_4_;
  local_1b0 = 0xffffffef;
  local_1a8 = 0xffffffef;
  local_1a0 = 0xfffffff0;
  local_198 = 0xfffffff0;
  local_190 = 0xfffffff0;
  local_188 = 0xfffffff0;
  local_180 = 0xfffffff0;
  local_178 = 0xfffffff1;
  local_170 = 0xfffffff2;
  local_168 = 0xfffffff2;
  local_160 = 0xfffffff2;
  local_158 = 0xfffffff2;
  local_150 = 0xfffffff3;
  local_148 = 0xfffffff5;
  local_140 = 0xfffffff5;
  local_138 = 0xfffffff5;
  local_130 = 0xfffffff5;
  local_128 = 0xfffffff6;
  local_120 = 0xfffffff8;
  local_118 = 0xfffffff8;
  local_110 = 0xfffffff8;
  local_108 = 0xfffffff8;
  local_100 = 0xfffffff9;
  local_f8 = 0xfffffffa;
  local_f0 = 0xfffffffa;
  local_ec = local_1dc;
  local_e4 = local_1d4;
  local_dc = local_1cc;
  local_d4 = local_1c4;
  local_cc = local_1e8._4_4_;
  local_c4 = local_1dc;
  local_bc = local_1d4;
  local_b4 = local_1cc;
  local_ac = local_1c4;
  local_a4 = local_1e8._4_4_;
  local_94 = local_1d4;
  local_8c = local_1cc;
  local_84 = local_1c4;
  local_e8 = 0xfffffffa;
  local_e0 = 0xfffffffa;
  local_d8 = 0xfffffffb;
  local_d0 = 0xfffffffb;
  local_c8 = 0xfffffffb;
  local_c0 = 0xfffffffb;
  local_b8 = 0xfffffffb;
  local_b0 = 0xfffffffc;
  local_a8 = 0xffffffff;
  local_a0 = CONCAT44(local_1dc,0xffffffff);
  local_98 = 0xffffffff;
  local_90 = 0xffffffff;
  local_88 = 0;
  lVar3 = lVar4;
  do {
    local_78 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar3);
    local_200._4_4_ = (float)((ulonglong)local_78 >> 0x20);
    auVar5 = roundps(auVar5,ZEXT416((uint)(local_200._4_4_ - fVar7)),1);
    fStack_204 = (local_200._4_4_ - fVar7) - auVar5._0_4_;
    if (fVar6 <= fStack_204) {
      fStack_204 = fVar6;
    }
    local_208 = (int)auVar5._0_4_ + -10 + (int)local_78;
    local_1f8 = *(undefined8 *)((longlong)&local_1e8 + lVar3);
    if (fStack_204 <= 0.0) {
      fStack_204 = 0.0;
    }
    local_200 = CONCAT44(fStack_204,local_208);
    if ((local_208 != (int)local_1f8) ||
       (local_70._4_4_ = (float)((ulonglong)local_1f8 >> 0x20),
       fVar1 < (float)((uint)(fStack_204 - local_70._4_4_) & uVar2))) {
      local_68 = &local_78;
      local_60 = &local_208;
      local_58 = &local_1f8;
      local_70 = local_1f8;
      `FFrameTimeSubtractionTest::RunTest'::__l8::<lambda_2>::operator()(&local_68);
      fVar6 = ::FFrameTime::MaxSubframe;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 < 0x168);
  local_1e8._0_4_ = 2;
  local_1e8._4_4_ = fVar6;
  if (__real_3f7d70a4 <= fVar6) {
    local_1e8._4_4_ = __real_3f7d70a4;
  }
  local_1e0 = 3;
  fVar7 = fVar6;
  if (__real_3db851f0 <= fVar6) {
    fVar7 = __real_3db851f0;
  }
  auVar5 = ZEXT416((uint)fVar7);
  local_1d8 = 3;
  local_1d4 = fVar6;
  if (__real_3e9eb852 <= fVar6) {
    local_1d4 = __real_3e9eb852;
  }
  if (local_1e8._4_4_ <= 0.0) {
    local_1e8._4_4_ = 0.0;
  }
  local_1d0 = 3;
  local_1c8 = 3;
  local_1cc = fVar6;
  if (__real_3f2147ae <= fVar6) {
    local_1cc = __real_3f2147ae;
  }
  if (fVar7 <= 0.0) {
    auVar5 = ZEXT816(0) << 0x20;
  }
  local_1c0 = 6;
  if (local_1d4 <= 0.0) {
    local_1d4 = 0.0;
  }
  local_1b8 = 7;
  fVar7 = fVar6;
  if (__real_3c23d700 <= fVar6) {
    fVar7 = __real_3c23d700;
  }
  if (local_1cc <= 0.0) {
    local_1cc = 0.0;
  }
  local_1c4 = local_1e8._4_4_;
  local_1dc = auVar5._0_4_;
  local_1bc = local_1e8._4_4_;
  local_1b4 = local_1dc;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_1ac = local_1d4;
  local_1a4 = local_1cc;
  local_19c = local_1e8._4_4_;
  local_194 = local_1e8._4_4_;
  local_18c = local_1dc;
  local_184 = local_1d4;
  local_17c = local_1cc;
  local_174 = local_1e8._4_4_;
  local_16c = local_1e8._4_4_;
  local_164 = local_1dc;
  local_15c = local_1d4;
  local_154 = local_1cc;
  local_14c = local_1e8._4_4_;
  local_144 = local_1e8._4_4_;
  local_13c = local_1dc;
  local_134 = local_1d4;
  local_12c = local_1cc;
  local_124 = local_1e8._4_4_;
  local_11c = local_1e8._4_4_;
  local_114 = local_1dc;
  local_10c = local_1d4;
  local_104 = local_1cc;
  local_fc = local_1e8._4_4_;
  local_f4 = local_1e8._4_4_;
  local_ec = local_1dc;
  local_e4 = local_1d4;
  local_1b0 = 7;
  local_1a8 = 7;
  local_1a0 = 7;
  local_198 = 7;
  local_190 = 8;
  local_188 = 8;
  local_180 = 8;
  local_178 = 8;
  local_170 = 9;
  local_168 = 10;
  local_160 = 10;
  local_158 = 10;
  local_150 = 10;
  local_148 = 0xc;
  local_140 = 0xd;
  local_138 = 0xd;
  local_130 = 0xd;
  local_128 = 0xd;
  local_120 = 0xf;
  local_118 = 0x10;
  local_110 = 0x10;
  local_108 = 0x10;
  local_100 = 0x10;
  local_f8 = 0x11;
  local_f0 = 0x12;
  local_e8 = 0x12;
  local_dc = local_1cc;
  local_d4 = local_1e8._4_4_;
  local_cc = local_1e8._4_4_;
  local_c4 = local_1dc;
  local_bc = local_1d4;
  local_b4 = local_1cc;
  local_ac = local_1e8._4_4_;
  local_a4 = local_1e8._4_4_;
  local_94 = local_1d4;
  local_8c = local_1cc;
  local_84 = local_1e8._4_4_;
  local_e0 = 0x12;
  local_d8 = 0x12;
  local_d0 = 0x12;
  local_c8 = 0x13;
  local_c0 = 0x13;
  local_b8 = 0x13;
  local_b0 = 0x13;
  local_a8 = 0x16;
  local_a0 = CONCAT44(local_1dc,0x17);
  local_98 = 0x17;
  local_90 = 0x17;
  local_88 = 0x17;
  lVar3 = lVar4;
  do {
    local_78 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar3);
    local_200._4_4_ = (float)((ulonglong)local_78 >> 0x20);
    auVar5 = roundps(auVar5,ZEXT416((uint)(local_200._4_4_ - fVar7)),1);
    fStack_204 = (local_200._4_4_ - fVar7) - auVar5._0_4_;
    if (fVar6 <= fStack_204) {
      fStack_204 = fVar6;
    }
    local_208 = (int)auVar5._0_4_ + 0xd + (int)local_78;
    local_1f8 = *(undefined8 *)((longlong)&local_1e8 + lVar3);
    if (fStack_204 <= 0.0) {
      fStack_204 = 0.0;
    }
    local_200 = CONCAT44(fStack_204,local_208);
    if ((local_208 != (int)local_1f8) ||
       (local_70._4_4_ = (float)((ulonglong)local_1f8 >> 0x20),
       fVar1 < (float)((uint)(fStack_204 - local_70._4_4_) & uVar2))) {
      local_68 = &local_78;
      local_60 = &local_208;
      local_58 = &local_1f8;
      local_70 = local_1f8;
      `FFrameTimeSubtractionTest::RunTest'::__l11::<lambda_3>::operator()(&local_68);
      fVar6 = ::FFrameTime::MaxSubframe;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 < 0x168);
  local_1e8._0_4_ = 2;
  local_1e8._4_4_ = fVar6;
  if (__real_3dccccd0 <= fVar6) {
    local_1e8._4_4_ = __real_3dccccd0;
  }
  local_1e0 = 2;
  local_1dc = fVar6;
  if (__real_3e4cccd0 <= fVar6) {
    local_1dc = __real_3e4cccd0;
  }
  local_1d8 = 2;
  fVar7 = fVar6;
  if (__real_3ed70a3e <= fVar6) {
    fVar7 = __real_3ed70a3e;
  }
  auVar5 = ZEXT416((uint)fVar7);
  if (local_1e8._4_4_ <= 0.0) {
    local_1e8._4_4_ = 0.0;
  }
  local_1d0 = 2;
  local_1c8 = 3;
  local_1cc = fVar6;
  if (__real_3f3d70a4 <= fVar6) {
    local_1cc = __real_3f3d70a4;
  }
  if (local_1dc <= 0.0) {
    local_1dc = 0.0;
  }
  local_1c0 = 6;
  if (fVar7 <= 0.0) {
    auVar5 = ZEXT816(0) << 0x20;
  }
  local_1b8 = 6;
  local_1c4 = fVar6;
  if (__real_3dccccc8 <= fVar6) {
    local_1c4 = __real_3dccccc8;
  }
  if (local_1cc <= 0.0) {
    local_1cc = 0.0;
  }
  local_1bc = local_1e8._4_4_;
  fVar7 = fVar6;
  if (__real_3f666666 <= fVar6) {
    fVar7 = __real_3f666666;
  }
  local_1d4 = auVar5._0_4_;
  if (local_1c4 <= 0.0) {
    local_1c4 = 0.0;
  }
  local_1b4 = local_1dc;
  local_1ac = local_1d4;
  local_1a4 = local_1cc;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_194 = local_1e8._4_4_;
  local_19c = local_1c4;
  local_18c = local_1dc;
  local_184 = local_1d4;
  local_17c = local_1cc;
  local_174 = local_1c4;
  local_16c = local_1e8._4_4_;
  local_164 = local_1dc;
  local_15c = local_1d4;
  local_154 = local_1cc;
  local_14c = local_1c4;
  local_144 = local_1e8._4_4_;
  local_13c = local_1dc;
  local_134 = local_1d4;
  local_12c = local_1cc;
  local_124 = local_1c4;
  local_11c = local_1e8._4_4_;
  local_114 = local_1dc;
  local_10c = local_1d4;
  local_104 = local_1cc;
  local_fc = local_1c4;
  local_f4 = local_1e8._4_4_;
  local_1b0 = 6;
  local_1a8 = 6;
  local_1a0 = 7;
  local_198 = 7;
  local_190 = 7;
  local_188 = 7;
  local_180 = 7;
  local_178 = 8;
  local_170 = 9;
  local_168 = 9;
  local_160 = 9;
  local_158 = 9;
  local_150 = 10;
  local_148 = 0xc;
  local_140 = 0xc;
  local_138 = 0xc;
  local_130 = 0xc;
  local_128 = 0xd;
  local_120 = 0xf;
  local_118 = 0xf;
  local_110 = 0xf;
  local_108 = 0xf;
  local_100 = 0x10;
  local_f8 = 0x11;
  local_f0 = 0x11;
  local_ec = local_1dc;
  local_e4 = local_1d4;
  local_dc = local_1cc;
  local_d4 = local_1c4;
  local_cc = local_1e8._4_4_;
  local_c4 = local_1dc;
  local_bc = local_1d4;
  local_b4 = local_1cc;
  local_ac = local_1c4;
  local_a4 = local_1e8._4_4_;
  local_94 = local_1d4;
  local_8c = local_1cc;
  local_84 = local_1c4;
  local_e8 = 0x11;
  local_e0 = 0x11;
  local_d8 = 0x12;
  local_d0 = 0x12;
  local_c8 = 0x12;
  local_c0 = 0x12;
  local_b8 = 0x12;
  local_b0 = 0x13;
  local_a8 = 0x16;
  local_a0 = CONCAT44(local_1dc,0x16);
  local_98 = 0x16;
  local_90 = 0x16;
  local_88 = 0x17;
  do {
    local_78 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar4);
    local_200._4_4_ = (float)((ulonglong)local_78 >> 0x20);
    auVar5 = roundps(auVar5,ZEXT416((uint)(local_200._4_4_ - fVar7)),1);
    fStack_204 = (local_200._4_4_ - fVar7) - auVar5._0_4_;
    if (fVar6 <= fStack_204) {
      fStack_204 = fVar6;
    }
    local_208 = (int)auVar5._0_4_ + 0xd + (int)local_78;
    local_1f8 = *(undefined8 *)((longlong)&local_1e8 + lVar4);
    if (fStack_204 <= 0.0) {
      fStack_204 = 0.0;
    }
    local_200 = CONCAT44(fStack_204,local_208);
    if ((local_208 != (int)local_1f8) ||
       (local_70._4_4_ = (float)((ulonglong)local_1f8 >> 0x20),
       fVar1 < (float)((uint)(fStack_204 - local_70._4_4_) & uVar2))) {
      local_68 = &local_78;
      local_60 = &local_208;
      local_58 = &local_1f8;
      local_70 = local_1f8;
      `FFrameTimeSubtractionTest::RunTest'::__l14::<lambda_4>::operator()(&local_68);
      fVar6 = ::FFrameTime::MaxSubframe;
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 < 0x168);
  return true;
}

// GetBeautifiedTestName @ 146038b40

FString * __thiscall
FFrameTimeSubtractionTest::GetBeautifiedTestName
          (FFrameTimeSubtractionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Time.Subtraction");
  return __return_storage_ptr__;
}

// operator() @ 1504e1030

bool __thiscall `FFrameTimeSubtractionTest::RunTest'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701363>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701363>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1390

bool __thiscall `FFrameTimeSubtractionTest::RunTest'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701334>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701334>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e16d0

bool __thiscall `FFrameTimeSubtractionTest::RunTest'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701305>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701305>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1a00

bool __thiscall `FFrameTimeSubtractionTest::RunTest'::__l14::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701276>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701276>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

