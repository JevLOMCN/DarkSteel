// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc9690

EAutomationTestFlags __thiscall FRangeTest::GetTestFlags(FRangeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc96a0

bool __thiscall FRangeTest::IsStressTest(FRangeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc96b0

uint __thiscall FRangeTest::GetRequiredDeviceNum(FRangeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc96c0

FString * __thiscall
FRangeTest::GetTestSourceFileName(FRangeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\RangeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc96f0

int __thiscall FRangeTest::GetTestSourceFileLine(FRangeTest *this)

{
  return 0xb;
}

// GetTests @ 141bc9750

/* WARNING: Removing unreachable block (ram,0x000141bc98ce) */

void __thiscall
FRangeTest::GetTests
          (FRangeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc98f0

bool __thiscall FRangeTest::RunTest(FRangeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc9920

FString * __thiscall
FRangeTest::GetBeautifiedTestName(FRangeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FRangeTest @ 141be6930

FRangeTest * __thiscall FRangeTest::FRangeTest(FRangeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FRangeTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[EditorContext][ClientContext][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::Range");
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
  ::FString::FString(&local_18,"[EditorContext][ClientContext][SmokeFilter]");
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

// TestBody @ 141c2d430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000141c2e79c) */
/* WARNING: Removing unreachable block (ram,0x000141c2e7dd) */
/* WARNING: Removing unreachable block (ram,0x000141c2d55e) */
/* WARNING: Removing unreachable block (ram,0x000141c2d59f) */
/* WARNING: Removing unreachable block (ram,0x000141c2e8de) */
/* WARNING: Removing unreachable block (ram,0x000141c2e91f) */

void __thiscall FRangeTest::TestBody(FRangeTest *this,FString *param_1)

{
  uchar uVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  TRange<float> *this_00;
  TRange<float> *this_01;
  TRange<float> *this_02;
  TRange<float> *this_03;
  bool bVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> *pTVar9;
  TRange<float> *pTVar10;
  float fVar11;
  undefined4 local_res20;
  TRange<float> local_16b8;
  TRange<float> local_16a8;
  TRange<float> local_1698;
  TRange<float> local_1688;
  TRange<float> local_1678;
  TRange<float> local_1668;
  TRange<float> local_1658;
  TRange<float> local_1648;
  TRange<float> local_1638;
  undefined4 local_1628;
  undefined4 uStack_1624;
  undefined1 local_1620;
  undefined4 uStack_161c;
  TRange<float> local_1618;
  TRange<float> local_1608;
  TRange<float> local_15f8;
  TRange<float> local_15e8;
  TRange<float> local_15d8;
  TRange<float> local_15c8;
  TRange<float> local_15b8;
  TRange<float> local_15a8;
  TRange<float> local_1598;
  TRange<float> local_1588;
  TRange<float> local_1578;
  TRange<float> local_1568;
  TRange<float> local_1558;
  TRange<float> local_1548;
  TRange<float> local_1538;
  TRange<float> local_1528;
  undefined4 local_1518;
  undefined4 uStack_1514;
  undefined4 local_1510;
  undefined4 uStack_150c;
  undefined4 local_1508;
  undefined4 uStack_1504;
  uint local_1500;
  undefined4 uStack_14fc;
  uint local_14f8;
  undefined4 uStack_14f4;
  uint local_14f0;
  undefined4 uStack_14ec;
  undefined4 local_14e8;
  undefined4 uStack_14e4;
  uint local_14e0;
  undefined4 uStack_14dc;
  uint local_14d8;
  undefined4 uStack_14d4;
  uint local_14d0;
  undefined4 uStack_14cc;
  uint local_14c8;
  undefined4 uStack_14c4;
  undefined4 local_14c0;
  undefined4 uStack_14bc;
  undefined4 local_14b8;
  undefined4 uStack_14b4;
  uint local_14b0;
  undefined4 uStack_14ac;
  uint local_14a8;
  undefined4 uStack_14a4;
  uint local_14a0;
  undefined4 uStack_149c;
  uint local_1498;
  undefined4 uStack_1494;
  undefined4 local_1490;
  undefined4 uStack_148c;
  undefined4 local_1488;
  undefined4 uStack_1484;
  uint local_1480;
  undefined4 uStack_147c;
  undefined4 local_1478;
  undefined4 uStack_1474;
  undefined4 local_1470;
  undefined4 uStack_146c;
  undefined4 local_1468;
  undefined4 uStack_1464;
  uint local_1460;
  undefined4 uStack_145c;
  uint local_1458;
  undefined4 uStack_1454;
  undefined4 local_1450;
  undefined4 uStack_144c;
  undefined4 local_1448;
  undefined4 uStack_1444;
  uint local_1440;
  undefined4 uStack_143c;
  uint local_1438;
  undefined4 uStack_1434;
  TRange<float> local_1430;
  TRange<float> local_1420;
  TRange<float> local_1410;
  undefined8 local_1400;
  undefined8 local_13f8;
  TRange<float> local_13f0;
  TRange<float> local_13e0;
  TRange<float> local_13d0;
  TRange<float> local_13c0;
  TRange<float> local_13b0;
  TRange<float> local_13a0;
  TRange<float> local_1390;
  TRange<float> local_1380;
  TRange<float> local_1370;
  TRange<float> local_1360;
  TRange<float> local_1350;
  TRange<float> local_1340;
  TRange<float> local_1330;
  TRange<float> local_1320;
  TRange<float> local_1310;
  TRange<float> local_1300;
  TRange<float> local_12f0;
  TRange<float> local_12e0;
  TRange<float> local_12d0;
  TRange<float> local_12c0;
  TRangeBound<float> local_12b0;
  TRangeBound<float> local_12a8;
  TRange<float> local_12a0;
  TRange<float> local_1290;
  TRange<float> local_1280;
  TRange<float> local_1270;
  TRange<float> local_1260;
  TRange<float> local_1250;
  TRange<float> local_1240;
  TRange<float> local_1230;
  TRange<float> local_1220;
  TRange<float> local_1210;
  TRange<float> local_1200;
  TRange<float> local_11f0;
  TRange<float> local_11e0;
  TRange<float> local_11d0;
  TRange<float> local_11c0;
  TRange<float> local_11b0;
  TRange<float> local_11a0;
  TRange<float> local_1190;
  TRange<float> local_1180;
  TRange<float> local_1170;
  TRange<float> local_1160;
  TRange<float> local_1150;
  TRange<float> local_1140;
  TRange<float> local_1130;
  TRange<float> local_1120;
  TRange<float> local_1110;
  TRange<float> local_1100;
  TRange<float> local_10f0;
  TRange<float> local_10e0;
  TRange<float> local_10d0;
  TRange<float> local_10c0;
  TRange<float> local_10b0;
  TRange<float> local_10a0;
  TRange<float> local_1090;
  TRange<float> local_1080;
  TRange<float> local_1070;
  TRange<float> local_1060;
  TRange<float> local_1050;
  TRange<float> local_1040;
  TRange<float> local_1030;
  TRange<float> local_1020;
  TRange<float> local_1010;
  TRange<float> local_1000;
  TRange<float> local_ff0;
  TRangeBound<float> local_fe0;
  uint local_fd8;
  uint local_fd0;
  TRangeBound<float> local_fc8;
  TRangeBound<float> local_fc0;
  uint local_fb8;
  TRangeBound<float> local_fb0;
  TRangeBound<float> local_fa8;
  TRangeBound<float> local_fa0;
  TRangeBound<float> local_f98;
  uint local_f90;
  TRangeBound<float> local_f88;
  uint local_f80;
  TRangeBound<float> local_f78;
  TRangeBound<float> local_f70;
  uint local_f68;
  uint local_f60;
  TRangeBound<float> local_f58;
  TRangeBound<float> local_f50;
  uint local_f48;
  TRangeBound<float> local_f40;
  uint local_f38;
  uint local_f30;
  TRangeBound<float> local_f28;
  TRangeBound<float> local_f20;
  TRangeBound<float> local_f18;
  TRangeBound<float> local_f10;
  TRangeBound<float> local_f08;
  uint local_f00;
  TRangeBound<float> local_ef8;
  TRangeBound<float> local_ef0;
  TRangeBound<float> local_ee8;
  uint local_ee0;
  uint local_ed8;
  TRangeBound<float> local_ed0;
  TRangeBound<float> local_ec8;
  TRangeBound<float> local_ec0;
  TRangeBound<float> local_eb8;
  TRangeBound<float> local_eb0;
  TRangeBound<float> local_ea8;
  uint local_ea0;
  TRangeBound<float> local_e98;
  uint local_e90;
  TRangeBound<float> local_e88;
  uint local_e80;
  TRangeBound<float> local_e78;
  uint local_e70;
  TRangeBound<float> local_e68;
  uint local_e60;
  TRangeBound<float> local_e58;
  uint local_e50;
  TRangeBound<float> local_e48;
  TRangeBound<float> local_e40;
  uint local_e38;
  uint local_e30;
  TRangeBound<float> local_e28;
  uint local_e20;
  TRangeBound<float> local_e18;
  uint local_e10;
  TRangeBound<float> local_e08;
  TRangeBound<float> local_e00;
  uint local_df8;
  uint local_df0;
  TRangeBound<float> local_de8;
  uint local_de0;
  uint local_dd8;
  uint local_dd0;
  TRangeBound<float> local_dc8;
  TRangeBound<float> local_dc0;
  uint local_db8;
  TRangeBound<float> local_db0;
  TRangeBound<float> local_da8;
  uint local_da0;
  TRangeBound<float> local_d98;
  uint local_d90;
  TRangeBound<float> local_d88;
  TRangeBound<float> local_d80;
  uint local_d78;
  TRangeBound<float> local_d70;
  TRangeBound<float> local_d68;
  uint local_d60;
  uint local_d58;
  uint local_d50;
  uint local_d48;
  TRange<float> *local_d40;
  TRange<float> *local_d38;
  TRange<float> *local_d30;
  TRange<float> *local_d28;
  TRange<float> *local_d20;
  TRange<float> *local_d18;
  TRange<float> *local_d10;
  TRange<float> *local_d08;
  TRange<float> *local_d00;
  TRange<float> *local_cf8;
  TRange<float> *local_cf0;
  TRange<float> *local_ce8;
  TRange<float> *local_ce0;
  TRange<float> *local_cd8;
  TRange<float> *local_cd0;
  TRange<float> *local_cc8;
  TRange<float> *local_cc0;
  TRange<float> *local_cb8;
  TRange<float> *local_cb0;
  TRange<float> *local_ca8;
  uint local_ca0;
  uint local_c98;
  uint local_c90;
  uint local_c88;
  TRangeBound<float> local_c80;
  uint local_c78;
  TRangeBound<float> local_c70;
  TRangeBound<float> local_c68;
  TRangeBound<float> local_c60;
  TRangeBound<float> local_c58;
  TRangeBound<float> local_c50;
  TRangeBound<float> local_c48;
  TRangeBound<float> local_c40;
  uint local_c38;
  uint local_c30;
  TRangeBound<float> local_c28;
  TRangeBound<float> local_c20;
  TRangeBound<float> local_c18;
  uint local_c10;
  uint local_c08;
  uint local_c00;
  undefined2 local_bf7;
  undefined1 local_bf5;
  uint local_bf0;
  uint local_be8;
  TRangeBound<float> local_be0;
  TRangeBound<float> local_bd8;
  uint local_bd0;
  TRangeBound<float> local_bc8;
  TRangeBound<float> local_bc0;
  TRangeBound<float> local_bb8;
  TRangeBound<float> local_bb0;
  TRangeBound<float> local_ba8;
  TRangeBound<float> local_ba0;
  uint local_b98;
  TRangeBound<float> local_b90;
  TRangeBound<float> local_b88;
  uint local_b80;
  uint local_b78;
  uint local_b70;
  TRangeBound<float> local_b68;
  TRangeBound<float> local_b60;
  TRangeBound<float> local_b58;
  uint local_b50;
  uint local_b48;
  uint local_b40;
  TRangeBound<float> local_b38;
  TRangeBound<float> local_b30;
  TRangeBound<float> local_b28;
  TRangeBound<float> local_b20;
  TRangeBound<float> local_b18;
  TRangeBound<float> local_b10;
  TRangeBound<float> local_b08;
  uint local_b00;
  TRangeBound<float> local_af8;
  TRangeBound<float> local_af0;
  uint local_ae8;
  TRangeBound<float> local_ae0;
  uint local_ad8;
  TRangeBound<float> local_ad0;
  uint local_ac8;
  TRangeBound<float> local_ac0;
  uint local_ab8;
  uint local_ab0;
  uint local_aa8;
  uint local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  FString local_a88;
  FString local_a78 [2];
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898 [4];
  FString local_858;
  FString local_848 [2];
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  TRange<float> local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  undefined4 local_344;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_340;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_330;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_320;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_310;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_300;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_2f0;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_2e0;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_2d0;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_2c0;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_2b0;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_2a0;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_290;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_280;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_270;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_260;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_250;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_240;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_230;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_220;
  TRange<float> local_210;
  TRange<float> local_200;
  TRange<float> local_1f0;
  TRange<float> local_1e0;
  TRange<float> local_1d0;
  TRange<float> local_1c0;
  TRange<float> local_1b0;
  TRange<float> local_1a0;
  TRange<float> local_190;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_180;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_170;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_160;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_150;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_140;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_130;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_120;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_110;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> local_100;
  TRange<float> local_f0;
  TRange<float> local_e0;
  TRange<float> local_d0;
  TRange<float> local_c0;
  TRange<float> local_b0;
  TRange<float> local_a0;
  TRange<float> local_90;
  TRange<float> local_80;
  TRange<float> local_70 [3];
  
  local_1518 = CONCAT31(local_1518._1_3_,1);
  uStack_1514 = 0x40400000;
  local_a98 = CONCAT44(0x40400000,local_1518);
  local_1510 = CONCAT31(local_1510._1_3_,1);
  uStack_150c = 0x40400000;
  local_a90 = CONCAT44(0x40400000,local_1510);
  local_1508 = CONCAT31(local_1508._1_3_,1);
  uStack_1504 = 0x3f800000;
  local_15c8.LowerBound.Value = 1.0;
  local_15c8.LowerBound._0_4_ = local_1508;
  local_1500 = local_1500 & 0xffffff00;
  uStack_14fc = 0x40800000;
  local_15c8.UpperBound.Value = 4.0;
  local_15c8.UpperBound._0_4_ = local_1500;
  local_1608.LowerBound.Type.Value = '\x01';
  local_1608.LowerBound.Value = 1.0;
  local_1608.UpperBound.Type.Value = '\0';
  local_1608.UpperBound.Value = 4.0;
  if ((__real_40400000 != 3.0) || (__real_40400000 != 3.0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(local_a78,L"Default bound pair constructor must create the correct range");
    (*pcVar4)(pFVar3,local_a78,0);
    if (local_a78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a78[0].Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_15c8);
  if (((!bVar6) || (bVar6 = TRange<float>::IsEmpty(&local_1608), !bVar6)) &&
     ((local_15c8.LowerBound.Type.Value.Value != local_1608.LowerBound.Type.Value ||
      ((((local_15c8.LowerBound.Type.Value.Value != '\x02' &&
         (local_15c8.LowerBound.Value != local_1608.LowerBound.Value)) ||
        (local_15c8.UpperBound.Type.Value.Value != local_1608.UpperBound.Type.Value)) ||
       ((local_15c8.UpperBound.Type.Value.Value != '\x02' &&
        (local_15c8.UpperBound.Value != local_1608.UpperBound.Value)))))))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a58,L"Specific bound pair constructor must create the correct range");
    (*pcVar4)(pFVar3,&local_a58,0);
    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_15c8);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a48,L"Specific bound pair constructor must create non-empty range");
    (*pcVar4)(pFVar3,&local_a48,0);
    if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a48.Data.AllocatorInstance.Data);
    }
  }
  local_14f8 = local_14f8 & 0xffffff00;
  uStack_14f4 = 0;
  local_16b8.LowerBound.Value = 0.0;
  local_16b8.LowerBound._0_4_ = local_14f8;
  local_14f0 = local_14f0 & 0xffffff00;
  uStack_14ec = 0;
  local_16b8.UpperBound.Value = 0.0;
  local_16b8.UpperBound._0_4_ = local_14f0;
  local_14e8 = CONCAT31(local_14e8._1_3_,1);
  uStack_14e4 = 0x40c00000;
  local_15b8.LowerBound.Value = 6.0;
  local_15b8.LowerBound._0_4_ = local_14e8;
  local_14e0 = local_14e0 & 0xffffff00;
  uStack_14dc = 0x40000000;
  local_15b8.UpperBound.Value = 2.0;
  local_15b8.UpperBound._0_4_ = local_14e0;
  local_14d8 = local_14d8 & 0xffffff00;
  uStack_14d4 = 0x40800000;
  local_15a8.LowerBound.Value = 4.0;
  local_15a8.LowerBound._0_4_ = local_14d8;
  local_14d0 = local_14d0 & 0xffffff00;
  uStack_14cc = 0x40800000;
  local_15a8.UpperBound.Value = 4.0;
  local_15a8.UpperBound._0_4_ = local_14d0;
  local_14c8 = local_14c8 & 0xffffff00;
  uStack_14c4 = 0x40800000;
  local_1598.LowerBound.Value = 4.0;
  local_1598.LowerBound._0_4_ = local_14c8;
  local_14c0 = CONCAT31(local_14c0._1_3_,1);
  uStack_14bc = 0x40800000;
  local_1598.UpperBound.Value = 4.0;
  local_1598.UpperBound._0_4_ = local_14c0;
  local_14b8 = CONCAT31(local_14b8._1_3_,1);
  uStack_14b4 = 0x40800000;
  local_1588.LowerBound.Value = 4.0;
  local_1588.LowerBound._0_4_ = local_14b8;
  local_14b0 = local_14b0 & 0xffffff00;
  uStack_14ac = 0x40800000;
  local_1588.UpperBound.Value = 4.0;
  local_1588.UpperBound._0_4_ = local_14b0;
  local_1618.LowerBound.Type.Value = '\x01';
  local_1618.LowerBound.Value = 4.0;
  local_1618.UpperBound.Type.Value = '\0';
  local_1618.UpperBound.Value = 1.0;
  bVar6 = TRange<float>::IsEmpty(&local_16b8);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a38,L"Empty range must be empty <1>");
    (*pcVar4)(pFVar3,&local_a38,0);
    if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_1618);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a28,L"Empty range must be empty <2>");
    (*pcVar4)(pFVar3,&local_a28,0);
    if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a28.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_15b8);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a18,L"Empty range must be empty <3>");
    (*pcVar4)(pFVar3,&local_a18,0);
    if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_15a8);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a08,L"Empty range must be empty <4>");
    (*pcVar4)(pFVar3,&local_a08,0);
    if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_1598);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9f8,L"Empty range must be empty <5>");
    (*pcVar4)(pFVar3,&local_9f8,0);
    if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_1588);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9e8,L"Empty range must be empty <6>");
    (*pcVar4)(pFVar3,&local_9e8,0);
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_16b8);
  if (((!bVar6) || (bVar6 = TRange<float>::IsEmpty(&local_1618), !bVar6)) &&
     (((local_16b8.LowerBound.Type.Value.Value != local_1618.LowerBound.Type.Value ||
       (((local_16b8.LowerBound.Type.Value.Value != '\x02' &&
         (local_16b8.LowerBound.Value != local_1618.LowerBound.Value)) ||
        (local_16b8.UpperBound.Type.Value.Value != local_1618.UpperBound.Type.Value)))) ||
      ((local_16b8.UpperBound.Type.Value.Value != '\x02' &&
       (local_16b8.UpperBound.Value != local_1618.UpperBound.Value)))))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9d8,L"Empty ranges must be equal <1>");
    (*pcVar4)(pFVar3,&local_9d8,0);
    if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::IsEmpty(&local_16b8);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_15b8), bVar6)) goto LAB_141c2dad4;
  if (local_16b8.LowerBound.Type.Value.Value == local_15b8.LowerBound.Type.Value) {
    if (local_16b8.LowerBound.Type.Value.Value != '\x02') {
      if (local_16b8.LowerBound.Value != local_15b8.LowerBound.Value) goto LAB_141c2da8e;
    }
    if (local_16b8.UpperBound.Type.Value.Value != local_15b8.UpperBound.Type.Value)
    goto LAB_141c2da8e;
    if (local_16b8.UpperBound.Type.Value.Value != '\x02') {
      if (local_16b8.UpperBound.Value != local_15b8.UpperBound.Value) goto LAB_141c2da8e;
    }
  }
  else {
LAB_141c2da8e:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9c8,L"Empty ranges must be equal <2>");
    (*pcVar4)(pFVar3,&local_9c8,0);
    if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
    }
  }
LAB_141c2dad4:
  bVar6 = TRange<float>::IsEmpty(&local_16b8);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_15a8), bVar6)) goto LAB_141c2db69;
  if (local_16b8.LowerBound.Type.Value.Value == local_15a8.LowerBound.Type.Value) {
    if (local_16b8.LowerBound.Type.Value.Value != '\x02') {
      if (local_16b8.LowerBound.Value != local_15a8.LowerBound.Value) goto LAB_141c2db23;
    }
    if (local_16b8.UpperBound.Type.Value.Value != local_15a8.UpperBound.Type.Value)
    goto LAB_141c2db23;
    if (local_16b8.UpperBound.Type.Value.Value != '\x02') {
      if (local_16b8.UpperBound.Value != local_15a8.UpperBound.Value) goto LAB_141c2db23;
    }
  }
  else {
LAB_141c2db23:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9b8,L"Empty ranges must be equal <3>");
    (*pcVar4)(pFVar3,&local_9b8,0);
    if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
    }
  }
LAB_141c2db69:
  bVar6 = TRange<float>::IsEmpty(&local_16b8);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_1598), bVar6)) goto LAB_141c2dbfe;
  if (local_16b8.LowerBound.Type.Value.Value == local_1598.LowerBound.Type.Value) {
    if (local_16b8.LowerBound.Type.Value.Value != '\x02') {
      if (local_16b8.LowerBound.Value != local_1598.LowerBound.Value) goto LAB_141c2dbb8;
    }
    if (local_16b8.UpperBound.Type.Value.Value != local_1598.UpperBound.Type.Value)
    goto LAB_141c2dbb8;
    if (local_16b8.UpperBound.Type.Value.Value != '\x02') {
      if (local_16b8.UpperBound.Value != local_1598.UpperBound.Value) goto LAB_141c2dbb8;
    }
  }
  else {
LAB_141c2dbb8:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9a8,L"Empty ranges must be equal <4>");
    (*pcVar4)(pFVar3,&local_9a8,0);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
LAB_141c2dbfe:
  bVar6 = TRange<float>::IsEmpty(&local_16b8);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_1588), bVar6)) goto LAB_141c2dc93;
  if (local_16b8.LowerBound.Type.Value.Value == local_1588.LowerBound.Type.Value) {
    if (local_16b8.LowerBound.Type.Value.Value != '\x02') {
      if (local_16b8.LowerBound.Value != local_1588.LowerBound.Value) goto LAB_141c2dc4d;
    }
    if (local_16b8.UpperBound.Type.Value.Value != local_1588.UpperBound.Type.Value)
    goto LAB_141c2dc4d;
    if (local_16b8.UpperBound.Type.Value.Value != '\x02') {
      if (local_16b8.UpperBound.Value != local_1588.UpperBound.Value) goto LAB_141c2dc4d;
    }
  }
  else {
LAB_141c2dc4d:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_998,L"Empty ranges must be equal <5>");
    (*pcVar4)(pFVar3,&local_998,0);
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
  }
LAB_141c2dc93:
  local_14a8 = local_14a8 & 0xffffff00;
  uStack_14a4 = 0x3f800000;
  local_16a8.LowerBound.Value = 1.0;
  local_16a8.LowerBound._0_4_ = local_14a8;
  local_14a0 = local_14a0 & 0xffffff00;
  uStack_149c = 0x40800000;
  local_16a8.UpperBound.Value = 4.0;
  local_16a8.UpperBound._0_4_ = local_14a0;
  local_1498 = local_1498 & 0xffffff00;
  uStack_1494 = 0x3f800000;
  local_1698.LowerBound.Value = 1.0;
  local_1698.LowerBound._0_4_ = local_1498;
  local_1490 = CONCAT31(local_1490._1_3_,1);
  uStack_148c = 0x40800000;
  local_1698.UpperBound.Value = 4.0;
  local_1698.UpperBound._0_4_ = local_1490;
  local_1488 = CONCAT31(local_1488._1_3_,1);
  uStack_1484 = 0x3f800000;
  local_1688.LowerBound.Value = 1.0;
  local_1688.LowerBound._0_4_ = local_1488;
  local_1480 = local_1480 & 0xffffff00;
  uStack_147c = 0x40800000;
  local_1688.UpperBound.Value = 4.0;
  local_1688.UpperBound._0_4_ = local_1480;
  local_1478 = CONCAT31(local_1478._1_3_,1);
  uStack_1474 = 0x3f800000;
  local_1678.LowerBound.Value = 1.0;
  local_1678.LowerBound._0_4_ = local_1478;
  local_1470 = CONCAT31(local_1470._1_3_,1);
  uStack_146c = 0x40800000;
  local_1678.UpperBound.Value = 4.0;
  local_1678.UpperBound._0_4_ = local_1470;
  bVar6 = TRange<float>::IsEmpty(&local_16a8);
  if (bVar6) {
    TRange<float>::IsEmpty(&local_16a8);
  }
  bVar6 = TRange<float>::IsEmpty(&local_1698);
  if (bVar6) {
    TRange<float>::IsEmpty(&local_1698);
  }
  bVar6 = TRange<float>::IsEmpty(&local_1688);
  if (bVar6) {
    TRange<float>::IsEmpty(&local_1688);
  }
  bVar6 = TRange<float>::IsEmpty(&local_1678);
  if (bVar6) {
    TRange<float>::IsEmpty(&local_1678);
  }
  bVar6 = TRange<float>::IsEmpty(&local_16a8);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_1698), bVar6)) goto LAB_141c2de2f;
  if (local_16a8.LowerBound.Type.Value.Value == local_1698.LowerBound.Type.Value) {
    if (local_16a8.LowerBound.Type.Value.Value != '\x02') {
      if (local_16a8.LowerBound.Value != local_1698.LowerBound.Value) goto LAB_141c2de75;
    }
    if (local_16a8.UpperBound.Type.Value.Value == local_1698.UpperBound.Type.Value) {
      if (local_16a8.UpperBound.Type.Value.Value != '\x02') {
        if (local_16a8.UpperBound.Value != local_1698.UpperBound.Value) goto LAB_141c2de75;
      }
LAB_141c2de2f:
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_988,L"Different inclusive-exclusive ranges must be different <1>");
      (*pcVar4)(pFVar3,&local_988,0);
      if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141c2de75:
  bVar6 = TRange<float>::IsEmpty(&local_16a8);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_1688), bVar6)) goto LAB_141c2dec9;
  if (local_16a8.LowerBound.Type.Value.Value == local_1688.LowerBound.Type.Value) {
    if (local_16a8.LowerBound.Type.Value.Value != '\x02') {
      if (local_16a8.LowerBound.Value != local_1688.LowerBound.Value) goto LAB_141c2df0f;
    }
    if (local_16a8.UpperBound.Type.Value.Value == local_1688.UpperBound.Type.Value) {
      if (local_16a8.UpperBound.Type.Value.Value != '\x02') {
        if (local_16a8.UpperBound.Value != local_1688.UpperBound.Value) goto LAB_141c2df0f;
      }
LAB_141c2dec9:
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_978,L"Different inclusive-exclusive ranges must be different <2>");
      (*pcVar4)(pFVar3,&local_978,0);
      if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141c2df0f:
  bVar6 = TRange<float>::IsEmpty(&local_16a8);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_1678), bVar6)) goto LAB_141c2df63;
  if (local_16a8.LowerBound.Type.Value.Value == local_1678.LowerBound.Type.Value) {
    if (local_16a8.LowerBound.Type.Value.Value != '\x02') {
      if (local_16a8.LowerBound.Value != local_1678.LowerBound.Value) goto LAB_141c2dfa9;
    }
    if (local_16a8.UpperBound.Type.Value.Value == local_1678.UpperBound.Type.Value) {
      if (local_16a8.UpperBound.Type.Value.Value != '\x02') {
        if (local_16a8.UpperBound.Value != local_1678.UpperBound.Value) goto LAB_141c2dfa9;
      }
LAB_141c2df63:
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_968,L"Different inclusive-exclusive ranges must be different <3>");
      (*pcVar4)(pFVar3,&local_968,0);
      if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141c2dfa9:
  bVar6 = TRange<float>::IsEmpty(&local_1698);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_1688), bVar6)) goto LAB_141c2dffd;
  if (local_1698.LowerBound.Type.Value.Value == local_1688.LowerBound.Type.Value) {
    if (local_1698.LowerBound.Type.Value.Value != '\x02') {
      if (local_1698.LowerBound.Value != local_1688.LowerBound.Value) goto LAB_141c2e043;
    }
    if (local_1698.UpperBound.Type.Value.Value == local_1688.UpperBound.Type.Value) {
      if (local_1698.UpperBound.Type.Value.Value != '\x02') {
        if (local_1698.UpperBound.Value != local_1688.UpperBound.Value) goto LAB_141c2e043;
      }
LAB_141c2dffd:
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_958,L"Different inclusive-exclusive ranges must be different <4>");
      (*pcVar4)(pFVar3,&local_958,0);
      if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_958.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141c2e043:
  bVar6 = TRange<float>::IsEmpty(&local_1698);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_1678), bVar6)) goto LAB_141c2e097;
  if (local_1698.LowerBound.Type.Value.Value == local_1678.LowerBound.Type.Value) {
    if (local_1698.LowerBound.Type.Value.Value != '\x02') {
      if (local_1698.LowerBound.Value != local_1678.LowerBound.Value) goto LAB_141c2e0dd;
    }
    if (local_1698.UpperBound.Type.Value.Value == local_1678.UpperBound.Type.Value) {
      if (local_1698.UpperBound.Type.Value.Value != '\x02') {
        if (local_1698.UpperBound.Value != local_1678.UpperBound.Value) goto LAB_141c2e0dd;
      }
LAB_141c2e097:
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_a88,L"Different inclusive-exclusive ranges must be different <5>");
      (*pcVar4)(pFVar3,&local_a88,0);
      if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a88.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141c2e0dd:
  bVar6 = TRange<float>::IsEmpty(&local_1688);
  if ((bVar6) && (bVar6 = TRange<float>::IsEmpty(&local_1678), bVar6)) goto LAB_141c2e131;
  if (local_1688.LowerBound.Type.Value.Value == local_1678.LowerBound.Type.Value) {
    if (local_1688.LowerBound.Type.Value.Value != '\x02') {
      if (local_1688.LowerBound.Value != local_1678.LowerBound.Value) goto LAB_141c2e177;
    }
    if (local_1688.UpperBound.Type.Value.Value == local_1678.UpperBound.Type.Value) {
      if (local_1688.UpperBound.Type.Value.Value != '\x02') {
        if (local_1688.UpperBound.Value != local_1678.UpperBound.Value) goto LAB_141c2e177;
      }
LAB_141c2e131:
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_938,L"Different inclusive-exclusive ranges must be different <6>");
      (*pcVar4)(pFVar3,&local_938,0);
      if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141c2e177:
  local_c98 = local_c98 & 0xffffff00;
  local_15f8.LowerBound._0_4_ = local_c98;
  local_c90 = local_c90 & 0xffffff00;
  local_15f8.UpperBound._0_4_ = local_c90;
  local_c88 = local_c88 & 0xffffff00;
  local_1568.LowerBound._0_4_ = local_c88;
  local_c80.Type.Value = '\x01';
  local_1568.UpperBound.Type.Value = '\x01';
  local_1568.UpperBound._1_3_ = local_c80._1_3_;
  local_c78 = local_c78 & 0xffffff00;
  local_1430.LowerBound._0_4_ = local_c78;
  local_c70.Type.Value = '\x01';
  local_1430.UpperBound.Type.Value = '\x01';
  local_1430.UpperBound._1_3_ = local_c70._1_3_;
  local_c68.Type.Value = '\x01';
  local_1420.LowerBound.Type.Value = '\x01';
  local_1420.LowerBound._1_3_ = local_c68._1_3_;
  local_c60.Type.Value = '\x01';
  local_1420.UpperBound.Type.Value = '\x01';
  local_1420.UpperBound._1_3_ = local_c60._1_3_;
  local_c58.Type.Value = '\x01';
  local_12f0.LowerBound.Type.Value = '\x01';
  local_12f0.LowerBound._1_3_ = local_c58._1_3_;
  local_c50.Type.Value = '\x01';
  local_12f0.UpperBound.Type.Value = '\x01';
  local_12f0.UpperBound._1_3_ = local_c50._1_3_;
  local_c48.Type.Value = '\x01';
  local_12e0.LowerBound.Type.Value = '\x01';
  local_12e0.LowerBound._1_3_ = local_c48._1_3_;
  local_c40.Type.Value = '\x01';
  local_12e0.UpperBound.Type.Value = '\x01';
  local_12e0.UpperBound._1_3_ = local_c40._1_3_;
  local_15f8.LowerBound.Value = 1.0;
  local_15f8.UpperBound.Value = 4.0;
  local_1568.LowerBound.Value = 1.0;
  local_1568.UpperBound.Value = 4.0;
  local_1430.LowerBound.Value = 4.0;
  local_1430.UpperBound.Value = 8.0;
  local_1420.LowerBound.Value = 4.0;
  local_1420.UpperBound.Value = 8.0;
  local_12f0.LowerBound.Value = 3.0;
  local_12f0.UpperBound.Value = 8.0;
  local_12e0.LowerBound.Value = 0.0;
  local_12e0.UpperBound.Value = 2.0;
  bVar6 = TRange<float>::Adjoins(&local_15f8,&local_1420);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_928,L"Adjoined ranges must be adjoined");
    (*pcVar4)(pFVar3,&local_928,0);
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Adjoins(&local_1568,&local_1430);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_918,L"Adjoined ranges must be adjoined");
    (*pcVar4)(pFVar3,&local_918,0);
    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Adjoins(&local_15f8,&local_1430);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_908,L"Separated ranges must not be adjoined");
    (*pcVar4)(pFVar3,&local_908,0);
    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Adjoins(&local_1568,&local_1420);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8f8,L"Separated ranges must not be adjoined");
    (*pcVar4)(pFVar3,&local_8f8,0);
    if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Adjoins(&local_15f8,&local_12f0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8e8,L"Overlapped ranges must not be adjoined <1>");
    (*pcVar4)(pFVar3,&local_8e8,0);
    if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Adjoins(&local_15f8,&local_12e0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8d8,L"Overlapped ranges must not be adjoined <2>");
    (*pcVar4)(pFVar3,&local_8d8,0);
    if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
    }
  }
  local_c38 = local_c38 & 0xffffff00;
  local_1410.LowerBound._0_4_ = local_c38;
  local_c30 = local_c30 & 0xffffff00;
  local_1410.UpperBound._0_4_ = local_c30;
  local_c28.Type.Value = '\x01';
  local_13f0.LowerBound.Type.Value = '\x01';
  local_13f0.LowerBound._1_3_ = local_c28._1_3_;
  local_c20.Type.Value = '\x01';
  local_13f0.UpperBound.Type.Value = '\x01';
  local_13f0.UpperBound._1_3_ = local_c20._1_3_;
  local_1410.LowerBound.Value = 4.0;
  local_1410.UpperBound.Value = 2.0;
  local_13f0.LowerBound.Value = 4.0;
  local_13f0.UpperBound.Value = 2.0;
  bVar6 = TRange<float>::Adjoins(&local_15f8,&local_13f0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8c8,L"A non-empty and an empty range must not be adjoined <1>");
    (*pcVar4)(pFVar3,&local_8c8,0);
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Adjoins(&local_1568,&local_1410);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8b8,L"A non-empty and an empty range must not be adjoined <2>");
    (*pcVar4)(pFVar3,&local_8b8,0);
    if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
    }
  }
  local_c18.Type.Value = '\x01';
  local_12d0.LowerBound.Type.Value = '\x01';
  local_12d0.LowerBound._1_3_ = local_c18._1_3_;
  local_c10 = local_c10 & 0xffffff00;
  local_12d0.UpperBound._0_4_ = local_c10;
  local_c08 = local_c08 & 0xffffff00;
  local_12c0.LowerBound._0_4_ = local_c08;
  local_c00 = local_c00 & 0xffffff00;
  local_12c0.UpperBound._0_4_ = local_c00;
  local_12d0.LowerBound.Value = 2.0;
  local_12d0.UpperBound.Value = 0.0;
  local_12c0.LowerBound.Value = 2.0;
  local_12c0.UpperBound.Value = 0.0;
  bVar6 = TRange<float>::Adjoins(&local_1410,&local_12d0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8a8,L"Two empty ranges must not be adjoined <1>");
    (*pcVar4)(pFVar3,&local_8a8,0);
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Adjoins(&local_13f0,&local_12c0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(local_898,L"Two empty ranges must not be adjoined <2>");
    (*pcVar4)(pFVar3,local_898,0);
    if (local_898[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898[0].Data.AllocatorInstance.Data);
    }
  }
  local_1468 = CONCAT31(local_1468._1_3_,1);
  local_12b0.Value = 1.0;
  local_12b0._0_4_ = local_1468;
  local_12a8.Value = 4.0;
  local_12a8._0_4_ = (uint)CONCAT12(local_bf5,local_bf7) << 8;
  local_344 = 0;
  uStack_1464 = 0x3f800000;
  uStack_161c = 0x40800000;
  local_1620 = 0;
  fVar11 = TRangeBound<float>::GetValue(&local_12b0);
  if (fVar11 != __real_3f800000) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_858,L"The lower bound value of [1, 4) must be 1");
    (*pcVar4)(pFVar3,&local_858,0);
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
  }
  fVar11 = TRangeBound<float>::GetValue(&local_12a8);
  if (fVar11 != __real_40800000) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(local_848,L"The upper bound value of [1, 4) must be 4");
    (*pcVar4)(pFVar3,local_848,0);
    if (local_848[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848[0].Data.AllocatorInstance.Data);
    }
  }
  local_res20 = CONCAT31(local_res20._1_3_,1);
  local_1400 = CONCAT44(0x40400000,local_res20);
  local_1628 = CONCAT31(local_1628._1_3_,1);
  local_13f8 = CONCAT44(0x40400000,local_1628);
  uStack_1624 = 0x40400000;
  local_bf0 = local_bf0 & 0xffffff00;
  local_13d0.LowerBound._0_4_ = local_bf0;
  local_be8 = local_be8 & 0xffffff00;
  local_13d0.UpperBound._0_4_ = local_be8;
  local_be0.Type.Value = '\x01';
  local_13c0.LowerBound.Type.Value = '\x01';
  local_13c0.LowerBound._1_3_ = local_be0._1_3_;
  local_bd8.Type.Value = '\x01';
  local_13c0.UpperBound.Type.Value = '\x01';
  local_13c0.UpperBound._1_3_ = local_bd8._1_3_;
  local_bd0 = local_bd0 & 0xffffff00;
  local_1648.LowerBound._0_4_ = local_bd0;
  local_ca0 = local_ca0 & 0xffffff00;
  local_1648.UpperBound._0_4_ = local_ca0;
  local_bc8.Type.Value = '\x01';
  local_15e8.LowerBound.Type.Value = '\x01';
  local_15e8.LowerBound._1_3_ = local_bc8._1_3_;
  local_bc0.Type.Value = '\x01';
  local_15e8.UpperBound.Type.Value = '\x01';
  local_15e8.UpperBound._1_3_ = local_bc0._1_3_;
  local_bb8.Type.Value = '\x01';
  local_12a0.LowerBound.Type.Value = '\x01';
  local_12a0.LowerBound._1_3_ = local_bb8._1_3_;
  local_bb0.Type.Value = '\x01';
  local_12a0.UpperBound.Type.Value = '\x01';
  local_12a0.UpperBound._1_3_ = local_bb0._1_3_;
  local_ba8.Type.Value = '\x01';
  local_1548.LowerBound.Type.Value = '\x01';
  local_1548.LowerBound._1_3_ = local_ba8._1_3_;
  local_ba0.Type.Value = '\x01';
  local_1548.UpperBound.Type.Value = '\x01';
  local_1548.UpperBound._1_3_ = local_ba0._1_3_;
  local_b98 = local_b98 & 0xffffff00;
  local_1290.LowerBound._0_4_ = local_b98;
  local_b90.Type.Value = '\x01';
  local_1290.UpperBound.Type.Value = '\x01';
  local_1290.UpperBound._1_3_ = local_b90._1_3_;
  local_b88.Type.Value = '\x01';
  local_1280.LowerBound.Type.Value = '\x01';
  local_1280.LowerBound._1_3_ = local_b88._1_3_;
  local_b80 = local_b80 & 0xffffff00;
  local_1280.UpperBound._0_4_ = local_b80;
  local_b78 = local_b78 & 0xffffff00;
  local_13a0.LowerBound._0_4_ = local_b78;
  local_b70 = local_b70 & 0xffffff00;
  local_13a0.UpperBound._0_4_ = local_b70;
  local_b68.Type.Value = '\x01';
  local_b60.Type.Value = '\x02';
  local_1558.LowerBound.Type.Value = '\x01';
  local_1558.LowerBound._1_3_ = local_b68._1_3_;
  local_1558.UpperBound.Type.Value = '\x02';
  local_1558.UpperBound._1_3_ = local_b60._1_3_;
  local_13d0.LowerBound.Value = 0.0;
  local_13d0.UpperBound.Value = 2.0;
  local_13c0.LowerBound.Value = 0.0;
  local_13c0.UpperBound.Value = 2.0;
  local_1648.LowerBound.Value = 2.0;
  local_1648.UpperBound.Value = 4.0;
  local_15e8.LowerBound.Value = 2.0;
  local_15e8.UpperBound.Value = 4.0;
  local_12a0.LowerBound.Value = 3.0;
  local_12a0.UpperBound.Value = 5.0;
  local_1548.LowerBound.Value = 1.0;
  local_1548.UpperBound.Value = 3.0;
  local_1290.LowerBound.Value = 1.0;
  local_1290.UpperBound.Value = 3.0;
  local_1280.LowerBound.Value = 1.0;
  local_1280.UpperBound.Value = 3.0;
  local_13a0.LowerBound.Value = 6.0;
  local_13a0.UpperBound.Value = 10.0;
  local_1558.LowerBound.Value = 4.0;
  local_1558.UpperBound.Value = 0.0;
  local_b50 = local_b50 & 0xffffff00;
  local_b58.Type.Value = '\x02';
  local_13b0.LowerBound.Type.Value = '\x02';
  local_13b0.LowerBound._1_3_ = local_b58._1_3_;
  local_13b0.UpperBound._0_4_ = local_b50;
  local_13b0.LowerBound.Value = 0.0;
  local_13b0.UpperBound.Value = 3.0;
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_12a0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_828,L"(2, 4) must overlap [3, 5]");
    (*pcVar4)(pFVar3,&local_828,0);
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_1548);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_818,L"(2, 4) must overlap [1, 3]");
    (*pcVar4)(pFVar3,&local_818,0);
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_1290);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_948,L"(2, 4) must overlap (1, 3]");
    (*pcVar4)(pFVar3,&local_948,0);
    if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_1280);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7f8,L"(2, 4) must overlap [1, 3)");
    (*pcVar4)(pFVar3,&local_7f8,0);
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_15e8);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7e8,L"(2, 4) must overlap [2, 4]");
    (*pcVar4)(pFVar3,&local_7e8,0);
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_1648);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7d8,L"(2, 4) must overlap itself");
    (*pcVar4)(pFVar3,&local_7d8,0);
    if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_13d0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7c8,L"(2, 4) must not overlap (0, 2)");
    (*pcVar4)(pFVar3,&local_7c8,0);
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_13c0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7b8,L"(2, 4) must not overlap [0, 2]");
    (*pcVar4)(pFVar3,&local_7b8,0);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_15e8,&local_13d0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7a8,L"[2, 4] must not overlap (0, 2)");
    (*pcVar4)(pFVar3,&local_7a8,0);
    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_15e8,&local_13c0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_798,L"[2, 4] must overlap [0, 2]");
    (*pcVar4)(pFVar3,&local_798,0);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_15e8,&local_13a0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_788,L"[2, 4] must not overlap (6, 10)");
    (*pcVar4)(pFVar3,&local_788,0);
    if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_15e8,&local_1558);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_778,L"[2, 4] must overlap [4, inf)");
    (*pcVar4)(pFVar3,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1648,&local_1558);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_768,L"(2, 4) must not overlap [4, inf)");
    (*pcVar4)(pFVar3,&local_768,0);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1548,&local_1558);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_758,L"[1, 3] must not overlap [4, inf)");
    (*pcVar4)(pFVar3,&local_758,0);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_1548,&local_13b0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_748,L"[1, 3] must overlap (inf, 3)");
    (*pcVar4)(pFVar3,&local_748,0);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TRange<float>::Overlaps(&local_13a0,&local_13b0);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_738,L"(6, 10) must not overlap (inf, 3)");
    (*pcVar4)(pFVar3,&local_738,0);
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
  }
  local_b48 = local_b48 & 0xffffff00;
  local_1638.LowerBound._0_4_ = local_b48;
  local_b40 = local_b40 & 0xffffff00;
  local_1638.UpperBound._0_4_ = local_b40;
  local_b38.Type.Value = '\x01';
  local_1658.LowerBound.Type.Value = '\x01';
  local_1658.LowerBound._1_3_ = local_b38._1_3_;
  local_b30.Type.Value = '\x01';
  local_1658.UpperBound.Type.Value = '\x01';
  local_1658.UpperBound._1_3_ = local_b30._1_3_;
  local_1638.LowerBound.Value = 7.0;
  local_1638.UpperBound.Value = 14.0;
  local_1658.LowerBound.Value = 7.0;
  local_1658.UpperBound.Value = 14.0;
  pTVar9 = TRange<float>::Difference(&local_340,&local_1638,&local_1638);
  pFVar5 = (pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.AllocatorInstance.Data);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (iVar2 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_728,
                       L"The difference between a range and itself must be an empty set <1>");
    (*pcVar4)(pFVar3,&local_728,0);
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_330,&local_1658,&local_1658);
  pFVar5 = (pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.AllocatorInstance.Data);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (iVar2 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_718,
                       L"The difference between a range and itself must be an empty set <2>");
    (*pcVar4)(pFVar3,&local_718,0);
    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_320,&local_1658,&local_1638);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_ca8 = pTVar10;
  if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.AllocatorInstance.Data);
  }
  if (iVar2 != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_708,L"[7, 14] - (7, 14) must result in two ranges");
    (*pcVar4)(pFVar3,&local_708,0);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_b28.Type.Value = '\x01';
  local_1270.LowerBound.Type.Value = '\x01';
  local_1270.LowerBound._1_3_ = local_b28._1_3_;
  local_b20.Type.Value = '\x01';
  local_1270.UpperBound.Type.Value = '\x01';
  local_1270.UpperBound._1_3_ = local_b20._1_3_;
  local_1270.LowerBound.Value = 7.0;
  local_1270.UpperBound.Value = 7.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1270);
  if ((iVar2 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_b18.Type.Value = '\x01';
  local_1260.LowerBound.Type.Value = '\x01';
  local_1260.LowerBound._1_3_ = local_b18._1_3_;
  local_b10.Type.Value = '\x01';
  local_1260.UpperBound.Type.Value = '\x01';
  local_1260.UpperBound._1_3_ = local_b10._1_3_;
  local_1260.LowerBound.Value = 14.0;
  local_1260.UpperBound.Value = 14.0;
  bVar7 = TRange<float>::operator==(pTVar10 + 1,&local_1260);
  if ((!bVar6) || (!bVar7)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6f8,L"[7, 14] - (7, 14) must be {[7, 7], [14, 14]}");
    (*pcVar4)(pFVar3,&local_6f8,0);
    if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
    }
  }
  local_b08.Type.Value = '\x01';
  local_1390.LowerBound.Type.Value = '\x01';
  local_1390.LowerBound._1_3_ = local_b08._1_3_;
  local_b00 = local_b00 & 0xffffff00;
  local_1390.UpperBound._0_4_ = local_b00;
  local_af8.Type.Value = '\x01';
  local_1380.LowerBound.Type.Value = '\x01';
  local_1380.LowerBound._1_3_ = local_af8._1_3_;
  local_af0.Type.Value = '\x01';
  local_1380.UpperBound.Type.Value = '\x01';
  local_1380.UpperBound._1_3_ = local_af0._1_3_;
  local_ae8 = local_ae8 & 0xffffff00;
  local_1370.LowerBound._0_4_ = local_ae8;
  local_ad8 = local_ad8 & 0xffffff00;
  local_1370.UpperBound._0_4_ = local_ad8;
  local_ad0.Type.Value = '\x01';
  local_1360.LowerBound.Type.Value = '\x01';
  local_1360.LowerBound._1_3_ = local_ad0._1_3_;
  local_ac8 = local_ac8 & 0xffffff00;
  local_1360.UpperBound._0_4_ = local_ac8;
  local_1390.LowerBound.Value = 2.0;
  local_1390.UpperBound.Value = 9.0;
  local_1380.LowerBound.Value = 2.0;
  local_1380.UpperBound.Value = 9.0;
  local_1370.LowerBound.Value = 8.0;
  local_1370.UpperBound.Value = 17.0;
  local_1360.LowerBound.Value = 8.0;
  local_1360.UpperBound.Value = 17.0;
  pTVar9 = TRange<float>::Difference(&local_310,&local_1638,&local_1390);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_cb0 = pTVar10;
  if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6e8,L"(7, 14) - [2, 9) must result in one range");
    (*pcVar4)(pFVar3,&local_6e8,0);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_ac0.Type.Value = '\x01';
  local_1250.LowerBound.Type.Value = '\x01';
  local_1250.LowerBound._1_3_ = local_ac0._1_3_;
  local_ab8 = local_ab8 & 0xffffff00;
  local_1250.UpperBound._0_4_ = local_ab8;
  local_1250.LowerBound.Value = 9.0;
  local_1250.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1250);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6d8,L"(7, 14) - [2, 9) must be {[9, 14)}");
    (*pcVar4)(pFVar3,&local_6d8,0);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_300,&local_1638,&local_1380);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_cb8 = pTVar10;
  if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6c8,L"(7, 14) - [2, 9] must result in one range");
    (*pcVar4)(pFVar3,&local_6c8,0);
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_ab0 = local_ab0 & 0xffffff00;
  local_1240.LowerBound._0_4_ = local_ab0;
  local_aa8 = local_aa8 & 0xffffff00;
  local_1240.UpperBound._0_4_ = local_aa8;
  local_1240.LowerBound.Value = 9.0;
  local_1240.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1240);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6b8,L"(7, 14) - [2, 9] must be {(9, 14)}");
    (*pcVar4)(pFVar3,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_2f0,&local_1638,&local_1370);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_cc0 = pTVar10;
  if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6a8,L"(7, 14) - (8, 17) must result in one range");
    (*pcVar4)(pFVar3,&local_6a8,0);
    if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_aa0 = local_aa0 & 0xffffff00;
  local_1230.LowerBound._0_4_ = local_aa0;
  local_fe0.Type.Value = '\x01';
  local_1230.UpperBound.Type.Value = '\x01';
  local_1230.UpperBound._1_3_ = local_fe0._1_3_;
  local_1230.LowerBound.Value = 7.0;
  local_1230.UpperBound.Value = 8.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1230);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_698,L"(7, 14) - (8, 17) must be {(7, 8]}");
    (*pcVar4)(pFVar3,&local_698,0);
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_2e0,&local_1638,&local_1360);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_cc8 = pTVar10;
  if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_688,L"(7, 14) - [8, 17) must result in one range");
    (*pcVar4)(pFVar3,&local_688,0);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_fd8 = local_fd8 & 0xffffff00;
  local_1220.LowerBound._0_4_ = local_fd8;
  local_fd0 = local_fd0 & 0xffffff00;
  local_1220.UpperBound._0_4_ = local_fd0;
  local_1220.LowerBound.Value = 7.0;
  local_1220.UpperBound.Value = 8.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1220);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_678,L"(7, 14) - [8, 17) must be {(7, 8)}");
    (*pcVar4)(pFVar3,&local_678,0);
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_2d0,&local_1658,&local_1390);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_cd0 = pTVar10;
  if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_668,L"[7, 14] - [2, 9) must result in one range");
    (*pcVar4)(pFVar3,&local_668,0);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_fc8.Type.Value = '\x01';
  local_1210.LowerBound.Type.Value = '\x01';
  local_1210.LowerBound._1_3_ = local_fc8._1_3_;
  local_fc0.Type.Value = '\x01';
  local_1210.UpperBound.Type.Value = '\x01';
  local_1210.UpperBound._1_3_ = local_fc0._1_3_;
  local_1210.LowerBound.Value = 9.0;
  local_1210.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1210);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_658,L"[7, 14] - [2, 9) must be {[9, 14]}");
    (*pcVar4)(pFVar3,&local_658,0);
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_2c0,&local_1658,&local_1380);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_cd8 = pTVar10;
  if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_648,L"[7, 14] - [2, 9] must result in one range");
    (*pcVar4)(pFVar3,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_fb8 = local_fb8 & 0xffffff00;
  local_1200.LowerBound._0_4_ = local_fb8;
  local_fb0.Type.Value = '\x01';
  local_1200.UpperBound.Type.Value = '\x01';
  local_1200.UpperBound._1_3_ = local_fb0._1_3_;
  local_1200.LowerBound.Value = 9.0;
  local_1200.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1200);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_638,L"[7, 14] - [2, 9] must be {(9, 14]}");
    (*pcVar4)(pFVar3,&local_638,0);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_2b0,&local_1658,&local_1370);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_ce0 = pTVar10;
  if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_628,L"[7, 14] - (8, 17) must result in one range");
    (*pcVar4)(pFVar3,&local_628,0);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_fa8.Type.Value = '\x01';
  local_11f0.LowerBound.Type.Value = '\x01';
  local_11f0.LowerBound._1_3_ = local_fa8._1_3_;
  local_fa0.Type.Value = '\x01';
  local_11f0.UpperBound.Type.Value = '\x01';
  local_11f0.UpperBound._1_3_ = local_fa0._1_3_;
  local_11f0.LowerBound.Value = 7.0;
  local_11f0.UpperBound.Value = 8.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_11f0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_618,L"[7, 14] - (8, 17) must be {[7, 8]}");
    (*pcVar4)(pFVar3,&local_618,0);
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_2a0,&local_1658,&local_1360);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_ce8 = pTVar10;
  if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_608,L"[7, 14] - [8, 17) must result in one range");
    (*pcVar4)(pFVar3,&local_608,0);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f98.Type.Value = '\x01';
  local_11e0.LowerBound.Type.Value = '\x01';
  local_11e0.LowerBound._1_3_ = local_f98._1_3_;
  local_f90 = local_f90 & 0xffffff00;
  local_11e0.UpperBound._0_4_ = local_f90;
  local_11e0.LowerBound.Value = 7.0;
  local_11e0.UpperBound.Value = 8.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_11e0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5f8,L"[7, 14] - [8, 17) must be {[7, 8)}");
    (*pcVar4)(pFVar3,&local_5f8,0);
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
  }
  local_f88.Type.Value = '\x01';
  local_11c0.LowerBound.Type.Value = '\x01';
  local_11c0.LowerBound._1_3_ = local_f88._1_3_;
  local_f80 = local_f80 & 0xffffff00;
  local_11c0.UpperBound._0_4_ = local_f80;
  local_f78.Type.Value = '\x01';
  local_1350.LowerBound.Type.Value = '\x01';
  local_1350.LowerBound._1_3_ = local_f78._1_3_;
  local_f70.Type.Value = '\x01';
  local_1350.UpperBound.Type.Value = '\x01';
  local_1350.UpperBound._1_3_ = local_f70._1_3_;
  local_11c0.LowerBound.Value = 2.0;
  local_11c0.UpperBound.Value = 7.0;
  local_1350.LowerBound.Value = 2.0;
  local_1350.UpperBound.Value = 7.0;
  pTVar9 = TRange<float>::Difference(&local_290,&local_1638,&local_1350);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_cf0 = pTVar10;
  if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5e8,L"(7, 14) - [2, 7] must result in one set");
    (*pcVar4)(pFVar3,&local_5e8,0);
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f68 = local_f68 & 0xffffff00;
  local_11d0.LowerBound._0_4_ = local_f68;
  local_f60 = local_f60 & 0xffffff00;
  local_11d0.UpperBound._0_4_ = local_f60;
  local_11d0.LowerBound.Value = 7.0;
  local_11d0.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_11d0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5d8,L"(7, 14) - [2, 7] must be {(7, 14)}");
    (*pcVar4)(pFVar3,&local_5d8,0);
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_280,&local_1658,&local_11c0);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_cf8 = pTVar10;
  if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5c8,L"[7, 14] - [2, 7) must result in one set");
    (*pcVar4)(pFVar3,&local_5c8,0);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f58.Type.Value = '\x01';
  local_11b0.LowerBound.Type.Value = '\x01';
  local_11b0.LowerBound._1_3_ = local_f58._1_3_;
  local_f50.Type.Value = '\x01';
  local_11b0.UpperBound.Type.Value = '\x01';
  local_11b0.UpperBound._1_3_ = local_f50._1_3_;
  local_11b0.LowerBound.Value = 7.0;
  local_11b0.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_11b0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5b8,L"[7, 14] - [2, 7) must be {[7, 14]}");
    (*pcVar4)(pFVar3,&local_5b8,0);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_270,&local_1658,&local_1350);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d00 = pTVar10;
  if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5a8,L"[7, 14] - [2, 7] must result in one range");
    (*pcVar4)(pFVar3,&local_5a8,0);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f48 = local_f48 & 0xffffff00;
  local_11a0.LowerBound._0_4_ = local_f48;
  local_f40.Type.Value = '\x01';
  local_11a0.UpperBound.Type.Value = '\x01';
  local_11a0.UpperBound._1_3_ = local_f40._1_3_;
  local_11a0.LowerBound.Value = 7.0;
  local_11a0.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_11a0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_598,L"[7, 14] - [2, 7] must be {(7, 14]}");
    (*pcVar4)(pFVar3,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  local_f38 = local_f38 & 0xffffff00;
  local_1190.LowerBound._0_4_ = local_f38;
  local_f30 = local_f30 & 0xffffff00;
  local_1190.UpperBound._0_4_ = local_f30;
  local_f28.Type.Value = '\x01';
  local_1340.LowerBound.Type.Value = '\x01';
  local_1340.LowerBound._1_3_ = local_f28._1_3_;
  local_f20.Type.Value = '\x01';
  local_1340.UpperBound.Type.Value = '\x01';
  local_1340.UpperBound._1_3_ = local_f20._1_3_;
  local_1190.LowerBound.Value = 14.0;
  local_1190.UpperBound.Value = 16.0;
  local_1340.LowerBound.Value = 14.0;
  local_1340.UpperBound.Value = 16.0;
  pTVar9 = TRange<float>::Difference(&local_260,&local_1638,&local_1340);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d08 = pTVar10;
  if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_588,L"(7, 14) - [14, 18] must result in one range");
    (*pcVar4)(pFVar3,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_1460 = local_1460 & 0xffffff00;
  uStack_145c = 0x40e00000;
  local_1538.LowerBound.Value = 7.0;
  local_1538.LowerBound._0_4_ = local_1460;
  local_1458 = local_1458 & 0xffffff00;
  uStack_1454 = 0x41600000;
  local_1538.UpperBound.Value = 14.0;
  local_1538.UpperBound._0_4_ = local_1458;
  bVar6 = TRange<float>::IsEmpty(pTVar10);
  if ((!bVar6) || (bVar6 = TRange<float>::IsEmpty(&local_1538), !bVar6)) {
    uVar1 = (pTVar10->LowerBound).Type.Value;
    if ((uVar1 == local_1538.LowerBound.Type.Value) &&
       ((uVar1 == '\x02' || (local_1538.LowerBound.Value == (pTVar10->LowerBound).Value)))) {
      uVar1 = (pTVar10->UpperBound).Type.Value;
      if ((uVar1 == local_1538.UpperBound.Type.Value) &&
         ((uVar1 == '\x02' || (local_1538.UpperBound.Value == (pTVar10->UpperBound).Value))))
      goto LAB_141c30648;
    }
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_578,L"(7, 14) - [14, 18] must be {(7, 14)}");
    (*pcVar4)(pFVar3,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
LAB_141c30648:
  pTVar9 = TRange<float>::Difference(&local_250,&local_1658,&local_1190);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d10 = pTVar10;
  if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_568,L"[7, 14] - (14, 18) must result in one range");
    (*pcVar4)(pFVar3,&local_568,0);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f18.Type.Value = '\x01';
  local_1180.LowerBound.Type.Value = '\x01';
  local_1180.LowerBound._1_3_ = local_f18._1_3_;
  local_f10.Type.Value = '\x01';
  local_1180.UpperBound.Type.Value = '\x01';
  local_1180.UpperBound._1_3_ = local_f10._1_3_;
  local_1180.LowerBound.Value = 7.0;
  local_1180.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1180);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_558,L"[7, 14] - (14, 18) must be {[7, 14]}");
    (*pcVar4)(pFVar3,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Difference(&local_240,&local_1658,&local_1340);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d18 = pTVar10;
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_548,L"[7, 14] - [14, 18] must result in one range");
    (*pcVar4)(pFVar3,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f08.Type.Value = '\x01';
  local_1170.LowerBound.Type.Value = '\x01';
  local_1170.LowerBound._1_3_ = local_f08._1_3_;
  local_f00 = local_f00 & 0xffffff00;
  local_1170.UpperBound._0_4_ = local_f00;
  local_1170.LowerBound.Value = 7.0;
  local_1170.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1170);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_538,L"[7, 14] - [14, 18] must be {(7, 14)}");
    (*pcVar4)(pFVar3,&local_538,0);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  local_ef8.Type.Value = '\x01';
  local_1160.LowerBound.Type.Value = '\x01';
  local_1160.LowerBound._1_3_ = local_ef8._1_3_;
  local_ef0.Type.Value = '\x01';
  local_1160.UpperBound.Type.Value = '\x01';
  local_1160.UpperBound._1_3_ = local_ef0._1_3_;
  local_1160.LowerBound.Value = 8.0;
  local_1160.UpperBound.Value = 13.0;
  pTVar9 = TRange<float>::Difference(&local_230,&local_1658,&local_1160);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d20 = pTVar10;
  if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  if (iVar2 != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_528,L"[7, 14] - [8, 13] must result in two ranges");
    (*pcVar4)(pFVar3,&local_528,0);
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_ee8.Type.Value = '\x01';
  local_1150.LowerBound.Type.Value = '\x01';
  local_1150.LowerBound._1_3_ = local_ee8._1_3_;
  local_ee0 = local_ee0 & 0xffffff00;
  local_1150.UpperBound._0_4_ = local_ee0;
  local_1150.LowerBound.Value = 7.0;
  local_1150.UpperBound.Value = 8.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1150);
  if ((iVar2 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_ed8 = local_ed8 & 0xffffff00;
  local_1140.LowerBound._0_4_ = local_ed8;
  local_ed0.Type.Value = '\x01';
  local_1140.UpperBound.Type.Value = '\x01';
  local_1140.UpperBound._1_3_ = local_ed0._1_3_;
  local_1140.LowerBound.Value = 13.0;
  local_1140.UpperBound.Value = 14.0;
  bVar7 = TRange<float>::operator==(pTVar10 + 1,&local_1140);
  if ((!bVar6) || (!bVar7)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_518,L"[7, 14] - [8, 13] must be {[7, 8), (13, 14]}");
    (*pcVar4)(pFVar3,&local_518,0);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  local_ec8.Type.Value = '\x01';
  local_1130.LowerBound.Type.Value = '\x01';
  local_1130.LowerBound._1_3_ = local_ec8._1_3_;
  local_ec0.Type.Value = '\x01';
  local_1130.UpperBound.Type.Value = '\x01';
  local_1130.UpperBound._1_3_ = local_ec0._1_3_;
  local_1130.LowerBound.Value = 2.0;
  local_1130.UpperBound.Value = 4.0;
  pTVar9 = TRange<float>::Difference(&local_220,&local_1658,&local_1130);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d28 = pTVar10;
  if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_508,L"[7, 14] - [2, 4) must result in one set");
    (*pcVar4)(pFVar3,&local_508,0);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_eb8.Type.Value = '\x01';
  local_1120.LowerBound.Type.Value = '\x01';
  local_1120.LowerBound._1_3_ = local_eb8._1_3_;
  local_eb0.Type.Value = '\x01';
  local_1120.UpperBound.Type.Value = '\x01';
  local_1120.UpperBound._1_3_ = local_eb0._1_3_;
  local_1120.LowerBound.Value = 7.0;
  local_1120.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1120);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_4f8,L"[7, 14] - [2, 4) must be {[7, 14]}");
    (*pcVar4)(pFVar3,&local_4f8,0);
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
  }
  local_ea8.Type.Value = '\x01';
  local_1330.LowerBound.Type.Value = '\x01';
  local_1330.LowerBound._1_3_ = local_ea8._1_3_;
  local_ea0 = local_ea0 & 0xffffff00;
  local_1330.UpperBound._0_4_ = local_ea0;
  local_e98.Type.Value = '\x01';
  local_1110.LowerBound.Type.Value = '\x01';
  local_1110.LowerBound._1_3_ = local_e98._1_3_;
  local_e90 = local_e90 & 0xffffff00;
  local_1110.UpperBound._0_4_ = local_e90;
  local_1330.LowerBound.Value = 7.0;
  local_1330.UpperBound.Value = 9.0;
  local_1110.LowerBound.Value = 11.0;
  local_1110.UpperBound.Value = 14.0;
  local_1320.LowerBound.Type.Value = '\x01';
  local_1320.LowerBound.Value = 4.0;
  local_1320.UpperBound.Type.Value = '\0';
  local_1320.UpperBound.Value = 1.0;
  local_10e0.LowerBound.Type.Value = '\x01';
  local_10e0.LowerBound.Value = 8.0;
  local_10e0.UpperBound.Type.Value = '\0';
  local_10e0.UpperBound.Value = 5.0;
  pTVar10 = TRange<float>::Hull(&local_f0,&local_1330,&local_1110);
  local_e88.Type.Value = '\x01';
  local_e80 = local_e80 & 0xffffff00;
  local_210.LowerBound = pTVar10->LowerBound;
  local_210.UpperBound = pTVar10->UpperBound;
  local_1100.LowerBound.Type.Value = '\x01';
  local_1100.LowerBound._1_3_ = local_e88._1_3_;
  local_1100.UpperBound._0_4_ = local_e80;
  local_1100.LowerBound.Value = 7.0;
  local_1100.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(&local_210,&local_1100);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_4e8,L"The hull of [7, 9) and [11, 14) must be [7, 14)");
    (*pcVar4)(pFVar3,&local_4e8,0);
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
  }
  pTVar10 = TRange<float>::Hull(&local_e0,&local_1330,&local_1320);
  local_e78.Type.Value = '\x01';
  local_e70 = local_e70 & 0xffffff00;
  local_200.LowerBound = pTVar10->LowerBound;
  local_200.UpperBound = pTVar10->UpperBound;
  local_10f0.LowerBound.Type.Value = '\x01';
  local_10f0.LowerBound._1_3_ = local_e78._1_3_;
  local_10f0.UpperBound._0_4_ = local_e70;
  local_10f0.LowerBound.Value = 7.0;
  local_10f0.UpperBound.Value = 9.0;
  bVar6 = TRange<float>::operator==(&local_200,&local_10f0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_4d8,L"The hull of [7, 9) and an empty range must be [7, 9)");
    (*pcVar4)(pFVar3,&local_4d8,0);
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
  }
  pTVar10 = TRange<float>::Hull(&local_d0,&local_1320,&local_10e0);
  local_1f0.LowerBound = pTVar10->LowerBound;
  local_1f0.UpperBound = pTVar10->UpperBound;
  bVar6 = TRange<float>::IsEmpty(&local_1f0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_4c8,L"The hull of two empty ranges must be empty");
    (*pcVar4)(pFVar3,&local_4c8,0);
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
  }
  local_e68.Type.Value = '\x01';
  local_15d8.LowerBound.Type.Value = '\x01';
  local_15d8.LowerBound._1_3_ = local_e68._1_3_;
  local_e60 = local_e60 & 0xffffff00;
  local_15d8.UpperBound._0_4_ = local_e60;
  local_e58.Type.Value = '\x01';
  local_10d0.LowerBound.Type.Value = '\x01';
  local_10d0.LowerBound._1_3_ = local_e58._1_3_;
  local_e50 = local_e50 & 0xffffff00;
  local_10d0.UpperBound._0_4_ = local_e50;
  local_e48.Type.Value = '\x01';
  local_10b0.LowerBound.Type.Value = '\x01';
  local_10b0.LowerBound._1_3_ = local_e48._1_3_;
  local_e40.Type.Value = '\x01';
  local_10b0.UpperBound.Type.Value = '\x01';
  local_10b0.UpperBound._1_3_ = local_e40._1_3_;
  local_e38 = local_e38 & 0xffffff00;
  local_1090.LowerBound._0_4_ = local_e38;
  local_e30 = local_e30 & 0xffffff00;
  local_1090.UpperBound._0_4_ = local_e30;
  local_e28.Type.Value = '\x01';
  local_1070.LowerBound.Type.Value = '\x01';
  local_1070.LowerBound._1_3_ = local_e28._1_3_;
  local_e20 = local_e20 & 0xffffff00;
  local_1070.UpperBound._0_4_ = local_e20;
  local_15d8.LowerBound.Value = 7.0;
  local_15d8.UpperBound.Value = 14.0;
  local_10d0.LowerBound.Value = 2.0;
  local_10d0.UpperBound.Value = 8.0;
  local_10b0.LowerBound.Value = 2.0;
  local_10b0.UpperBound.Value = 8.0;
  local_1090.LowerBound.Value = 8.0;
  local_1090.UpperBound.Value = 16.0;
  local_1070.LowerBound.Value = 8.0;
  local_1070.UpperBound.Value = 16.0;
  local_1310.LowerBound.Type.Value = '\x01';
  local_1310.LowerBound.Value = 4.0;
  local_1310.UpperBound.Type.Value = '\0';
  local_1310.UpperBound.Value = 1.0;
  local_1060.LowerBound.Type.Value = '\x01';
  local_1060.LowerBound.Value = 8.0;
  local_1060.UpperBound.Type.Value = '\0';
  local_1060.UpperBound.Value = 5.0;
  pTVar10 = TRange<float>::Intersection(&local_c0,&local_15d8,&local_10d0);
  local_e18.Type.Value = '\x01';
  local_e10 = local_e10 & 0xffffff00;
  local_1e0.LowerBound = pTVar10->LowerBound;
  local_1e0.UpperBound = pTVar10->UpperBound;
  local_10c0.LowerBound.Type.Value = '\x01';
  local_10c0.LowerBound._1_3_ = local_e18._1_3_;
  local_10c0.UpperBound._0_4_ = local_e10;
  local_10c0.LowerBound.Value = 7.0;
  local_10c0.UpperBound.Value = 8.0;
  bVar6 = TRange<float>::operator==(&local_1e0,&local_10c0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_4b8,L"The intersection of [7, 14) and [2, 8) must be [7, 8)");
    (*pcVar4)(pFVar3,&local_4b8,0);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
  }
  pTVar10 = TRange<float>::Intersection(&local_b0,&local_15d8,&local_10b0);
  local_e08.Type.Value = '\x01';
  local_e00.Type.Value = '\x01';
  local_1d0.LowerBound = pTVar10->LowerBound;
  local_1d0.UpperBound = pTVar10->UpperBound;
  local_10a0.LowerBound.Type.Value = '\x01';
  local_10a0.LowerBound._1_3_ = local_e08._1_3_;
  local_10a0.UpperBound.Type.Value = '\x01';
  local_10a0.UpperBound._1_3_ = local_e00._1_3_;
  local_10a0.LowerBound.Value = 7.0;
  local_10a0.UpperBound.Value = 8.0;
  bVar6 = TRange<float>::operator==(&local_1d0,&local_10a0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_4a8,L"The intersection of [7, 14) and [2, 8] must be [7, 8]");
    (*pcVar4)(pFVar3,&local_4a8,0);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
  }
  pTVar10 = TRange<float>::Intersection(&local_a0,&local_15d8,&local_1090);
  local_df8 = local_df8 & 0xffffff00;
  local_df0 = local_df0 & 0xffffff00;
  local_1c0.LowerBound = pTVar10->LowerBound;
  local_1c0.UpperBound = pTVar10->UpperBound;
  local_1080.LowerBound._0_4_ = local_df8;
  local_1080.UpperBound._0_4_ = local_df0;
  local_1080.LowerBound.Value = 8.0;
  local_1080.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(&local_1c0,&local_1080);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_498,L"The intersection of [7, 14) and (8, 16) must be (8, 14)");
    (*pcVar4)(pFVar3,&local_498,0);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
  }
  pTVar10 = TRange<float>::Intersection(&local_90,&local_15d8,&local_1070);
  local_de8.Type.Value = '\x01';
  local_de0 = local_de0 & 0xffffff00;
  local_1b0.LowerBound = pTVar10->LowerBound;
  local_1b0.UpperBound = pTVar10->UpperBound;
  local_1300.LowerBound.Type.Value = '\x01';
  local_1300.LowerBound._1_3_ = local_de8._1_3_;
  local_1300.UpperBound._0_4_ = local_de0;
  local_1300.LowerBound.Value = 8.0;
  local_1300.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(&local_1b0,&local_1300);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_488,L"The intersection of [7, 14) and [8, 16) must be [8, 14)");
    (*pcVar4)(pFVar3,&local_488,0);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  pTVar10 = TRange<float>::Intersection(&local_80,&local_15d8,&local_1310);
  local_1a0.LowerBound = pTVar10->LowerBound;
  local_1a0.UpperBound = pTVar10->UpperBound;
  bVar6 = TRange<float>::IsEmpty(&local_1a0);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_478,
                       L"The intersection of a non-empty range and an empty range must be empty");
    (*pcVar4)(pFVar3,&local_478,0);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  pTVar10 = TRange<float>::Intersection(local_70,&local_1310,&local_1060);
  local_190.LowerBound = pTVar10->LowerBound;
  local_190.UpperBound = pTVar10->UpperBound;
  bVar6 = TRange<float>::IsEmpty(&local_190);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_468,L"The intersection of two empty ranges must be empty");
    (*pcVar4)(pFVar3,&local_468,0);
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
  }
  local_1450 = CONCAT31(local_1450._1_3_,1);
  uStack_144c = 0x40e00000;
  local_1668.LowerBound.Value = 7.0;
  local_1668.LowerBound._0_4_ = local_1450;
  local_1448 = CONCAT31(local_1448._1_3_,1);
  uStack_1444 = 0x41600000;
  local_1668.UpperBound.Value = 14.0;
  local_1668.UpperBound._0_4_ = local_1448;
  local_dd8 = local_dd8 & 0xffffff00;
  local_1578.LowerBound._0_4_ = local_dd8;
  local_dd0 = local_dd0 & 0xffffff00;
  local_1578.UpperBound._0_4_ = local_dd0;
  local_dc8.Type.Value = '\x01';
  local_1050.LowerBound.Type.Value = '\x01';
  local_1050.LowerBound._1_3_ = local_dc8._1_3_;
  local_dc0.Type.Value = '\x01';
  local_1050.UpperBound.Type.Value = '\x01';
  local_1050.UpperBound._1_3_ = local_dc0._1_3_;
  local_db8 = local_db8 & 0xffffff00;
  local_13e0.LowerBound._0_4_ = local_db8;
  local_db0.Type.Value = '\x01';
  local_13e0.UpperBound.Type.Value = '\x01';
  local_13e0.UpperBound._1_3_ = local_db0._1_3_;
  local_da8.Type.Value = '\x01';
  local_1030.LowerBound.Type.Value = '\x01';
  local_1030.LowerBound._1_3_ = local_da8._1_3_;
  local_da0 = local_da0 & 0xffffff00;
  local_1030.UpperBound._0_4_ = local_da0;
  local_d98.Type.Value = '\x01';
  local_1528.LowerBound.Type.Value = '\x01';
  local_1528.LowerBound._1_3_ = local_d98._1_3_;
  local_d90 = local_d90 & 0xffffff00;
  local_1528.UpperBound._0_4_ = local_d90;
  local_1578.LowerBound.Value = 7.0;
  local_1578.UpperBound.Value = 14.0;
  local_1050.LowerBound.Value = 2.0;
  local_1050.UpperBound.Value = 8.0;
  local_13e0.LowerBound.Value = 15.0;
  local_13e0.UpperBound.Value = 16.0;
  local_1030.LowerBound.Value = 8.0;
  local_1030.UpperBound.Value = 16.0;
  local_1528.LowerBound.Value = 6.0;
  local_1528.UpperBound.Value = 7.0;
  pTVar9 = TRange<float>::Union(&local_180,&local_1668,&local_1668);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d30 = pTVar10;
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_458,L"[7, 14] unioned with itself must result in one range");
    (*pcVar4)(pFVar3,&local_458,0);
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar6 = TRange<float>::operator==(pTVar10,&local_1668);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_448,L"[7, 14] unioned with itself must result in itself");
    (*pcVar4)(pFVar3,&local_448,0);
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Union(&local_170,&local_1668,&local_1578);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d38 = pTVar10;
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_438,L"[7, 14] unioned with (7, 14) must result in one range");
    (*pcVar4)(pFVar3,&local_438,0);
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar6 = TRange<float>::IsEmpty(pTVar10);
  if ((!bVar6) || (bVar6 = TRange<float>::IsEmpty(&local_1668), !bVar6)) {
    uVar1 = (pTVar10->LowerBound).Type.Value;
    if ((uVar1 == local_1668.LowerBound.Type.Value) &&
       ((uVar1 == '\x02' || (local_1668.LowerBound.Value == (pTVar10->LowerBound).Value)))) {
      uVar1 = (pTVar10->UpperBound).Type.Value;
      if ((uVar1 == local_1668.UpperBound.Type.Value) &&
         ((uVar1 == '\x02' || (local_1668.UpperBound.Value == (pTVar10->UpperBound).Value))))
      goto LAB_141c317fd;
    }
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_428,L"[7, 14] unioned with (7, 14) must result in {[7, 14]}");
    (*pcVar4)(pFVar3,&local_428,0);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
  }
LAB_141c317fd:
  pTVar9 = TRange<float>::Union(&local_160,&local_1668,&local_1050);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  local_d40 = pTVar10;
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_418,L"[7, 14] unioned with [2, 8] must result in one range");
    (*pcVar4)(pFVar3,&local_418,0);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_d88.Type.Value = '\x01';
  local_1040.LowerBound.Type.Value = '\x01';
  local_1040.LowerBound._1_3_ = local_d88._1_3_;
  local_d80.Type.Value = '\x01';
  local_1040.UpperBound.Type.Value = '\x01';
  local_1040.UpperBound._1_3_ = local_d80._1_3_;
  local_1040.LowerBound.Value = 2.0;
  local_1040.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(pTVar10,&local_1040);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_408,L"[7, 14] unioned with [2, 8] must result in {[2, 14]}");
    (*pcVar4)(pFVar3,&local_408,0);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Union(&local_150,&local_1668,&local_13e0);
  pTVar10 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  if (iVar2 != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_3f8,L"[7, 14] unioned with (15, 16] must result in two ranges");
    (*pcVar4)(pFVar3,&local_3f8,0);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar6 = TRange<float>::operator==(pTVar10,&local_1668);
  if ((iVar2 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar7 = TRange<float>::operator==(pTVar10 + 1,&local_13e0);
  if ((!bVar6) || (!bVar7)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"[7, 14] unioned with (15, 16] must result in {[7, 14], (15, 16]}");
    (*pcVar4)(pFVar3,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  local_1440 = local_1440 & 0xffffff00;
  uStack_143c = 0;
  local_3d8.LowerBound.Value = 0.0;
  local_3d8.LowerBound._0_4_ = local_1440;
  local_1438 = local_1438 & 0xffffff00;
  uStack_1434 = 0;
  local_3d8.UpperBound.Value = 0.0;
  local_3d8.UpperBound._0_4_ = local_1438;
  pTVar9 = TRange<float>::Union(&local_140,&local_1668,&local_3d8);
  this_00 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_3c8,
                       L"A non-empty range unioned with an empty range must result in one range");
    (*pcVar4)(pFVar3,&local_3c8,0);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar6 = TRange<float>::operator==(this_00,&local_1668);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_3b8,
                       L"A non-empty range unioned with an empty range must result in the non-empty range"
                      );
    (*pcVar4)(pFVar3,&local_3b8,0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Union(&local_130,&local_1668,&local_1030);
  this_01 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_3a8,L"[7, 14] unioned with [8, 16) must result in one range");
    (*pcVar4)(pFVar3,&local_3a8,0);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_ae0.Type.Value = '\x01';
  local_1020.LowerBound.Type.Value = '\x01';
  local_1020.LowerBound._1_3_ = local_ae0._1_3_;
  local_d78 = local_d78 & 0xffffff00;
  local_1020.UpperBound._0_4_ = local_d78;
  local_1020.LowerBound.Value = 7.0;
  local_1020.UpperBound.Value = 16.0;
  bVar6 = TRange<float>::operator==(this_01,&local_1020);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_398,L"[7, 14] unioned with [8, 16) must result in {[7, 16)}");
    (*pcVar4)(pFVar3,&local_398,0);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Union(&local_120,&local_1668,&local_1528);
  this_02 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  if (iVar2 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_388,L"[7, 14] unioned with [6, 7) must result in one range");
    (*pcVar4)(pFVar3,&local_388,0);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_d70.Type.Value = '\x01';
  local_1010.LowerBound.Type.Value = '\x01';
  local_1010.LowerBound._1_3_ = local_d70._1_3_;
  local_d68.Type.Value = '\x01';
  local_1010.UpperBound.Type.Value = '\x01';
  local_1010.UpperBound._1_3_ = local_d68._1_3_;
  local_1010.LowerBound.Value = 6.0;
  local_1010.UpperBound.Value = 14.0;
  bVar6 = TRange<float>::operator==(this_02,&local_1010);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_378,L"[7, 14] unioned with [6, 7) must result in {[6, 14]}");
    (*pcVar4)(pFVar3,&local_378,0);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = TRange<float>::Union(&local_110,&local_1578,&local_1528);
  this_03 = (TRange<float> *)(pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  if (iVar2 != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_368,L"(7, 14) unioned with [6, 7) must result in two ranges");
    (*pcVar4)(pFVar3,&local_368,0);
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar6 = TRange<float>::operator==(this_03,&local_1578);
  if ((iVar2 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar7 = TRange<float>::operator==(this_03 + 1,&local_1528);
  if ((!bVar6) || (!bVar7)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_358,L"(7, 14) unioned with [6, 7) must result in {(7, 14), [6, 7)}");
    (*pcVar4)(pFVar3,&local_358,0);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  local_d60 = local_d60 & 0xffffff00;
  local_1000.LowerBound._0_4_ = local_d60;
  local_d58 = local_d58 & 0xffffff00;
  local_1000.UpperBound._0_4_ = local_d58;
  local_d50 = local_d50 & 0xffffff00;
  local_ff0.LowerBound._0_4_ = local_d50;
  local_d48 = local_d48 & 0xffffff00;
  local_ff0.UpperBound._0_4_ = local_d48;
  local_1000.LowerBound.Value = 0.0;
  local_1000.UpperBound.Value = 0.0;
  local_ff0.LowerBound.Value = 0.0;
  local_ff0.UpperBound.Value = 0.0;
  pTVar9 = TRange<float>::Union(&local_100,&local_ff0,&local_1000);
  pFVar5 = (pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar9->ArrayNum;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (iVar2 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_808,L"An pair of empty ranges unioned must yield no ranges.");
    (*pcVar4)(pFVar3,&local_808,0);
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
  }
  if (this_03 != (TRange<float> *)0x0) {
    FMemory::Free(this_03);
  }
  if (this_02 != (TRange<float> *)0x0) {
    FMemory::Free(this_02);
  }
  if (this_01 != (TRange<float> *)0x0) {
    FMemory::Free(this_01);
  }
  if (this_00 != (TRange<float> *)0x0) {
    FMemory::Free(this_00);
  }
  if (pTVar10 != (TRange<float> *)0x0) {
    FMemory::Free(pTVar10);
  }
  if (local_d40 != (TRange<float> *)0x0) {
    FMemory::Free(local_d40);
  }
  if (local_d38 != (TRange<float> *)0x0) {
    FMemory::Free(local_d38);
  }
  if (local_d30 != (TRange<float> *)0x0) {
    FMemory::Free(local_d30);
  }
  if (local_d28 != (TRange<float> *)0x0) {
    FMemory::Free(local_d28);
  }
  if (local_d20 != (TRange<float> *)0x0) {
    FMemory::Free(local_d20);
  }
  if (local_d18 != (TRange<float> *)0x0) {
    FMemory::Free(local_d18);
  }
  if (local_d10 != (TRange<float> *)0x0) {
    FMemory::Free(local_d10);
  }
  if (local_d08 != (TRange<float> *)0x0) {
    FMemory::Free(local_d08);
  }
  if (local_d00 != (TRange<float> *)0x0) {
    FMemory::Free(local_d00);
  }
  if (local_cf8 != (TRange<float> *)0x0) {
    FMemory::Free(local_cf8);
  }
  if (local_cf0 != (TRange<float> *)0x0) {
    FMemory::Free(local_cf0);
  }
  if (local_ce8 != (TRange<float> *)0x0) {
    FMemory::Free(local_ce8);
  }
  if (local_ce0 != (TRange<float> *)0x0) {
    FMemory::Free(local_ce0);
  }
  if (local_cd8 != (TRange<float> *)0x0) {
    FMemory::Free(local_cd8);
  }
  if (local_cd0 != (TRange<float> *)0x0) {
    FMemory::Free(local_cd0);
  }
  if (local_cc8 != (TRange<float> *)0x0) {
    FMemory::Free(local_cc8);
  }
  if (local_cc0 != (TRange<float> *)0x0) {
    FMemory::Free(local_cc0);
  }
  if (local_cb8 != (TRange<float> *)0x0) {
    FMemory::Free(local_cb8);
  }
  if (local_cb0 != (TRange<float> *)0x0) {
    FMemory::Free(local_cb0);
  }
  if (local_ca8 != (TRange<float> *)0x0) {
    FMemory::Free(local_ca8);
  }
  return;
}

