// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 26

// GetTestFlags @ 146035310

EAutomationTestFlags __thiscall
FFrameTimeComparisonTest::GetTestFlags(FFrameTimeComparisonTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 146035320

bool __thiscall FFrameTimeComparisonTest::IsStressTest(FFrameTimeComparisonTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146035330

uint __thiscall FFrameTimeComparisonTest::GetRequiredDeviceNum(FFrameTimeComparisonTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146035340

FString * __thiscall
FFrameTimeComparisonTest::GetTestSourceFileName
          (FFrameTimeComparisonTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\TimeManagementTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146035370

int __thiscall FFrameTimeComparisonTest::GetTestSourceFileLine(FFrameTimeComparisonTest *this)

{
  return 0x20;
}

// GetTests @ 146035380

/* WARNING: Removing unreachable block (ram,0x00014603546d) */
/* WARNING: Removing unreachable block (ram,0x000146035538) */

void __thiscall
FFrameTimeComparisonTest::GetTests
          (FFrameTimeComparisonTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Time.Comparison");
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

// RunTest @ 146035560

bool __thiscall FFrameTimeComparisonTest::RunTest(FFrameTimeComparisonTest *this,FString *param_1)

{
  FFrameTime FVar1;
  longlong lVar2;
  FFrameTime *pFVar3;
  longlong lVar4;
  FFrameTime local_res18;
  FFrameTime local_res20;
  float fStack_144;
  float fStack_13c;
  FFrameTime *local_138;
  FFrameTime *local_130;
  FFrameTime *local_128;
  FFrameTime *local_120;
  FFrameTime *local_118;
  FFrameTime *local_110;
  FFrameTime *local_108;
  FFrameTime *local_100;
  FFrameTime *local_f8;
  FFrameTime *local_f0;
  FFrameTime *local_e8;
  FFrameTime *local_e0;
  FFrameTime *local_d8;
  FFrameTime *local_d0;
  FFrameTime *local_c8;
  FFrameTime *local_c0;
  FFrameTime *local_b8;
  FFrameTime *local_b0;
  FFrameTime *local_a8;
  FFrameTime *local_a0;
  FFrameTime *local_98;
  FFrameTime *local_90;
  FFrameTime *local_88;
  FFrameTime *local_80;
  FFrameTime *local_78;
  FFrameTime *local_70;
  FFrameTime *local_68;
  FFrameTime *local_60;
  FFrameTime *local_58;
  FFrameTime *local_50;
  FFrameTime *local_48;
  FFrameTime *local_40;
  FFrameTime *local_38;
  FFrameTime *local_30;
  FFrameTime *local_28;
  FFrameTime *local_20;
  
  lVar4 = 0;
  do {
    FVar1 = TestTimes[lVar4];
    lVar2 = 0;
    local_res18 = FVar1;
    if (0 < lVar4) {
      do {
        local_res20 = TestTimes[lVar2];
        if (FVar1.FrameNumber.Value.Value <= local_res20.FrameNumber.Value.Value) {
          if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
            fStack_144 = local_res20.SubFrame;
            fStack_13c = FVar1.SubFrame;
            if (fStack_144 < fStack_13c) goto LAB_146035608;
          }
          local_138 = &local_res20;
          local_130 = &local_res18;
          `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_1>::operator()(&local_138);
          FVar1 = local_res18;
        }
LAB_146035608:
        if (FVar1.FrameNumber.Value.Value <= local_res20.FrameNumber.Value.Value) {
          if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
            fStack_13c = local_res20.SubFrame;
            fStack_144 = FVar1.SubFrame;
            if (fStack_13c <= fStack_144) goto LAB_146035655;
          }
          local_128 = &local_res20;
          local_120 = &local_res18;
          `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_2>::operator()(&local_128);
          FVar1 = local_res18;
        }
LAB_146035655:
        if (FVar1.FrameNumber.Value.Value < local_res20.FrameNumber.Value.Value) {
LAB_146035672:
          local_118 = &local_res20;
          local_110 = &local_res18;
          `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_3>::operator()(&local_118);
          FVar1 = local_res18;
        }
        else if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
          fStack_13c = local_res20.SubFrame;
          fStack_144 = FVar1.SubFrame;
          if (fStack_144 < fStack_13c) goto LAB_146035672;
        }
        if (FVar1.FrameNumber.Value.Value < local_res20.FrameNumber.Value.Value) {
LAB_1460356bf:
          local_108 = &local_res20;
          local_100 = &local_res18;
          `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_4>::operator()(&local_108);
          FVar1 = local_res18;
        }
        else if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
          fStack_13c = local_res20.SubFrame;
          fStack_144 = FVar1.SubFrame;
          if (fStack_144 <= fStack_13c) goto LAB_1460356bf;
        }
        if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
          fStack_13c = local_res20.SubFrame;
          fStack_144 = FVar1.SubFrame;
          if (fStack_13c == fStack_144) {
            local_f8 = &local_res20;
            local_f0 = &local_res18;
            `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_5>::operator()(&local_f8);
            FVar1 = local_res18;
          }
        }
        if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
          fStack_13c = local_res20.SubFrame;
          fStack_144 = FVar1.SubFrame;
          if (fStack_13c == fStack_144) {
            local_e8 = &local_res20;
            local_e0 = &local_res18;
            `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_6>::operator()(&local_e8);
            FVar1 = local_res18;
          }
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < lVar4);
    }
    local_res20 = TestTimes[lVar4];
    if (local_res20.FrameNumber.Value.Value < FVar1.FrameNumber.Value.Value) {
LAB_1460357af:
      local_d8 = &local_res20;
      local_d0 = &local_res18;
      `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_7>::operator()(&local_d8);
      FVar1 = local_res18;
    }
    else if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
      fStack_13c = local_res20.SubFrame;
      fStack_144 = FVar1.SubFrame;
      if (fStack_13c < fStack_144) goto LAB_1460357af;
    }
    if (FVar1.FrameNumber.Value.Value <= local_res20.FrameNumber.Value.Value) {
      if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
        fStack_13c = local_res20.SubFrame;
        fStack_144 = FVar1.SubFrame;
        if (fStack_13c <= fStack_144) goto LAB_146035826;
      }
      local_c8 = &local_res20;
      local_c0 = &local_res18;
      `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_8>::operator()(&local_c8);
      FVar1 = local_res18;
    }
LAB_146035826:
    if (FVar1.FrameNumber.Value.Value < local_res20.FrameNumber.Value.Value) {
LAB_146035843:
      local_b8 = &local_res20;
      local_b0 = &local_res18;
      `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_9>::operator()(&local_b8);
      FVar1 = local_res18;
    }
    else if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
      fStack_13c = local_res20.SubFrame;
      fStack_144 = FVar1.SubFrame;
      if (fStack_144 < fStack_13c) goto LAB_146035843;
    }
    if (local_res20.FrameNumber.Value.Value <= FVar1.FrameNumber.Value.Value) {
      if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
        fStack_13c = local_res20.SubFrame;
        fStack_144 = FVar1.SubFrame;
        if (fStack_144 <= fStack_13c) goto LAB_1460358ba;
      }
      local_a8 = &local_res20;
      local_a0 = &local_res18;
      `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_10>::operator()(&local_a8);
      FVar1 = local_res18;
    }
LAB_1460358ba:
    if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
      fStack_13c = local_res20.SubFrame;
      fStack_144 = FVar1.SubFrame;
      if (fStack_13c != fStack_144) goto LAB_1460358d5;
    }
    else {
LAB_1460358d5:
      local_98 = &local_res20;
      local_90 = &local_res18;
      `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_11>::operator()(&local_98);
      FVar1 = local_res18;
    }
    if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
      fStack_13c = local_res20.SubFrame;
      fStack_144 = FVar1.SubFrame;
      if (fStack_13c != fStack_144) goto LAB_14603591d;
    }
    else {
LAB_14603591d:
      local_88 = &local_res20;
      local_80 = &local_res18;
      `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_12>::operator()(&local_88);
      FVar1 = local_res18;
    }
    lVar4 = lVar4 + 1;
    if (0x2c < lVar4) {
      return true;
    }
    pFVar3 = TestTimes + lVar4;
    do {
      local_res20 = *pFVar3;
      if (local_res20.FrameNumber.Value.Value < FVar1.FrameNumber.Value.Value) {
LAB_146035987:
        local_78 = &local_res20;
        local_70 = &local_res18;
        `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_13>::operator()(&local_78);
        FVar1 = local_res18;
      }
      else if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
        fStack_13c = local_res20.SubFrame;
        fStack_144 = FVar1.SubFrame;
        if (fStack_13c < fStack_144) goto LAB_146035987;
      }
      if (local_res20.FrameNumber.Value.Value < FVar1.FrameNumber.Value.Value) {
LAB_1460359d1:
        local_68 = &local_res20;
        local_60 = &local_res18;
        `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_14>::operator()(&local_68);
        FVar1 = local_res18;
      }
      else if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
        fStack_13c = local_res20.SubFrame;
        fStack_144 = FVar1.SubFrame;
        if (fStack_13c <= fStack_144) goto LAB_1460359d1;
      }
      if (local_res20.FrameNumber.Value.Value <= FVar1.FrameNumber.Value.Value) {
        if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
          fStack_13c = local_res20.SubFrame;
          fStack_144 = FVar1.SubFrame;
          if (fStack_144 < fStack_13c) goto LAB_146035a48;
        }
        local_58 = &local_res20;
        local_50 = &local_res18;
        `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_15>::operator()(&local_58);
        FVar1 = local_res18;
      }
LAB_146035a48:
      if (local_res20.FrameNumber.Value.Value <= FVar1.FrameNumber.Value.Value) {
        if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
          fStack_13c = local_res20.SubFrame;
          fStack_144 = FVar1.SubFrame;
          if (fStack_144 <= fStack_13c) goto LAB_146035a92;
        }
        local_48 = &local_res20;
        local_40 = &local_res18;
        `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_16>::operator()(&local_48);
        FVar1 = local_res18;
      }
LAB_146035a92:
      if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
        fStack_13c = local_res20.SubFrame;
        fStack_144 = FVar1.SubFrame;
        if (fStack_13c == fStack_144) {
          local_38 = &local_res20;
          local_30 = &local_res18;
          `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_17>::operator()(&local_38);
          FVar1 = local_res18;
        }
      }
      if (local_res20.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
        fStack_13c = local_res20.SubFrame;
        fStack_144 = FVar1.SubFrame;
        if (fStack_13c == fStack_144) {
          local_28 = &local_res20;
          local_20 = &local_res18;
          `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_18>::operator()(&local_28);
          FVar1 = local_res18;
        }
      }
      pFVar3 = pFVar3 + 1;
    } while ((longlong)pFVar3 < 0x154beeab8);
  } while( true );
}

// GetBeautifiedTestName @ 146035b50

FString * __thiscall
FFrameTimeComparisonTest::GetBeautifiedTestName
          (FFrameTimeComparisonTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Time.Comparison");
  return __return_storage_ptr__;
}

// operator() @ 1504e0960

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_10>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701572>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701572>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e09d0

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_11>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701571>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701571>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e0a40

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_12>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701570>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701570>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e0ab0

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_13>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701562>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701562>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e0b20

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_14>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701561>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701561>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e0b90

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_15>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701560>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701560>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e0c00

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_16>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701559>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701559>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e0c70

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_17>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701558>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701558>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e0ce0

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l9::<lambda_18>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701557>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701557>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e10c0

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701586>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701586>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1200

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701585>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701585>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e14e0

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701584>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701584>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e17c0

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701583>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701583>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1a90

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701582>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701582>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1b00

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l6::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701581>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701581>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1b70

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701575>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701575>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1be0

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_8>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701574>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701574>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e1c50

bool __thiscall `FFrameTimeComparisonTest::RunTest'::__l7::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6539756078085701573>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6539756078085701573>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

