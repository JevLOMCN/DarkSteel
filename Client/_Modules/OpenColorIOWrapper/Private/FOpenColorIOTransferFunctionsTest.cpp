// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 8

// GetTestFlags @ 14d75cde0

EAutomationTestFlags __thiscall
FOpenColorIOTransferFunctionsTest::GetTestFlags(FOpenColorIOTransferFunctionsTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d75cdf0

bool __thiscall
FOpenColorIOTransferFunctionsTest::IsStressTest(FOpenColorIOTransferFunctionsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d75ce00

uint __thiscall
FOpenColorIOTransferFunctionsTest::GetRequiredDeviceNum(FOpenColorIOTransferFunctionsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d75ce10

FString * __thiscall
FOpenColorIOTransferFunctionsTest::GetTestSourceFileName
          (FOpenColorIOTransferFunctionsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\Tests\\OpenColorIOWrapperTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d75ce40

int __thiscall
FOpenColorIOTransferFunctionsTest::GetTestSourceFileLine(FOpenColorIOTransferFunctionsTest *this)

{
  return 0x10;
}

// GetTests @ 14d75ce50

/* WARNING: Removing unreachable block (ram,0x00014d75cf3d) */
/* WARNING: Removing unreachable block (ram,0x00014d75d008) */

void __thiscall
FOpenColorIOTransferFunctionsTest::GetTests
          (FOpenColorIOTransferFunctionsTest *this,
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
  
  ::FString::FString(&local_18,"System.OpenColorIO.DecodeToWorkingColorSpace");
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

// RunTest @ 14d75d030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FOpenColorIOTransferFunctionsTest::RunTest(FOpenColorIOTransferFunctionsTest *this,FString *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong *plVar9;
  byte bVar10;
  undefined1 uVar11;
  FString *pFVar12;
  uint uVar13;
  uint uVar14;
  wchar_t *pwVar15;
  int iVar16;
  byte bVar17;
  EEncoding EVar18;
  byte bVar19;
  byte bVar20;
  bool bVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_338 [32];
  FScriptContainerElement *local_318;
  byte local_308;
  FLinearColor_u_0 local_2f8;
  FLinearColor_u_0 local_2e8;
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [48];
  FString local_2a0;
  bool local_288;
  byte local_287;
  double local_280;
  double dStack_278;
  undefined1 local_270 [16];
  double local_260;
  double dStack_258;
  undefined1 local_250 [16];
  char local_240;
  byte local_238;
  FLinearColor_u_0 local_228;
  CPUProcessor *local_218;
  longlong *local_210;
  FString local_208;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  FString local_1d8;
  FString local_1c8;
  EEncoding local_1b8;
  undefined1 local_1b7;
  undefined1 local_170;
  undefined1 local_168;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_118;
  ulonglong local_c8;
  
  fVar22 = __real_3851b717;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_338;
  EVar18 = None;
  local_228._0_8_ = ___xmm_3f8000003e4ccccd3f0000003f666666;
  local_228._8_8_ = _UNK_152bcbc08;
  local_308 = 1;
  local_2d0._8_8_ = this;
  do {
    UE::Color::Decode((FLinearColor *)&local_2e8._s_0,EVar18,(FLinearColor *)&local_228._s_0);
    local_1b7 = 0;
    local_170 = 0;
    local_168 = 0;
    local_1b8 = EVar18;
    FOpenColorIOWrapperProcessor::CreateTransformToWorkingColorSpace
              ((FOpenColorIOWrapperSourceColorSettings *)local_2d0);
    local_2f8._0_8_ = local_228._0_8_;
    local_2f8._8_8_ = local_228._8_8_;
    bVar21 = -1 < CpuChannel->Enabled;
    if (bVar21) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId971,"FOpenColorIOWrapperProcessor::TransformColor",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
                 ,0x3cb);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId971);
    }
    uVar8 = local_2d0._0_8_;
    if (*(Processor **)local_2d0._0_8_ != (Processor *)0x0) {
      OpenColorIO_v2_4::Processor::getDefaultCPUProcessor
                (*(Processor **)local_2d0._0_8_,
                 (shared_ptr<OpenColorIO_v2_4::CPUProcessor_const_> *)&local_218);
      OpenColorIO_v2_4::CPUProcessor::applyRGBA(local_218,local_2f8.RGBA);
      plVar9 = local_210;
      if (local_210 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_210 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_210)(local_210);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
    }
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    fVar25 = (local_2e8._s_0.R + local_2f8._s_0.R) * fVar22;
    if ((((fVar25 <= (float)((uint)(local_2f8._s_0.R - local_2e8._s_0.R) & uVar13)) ||
         (fVar25 <= (float)((uint)(local_2f8._s_0.G - local_2e8._s_0.G) & uVar13))) ||
        (fVar25 <= (float)((uint)(local_2f8._s_0.B - local_2e8._s_0.B) & uVar13))) ||
       (fVar25 <= (float)((uint)(local_2f8._s_0.A - local_2e8._s_0.A) & uVar13))) {
      ::FString::PrintfImpl((FString *)(local_2d0 + 0x10),L"OpenColorIO: %u:%u");
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      pFVar12 = FLinearColor::ToString((FLinearColor *)&local_2f8._s_0,&local_1c8);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      FLinearColor::ToString((FLinearColor *)&local_2e8._s_0,&local_1d8);
      local_318 = (FScriptContainerElement *)pwVar15;
      ::FString::PrintfImpl(&local_208,L"Expected \'%s\' to be %s, but it was %s.");
      (*pcVar3)(this,&local_208,1);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      local_308 = 0;
      if ((void *)local_2d0._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2d0._16_8_);
      }
    }
    (**(code **)(uVar8 + -0x10))((undefined8 *)(uVar8 + -0x10));
    dVar7 = __real_3f1a36e2e0000000;
    fVar25 = __real_3f800000;
    dVar6 = __real_3ff0000000000000;
    EVar18 = EVar18 + Linear;
  } while (EVar18 < Max);
  bVar17 = 0;
  uVar13 = 0x2a;
  local_118.Elements._0_8_ = 0;
  local_118.Elements._8_8_ = 0;
  local_118.Elements._32_8_ = 0;
  local_118.Elements._40_4_ = 0;
  local_118.Elements._52_4_ = 0;
  local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_118.HashSize = 0;
  local_118.Elements._44_4_ = 0x80;
  local_118.Elements._48_4_ = 0xffffffff;
  do {
    bVar20 = 0;
    do {
      bVar19 = 0;
      do {
        local_287 = 0;
        local_240 = '\0';
        bVar10 = bVar20;
        if (0xf < bVar20) {
          do {
            do {
              uVar13 = uVar13 * 0xbb38435 + 0x3619636b;
              uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
              fVar22 = (float)(uVar13 >> 9 | 0x3f800000) - fVar25;
              uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
              local_280 = (double)((fVar22 + fVar22) - fVar25);
              fVar22 = (float)(uVar14 >> 9 | 0x3f800000) - fVar25;
              dStack_278 = (double)((fVar22 + fVar22) - fVar25);
              fVar22 = (float)(uVar13 >> 9 | 0x3f800000) - fVar25;
              dVar26 = (double)((fVar22 + fVar22) - fVar25);
              dVar26 = dStack_278 * dStack_278 + local_280 * local_280 + dVar26 * dVar26;
            } while (dVar6 < dVar26);
          } while (dVar26 < dVar7);
          local_1f8 = dVar6 / SQRT(dVar26);
          local_280 = local_280 * local_1f8;
          dStack_278 = dStack_278 * local_1f8;
          do {
            do {
              uVar13 = uVar13 * 0xbb38435 + 0x3619636b;
              uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
              fVar22 = (float)(uVar13 >> 9 | 0x3f800000) - fVar25;
              uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
              dVar4 = (double)((fVar22 + fVar22) - fVar25);
              fVar22 = (float)(uVar14 >> 9 | 0x3f800000) - fVar25;
              dVar27 = (double)((fVar22 + fVar22) - fVar25);
              fVar22 = (float)(uVar13 >> 9 | 0x3f800000) - fVar25;
              dVar26 = (double)((fVar22 + fVar22) - fVar25);
              dVar26 = dVar4 * dVar4 + dVar27 * dVar27 + dVar26 * dVar26;
            } while (dVar6 < dVar26);
          } while (dVar26 < dVar7);
          local_1f0 = dVar6 / SQRT(dVar26);
          uVar23 = SUB84(dVar27 * local_1f0,0);
          uVar24 = (undefined4)((ulonglong)(dVar27 * local_1f0) >> 0x20);
          do {
            do {
              uVar13 = uVar13 * 0xbb38435 + 0x3619636b;
              uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
              fVar22 = (float)(uVar13 >> 9 | 0x3f800000) - fVar25;
              uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
              local_260 = (double)((fVar22 + fVar22) - fVar25);
              fVar22 = (float)(uVar14 >> 9 | 0x3f800000) - fVar25;
              dStack_258 = (double)((fVar22 + fVar22) - fVar25);
              fVar22 = (float)(uVar13 >> 9 | 0x3f800000) - fVar25;
              dVar26 = (double)((fVar22 + fVar22) - fVar25);
              dVar26 = dStack_258 * dStack_258 + local_260 * local_260 + dVar26 * dVar26;
            } while (dVar6 < dVar26);
          } while (dVar26 < dVar7);
          local_1e8 = dVar6 / SQRT(dVar26);
          local_260 = local_260 * local_1e8;
          dStack_258 = dStack_258 * local_1e8;
          do {
            do {
              uVar13 = uVar13 * 0xbb38435 + 0x3619636b;
              uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
              fVar22 = (float)(uVar13 >> 9 | 0x3f800000) - fVar25;
              uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
              dVar27 = (double)((fVar22 + fVar22) - fVar25);
              fVar22 = (float)(uVar14 >> 9 | 0x3f800000) - fVar25;
              dVar28 = (double)((fVar22 + fVar22) - fVar25);
              fVar22 = (float)(uVar13 >> 9 | 0x3f800000) - fVar25;
              dVar26 = (double)((fVar22 + fVar22) - fVar25);
              dVar26 = dVar28 * dVar28 + dVar27 * dVar27 + dVar26 * dVar26;
            } while (dVar6 < dVar26);
          } while (dVar26 < dVar7);
          local_240 = '\x01';
          local_1e0 = dVar6 / SQRT(dVar26);
          local_148._8_4_ = uVar23;
          local_148._0_8_ = dVar4 * local_1f0;
          local_148._12_4_ = uVar24;
          local_270._8_4_ = uVar23;
          local_270._0_8_ = dVar4 * local_1f0;
          local_270._12_4_ = uVar24;
          uVar23 = SUB84(dVar28 * local_1e0,0);
          uVar24 = (undefined4)((ulonglong)(dVar28 * local_1e0) >> 0x20);
          local_128._8_4_ = uVar23;
          local_128._0_8_ = dVar27 * local_1e0;
          local_128._12_4_ = uVar24;
          local_250._8_4_ = uVar23;
          local_250._0_8_ = dVar27 * local_1e0;
          local_250._12_4_ = uVar24;
          bVar10 = local_287;
          local_158 = local_280;
          dStack_150 = dStack_278;
          local_138 = local_260;
          dStack_130 = dStack_258;
        }
        local_287 = bVar10;
        local_288 = (bool)bVar17;
        local_238 = bVar19;
        ::FString::PrintfImpl((FString *)(local_2d0 + 0x30),L"UE_%u");
        if (local_240 != '\0') {
          FCrc::MemCrc_DEPRECATED(&local_280,0x10,0);
          if ((local_240 == '\0') &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar21)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          FCrc::MemCrc_DEPRECATED(local_270,0x10,0);
          if ((local_240 == '\0') &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar21)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          FCrc::MemCrc_DEPRECATED(&local_260,0x10,0);
          if ((local_240 == '\0') &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar21)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          FCrc::MemCrc_DEPRECATED(local_250,0x10,0);
          ::FString::PrintfImpl((FString *)(local_2d0 + 0x20),L"_%u");
          iVar16 = (int)local_2d0._40_8_ + -1;
          if ((int)local_2d0._40_8_ == 0) {
            iVar16 = 0;
          }
          ::FString::AppendChars((FString *)(local_2d0 + 0x30),(wchar_t *)local_2d0._32_8_,iVar16);
          if ((wchar_t *)local_2d0._32_8_ != (wchar_t *)0x0) {
            FMemory::Free((void *)local_2d0._32_8_);
          }
        }
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                  (&local_118,(FString *)local_2d8,(bool *)(local_2d0 + 0x30));
        if (local_2a0.Data.AllocatorInstance.Data != (void *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
        bVar19 = bVar19 + 1;
      } while (bVar19 < 2);
      bVar20 = bVar20 + 1;
    } while (bVar20 < 0x11);
    bVar17 = bVar17 + 1;
    if (0x10 < bVar17) {
      bVar21 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)local_2d0._8_8_,
                          L"OpenColorIO: Name hash collision test",
                          local_118.Elements._8_4_ - local_118.Elements._52_4_,0x242);
      bVar21 = (bool)(bVar21 & local_308);
      local_118.HashSize = 0;
      if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_118.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_118.Elements);
      return bVar21;
    }
  } while( true );
}

// GetBeautifiedTestName @ 14d75d9a0

FString * __thiscall
FOpenColorIOTransferFunctionsTest::GetBeautifiedTestName
          (FOpenColorIOTransferFunctionsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.OpenColorIO.DecodeToWorkingColorSpace");
  return __return_storage_ptr__;
}

