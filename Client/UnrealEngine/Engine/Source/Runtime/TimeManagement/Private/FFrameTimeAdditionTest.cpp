// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 12

// GetTestFlags @ 146036740

EAutomationTestFlags __thiscall FFrameTimeAdditionTest::GetTestFlags(FFrameTimeAdditionTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 146036750

bool __thiscall FFrameTimeAdditionTest::IsStressTest(FFrameTimeAdditionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146036760

uint __thiscall FFrameTimeAdditionTest::GetRequiredDeviceNum(FFrameTimeAdditionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146036770

FString * __thiscall
FFrameTimeAdditionTest::GetTestSourceFileName
          (FFrameTimeAdditionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\TimeManagementTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1460367a0

int __thiscall FFrameTimeAdditionTest::GetTestSourceFileLine(FFrameTimeAdditionTest *this)

{
  return 0x74;
}

// GetTests @ 1460367b0

/* WARNING: Removing unreachable block (ram,0x00014603689d) */
/* WARNING: Removing unreachable block (ram,0x000146036968) */

void __thiscall
FFrameTimeAdditionTest::GetTests
          (FFrameTimeAdditionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Time.Addition");
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

// RunTest @ 1460369d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FFrameTimeAdditionTest::RunTest(FFrameTimeAdditionTest *this,FString *param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auStack_238 [32];
  int local_218;
  float fStack_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined4 local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  float local_1e4;
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
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  fVar3 = __real_3f000000;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_38d1b717;
  local_60 = __security_cookie.value ^ (ulonglong)auStack_238;
  lVar7 = 0;
  local_1d8 = 1;
  local_1f8._0_4_ = 0;
  fVar14 = ::FFrameTime::MaxSubframe;
  if (__real_3dccccd0 <= ::FFrameTime::MaxSubframe) {
    fVar14 = __real_3dccccd0;
  }
  local_1f0 = 0;
  local_1ec = ::FFrameTime::MaxSubframe;
  if (__real_3e4ccccc <= ::FFrameTime::MaxSubframe) {
    local_1ec = __real_3e4ccccc;
  }
  local_1e8 = 0;
  local_1e4 = ::FFrameTime::MaxSubframe;
  if (__real_3ed70a3c <= ::FFrameTime::MaxSubframe) {
    local_1e4 = __real_3ed70a3c;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  local_1e0 = 0;
  local_1d0 = 4;
  local_1dc = ::FFrameTime::MaxSubframe;
  if (__real_3f3d70a4 <= ::FFrameTime::MaxSubframe) {
    local_1dc = __real_3f3d70a4;
  }
  if (local_1ec <= 0.0) {
    local_1ec = 0.0;
  }
  local_1c8 = 4;
  if (local_1e4 <= 0.0) {
    local_1e4 = 0.0;
  }
  local_1c0 = 4;
  local_1f8._4_4_ = fVar14;
  local_1d4 = ::FFrameTime::MaxSubframe;
  if (__real_3dccccc0 <= ::FFrameTime::MaxSubframe) {
    local_1d4 = __real_3dccccc0;
  }
  if (local_1dc <= 0.0) {
    local_1dc = 0.0;
  }
  local_1cc = fVar14;
  local_1c4 = local_1ec;
  if (local_1d4 <= 0.0) {
    local_1d4 = 0.0;
  }
  local_1bc = local_1e4;
  local_1b4 = local_1dc;
  local_1a4 = fVar14;
  local_19c = local_1ec;
  local_1ac = local_1d4;
  local_194 = local_1e4;
  local_18c = local_1dc;
  local_184 = local_1d4;
  local_17c = fVar14;
  local_174 = local_1ec;
  local_16c = local_1e4;
  local_164 = local_1dc;
  local_15c = local_1d4;
  local_154 = fVar14;
  local_14c = local_1ec;
  local_144 = local_1e4;
  local_13c = local_1dc;
  local_134 = local_1d4;
  local_12c = fVar14;
  local_124 = local_1ec;
  local_11c = local_1e4;
  local_114 = local_1dc;
  local_10c = local_1d4;
  local_104 = fVar14;
  local_1b8 = 4;
  local_1b0 = 5;
  local_1a8 = 5;
  local_1a0 = 5;
  local_198 = 5;
  local_190 = 5;
  local_188 = 6;
  local_180 = 7;
  local_178 = 7;
  local_170 = 7;
  local_168 = 7;
  local_160 = 8;
  local_158 = 10;
  local_150 = 10;
  local_148 = 10;
  local_140 = 10;
  local_138 = 0xb;
  local_130 = 0xd;
  local_128 = 0xd;
  local_120 = 0xd;
  local_118 = 0xd;
  local_110 = 0xe;
  local_108 = 0xf;
  local_100 = 0xf;
  local_fc = local_1ec;
  local_f4 = local_1e4;
  local_ec = local_1dc;
  local_e4 = local_1d4;
  local_dc = fVar14;
  local_d4 = local_1ec;
  local_cc = local_1e4;
  local_c4 = local_1dc;
  local_bc = local_1d4;
  local_b4 = fVar14;
  local_ac = local_1ec;
  local_a4 = local_1e4;
  local_9c = local_1dc;
  local_94 = local_1d4;
  local_f8 = 0xf;
  local_f0 = 0xf;
  local_e8 = 0x10;
  local_e0 = 0x10;
  local_d8 = 0x10;
  local_d0 = 0x10;
  local_c8 = 0x10;
  local_c0 = 0x11;
  local_b8 = 0x14;
  local_b0 = 0x14;
  local_a8 = 0x14;
  local_a0 = 0x14;
  local_98 = 0x15;
  lVar6 = lVar7;
  fVar13 = ::FFrameTime::MaxSubframe;
  do {
    local_80 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar6);
    local_208._4_4_ = (float)((ulonglong)local_80 >> 0x20);
    local_208._4_4_ = fVar14 + local_208._4_4_;
    local_218 = ((int)ROUND((local_208._4_4_ + local_208._4_4_) - fVar3) >> 1) + 10 + (int)local_80;
    iVar5 = (int)local_208._4_4_;
    fVar8 = local_208._4_4_;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != local_208._4_4_)) {
      auVar9._4_4_ = local_208._4_4_;
      auVar9._0_4_ = local_208._4_4_;
      auVar9._8_8_ = 0;
      uVar4 = movmskps((int)local_80,auVar9);
      fVar8 = (float)(int)(iVar5 - (uVar4 & 1));
    }
    local_210 = *(undefined8 *)((longlong)&local_1f8 + lVar6);
    fStack_214 = local_208._4_4_ - fVar8;
    if (fVar13 <= local_208._4_4_ - fVar8) {
      fStack_214 = fVar13;
    }
    if (fStack_214 <= 0.0) {
      fStack_214 = 0.0;
    }
    local_208 = CONCAT44(fStack_214,local_218);
    if ((local_218 != (int)local_210) ||
       (local_88._4_4_ = (float)((ulonglong)local_210 >> 0x20),
       fVar1 < (float)((uint)(fStack_214 - local_88._4_4_) & uVar2))) {
      local_78 = &local_80;
      local_70 = &local_218;
      local_68 = &local_210;
      local_88 = local_210;
      `FFrameTimeAdditionTest::RunTest'::__l5::<lambda_1>::operator()(&local_78);
      fVar13 = ::FFrameTime::MaxSubframe;
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 < 0x168);
  local_1f8._0_4_ = 0;
  fVar14 = fVar13;
  if (__real_3f4ccccc <= fVar13) {
    fVar14 = __real_3f4ccccc;
  }
  local_1f0 = 0;
  local_1ec = fVar13;
  if (__real_3f666668 <= fVar13) {
    local_1ec = __real_3f666668;
  }
  local_1e8 = 1;
  local_1e4 = fVar13;
  if (__real_3df5c290 <= fVar13) {
    local_1e4 = __real_3df5c290;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  local_1e0 = 1;
  local_1d8 = 1;
  local_1dc = fVar13;
  if (__real_3ee147b0 <= fVar13) {
    local_1dc = __real_3ee147b0;
  }
  if (local_1ec <= 0.0) {
    local_1ec = 0.0;
  }
  local_1d0 = 4;
  if (local_1e4 <= 0.0) {
    local_1e4 = 0.0;
  }
  local_1c8 = 4;
  local_1f8._4_4_ = fVar14;
  local_1d4 = fVar14;
  if (local_1dc <= 0.0) {
    local_1dc = 0.0;
  }
  local_1cc = fVar14;
  local_1c4 = local_1ec;
  local_1bc = local_1e4;
  local_1b4 = local_1dc;
  local_1ac = fVar14;
  local_1a4 = fVar14;
  local_19c = local_1ec;
  local_194 = local_1e4;
  local_18c = local_1dc;
  local_184 = fVar14;
  local_17c = fVar14;
  local_174 = local_1ec;
  local_16c = local_1e4;
  local_164 = local_1dc;
  local_15c = fVar14;
  local_154 = fVar14;
  local_14c = local_1ec;
  local_144 = local_1e4;
  local_13c = local_1dc;
  local_134 = fVar14;
  local_12c = fVar14;
  local_124 = local_1ec;
  local_11c = local_1e4;
  local_114 = local_1dc;
  local_10c = fVar14;
  local_104 = fVar14;
  local_fc = local_1ec;
  local_f4 = local_1e4;
  local_ec = local_1dc;
  local_1c0 = 5;
  local_1b8 = 5;
  local_1b0 = 5;
  local_1a8 = 5;
  local_1a0 = 5;
  local_198 = 6;
  local_190 = 6;
  local_188 = 6;
  local_180 = 7;
  local_178 = 7;
  local_170 = 8;
  local_168 = 8;
  local_160 = 8;
  local_158 = 10;
  local_150 = 10;
  local_148 = 0xb;
  local_140 = 0xb;
  local_138 = 0xb;
  local_130 = 0xd;
  local_128 = 0xd;
  local_120 = 0xe;
  local_118 = 0xe;
  local_110 = 0xe;
  local_108 = 0xf;
  local_100 = 0xf;
  local_f8 = 0x10;
  local_f0 = 0x10;
  local_e8 = 0x10;
  local_e4 = fVar14;
  local_dc = fVar14;
  local_d4 = local_1ec;
  local_cc = local_1e4;
  local_c4 = local_1dc;
  local_bc = fVar14;
  local_b4 = fVar14;
  local_ac = local_1ec;
  local_a4 = local_1e4;
  local_9c = local_1dc;
  local_94 = fVar14;
  local_e0 = 0x10;
  local_d8 = 0x10;
  local_d0 = 0x11;
  local_c8 = 0x11;
  local_c0 = 0x11;
  local_b8 = 0x14;
  local_b0 = 0x14;
  local_a8 = 0x15;
  local_a0 = 0x15;
  local_98 = 0x15;
  lVar6 = lVar7;
  do {
    local_88 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar6);
    local_210._4_4_ = (float)((ulonglong)local_88 >> 0x20);
    local_210._4_4_ = local_210._4_4_ + fVar14;
    local_218 = ((int)ROUND((local_210._4_4_ + local_210._4_4_) - fVar3) >> 1) + 10 + (int)local_88;
    iVar5 = (int)local_210._4_4_;
    fVar8 = local_210._4_4_;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != local_210._4_4_)) {
      auVar10._4_4_ = local_210._4_4_;
      auVar10._0_4_ = local_210._4_4_;
      auVar10._8_8_ = 0;
      uVar4 = movmskps((int)local_88,auVar10);
      fVar8 = (float)(int)(iVar5 - (uVar4 & 1));
    }
    local_208 = *(undefined8 *)((longlong)&local_1f8 + lVar6);
    fStack_214 = local_210._4_4_ - fVar8;
    if (fVar13 <= local_210._4_4_ - fVar8) {
      fStack_214 = fVar13;
    }
    if (fStack_214 <= 0.0) {
      fStack_214 = 0.0;
    }
    local_210 = CONCAT44(fStack_214,local_218);
    if ((local_218 != (int)local_208) ||
       (local_80._4_4_ = (float)((ulonglong)local_208 >> 0x20),
       fVar1 < (float)((uint)(fStack_214 - local_80._4_4_) & uVar2))) {
      local_78 = &local_88;
      local_70 = &local_218;
      local_68 = &local_208;
      local_80 = local_208;
      `FFrameTimeAdditionTest::RunTest'::__l8::<lambda_2>::operator()(&local_78);
      fVar13 = ::FFrameTime::MaxSubframe;
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 < 0x168);
  local_1f8._0_4_ = 0xffffffe9;
  fVar14 = fVar13;
  if (__real_3c23d700 <= fVar13) {
    fVar14 = __real_3c23d700;
  }
  local_1f0 = 0xffffffe9;
  local_1ec = fVar13;
  if (__real_3de147b0 <= fVar13) {
    local_1ec = __real_3de147b0;
  }
  local_1e8 = 0xffffffe9;
  local_1e4 = fVar13;
  if (__real_3ea8f5c2 <= fVar13) {
    local_1e4 = __real_3ea8f5c2;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  local_1e0 = 0xffffffe9;
  local_1d8 = 0xffffffea;
  local_1dc = fVar13;
  if (__real_3f266666 <= fVar13) {
    local_1dc = __real_3f266666;
  }
  if (local_1ec <= 0.0) {
    local_1ec = 0.0;
  }
  local_1d0 = 0xffffffed;
  if (local_1e4 <= 0.0) {
    local_1e4 = 0.0;
  }
  local_1c8 = 0xffffffed;
  local_1f8._4_4_ = fVar14;
  local_1d4 = fVar14;
  if (local_1dc <= 0.0) {
    local_1dc = 0.0;
  }
  local_1cc = fVar14;
  local_1c4 = local_1ec;
  local_1bc = local_1e4;
  local_1b4 = local_1dc;
  local_1ac = fVar14;
  local_1a4 = fVar14;
  local_19c = local_1ec;
  local_194 = local_1e4;
  local_18c = local_1dc;
  local_184 = fVar14;
  local_17c = fVar14;
  local_174 = local_1ec;
  local_16c = local_1e4;
  local_164 = local_1dc;
  local_15c = fVar14;
  local_154 = fVar14;
  local_14c = local_1ec;
  local_144 = local_1e4;
  local_13c = local_1dc;
  local_134 = fVar14;
  local_12c = fVar14;
  local_124 = local_1ec;
  local_11c = local_1e4;
  local_114 = local_1dc;
  local_10c = fVar14;
  local_104 = fVar14;
  local_fc = local_1ec;
  local_f4 = local_1e4;
  local_ec = local_1dc;
  local_1c0 = 0xffffffed;
  local_1b8 = 0xffffffed;
  local_1b0 = 0xffffffee;
  local_1a8 = 0xffffffee;
  local_1a0 = 0xffffffee;
  local_198 = 0xffffffee;
  local_190 = 0xffffffee;
  local_188 = 0xffffffef;
  local_180 = 0xfffffff0;
  local_178 = 0xfffffff0;
  local_170 = 0xfffffff0;
  local_168 = 0xfffffff0;
  local_160 = 0xfffffff1;
  local_158 = 0xfffffff3;
  local_150 = 0xfffffff3;
  local_148 = 0xfffffff3;
  local_140 = 0xfffffff3;
  local_138 = 0xfffffff4;
  local_130 = 0xfffffff6;
  local_128 = 0xfffffff6;
  local_120 = 0xfffffff6;
  local_118 = 0xfffffff6;
  local_110 = 0xfffffff7;
  local_108 = 0xfffffff8;
  local_100 = 0xfffffff8;
  local_f8 = 0xfffffff8;
  local_f0 = 0xfffffff8;
  local_e8 = 0xfffffff9;
  local_e4 = fVar14;
  local_dc = fVar14;
  local_d4 = local_1ec;
  local_cc = local_1e4;
  local_c4 = local_1dc;
  local_bc = fVar14;
  local_b4 = fVar14;
  local_ac = local_1ec;
  local_a4 = local_1e4;
  local_9c = local_1dc;
  local_94 = fVar14;
  local_e0 = 0xfffffff9;
  local_d8 = 0xfffffff9;
  local_d0 = 0xfffffff9;
  local_c8 = 0xfffffff9;
  local_c0 = 0xfffffffa;
  local_b8 = 0xfffffffd;
  local_b0 = 0xfffffffd;
  local_a8 = 0xfffffffd;
  local_a0 = 0xfffffffd;
  local_98 = 0xfffffffe;
  lVar6 = lVar7;
  do {
    local_88 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar6);
    local_210._4_4_ = (float)((ulonglong)local_88 >> 0x20);
    local_210._4_4_ = fVar14 + local_210._4_4_;
    local_218 = ((int)ROUND((local_210._4_4_ + local_210._4_4_) - fVar3) >> 1) + -0xd +
                (int)local_88;
    iVar5 = (int)local_210._4_4_;
    fVar8 = local_210._4_4_;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != local_210._4_4_)) {
      auVar11._4_4_ = local_210._4_4_;
      auVar11._0_4_ = local_210._4_4_;
      auVar11._8_8_ = 0;
      uVar4 = movmskps((int)local_88,auVar11);
      fVar8 = (float)(int)(iVar5 - (uVar4 & 1));
    }
    local_208 = *(undefined8 *)((longlong)&local_1f8 + lVar6);
    fStack_214 = local_210._4_4_ - fVar8;
    if (fVar13 <= local_210._4_4_ - fVar8) {
      fStack_214 = fVar13;
    }
    if (fStack_214 <= 0.0) {
      fStack_214 = 0.0;
    }
    local_210 = CONCAT44(fStack_214,local_218);
    if ((local_218 != (int)local_208) ||
       (local_80._4_4_ = (float)((ulonglong)local_208 >> 0x20),
       fVar1 < (float)((uint)(fStack_214 - local_80._4_4_) & uVar2))) {
      local_78 = &local_88;
      local_70 = &local_218;
      local_68 = &local_208;
      local_80 = local_208;
      `FFrameTimeAdditionTest::RunTest'::__l11::<lambda_3>::operator()(&local_78);
      fVar13 = ::FFrameTime::MaxSubframe;
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 < 0x168);
  local_1f8._0_4_ = 0xffffffe9;
  fVar14 = fVar13;
  if (__real_3f666666 <= fVar13) {
    fVar14 = __real_3f666666;
  }
  local_1f0 = 0xffffffea;
  local_1e4 = fVar13;
  if (__real_3e6147b0 <= fVar13) {
    local_1e4 = __real_3e6147b0;
  }
  local_1ec = 0.0;
  local_1dc = fVar13;
  if (__real_3f0a3d70 <= fVar13) {
    local_1dc = __real_3f0a3d70;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  local_1e8 = 0xffffffea;
  local_1e0 = 0xffffffea;
  local_1d4 = fVar13;
  if (__real_3f666664 <= fVar13) {
    local_1d4 = __real_3f666664;
  }
  if (local_1e4 <= 0.0) {
    local_1e4 = 0.0;
  }
  local_1d8 = 0xffffffea;
  if (local_1dc <= 0.0) {
    local_1dc = 0.0;
  }
  local_1d0 = 0xffffffed;
  local_1f8._4_4_ = fVar14;
  local_1cc = fVar14;
  if (local_1d4 <= 0.0) {
    local_1d4 = 0.0;
  }
  local_1a4 = fVar14;
  local_1bc = local_1e4;
  local_1b4 = local_1dc;
  local_1ac = local_1d4;
  local_194 = local_1e4;
  local_18c = local_1dc;
  local_184 = local_1d4;
  local_17c = fVar14;
  local_16c = local_1e4;
  local_164 = local_1dc;
  local_15c = local_1d4;
  local_154 = fVar14;
  local_144 = local_1e4;
  local_13c = local_1dc;
  local_134 = local_1d4;
  local_12c = fVar14;
  local_11c = local_1e4;
  local_114 = local_1dc;
  local_10c = local_1d4;
  local_104 = fVar14;
  local_f4 = local_1e4;
  local_ec = local_1dc;
  local_1c8 = 0xffffffee;
  local_1c4 = 0.0;
  local_1c0 = 0xffffffee;
  local_1b8 = 0xffffffee;
  local_1b0 = 0xffffffee;
  local_1a8 = 0xffffffee;
  local_1a0 = 0xffffffef;
  local_19c = 0.0;
  local_198 = 0xffffffef;
  local_190 = 0xffffffef;
  local_188 = 0xffffffef;
  local_180 = 0xfffffff0;
  local_178 = 0xfffffff1;
  local_174 = 0.0;
  local_170 = 0xfffffff1;
  local_168 = 0xfffffff1;
  local_160 = 0xfffffff1;
  local_158 = 0xfffffff3;
  local_150 = 0xfffffff4;
  local_14c = 0.0;
  local_148 = 0xfffffff4;
  local_140 = 0xfffffff4;
  local_138 = 0xfffffff4;
  local_130 = 0xfffffff6;
  local_128 = 0xfffffff7;
  local_124 = 0.0;
  local_120 = 0xfffffff7;
  local_118 = 0xfffffff7;
  local_110 = 0xfffffff7;
  local_108 = 0xfffffff8;
  local_100 = 0xfffffff9;
  local_fc = 0.0;
  local_f8 = 0xfffffff9;
  local_f0 = 0xfffffff9;
  local_e8 = 0xfffffff9;
  local_e4 = local_1d4;
  local_dc = fVar14;
  local_cc = local_1e4;
  local_c4 = local_1dc;
  local_bc = local_1d4;
  local_b4 = fVar14;
  local_a4 = local_1e4;
  local_9c = local_1dc;
  local_94 = local_1d4;
  local_e0 = 0xfffffff9;
  local_d8 = 0xfffffffa;
  local_d4 = 0.0;
  local_d0 = 0xfffffffa;
  local_c8 = 0xfffffffa;
  local_c0 = 0xfffffffa;
  local_b8 = 0xfffffffd;
  local_b0 = 0xfffffffe;
  local_ac = 0.0;
  local_a8 = 0xfffffffe;
  local_a0 = 0xfffffffe;
  local_98 = 0xfffffffe;
  do {
    local_88 = *(undefined8 *)((longlong)&TestTimes[0].FrameNumber.Value + lVar7);
    local_210._4_4_ = (float)((ulonglong)local_88 >> 0x20);
    local_210._4_4_ = fVar14 + local_210._4_4_;
    local_218 = ((int)ROUND((local_210._4_4_ + local_210._4_4_) - fVar3) >> 1) + -0xd +
                (int)local_88;
    iVar5 = (int)local_210._4_4_;
    fVar8 = local_210._4_4_;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != local_210._4_4_)) {
      auVar12._4_4_ = local_210._4_4_;
      auVar12._0_4_ = local_210._4_4_;
      auVar12._8_8_ = 0;
      uVar4 = movmskps((int)local_88,auVar12);
      fVar8 = (float)(int)(iVar5 - (uVar4 & 1));
    }
    local_208 = *(undefined8 *)((longlong)&local_1f8 + lVar7);
    fStack_214 = local_210._4_4_ - fVar8;
    if (fVar13 <= local_210._4_4_ - fVar8) {
      fStack_214 = fVar13;
    }
    if (fStack_214 <= 0.0) {
      fStack_214 = 0.0;
    }
    local_210 = CONCAT44(fStack_214,local_218);
    if ((local_218 != (int)local_208) ||
       (local_80._4_4_ = (float)((ulonglong)local_208 >> 0x20),
       fVar1 < (float)((uint)(fStack_214 - local_80._4_4_) & uVar2))) {
      local_78 = &local_88;
      local_70 = &local_218;
      local_68 = &local_208;
      local_80 = local_208;
      `FFrameTimeAdditionTest::RunTest'::__l14::<lambda_4>::operator()(&local_78);
      fVar13 = ::FFrameTime::MaxSubframe;
    }
    lVar7 = lVar7 + 8;
  } while (lVar7 < 0x168);
  return true;
}

// GetBeautifiedTestName @ 146037880

FString * __thiscall
FFrameTimeAdditionTest::GetBeautifiedTestName
          (FFrameTimeAdditionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Time.Addition");
  return __return_storage_ptr__;
}

// operator() @ 1504e0f10

bool __thiscall `FFrameTimeAdditionTest::RunTest'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701486>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701486>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1270

bool __thiscall `FFrameTimeAdditionTest::RunTest'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701457>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701457>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e15b0

bool __thiscall `FFrameTimeAdditionTest::RunTest'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701428>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701428>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1970

bool __thiscall `FFrameTimeAdditionTest::RunTest'::__l14::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701399>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701399>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

