// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141cbb540

EAutomationTestFlags __thiscall FTimecodeParserTest::GetTestFlags(FTimecodeParserTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbb550

bool __thiscall FTimecodeParserTest::IsStressTest(FTimecodeParserTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbb5b0

uint __thiscall FTimecodeParserTest::GetRequiredDeviceNum(FTimecodeParserTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbb5c0

FString * __thiscall
FTimecodeParserTest::GetTestSourceFileName
          (FTimecodeParserTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TimecodeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbb5f0

int __thiscall FTimecodeParserTest::GetTestSourceFileLine(FTimecodeParserTest *this)

{
  return 0x130;
}

// GetTests @ 141cbb630

/* WARNING: Removing unreachable block (ram,0x000141cbb7ae) */

void __thiscall
FTimecodeParserTest::GetTests
          (FTimecodeParserTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141cbb810

bool __thiscall FTimecodeParserTest::RunTest(FTimecodeParserTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbb840

FString * __thiscall
FTimecodeParserTest::GetBeautifiedTestName
          (FTimecodeParserTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTimecodeParserTest @ 141cefef0

FTimecodeParserTest * __thiscall
FTimecodeParserTest::FTimecodeParserTest(FTimecodeParserTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FTimecodeParserTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TimecodeParser");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 141cf4770

void __thiscall
`FTimecodeParserTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<_protected:_void___cdecl_FTimecodeParserTest::TestBody(FString_const_&)_::_2_::FTimecodeParserTestEntry,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [16];
  FScriptContainerElement *local_res20;
  TOptional<FTimecode> local_118;
  wchar_t *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar1 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  local_res20 = pFVar9 + (longlong)iVar1 * 0x28;
  do {
    pFVar4 = local_res20;
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<`FTimecodeParserTest::TestBody'::__l2::FTimecodeParserTestEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar4) {
      return;
    }
    if (*(int *)(pFVar9 + 8) == 0) {
      local_f8 = L"";
LAB_141cf47ec:
      sVar6 = wcslen(local_f8);
      iVar5 = (int)sVar6;
    }
    else {
      local_f8 = *(wchar_t **)pFVar9;
      iVar5 = 0;
      if (local_f8 != (wchar_t *)0x0) goto LAB_141cf47ec;
    }
    local_98._12_4_ = uStack_ec;
    local_98.Size = iVar5;
    local_98.DataPtr = local_f8;
    iStack_f0 = iVar5;
    FTimecode::ParseTimecode(&local_118,&local_98);
    if (local_118.bIsSet == false) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      if (param_2) {
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        UE::TimecodeParserTest::Private::TimecodeToString(&local_48,(FTimecode *)(pFVar9 + 0x10));
        ::FString::PrintfImpl
                  (&local_b8,
                   L"Parsing \'%s\' failed, but was expected to succeed (Expected: \'%s\'.");
        (*pcVar3)(pFVar2,&local_b8,0);
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          FVar8.Data = local_48.Data.AllocatorInstance.Data;
        }
      }
      else {
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
        ::FString::PrintfImpl(&local_a8,L"Parsing \'%s\' failed as expected.");
        (*pcVar3)(pFVar2,&local_a8,0,0);
        FVar8.Data = local_a8.Data.AllocatorInstance.Data;
      }
    }
    else if (param_2) {
      if ((((local_118.TypedValue.Hours == *(int *)(pFVar9 + 0x10)) &&
           (local_118.TypedValue.Minutes == *(int *)(pFVar9 + 0x14))) &&
          (local_118.TypedValue.Seconds == *(int *)(pFVar9 + 0x18))) &&
         (((local_118.TypedValue.Frames == *(int *)(pFVar9 + 0x1c) &&
           (local_118.TypedValue.Subframe == *(float *)(pFVar9 + 0x20))) &&
          ((FScriptContainerElement)local_118.TypedValue.bDropFrameFormat == pFVar9[0x24])))) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
        UE::TimecodeParserTest::Private::TimecodeToString(&local_88,&local_118.TypedValue);
        ::FString::PrintfImpl(&local_e8,L"Parsing \'%s\' to parsed timecode \'%s\' -> OK");
        (*pcVar3)(pFVar2,&local_e8,0);
        FVar8.Data = local_88.Data.AllocatorInstance.Data;
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          FVar8.Data = local_88.Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        UE::TimecodeParserTest::Private::TimecodeToString(&local_68,(FTimecode *)(pFVar9 + 0x10));
        UE::TimecodeParserTest::Private::TimecodeToString(&local_78,&local_118.TypedValue);
        ::FString::PrintfImpl
                  (&local_d8,
                   L"Parsing \'%s\' (parsed timecode \'%s\') was different than expected: \'%s\'");
        (*pcVar3)(pFVar2,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          FVar8.Data = local_68.Data.AllocatorInstance.Data;
        }
      }
    }
    else {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      UE::TimecodeParserTest::Private::TimecodeToString(&local_58,&local_118.TypedValue);
      ::FString::PrintfImpl
                (&local_c8,
                 L"Parsing \'%s\' was expected to failed, but it succeeded (parsed timecode \'%s\')"
                );
      (*pcVar3)(pFVar2,&local_c8,0);
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
    pFVar9 = pFVar9 + 0x28;
  } while( true );
}

// TestBody @ 141d4e1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTimecodeParserTest::TestBody(FTimecodeParserTest *this,FString *param_1)

{
  int *piVar1;
  FTimecodeParserTestEntry *pFVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  FAutomationTestFramework *pFVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  int *piVar14;
  undefined1 auStackY_658 [32];
  undefined1 local_618 [8];
  ForAnyElementType local_610;
  int local_608;
  int local_604;
  TArray<_protected:_void___cdecl_FTimecodeParserTest::TestBody(FString_const_&)_::_2_::FTimecodeParserTestEntry,TSizedDefaultAllocator<32>_>
  local_600;
  FScriptContainerElement *local_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  FString local_5d8;
  FString local_5c8;
  TStringView<wchar_t> local_5b8;
  FString local_5a8;
  TOptional<FTimecode> local_598;
  FTimecodeParserTestEntry local_578;
  FString local_550;
  undefined8 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined1 local_52c;
  FString local_528;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined4 local_508;
  undefined1 local_504;
  FString local_500;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined1 local_4dc;
  FString local_4d8;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined1 local_4b4;
  FString local_4b0;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined1 local_48c;
  FString local_488;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined1 local_464;
  FString local_460;
  undefined1 *local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined1 local_43c;
  FString local_438;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined1 local_414;
  FString local_410;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined1 local_3ec;
  FString local_3e8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4;
  FString local_3c0;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined8 local_3a4;
  undefined1 local_39c;
  FString local_398;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined1 local_374;
  FString local_370;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined1 local_34c;
  FString local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined1 local_324;
  FString local_320;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined1 local_2fc;
  FString local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  FString local_2d0;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined1 local_2ac;
  FString local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined1 local_284;
  FString local_280;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined1 local_25c;
  FString local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined1 local_234;
  FString local_230;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined1 local_20c;
  FString local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4;
  FString local_1e0;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined1 local_1bc;
  FString local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 local_194;
  FString local_190;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  FString local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined1 local_144;
  FString local_140;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  FString local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined1 local_f4;
  FString local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  FString local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  FString local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  FString local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  FString local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined1 local_2c;
  ulonglong local_28;
  size_t sVar8;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_658;
  ::FString::FString(&local_578.TimecodeString,L"00:00:00:00");
  local_578.ExpectedTimecode.Subframe = 0.0;
  local_578.ExpectedTimecode.Hours = 0;
  local_578.ExpectedTimecode.Minutes = 0;
  local_578.ExpectedTimecode.Seconds = 0;
  local_578.ExpectedTimecode.Frames = 0;
  local_578.ExpectedTimecode.bDropFrameFormat = false;
  ::FString::FString(&local_550,L"00:00:00;00");
  local_52c = 1;
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  ::FString::FString(&local_528,L"00:00:00:00.00");
  local_508 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_504 = 0;
  ::FString::FString(&local_500,L"00:00:00;00.00");
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4dc = 1;
  ::FString::FString(&local_4d8,L"10:20:30:40.50");
  local_4c8 = ___xmm_000000280000001e000000140000000a;
  uStack_4c0 = _UNK_150796318;
  local_4b8 = 0x3f000000;
  local_4b4 = 0;
  ::FString::FString(&local_4b0,L"15:55:22;09.90");
  local_4a0 = 0x370000000f;
  local_498 = 0x900000016;
  local_490 = 0x3f666666;
  local_48c = 1;
  ::FString::FString(&local_488,L"10: 11: 12; 191");
  local_478 = ___xmm_000000bf0000000c0000000b0000000a;
  uStack_470 = _UNK_150796328;
  local_468 = 0;
  local_464 = 1;
  ::FString::FString(&local_460,L"01;02;03;04");
  local_450 = &DAT_200000001;
  local_448 = 3;
  uStack_444 = 4;
  uStack_440 = 0;
  local_43c = 1;
  ::FString::FString(&local_438,L"01:02;03;04");
  local_428 = ___xmm_00000004000000030000000200000001;
  uStack_420 = _UNK_150631e38;
  local_418 = 0;
  local_414 = 1;
  ::FString::FString(&local_410,L"01;02;03;04.50");
  local_400 = 1;
  local_3fc = 2;
  local_3f8 = 3;
  local_3f4 = 4;
  local_3f0 = 0x3f000000;
  local_3ec = 1;
  ::FString::FString(&local_3e8,L"01:02:03.04");
  local_3d8 = ___xmm_00000004000000030000000200000001;
  uStack_3d0 = _UNK_150631e38;
  local_3c8 = 0;
  local_3c4 = 1;
  ::FString::FString(&local_3c0,L"01.02.03.04");
  local_3b0 = 1;
  local_3ac = 2;
  local_3a8 = 3;
  local_3a4 = 4;
  local_39c = 1;
  ::FString::FString(&local_398,L"01:02.03.04");
  local_388 = ___xmm_00000004000000030000000200000001;
  uStack_380 = _UNK_150631e38;
  local_378 = 0;
  local_374 = 1;
  ::FString::FString(&local_370,L"01.02.03.04.50");
  local_360 = 1;
  local_35c = 2;
  local_358 = 3;
  local_354 = 4;
  local_350 = 0x3f000000;
  local_34c = 1;
  ::FString::FString(&local_348,L"01:02:03:04.777");
  local_338 = ___xmm_00000004000000030000000200000001;
  uStack_330 = _UNK_150631e38;
  local_328 = 0x3f46e979;
  local_324 = 0;
  ::FString::FString(&local_320,L"01.02.03.04.555");
  local_310 = 1;
  local_30c = 2;
  local_308 = 3;
  local_304 = 4;
  local_300 = 0x3f0e147b;
  local_2fc = 1;
  ::FString::FString(&local_2f8,L"+ 15:55:22;09.90");
  local_2e8 = ___xmm_0000000900000016000000370000000f;
  uStack_2e0 = _UNK_1507962d8;
  local_2d8 = 0x3f666666;
  local_2d4 = 1;
  ::FString::FString(&local_2d0,L"+15:55:22;09.90");
  local_2c0 = 0xf;
  local_2bc = 0x37;
  local_2b8 = 0x16;
  local_2b4 = 9;
  local_2b0 = 0x3f666666;
  local_2ac = 1;
  ::FString::FString(&local_2a8,L"- 15:55:22;09.90");
  local_298 = ___xmm_000000090000001600000037fffffff1;
  uStack_290 = _UNK_1507962e8;
  local_288 = 0x3f666666;
  local_284 = 1;
  ::FString::FString(&local_280,L"-15:55:22;09.90");
  local_270 = 0xfffffff1;
  local_26c = 0x37;
  local_268 = 0x16;
  local_264 = 9;
  local_260 = 0x3f666666;
  local_25c = 1;
  ::FString::FString(&local_258,L"15:-55:22;09.90");
  local_248 = ___xmm_0000000900000016ffffffc90000000f;
  uStack_240 = _UNK_1507962f8;
  local_238 = 0x3f666666;
  local_234 = 1;
  ::FString::FString(&local_230,L"15:55:-22;09.90");
  local_220 = 0xf;
  local_21c = 0x37;
  local_218 = 0xffffffea;
  local_214 = 9;
  local_210 = 0x3f666666;
  local_20c = 1;
  ::FString::FString(&local_208,L"15:55:22;-09.90");
  local_1f8 = ___xmm_fffffff700000016000000370000000f;
  uStack_1f0 = _UNK_1507963a8;
  local_1e8 = 0x3f666666;
  local_1e4 = 1;
  ::FString::FString(&local_1e0,L"- 00:55:22:09");
  local_1d0 = 0;
  local_1cc = 0xffffffc9;
  local_1c8 = 0x16;
  local_1c4 = 9;
  local_1bc = 0;
  ::FString::FString(&local_1b8,L"- 00:00:22:09");
  local_1a8 = ___xmm_00000009ffffffea0000000000000000;
  uStack_1a0 = _UNK_150796308;
  local_198 = 0;
  local_194 = 0;
  ::FString::FString(&local_190,L"- 00:00:00:09");
  local_180 = 0;
  local_178 = 0;
  local_174 = 0xfffffff7;
  local_170 = 0;
  local_16c = 0;
  ::FString::FString(&local_168,L"15:55:22;09.-90");
  local_158 = ___xmm_000000090000001600000037fffffff1;
  uStack_150 = _UNK_1507962e8;
  local_148 = 0x3f666666;
  local_144 = 1;
  ::FString::FString(&local_140,L"00:55:22;09.-90");
  local_130 = 0;
  local_12c = 0xffffffc9;
  local_128 = 0x16;
  local_124 = 9;
  local_120 = 0x3f666666;
  local_11c = 1;
  ::FString::FString(&local_118,L"00:00:22;09.-90");
  local_108 = ___xmm_00000009ffffffea0000000000000000;
  uStack_100 = _UNK_150796308;
  local_f8 = 0x3f666666;
  local_f4 = 1;
  ::FString::FString(&local_f0,L"00:00:00;09.-90");
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0xfffffff7;
  local_d0 = 0x3f666666;
  local_cc = 1;
  ::FString::FString(&local_c8,L"00:00:00;00.-90");
  local_a8 = 0xbf666666;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a4 = 1;
  ::FString::FString(&local_a0,L"- 00:00:00:00.90");
  local_90 = 0;
  local_88 = 0;
  local_80 = 0xbf666666;
  local_7c = 0;
  ::FString::FString(&local_78,L"15:55:22:43999");
  local_68 = ___xmm_0000abdf00000016000000370000000f;
  uStack_60 = _UNK_150796358;
  local_58 = 0;
  local_54 = 0;
  ::FString::FString(&local_50,L"200:210:220:44000");
  lVar13 = 0x22;
  local_40 = 200;
  local_3c = 0xd2;
  lVar11 = 8;
  local_38 = 0xdc;
  local_34 = 44000;
  local_2c = 0;
  local_600.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_600.ArrayNum = 0x22;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,0x22,0,&local_600.AllocatorInstance,0x22,&local_600.ArrayMax);
  ConstructItems<_FTimecodeParserTest::TestBody_::__l2::FTimecodeParserTestEntry,_FTimecodeParserTest::TestBody_::__l2::FTimecodeParserTestEntry,int>
            (local_600.AllocatorInstance.Data,&local_578,0x22);
  puVar5 = (undefined1 *)register0x00000020;
  do {
    lVar13 = lVar13 + -1;
    if (*(void **)(puVar5 + -0x50) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar5 + -0x50));
    }
    puVar5 = puVar5 + -0x28;
  } while (lVar13 != 0);
  ::FString::FString(&local_578.TimecodeString,L"");
  local_578.ExpectedTimecode.Subframe = 0.0;
  local_578.ExpectedTimecode.Hours = 0;
  local_578.ExpectedTimecode.Minutes = 0;
  local_578.ExpectedTimecode.Seconds = 0;
  local_578.ExpectedTimecode.Frames = 0;
  local_578.ExpectedTimecode.bDropFrameFormat = false;
  ::FString::FString(&local_550,L"00:00");
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  local_52c = 0;
  ::FString::FString(&local_528,L"01:02:1d:25");
  local_508 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_504 = 0;
  ::FString::FString(&local_500,L"00.00:00:00");
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4dc = 0;
  ::FString::FString(&local_4d8,L":00:00:00:00");
  local_4b8 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b4 = 0;
  ::FString::FString(&local_4b0,L"...0");
  local_4a0 = 0;
  local_498 = 0;
  local_490 = 0;
  local_48c = 0;
  ::FString::FString(&local_488,L"00;00:00:00");
  local_468 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_464 = 0;
  ::FString::FString(&local_460,L"00:00:00:00:00");
  local_450 = (undefined1 *)0x0;
  local_448 = 0;
  uStack_444 = 0;
  uStack_440 = 0;
  local_43c = 0;
  local_610.Data = (FScriptContainerElement *)0x0;
  local_608 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,8,0,&local_610,8,&local_604);
  ConstructItems<_FTimecodeParserTest::TestBody_::__l2::FTimecodeParserTestEntry,_FTimecodeParserTest::TestBody_::__l2::FTimecodeParserTestEntry,int>
            (local_610.Data,&local_578,8);
  piVar14 = (int *)&local_438;
  do {
    piVar1 = piVar14 + -10;
    piVar14 = piVar14 + -10;
    lVar11 = lVar11 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar11 != 0);
  `FTimecodeParserTest::TestBody'::__l2::<lambda_1>::operator()(local_618,&local_600,true);
  iVar6 = local_608;
  pFVar2 = (FTimecodeParserTestEntry *)(local_610.Data + (longlong)local_608 * 0x28);
  FVar12.Data = local_610.Data;
  do {
    if (local_608 != iVar6) {
      `TCheckedPointerIterator<`FTimecodeParserTest::TestBody'::__l2::FTimecodeParserTestEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_618);
    }
    if ((FTimecodeParserTestEntry *)FVar12.Data == pFVar2) {
      DestructItems<_FTimecodeParserTest::TestBody_::__l2::FTimecodeParserTestEntry,int>
                ((FTimecodeParserTestEntry *)local_610.Data,local_608);
      if ((FTimecodeParserTestEntry *)local_610.Data != (FTimecodeParserTestEntry *)0x0) {
        FMemory::Free(local_610.Data);
      }
      DestructItems<_FTimecodeParserTest::TestBody_::__l2::FTimecodeParserTestEntry,int>
                ((FTimecodeParserTestEntry *)local_600.AllocatorInstance.Data,local_600.ArrayNum);
      if ((FTimecodeParserTestEntry *)local_600.AllocatorInstance.Data !=
          (FTimecodeParserTestEntry *)0x0) {
        FMemory::Free(local_600.AllocatorInstance.Data);
      }
      return;
    }
    if ((((FTimecodeParserTestEntry *)FVar12.Data)->TimecodeString).Data.ArrayNum == 0) {
      local_5e8 = (FScriptContainerElement *)0x15060d16c;
LAB_141d4ebee:
      sVar8 = wcslen((wchar_t *)local_5e8);
      iVar7 = (int)sVar8;
    }
    else {
      local_5e8 = (((FTimecodeParserTestEntry *)FVar12.Data)->TimecodeString).Data.AllocatorInstance
                  .Data;
      iVar7 = 0;
      if (local_5e8 != (FScriptContainerElement *)0x0) goto LAB_141d4ebee;
    }
    local_5b8._12_4_ = uStack_5dc;
    local_5b8.Size = iVar7;
    local_5b8.DataPtr = (wchar_t *)local_5e8;
    iStack_5e0 = iVar7;
    FTimecode::ParseTimecode(&local_598,&local_5b8);
    if (local_598.bIsSet == false) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar3 = pFVar9->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
      ::FString::PrintfImpl(&local_5c8,L"Parsing \'%s\' failed as expected.");
      (*pcVar4)(pFVar3,&local_5c8,0,0);
      FVar10.Data = local_5c8.Data.AllocatorInstance.Data;
    }
    else {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar3 = pFVar9->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      UE::TimecodeParserTest::Private::TimecodeToString(&local_5a8,&local_598.TypedValue);
      ::FString::PrintfImpl
                (&local_5d8,
                 L"Parsing \'%s\' was expected to failed, but it succeeded (parsed timecode \'%s\')"
                );
      (*pcVar4)(pFVar3,&local_5d8,0);
      FVar10.Data = local_5a8.Data.AllocatorInstance.Data;
      if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
        FVar10.Data = local_5a8.Data.AllocatorInstance.Data;
      }
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
    FVar12.Data = FVar12.Data + 0x28;
  } while( true );
}

