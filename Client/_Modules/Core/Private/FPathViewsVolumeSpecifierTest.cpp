// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbd070

EAutomationTestFlags __thiscall
FPathViewsVolumeSpecifierTest::GetTestFlags(FPathViewsVolumeSpecifierTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbd080

bool __thiscall FPathViewsVolumeSpecifierTest::IsStressTest(FPathViewsVolumeSpecifierTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbd090

uint __thiscall
FPathViewsVolumeSpecifierTest::GetRequiredDeviceNum(FPathViewsVolumeSpecifierTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbd0a0

FString * __thiscall
FPathViewsVolumeSpecifierTest::GetTestSourceFileName
          (FPathViewsVolumeSpecifierTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbd0d0

int __thiscall
FPathViewsVolumeSpecifierTest::GetTestSourceFileLine(FPathViewsVolumeSpecifierTest *this)

{
  return 0x40e;
}

// GetTests @ 141cbd0e0

/* WARNING: Removing unreachable block (ram,0x000141cbd25e) */

void __thiscall
FPathViewsVolumeSpecifierTest::GetTests
          (FPathViewsVolumeSpecifierTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbd280

bool __thiscall
FPathViewsVolumeSpecifierTest::RunTest(FPathViewsVolumeSpecifierTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbd2b0

FString * __thiscall
FPathViewsVolumeSpecifierTest::GetBeautifiedTestName
          (FPathViewsVolumeSpecifierTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathViewsVolumeSpecifierTest @ 141ceaef0

FPathViewsVolumeSpecifierTest * __thiscall
FPathViewsVolumeSpecifierTest::FPathViewsVolumeSpecifierTest
          (FPathViewsVolumeSpecifierTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathViewsVolumeSpecifierTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::VolumeSpecifier");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
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

// TestBody @ 141d3a330

void __thiscall
FPathViewsVolumeSpecifierTest::TestBody(FPathViewsVolumeSpecifierTest *this,FString *param_1)

{
  wchar_t *pwVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  wchar_t **ppwVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  TStringView<wchar_t> local_6f8;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  int iStack_6e0;
  undefined4 uStack_6dc;
  TStringView<wchar_t> local_6d8;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  int iStack_6c0;
  undefined4 uStack_6bc;
  FString local_6b8;
  wchar_t *local_6a8;
  undefined4 uStack_6a0;
  undefined1 local_698;
  wchar_t *local_690;
  undefined4 uStack_688;
  wchar_t *local_680;
  undefined4 uStack_678;
  wchar_t *local_670;
  undefined4 local_668;
  undefined1 local_660;
  wchar_t *local_658;
  undefined4 local_650;
  wchar_t *local_648;
  undefined4 local_640;
  wchar_t *local_638;
  undefined4 local_630;
  undefined1 local_628;
  wchar_t *local_620;
  undefined4 local_618;
  undefined *local_610;
  undefined4 local_608;
  wchar_t *local_600;
  undefined4 local_5f8;
  undefined1 local_5f0;
  wchar_t *local_5e8;
  undefined4 local_5e0;
  wchar_t *local_5d8;
  undefined4 local_5d0;
  wchar_t *local_5c8;
  undefined4 local_5c0;
  undefined1 local_5b8;
  wchar_t *local_5b0;
  undefined4 local_5a8;
  wchar_t *local_5a0;
  undefined4 local_598;
  wchar_t *local_590;
  undefined4 local_588;
  undefined1 local_580;
  wchar_t *local_578;
  undefined4 local_570;
  wchar_t *local_568;
  undefined4 local_560;
  wchar_t *local_558;
  undefined4 local_550;
  undefined1 local_548;
  wchar_t *local_540;
  undefined4 local_538;
  wchar_t *local_530;
  undefined4 local_528;
  wchar_t *local_520;
  undefined4 local_518;
  undefined1 local_510;
  wchar_t *local_508;
  undefined4 local_500;
  wchar_t *local_4f8;
  undefined4 local_4f0;
  wchar_t *local_4e8;
  undefined4 local_4e0;
  undefined1 local_4d8;
  wchar_t *local_4d0;
  undefined4 local_4c8;
  wchar_t *local_4c0;
  undefined4 local_4b8;
  wchar_t *local_4b0;
  undefined4 local_4a8;
  undefined1 local_4a0;
  wchar_t *local_498;
  undefined4 local_490;
  wchar_t *local_488;
  undefined4 local_480;
  wchar_t *local_478;
  undefined4 local_470;
  undefined1 local_468;
  wchar_t *local_460;
  undefined4 local_458;
  wchar_t *local_450;
  undefined4 local_448;
  wchar_t *local_440;
  undefined4 local_438;
  undefined1 local_430;
  wchar_t *local_428;
  undefined4 local_420;
  wchar_t *local_418;
  undefined4 local_410;
  wchar_t *local_408;
  undefined4 local_400;
  undefined1 local_3f8;
  wchar_t *local_3f0;
  undefined4 local_3e8;
  undefined *local_3e0;
  undefined4 local_3d8;
  wchar_t *local_3d0;
  undefined4 local_3c8;
  undefined1 local_3c0;
  wchar_t *local_3b8;
  undefined4 local_3b0;
  wchar_t *local_3a8;
  undefined4 local_3a0;
  wchar_t *local_398;
  undefined4 local_390;
  undefined1 local_388;
  wchar_t *local_380;
  undefined4 local_378;
  wchar_t *local_370;
  undefined4 local_368;
  wchar_t *local_360;
  undefined4 local_358;
  undefined1 local_350;
  wchar_t *local_348;
  undefined4 local_340;
  wchar_t *local_338;
  undefined4 local_330;
  wchar_t *local_328;
  undefined4 local_320;
  undefined1 local_318;
  wchar_t *local_310;
  undefined4 local_308;
  wchar_t *local_300;
  undefined4 local_2f8;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e0;
  wchar_t *local_2d8;
  undefined4 local_2d0;
  undefined *local_2c8;
  undefined4 local_2c0;
  wchar_t *local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8;
  wchar_t *local_2a0;
  undefined4 local_298;
  wchar_t *local_290;
  undefined4 local_288;
  wchar_t *local_280;
  undefined4 local_278;
  undefined1 local_270;
  wchar_t *local_268;
  undefined4 local_260;
  wchar_t *local_258;
  undefined4 local_250;
  undefined *local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined *local_230;
  undefined4 local_228;
  wchar_t *local_220;
  undefined4 local_218;
  wchar_t *local_210;
  undefined4 local_208;
  undefined1 local_200;
  wchar_t *local_1f8;
  undefined4 local_1f0;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  wchar_t *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  wchar_t *local_1c0;
  undefined4 local_1b8;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  wchar_t *local_188;
  undefined4 local_180;
  wchar_t *local_178;
  undefined4 local_170;
  wchar_t *local_168;
  undefined4 local_160;
  undefined1 local_158;
  wchar_t *local_150;
  undefined4 local_148;
  wchar_t *local_140;
  undefined4 local_138;
  wchar_t *local_130;
  undefined4 local_128;
  undefined1 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  undefined *local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  wchar_t *local_e0;
  undefined4 local_d8;
  wchar_t *local_d0;
  undefined4 local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_668 = 2;
  uStack_6a0 = 0;
  local_670 = L"D:";
  local_658 = L"D:";
  local_638 = L"D:/";
  local_620 = L"D:";
  local_600 = L"D:\\";
  local_5e8 = L"D:";
  local_5c8 = L"D:root/path";
  local_5b0 = L"D:";
  local_590 = L"D:/root/path";
  local_578 = L"D:";
  local_558 = L"D:\\root\\path";
  local_540 = L"D:";
  local_4e8 = L"\\\\volume";
  local_4d0 = L"\\\\volume";
  local_4b0 = L"/\\volume";
  local_6a8 = L"";
  local_698 = 0;
  local_690 = L"";
  uStack_688 = 0;
  local_680 = L"";
  uStack_678 = 0;
  local_660 = 1;
  local_650 = 2;
  local_648 = L"";
  local_640 = 0;
  local_630 = 3;
  local_628 = 0;
  local_618 = 2;
  local_610 = &u__;
  local_608 = 1;
  local_5f8 = 3;
  local_5f0 = 0;
  local_5e0 = 2;
  local_5d8 = L"\\";
  local_5d0 = 1;
  local_5c0 = 0xb;
  local_5b8 = 1;
  local_5a8 = 2;
  local_5a0 = L"root/path";
  local_598 = 9;
  local_588 = 0xc;
  local_580 = 0;
  local_570 = 2;
  local_568 = L"/root/path";
  local_560 = 10;
  local_550 = 0xc;
  local_548 = 0;
  local_538 = 2;
  local_530 = L"\\root\\path";
  local_528 = 10;
  local_520 = L"//volume";
  local_518 = 8;
  local_510 = 0;
  local_508 = L"//volume";
  local_500 = 8;
  local_4f8 = L"";
  local_4f0 = 0;
  local_4e0 = 8;
  local_4d8 = 0;
  local_4c8 = 8;
  local_4c0 = L"";
  local_4b8 = 0;
  local_4a8 = 8;
  local_498 = L"/\\volume";
  local_478 = L"\\/volume";
  local_460 = L"\\/volume";
  local_440 = L"//\\volume";
  local_428 = L"//\\volume";
  local_408 = L"//volume/";
  local_3d0 = L"//volume/root";
  local_3a8 = L"/root";
  local_280 = L"//";
  local_268 = L"//";
  local_4a0 = 0;
  local_490 = 8;
  local_488 = L"";
  local_480 = 0;
  local_470 = 8;
  local_468 = 0;
  local_458 = 8;
  local_450 = L"";
  local_448 = 0;
  local_438 = 9;
  local_430 = 0;
  local_420 = 9;
  local_418 = L"";
  local_410 = 0;
  local_400 = 9;
  local_3f8 = 0;
  local_3f0 = L"//volume";
  local_3e8 = 8;
  local_3e0 = &u__;
  local_3d8 = 1;
  local_3c8 = 0xd;
  local_3c0 = 0;
  local_3b8 = L"//volume";
  local_3b0 = 8;
  local_3a0 = 5;
  local_398 = L"/root/path";
  local_390 = 10;
  local_388 = 0;
  local_380 = L"";
  local_378 = 0;
  local_370 = L"/root/path";
  local_368 = 10;
  local_360 = L"\\root\\path";
  local_358 = 10;
  local_350 = 0;
  local_348 = L"";
  local_340 = 0;
  local_338 = L"\\root\\path";
  local_330 = 10;
  local_328 = L"root/path";
  local_320 = 9;
  local_318 = 0;
  local_310 = L"";
  local_308 = 0;
  local_300 = L"root/path";
  local_2f8 = 9;
  local_2f0 = &u__;
  local_2e8 = 1;
  local_2e0 = 0;
  local_2d8 = L"";
  local_2d0 = 0;
  local_2c8 = &u__;
  local_2c0 = 1;
  local_2b8 = L"\\";
  local_2b0 = 1;
  local_2a8 = 0;
  local_2a0 = L"";
  local_298 = 0;
  local_290 = L"\\";
  local_288 = 1;
  local_278 = 2;
  local_270 = 0;
  local_260 = 2;
  local_258 = L"";
  local_250 = 0;
  local_220 = L"";
  local_1e8 = L"";
  local_248 = &u___;
  local_230 = &u___;
  local_210 = L"/\\";
  local_1f8 = L"/\\";
  local_1d8 = L"\\/";
  local_1c0 = L"\\/";
  local_1a0 = L"/:";
  local_178 = L"/:";
  local_130 = L":/";
  local_f8 = L":root";
  local_d0 = L"root";
  local_c0 = L"////volume/path";
  local_a8 = L"////volume";
  local_1b0 = L"";
  local_188 = L"";
  local_140 = L"";
  ppwVar9 = &local_6a8;
  local_98 = L"/path";
  local_240 = 2;
  local_238 = 0;
  local_228 = 2;
  local_218 = 0;
  local_208 = 2;
  local_200 = 0;
  local_1f0 = 2;
  local_1e0 = 0;
  local_1d0 = 2;
  local_1c8 = 0;
  local_1b8 = 2;
  local_1a8 = 0;
  local_198 = 2;
  local_190 = 0;
  local_180 = 0;
  local_170 = 2;
  local_168 = L":";
  local_160 = 1;
  local_158 = 1;
  local_150 = L":";
  local_148 = 1;
  local_138 = 0;
  local_128 = 2;
  local_120 = 0;
  local_118 = L":";
  local_110 = 1;
  local_108 = &u__;
  local_100 = 1;
  local_f0 = 5;
  local_e8 = 1;
  local_e0 = L":";
  local_d8 = 1;
  local_c8 = 4;
  local_b8 = 0xf;
  local_b0 = 0;
  local_a0 = 10;
  local_90 = 5;
  do {
    local_718._0_8_ = *ppwVar9;
    local_718._8_8_ = ppwVar9[1];
    local_6f8.DataPtr = (wchar_t *)0x0;
    local_6f8.Size = 0;
    local_6d8.DataPtr = (wchar_t *)0x0;
    local_6d8.Size = 0;
    bVar4 = FPathViews::IsDriveSpecifierWithoutRoot((TStringView<wchar_t> *)local_718);
    local_718._0_8_ = *ppwVar9;
    local_718._8_8_ = ppwVar9[1];
    FPathViews::SplitVolumeSpecifier((TStringView<wchar_t> *)local_718,&local_6f8,&local_6d8);
    pFVar5 = FAutomationTestFramework::Get();
    pwVar1 = *ppwVar9;
    pFVar8 = (FScriptContainerElement *)0x0;
    pFVar2 = pFVar5->CurrentTest;
    pFVar6 = ::FString::ConstructFromPtrSize(&local_88,pwVar1,(int)ppwVar9[1]);
    if (&local_58 != pFVar6) {
      pFVar8 = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar4 != (bool)*(char *)(ppwVar9 + 2)) {
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_6b8,L"%s: The two values are not equal.");
      (*pcVar3)(pFVar2,&local_6b8,0);
      if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
      }
    }
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    pFVar5 = FAutomationTestFramework::Get();
    local_718._12_4_ = local_6f8._12_4_;
    local_718._8_4_ = local_6f8.Size;
    pFVar2 = pFVar5->CurrentTest;
    local_718._0_8_ = local_6f8.DataPtr;
    local_708._0_8_ = local_6f8.DataPtr;
    local_708._8_8_ = local_718._8_8_;
    pFVar6 = ::FString::ConstructFromPtrSize(&local_78,pwVar1,(int)ppwVar9[1]);
    pFVar11 = (FScriptContainerElement *)0x0;
    iVar12 = 0;
    pFVar8 = pFVar11;
    iVar10 = iVar12;
    if (&local_48 != pFVar6) {
      pFVar8 = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar10 = (pFVar6->Data).ArrayNum;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    uStack_6dc = local_708._12_4_;
    local_6e8 = local_718._0_4_;
    uStack_6e4 = local_718._4_4_;
    iStack_6e0 = local_718._8_4_;
    local_708._0_8_ = ppwVar9[3];
    pFVar7 = (FScriptContainerElement *)L"";
    if (iVar10 != 0) {
      pFVar7 = pFVar8;
    }
    local_718._12_4_ = local_708._12_4_;
    local_708._8_8_ = ppwVar9[4];
    FAutomationTestBase::TestEqual
              (pFVar2,(wchar_t *)pFVar7,(TStringView<wchar_t> *)local_718,
               (TStringView<wchar_t> *)local_708);
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    pFVar5 = FAutomationTestFramework::Get();
    local_718._12_4_ = local_6d8._12_4_;
    local_718._8_4_ = local_6d8.Size;
    pFVar2 = pFVar5->CurrentTest;
    local_708._0_8_ = local_6d8.DataPtr;
    local_718._0_8_ = local_6d8.DataPtr;
    local_708._8_8_ = local_718._8_8_;
    pFVar6 = ::FString::ConstructFromPtrSize(&local_68,pwVar1,(int)ppwVar9[1]);
    if (&local_38 != pFVar6) {
      pFVar11 = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar12 = (pFVar6->Data).ArrayNum;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uStack_6bc = local_718._12_4_;
    local_6c8 = local_708._0_4_;
    uStack_6c4 = local_708._4_4_;
    iStack_6c0 = local_708._8_4_;
    pFVar8 = (FScriptContainerElement *)L"";
    if (iVar12 != 0) {
      pFVar8 = pFVar11;
    }
    local_718._0_8_ = local_708._0_8_;
    local_718._8_4_ = local_708._8_4_;
    local_708._0_8_ = ppwVar9[5];
    local_708._8_8_ = ppwVar9[6];
    FAutomationTestBase::TestEqual
              (pFVar2,(wchar_t *)pFVar8,(TStringView<wchar_t> *)local_718,
               (TStringView<wchar_t> *)local_708);
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    ppwVar9 = ppwVar9 + 7;
  } while ((FString *)ppwVar9 != &local_88);
  return;
}

