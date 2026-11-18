// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 1422fced0

EAutomationTestFlags __thiscall
FPublicExportMapPreInsertPublicExportsTest::GetTestFlags
          (FPublicExportMapPreInsertPublicExportsTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1422fcee0

bool __thiscall
FPublicExportMapPreInsertPublicExportsTest::IsStressTest
          (FPublicExportMapPreInsertPublicExportsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422fcef0

uint __thiscall
FPublicExportMapPreInsertPublicExportsTest::GetRequiredDeviceNum
          (FPublicExportMapPreInsertPublicExportsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422fcf00

FString * __thiscall
FPublicExportMapPreInsertPublicExportsTest::GetTestSourceFileName
          (FPublicExportMapPreInsertPublicExportsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422fcf30

int __thiscall
FPublicExportMapPreInsertPublicExportsTest::GetTestSourceFileLine
          (FPublicExportMapPreInsertPublicExportsTest *this)

{
  return 0x3073;
}

// GetTests @ 1422fcf40

/* WARNING: Removing unreachable block (ram,0x0001422fd02d) */
/* WARNING: Removing unreachable block (ram,0x0001422fd0f8) */

void __thiscall
FPublicExportMapPreInsertPublicExportsTest::GetTests
          (FPublicExportMapPreInsertPublicExportsTest *this,
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
  
  ::FString::FString(&local_18,"System.Core.Loading.FPublicExportMap.PreInsertPublicExports");
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

// RunTest @ 1422fd120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPublicExportMapPreInsertPublicExportsTest::RunTest
          (FPublicExportMapPreInsertPublicExportsTest *this,FString *param_1)

{
  FPublicExportMap_u_0 *pFVar1;
  FScriptContainerElement *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  wchar_t *pwVar23;
  uint uVar24;
  FPublicExportMap_u_0 FVar25;
  ForAnyElementType FVar26;
  ulong64 uVar27;
  uint uVar28;
  int *piVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  ForElementType<unsigned_int> FVar33;
  int iVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined1 auStackY_c58 [32];
  FPublicExportMap_u_0 local_c10;
  undefined8 local_c08;
  int local_c00 [2];
  undefined1 local_bf8 [8];
  FPublicExportMap_u_0 local_bf0;
  undefined8 local_be8;
  undefined4 local_be0;
  FPublicExportMap_u_0 local_bd8;
  undefined8 local_bd0;
  undefined4 local_bc8;
  ForAnyElementType local_bc0;
  uint local_bb8;
  int local_bb4;
  FPublicExportMap_u_0 local_bb0;
  undefined8 local_ba8;
  undefined4 local_ba0;
  FPublicExportMap_u_0 local_b98;
  undefined8 local_b90;
  undefined4 local_b88;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> local_b80;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> local_b70;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> local_b60;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> local_b50;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> local_b40;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> local_b30;
  ForAnyElementType local_b20;
  uint local_b18;
  int local_b14;
  FPublicExportMap_u_0 local_b10;
  undefined8 local_b08;
  undefined4 local_b00;
  FPublicExportMap_u_0 local_af8;
  undefined8 local_af0;
  undefined4 local_ae8;
  FPublicExportMap_u_0 local_ae0;
  int local_ad8;
  uint local_ad0;
  uint uStack_acc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_ac8;
  undefined4 local_ac0;
  uint uStack_abc;
  uint uStack_ab8;
  undefined4 uStack_ab4;
  uchar *local_ab0;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> local_aa8;
  undefined8 local_a98;
  undefined8 local_a90;
  int local_a88;
  undefined1 local_a84 [12];
  longlong *local_a78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a70;
  FString local_a50;
  initializer_list<FExportMapEntry> local_a38;
  TArrayView<FExportMapEntry_const_,int> local_a28;
  TArrayView<FExportMapEntry_const_,int> *local_a18;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  initializer_list<FExportMapEntry> local_9d8;
  TArrayView<FExportMapEntry_const_,int> local_9c8;
  TArrayView<FExportMapEntry_const_,int> *local_9b8;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  FString local_9a8;
  initializer_list<FExportMapEntry> local_998;
  TArrayView<FExportMapEntry_const_,int> local_988;
  TArrayView<FExportMapEntry_const_,int> *local_978;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  FString local_968;
  initializer_list<FExportMapEntry> local_958;
  TArrayView<FExportMapEntry_const_,int> local_948;
  TArrayView<FExportMapEntry_const_,int> *local_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  FString local_928;
  FString local_918;
  FString local_908;
  initializer_list<FExportMapEntry> local_8f8;
  FScriptContainerElement *local_8e8;
  uint uStack_8e0;
  undefined4 uStack_8dc;
  TArrayView<FExportMapEntry_const_,int> local_8d8;
  TArrayView<FExportMapEntry_const_,int> *local_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  FString local_8b8;
  FString local_8a8;
  initializer_list<FExportMapEntry> local_898;
  TArrayView<FExportMapEntry_const_,int> local_888;
  TArrayView<FExportMapEntry_const_,int> *local_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  FString local_868;
  FString local_858;
  initializer_list<FExportMapEntry> local_848;
  TArrayView<FExportMapEntry_const_,int> local_838;
  TArrayView<FExportMapEntry_const_,int> *local_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  FString local_818;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_808;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_7f8;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_7e8;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_7d8;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_7c8;
  TArrayView<unsigned___int64_const_,int> local_7b8;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_7a8;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_798;
  undefined1 local_788 [32];
  ForElementType<unsigned_int> local_768;
  uint local_760;
  int local_75c;
  int local_758;
  int local_754;
  FScriptContainerElement local_750 [8];
  ForAnyElementType local_748;
  uint local_740;
  FExportMapEntry local_738;
  undefined1 local_6f0 [16];
  FMappedName local_6e0;
  FPackageObjectIndex local_6d8;
  FPackageObjectIndex local_6d0;
  FPackageObjectIndex local_6c8;
  FPackageObjectIndex local_6c0;
  ulong64 local_6b8;
  undefined8 local_6b0;
  undefined4 local_6a8;
  undefined1 local_6a4;
  undefined2 local_6a3;
  undefined1 local_6a1;
  undefined1 local_6a0 [16];
  FMappedName local_690;
  FPackageObjectIndex local_688;
  FPackageObjectIndex local_680;
  FPackageObjectIndex local_678;
  FPackageObjectIndex local_670;
  ulong64 local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined1 local_654;
  undefined2 local_653;
  undefined1 local_651;
  undefined1 local_650 [16];
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined1 local_604;
  undefined2 local_603;
  undefined1 local_601;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined1 local_5bc;
  undefined2 local_5bb;
  undefined1 local_5b9;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined1 local_574;
  undefined2 local_573;
  undefined1 local_571;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined1 local_52c;
  undefined2 local_52b;
  undefined1 local_529;
  FExportMapEntry local_528;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined1 local_49c;
  undefined2 local_49b;
  undefined1 local_499;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined1 local_454;
  undefined2 local_453;
  undefined1 local_451;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined1 local_40c;
  undefined2 local_40b;
  undefined1 local_409;
  FExportMapEntry local_408;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined1 local_37c;
  undefined2 local_37b;
  undefined1 local_379;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined2 local_333;
  undefined1 local_331;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined2 local_2eb;
  undefined1 local_2e9;
  FExportMapEntry local_2e8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_25c;
  undefined2 local_25b;
  undefined1 local_259;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined2 local_213;
  undefined1 local_211;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined2 local_1cb;
  undefined1 local_1c9;
  undefined1 local_1c8 [32];
  FPackageObjectIndex local_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  ForElementType<FSetElementId> local_188;
  int local_180;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_178;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c58;
  local_5c8 = 2;
  local_ba0 = 0xffffffff;
  bVar14 = false;
  local_604 = 0;
  local_603 = 0;
  local_601 = 0;
  local_5bc = 0;
  local_5bb = 0;
  local_5b9 = 0;
  local_574 = 0;
  local_573 = 0;
  local_571 = 0;
  local_52c = 0;
  local_52b = 0;
  local_529 = 0;
  local_898._First = (FExportMapEntry *)(local_650 + 8);
  local_898._Last = &local_528;
  local_bb0.Allocation = (uchar *)0x0;
  local_ba8 = 0;
  local_650._8_8_ = 0;
  local_640 = 0;
  local_638 = 0xffffffffffffffff;
  local_630 = 0xffffffffffffffff;
  local_628 = 0xffffffffffffffff;
  local_620 = 0xffffffffffffffff;
  local_618 = 0xffffffffffffffff;
  local_610 = 1;
  local_608 = 0;
  local_600 = 0;
  local_5f8 = 0;
  local_5f0 = 0xffffffffffffffff;
  local_5e8 = 0xffffffffffffffff;
  local_5e0 = 0xffffffffffffffff;
  local_5d8 = 0xffffffffffffffff;
  local_5d0 = 0xffffffffffffffff;
  local_5c0 = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0xffffffffffffffff;
  local_5a0 = 0xffffffffffffffff;
  local_598 = 0xffffffffffffffff;
  local_590 = 0xffffffffffffffff;
  local_588 = 0xffffffffffffffff;
  local_580 = 3;
  local_578 = 0;
  local_570 = 0;
  local_568 = 0;
  local_560 = 0xffffffffffffffff;
  local_558 = 0xffffffffffffffff;
  local_550 = 0xffffffffffffffff;
  local_548 = 0xffffffffffffffff;
  local_540 = 0xffffffffffffffff;
  local_538 = 4;
  local_530 = 0;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>::
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>(&local_b70,&local_898);
  iVar17 = (int)local_ba8;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty map has no count",(int)local_ba8,0);
  iVar15 = 1;
  if (((local_ba8._4_4_ != 1) && (iVar15 = local_ba8._4_4_, local_ba8 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Empty map has no keys",iVar15,iVar17)
  ;
  iVar15 = 1;
  if (((local_ba8._4_4_ != 1) && (iVar15 = local_ba8._4_4_, local_ba8 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty map has no values",iVar15,iVar17);
  local_888.ArrayNum = local_b70.ArrayNum;
  local_888.DataPtr = (FExportMapEntry *)local_b70.AllocatorInstance.Data;
  if ((local_b70.ArrayNum < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_878 = &local_888;
  uStack_870 = 1;
  local_798._12_4_ = uStack_86c;
  local_798.ArrayNum = 1;
  local_798.DataPtr = local_878;
  FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
            ((FPublicExportMap *)&local_bb0,&local_798);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty map has no count",(int)local_ba8,iVar17);
  iVar15 = local_b70.ArrayNum;
  iVar18 = 1;
  iVar16 = iVar18;
  if (((local_ba8._4_4_ != 1) && (iVar16 = local_ba8._4_4_, local_ba8 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsert has populated our keys",iVar16,iVar15);
  iVar15 = local_b70.ArrayNum;
  iVar16 = iVar18;
  if (((local_ba8._4_4_ != 1) && (iVar16 = local_ba8._4_4_, local_ba8 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"PreInsert has populated our values (should mostly be InvalidValue)",iVar16,iVar15);
  FVar25 = local_bb0;
  iVar15 = local_ba8._4_4_;
  if (local_ba8._4_4_ == 1) {
    FVar25.Allocation = (uchar *)&local_bb0;
    iVar15 = iVar18;
  }
  else if ((local_ba8 < 0) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  pFVar1 = (FPublicExportMap_u_0 *)(FVar25.Allocation + (longlong)iVar15 * 8);
  for (; (FPublicExportMap_u_0 *)FVar25.Allocation != pFVar1;
      FVar25.Allocation = (uchar *)(FVar25.SingleItemKey + 8)) {
                    /* WARNING: Load size is inaccurate */
    iVar15 = FLoadedPackageRef::FPublicExportMap::Find
                       ((FPublicExportMap *)&local_bb0,*FVar25.SingleItemKey);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"All preinserted keys are initialized to InvalidValue",
               iVar15,-1);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports does not store new values",
             (int)local_ba8,0);
  if ((local_b70.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_bb0,
                      *(ulong64 *)(local_b70.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find stored key with no value set",iVar15,-1);
  if ((local_b70.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b70.AllocatorInstance.Data + 0x38);
  if ((local_b70.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FLoadedPackageRef::FPublicExportMap::Store
            ((FPublicExportMap *)&local_bb0,*(ulong64 *)(local_b70.AllocatorInstance.Data + 0x38),
             iVar15);
  if ((local_b70.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b70.AllocatorInstance.Data + 0x38);
  if ((local_b70.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar16 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_bb0,
                      *(ulong64 *)(local_b70.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar16,iVar15);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_ba8,iVar17 + 1);
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bb0,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find missing key",iVar15,-1);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_bb0,0x6f,0x6f);
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bb0,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_ba8,iVar17 + 2);
  bVar12 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_bb0,0x6f);
  if (!bVar12) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_868,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_868,0);
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Remove decreased count",(int)local_ba8,iVar17 + 1);
  bVar12 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_bb0,0x6f);
  if (bVar12) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_858,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_858,0);
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Failed remove did not increase count",(int)local_ba8,
             iVar17 + 1);
  iVar17 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bb0,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find removed key returns no value set",iVar17,-1);
  if (local_b70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b70.AllocatorInstance.Data);
  }
  if (1 < local_ba8._4_4_) {
    FMemory::Free(local_bb0.Allocation);
  }
  local_b98.Allocation = (uchar *)0x0;
  local_738.FilterFlags = None;
  local_738.Pad[0] = '\0';
  local_738.Pad[1] = '\0';
  local_738.Pad[2] = '\0';
  local_848._First = &local_738;
  local_848._Last = (FExportMapEntry *)local_6f0;
  local_b90 = 0;
  local_b88 = 0xffffffff;
  local_738.CookedSerialOffset = 0;
  local_738.CookedSerialSize = 0;
  local_738.ObjectName.Index = 0xffffffff;
  local_738.ObjectName.Number = 0xffffffff;
  local_738.OuterIndex.TypeAndId = 0xffffffffffffffff;
  local_738.ClassIndex.TypeAndId = 0xffffffffffffffff;
  local_738.SuperIndex.TypeAndId = 0xffffffffffffffff;
  local_738.TemplateIndex.TypeAndId = 0xffffffffffffffff;
  local_738.PublicExportHash = 1;
  local_738.ObjectFlags = RF_NoFlags;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>::
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>(&local_b60,&local_848);
  iVar17 = (int)local_b90;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty map has no count",(int)local_b90,0);
  iVar16 = 1;
  iVar15 = iVar16;
  if (((local_b90._4_4_ != 1) && (iVar15 = local_b90._4_4_, local_b90 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Empty map has no keys",iVar15,iVar17)
  ;
  iVar15 = iVar16;
  if (((local_b90._4_4_ != 1) && (iVar15 = local_b90._4_4_, local_b90 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty map has no values",iVar15,iVar17);
  local_838.ArrayNum = local_b60.ArrayNum;
  local_838.DataPtr = (FExportMapEntry *)local_b60.AllocatorInstance.Data;
  if ((local_b60.ArrayNum < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_828 = &local_838;
  uStack_820 = 1;
  local_808._12_4_ = uStack_81c;
  local_808.ArrayNum = 1;
  local_808.DataPtr = local_828;
  FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
            ((FPublicExportMap *)&local_b98,&local_808);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty map has no count",(int)local_b90,iVar17);
  iVar15 = local_b60.ArrayNum;
  iVar18 = iVar16;
  if (((local_b90._4_4_ != 1) && (iVar18 = local_b90._4_4_, local_b90 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsert has populated our keys",iVar18,iVar15);
  iVar15 = local_b60.ArrayNum;
  iVar18 = iVar16;
  if (((local_b90._4_4_ != 1) && (iVar18 = local_b90._4_4_, local_b90 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"PreInsert has populated our values (should mostly be InvalidValue)",iVar18,iVar15);
  FVar25 = local_b98;
  iVar15 = local_b90._4_4_;
  if (local_b90._4_4_ == 1) {
    FVar25.Allocation = (uchar *)&local_b98;
    iVar15 = iVar16;
  }
  else if ((local_b90 < 0) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  pFVar1 = (FPublicExportMap_u_0 *)(FVar25.Allocation + (longlong)iVar15 * 8);
  for (; (FPublicExportMap_u_0 *)FVar25.Allocation != pFVar1;
      FVar25.Allocation = (uchar *)(FVar25.SingleItemKey + 8)) {
                    /* WARNING: Load size is inaccurate */
    iVar15 = FLoadedPackageRef::FPublicExportMap::Find
                       ((FPublicExportMap *)&local_b98,*FVar25.SingleItemKey);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"All preinserted keys are initialized to InvalidValue",
               iVar15,-1);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports does not store new values",
             (int)local_b90,0);
  if ((local_b60.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_b98,
                      *(ulong64 *)(local_b60.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find stored key with no value set",iVar15,-1);
  if ((local_b60.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b60.AllocatorInstance.Data + 0x38);
  if ((local_b60.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FLoadedPackageRef::FPublicExportMap::Store
            ((FPublicExportMap *)&local_b98,*(ulong64 *)(local_b60.AllocatorInstance.Data + 0x38),
             iVar15);
  if ((local_b60.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b60.AllocatorInstance.Data + 0x38);
  if ((local_b60.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar16 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_b98,
                      *(ulong64 *)(local_b60.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar16,iVar15);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_b90,iVar17 + 1);
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_b98,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find missing key",iVar15,-1);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_b98,0x6f,0x6f);
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_b98,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_b90,iVar17 + 2);
  bVar12 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_b98,0x6f);
  if (!bVar12) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_818,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_818,0);
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Remove decreased count",(int)local_b90,iVar17 + 1);
  bVar12 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_b98,0x6f);
  if (bVar12) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_a50,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_a50,0);
    if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a50.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Failed remove did not increase count",(int)local_b90,
             iVar17 + 1);
  iVar17 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_b98,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find removed key returns no value set",iVar17,-1);
  if (local_b60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b60.AllocatorInstance.Data);
  }
  if (1 < local_b90._4_4_) {
    FMemory::Free(local_b98.Allocation);
  }
  local_bf0.Allocation = (uchar *)0x0;
  local_528.FilterFlags = None;
  local_528.Pad[0] = '\0';
  local_528.Pad[1] = '\0';
  local_528.Pad[2] = '\0';
  local_49c = 0;
  local_49b = 0;
  local_499 = 0;
  local_454 = 0;
  local_453 = 0;
  local_451 = 0;
  local_40c = 0;
  local_40b = 0;
  local_409 = 0;
  local_a38._First = &local_528;
  local_a38._Last = &local_408;
  local_be8 = 0;
  local_be0 = 0xffffffff;
  local_528.CookedSerialOffset = 0;
  local_528.CookedSerialSize = 0;
  local_528.ObjectName.Index = 0xffffffff;
  local_528.ObjectName.Number = 0xffffffff;
  local_528.OuterIndex.TypeAndId = 0xffffffffffffffff;
  local_528.ClassIndex.TypeAndId = 0xffffffffffffffff;
  local_528.SuperIndex.TypeAndId = 0xffffffffffffffff;
  local_528.TemplateIndex.TypeAndId = 0xffffffffffffffff;
  local_528.PublicExportHash = 1;
  local_528.ObjectFlags = RF_NoFlags;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0xffffffffffffffff;
  local_4c8 = 0xffffffffffffffff;
  local_4c0 = 0xffffffffffffffff;
  local_4b8 = 0xffffffffffffffff;
  local_4b0 = 0xffffffffffffffff;
  local_4a8 = 2;
  local_4a0 = 0;
  local_498 = 0;
  local_490 = 0;
  local_488 = 0xffffffffffffffff;
  local_480 = 0xffffffffffffffff;
  local_478 = 0xffffffffffffffff;
  local_470 = 0xffffffffffffffff;
  local_468 = 0xffffffffffffffff;
  local_460 = 3;
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0xffffffffffffffff;
  local_438 = 0xffffffffffffffff;
  local_430 = 0xffffffffffffffff;
  local_428 = 0xffffffffffffffff;
  local_420 = 0xffffffffffffffff;
  local_418 = 4;
  local_410 = 0;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>::
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>(&local_b50,&local_a38);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_bf0,2,2);
  iVar17 = (int)local_be8;
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bf0,2);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,2);
  iVar15 = 1;
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased count",iVar17,1);
  if (((local_be8._4_4_ != 1) && (iVar15 = local_be8._4_4_, local_be8 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased keys",iVar15,iVar17);
  iVar16 = 1;
  iVar15 = iVar16;
  if (((local_be8._4_4_ != 1) && (iVar15 = local_be8._4_4_, local_be8 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased values",iVar15,iVar17);
  local_a28.ArrayNum = local_b50.ArrayNum;
  local_a28.DataPtr = (FExportMapEntry *)local_b50.AllocatorInstance.Data;
  if ((local_b50.ArrayNum < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_a18 = &local_a28;
  uStack_a10 = 1;
  local_7f8._12_4_ = uStack_a0c;
  local_7f8.ArrayNum = 1;
  local_7f8.DataPtr = local_a18;
  FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
            ((FPublicExportMap *)&local_bf0,&local_7f8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsert doesn\'t add new values",(int)local_be8,iVar17)
  ;
  iVar15 = local_b50.ArrayNum;
  iVar18 = iVar16;
  if (((local_be8._4_4_ != 1) && (iVar18 = local_be8._4_4_, local_be8 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsert has populated our keys",iVar18,iVar15);
  iVar15 = local_b50.ArrayNum;
  iVar18 = iVar16;
  if (((local_be8._4_4_ != 1) && (iVar18 = local_be8._4_4_, local_be8 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"PreInsert has populated our values (should mostly be InvalidValue)",iVar18,iVar15);
  FVar25 = local_bf0;
  iVar15 = local_be8._4_4_;
  if (local_be8._4_4_ == 1) {
    FVar25.Allocation = (uchar *)&local_bf0;
    iVar15 = iVar16;
  }
  else if ((local_be8 < 0) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  pFVar1 = (FPublicExportMap_u_0 *)(FVar25.Allocation + (longlong)iVar15 * 8);
  if ((FPublicExportMap_u_0 *)FVar25.Allocation == pFVar1) {
LAB_1422fe342:
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_a08,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_a08,0);
    if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar27 = *FVar25.SingleItemKey;
      if (uVar27 == 2) {
        bVar14 = true;
      }
      iVar15 = 2;
      if (uVar27 != 2) {
        iVar15 = -1;
      }
      iVar16 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bf0,uVar27);
      pwVar23 = L"Pre-existing keys remain intact after PreInsertPublicExports";
      if (uVar27 != 2) {
        pwVar23 = L"All preinserted keys are initialized to InvalidValue";
      }
      FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar23,iVar16,iVar15);
      FVar25.Allocation = (uchar *)(FVar25.SingleItemKey + 8);
    } while ((FPublicExportMap_u_0 *)FVar25.Allocation != pFVar1);
    if (!bVar14) goto LAB_1422fe342;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports does not add new values",
             (int)local_be8,iVar17);
  if ((local_b50.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_bf0,
                      *(ulong64 *)(local_b50.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find stored key with no value set",iVar15,-1);
  if ((local_b50.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b50.AllocatorInstance.Data + 0x38);
  if ((local_b50.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FLoadedPackageRef::FPublicExportMap::Store
            ((FPublicExportMap *)&local_bf0,*(ulong64 *)(local_b50.AllocatorInstance.Data + 0x38),
             iVar15);
  if ((local_b50.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b50.AllocatorInstance.Data + 0x38);
  if ((local_b50.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar16 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_bf0,
                      *(ulong64 *)(local_b50.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar16,iVar15);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_be8,iVar17 + 1);
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bf0,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find missing key",iVar15,-1);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_bf0,0x6f,0x6f);
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bf0,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_be8,iVar17 + 2);
  bVar14 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_bf0,0x6f);
  if (!bVar14) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_9f8,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_9f8,0);
    if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Remove decreased count",(int)local_be8,iVar17 + 1);
  bVar14 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_bf0,0x6f);
  if (bVar14) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_9e8,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_9e8,0);
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Failed remove did not increase count",(int)local_be8,
             iVar17 + 1);
  iVar17 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bf0,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find removed key returns no value set",iVar17,-1);
  if (local_b50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b50.AllocatorInstance.Data);
  }
  if (1 < local_be8._4_4_) {
    FMemory::Free(local_bf0.Allocation);
  }
  local_af8.Allocation = (uchar *)0x0;
  local_6a4 = 0;
  local_6a3 = 0;
  local_6a1 = 0;
  local_9d8._First = (FExportMapEntry *)(local_6f0 + 8);
  local_af0 = 0;
  local_9d8._Last = (FExportMapEntry *)local_6a0;
  local_ae8 = 0xffffffff;
  local_6f0._8_8_ = 0;
  local_6e0.Index = 0;
  local_6e0.Number = 0;
  local_6d8.TypeAndId = 0xffffffffffffffff;
  local_6d0.TypeAndId = 0xffffffffffffffff;
  local_6c8.TypeAndId = 0xffffffffffffffff;
  local_6c0.TypeAndId = 0xffffffffffffffff;
  local_6b8 = 0xffffffffffffffff;
  local_6b0._0_4_ = RF_Public;
  local_6b0._4_1_ = None;
  local_6b0._5_1_ = '\0';
  local_6b0._6_1_ = '\0';
  local_6b0._7_1_ = '\0';
  local_6a8 = 0;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>::
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>(&local_aa8,&local_9d8);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_af8,1,1);
  iVar17 = (int)local_af0;
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_af8,1);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,1);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased count",iVar17,1);
  iVar16 = 1;
  iVar15 = iVar16;
  if (((local_af0._4_4_ != 1) && (iVar15 = local_af0._4_4_, local_af0 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased keys",iVar15,iVar17);
  iVar15 = iVar16;
  if (((local_af0._4_4_ != 1) && (iVar15 = local_af0._4_4_, local_af0 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased values",iVar15,iVar17);
  local_9c8.ArrayNum = local_aa8.ArrayNum;
  local_9c8.DataPtr = (FExportMapEntry *)local_aa8.AllocatorInstance.Data;
  if ((local_aa8.ArrayNum < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_9b8 = &local_9c8;
  uStack_9b0 = 1;
  local_7e8._12_4_ = uStack_9ac;
  local_7e8.ArrayNum = 1;
  local_7e8.DataPtr = local_9b8;
  FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
            ((FPublicExportMap *)&local_af8,&local_7e8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsert doesn\'t add new values",(int)local_af0,iVar17)
  ;
  iVar15 = local_aa8.ArrayNum;
  iVar18 = iVar16;
  if (((local_af0._4_4_ != 1) && (iVar18 = local_af0._4_4_, local_af0 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsert has populated our keys",iVar18,iVar15);
  iVar15 = iVar16;
  if (((local_af0._4_4_ != 1) && (iVar15 = local_af0._4_4_, local_af0 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"PreInsert has populated our values (should mostly be InvalidValue)",iVar15,
             local_aa8.ArrayNum);
  FVar25 = local_af8;
  iVar15 = local_af0._4_4_;
  bVar14 = false;
  if (local_af0._4_4_ == 1) {
    FVar25.Allocation = (uchar *)&local_af8;
    iVar15 = iVar16;
  }
  else if ((local_af0 < 0) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  pFVar1 = (FPublicExportMap_u_0 *)(FVar25.Allocation + (longlong)iVar15 * 8);
  if ((FPublicExportMap_u_0 *)FVar25.Allocation == pFVar1) {
LAB_1422fea4d:
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_9a8,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_9a8,0);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar27 = *FVar25.SingleItemKey;
      if (uVar27 == 1) {
        bVar14 = true;
      }
      iVar15 = 1;
      if (uVar27 != 1) {
        iVar15 = -1;
      }
      iVar16 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_af8,uVar27);
      pwVar23 = L"Pre-existing keys remain intact after PreInsertPublicExports";
      if (uVar27 != 1) {
        pwVar23 = L"All preinserted keys are initialized to InvalidValue";
      }
      FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar23,iVar16,iVar15);
      FVar25.Allocation = (uchar *)(FVar25.SingleItemKey + 8);
    } while ((FPublicExportMap_u_0 *)FVar25.Allocation != pFVar1);
    if (!bVar14) goto LAB_1422fea4d;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports does not add new values",
             (int)local_af0,iVar17);
  if (local_aa8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa8.AllocatorInstance.Data);
  }
  if (1 < local_af0._4_4_) {
    FMemory::Free(local_af8.Allocation);
  }
  local_b10.Allocation = (uchar *)0x0;
  local_654 = 0;
  local_653 = 0;
  local_651 = 0;
  local_998._First = (FExportMapEntry *)(local_6a0 + 8);
  local_998._Last = (FExportMapEntry *)local_650;
  local_b08 = 0;
  local_b00 = 0xffffffff;
  local_6a0._8_8_ = 0;
  local_690.Index = 0;
  local_690.Number = 0;
  local_688.TypeAndId = 0xffffffffffffffff;
  local_680.TypeAndId = 0xffffffffffffffff;
  local_678.TypeAndId = 0xffffffffffffffff;
  local_670.TypeAndId = 0xffffffffffffffff;
  local_668 = 0xffffffffffffffff;
  local_658 = 0;
  local_660._0_4_ = RF_Public;
  local_660._4_1_ = None;
  local_660._5_1_ = '\0';
  local_660._6_1_ = '\0';
  local_660._7_1_ = '\0';
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>::
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>(&local_b40,&local_998);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_b10,2,2);
  iVar17 = (int)local_b08;
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_b10,2);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,2);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased count",iVar17,1);
  iVar16 = 1;
  iVar15 = iVar16;
  if (((local_b08._4_4_ != 1) && (iVar15 = local_b08._4_4_, local_b08 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased keys",iVar15,iVar17);
  iVar15 = iVar16;
  if (((local_b08._4_4_ != 1) && (iVar15 = local_b08._4_4_, local_b08 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased values",iVar15,iVar17);
  local_988.ArrayNum = local_b40.ArrayNum;
  local_988.DataPtr = (FExportMapEntry *)local_b40.AllocatorInstance.Data;
  if ((local_b40.ArrayNum < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_978 = &local_988;
  uStack_970 = 1;
  local_7d8._12_4_ = uStack_96c;
  local_7d8.ArrayNum = 1;
  local_7d8.DataPtr = local_978;
  FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
            ((FPublicExportMap *)&local_b10,&local_7d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsert doesn\'t add new values",(int)local_b08,iVar17)
  ;
  iVar15 = local_b40.ArrayNum;
  iVar34 = 1;
  iVar18 = iVar34;
  if (((local_b08._4_4_ != 1) && (iVar18 = local_b08._4_4_, local_b08 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsert has populated our keys",iVar18,iVar15 + iVar17)
  ;
  iVar15 = local_b40.ArrayNum;
  if (((local_b08._4_4_ != 1) && (iVar34 = local_b08._4_4_, local_b08 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"PreInsert has populated our values (should mostly be InvalidValue)",iVar34,
             iVar15 + iVar17);
  FVar25 = local_b10;
  iVar15 = local_b08._4_4_;
  bVar14 = false;
  if (local_b08._4_4_ == 1) {
    FVar25.Allocation = (uchar *)&local_b10;
    iVar15 = iVar16;
  }
  else if ((local_b08 < 0) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  pFVar1 = (FPublicExportMap_u_0 *)(FVar25.Allocation + (longlong)iVar15 * 8);
  if ((FPublicExportMap_u_0 *)FVar25.Allocation == pFVar1) {
LAB_1422fee31:
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_968,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_968,0);
    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar27 = *FVar25.SingleItemKey;
      if (uVar27 == 2) {
        bVar14 = true;
      }
      iVar15 = 2;
      if (uVar27 != 2) {
        iVar15 = -1;
      }
      iVar16 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_b10,uVar27);
      pwVar23 = L"Pre-existing keys remain intact after PreInsertPublicExports";
      if (uVar27 != 2) {
        pwVar23 = L"All preinserted keys are initialized to InvalidValue";
      }
      FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar23,iVar16,iVar15);
      FVar25.Allocation = (uchar *)(FVar25.SingleItemKey + 8);
    } while ((FPublicExportMap_u_0 *)FVar25.Allocation != pFVar1);
    if (!bVar14) goto LAB_1422fee31;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports does not add new values",
             (int)local_b08,iVar17);
  if ((local_b40.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_b10,
                      *(ulong64 *)(local_b40.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find stored key with no value set",iVar15,-1);
  if ((local_b40.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b40.AllocatorInstance.Data + 0x38);
  if ((local_b40.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FLoadedPackageRef::FPublicExportMap::Store
            ((FPublicExportMap *)&local_b10,*(ulong64 *)(local_b40.AllocatorInstance.Data + 0x38),
             iVar15);
  if ((local_b40.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b40.AllocatorInstance.Data + 0x38);
  if ((local_b40.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar16 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_b10,
                      *(ulong64 *)(local_b40.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar16,iVar15);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_b08,iVar17 + 1);
  if (local_b40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b40.AllocatorInstance.Data);
  }
  if (1 < local_b08._4_4_) {
    FMemory::Free(local_b10.Allocation);
  }
  local_bd8.Allocation = (uchar *)0x0;
  local_408.FilterFlags = None;
  local_408.Pad[0] = '\0';
  local_408.Pad[1] = '\0';
  local_408.Pad[2] = '\0';
  local_37c = 0;
  local_37b = 0;
  local_379 = 0;
  local_334 = 0;
  local_333 = 0;
  local_331 = 0;
  local_2ec = 0;
  local_2eb = 0;
  local_2e9 = 0;
  local_958._First = &local_408;
  local_958._Last = &local_2e8;
  local_bd0 = 0;
  local_bc8 = 0xffffffff;
  local_408.CookedSerialOffset = 0;
  local_408.CookedSerialSize = 0;
  local_408.ObjectName.Index = 0xffffffff;
  local_408.ObjectName.Number = 0xffffffff;
  local_408.OuterIndex.TypeAndId = 0xffffffffffffffff;
  local_408.ClassIndex.TypeAndId = 0xffffffffffffffff;
  local_408.SuperIndex.TypeAndId = 0xffffffffffffffff;
  local_408.TemplateIndex.TypeAndId = 0xffffffffffffffff;
  local_408.PublicExportHash = 1;
  local_408.ObjectFlags = RF_NoFlags;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0xffffffffffffffff;
  local_3a8 = 0xffffffffffffffff;
  local_3a0 = 0xffffffffffffffff;
  local_398 = 0xffffffffffffffff;
  local_390 = 0xffffffffffffffff;
  local_388 = 2;
  local_380 = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0xffffffffffffffff;
  local_360 = 0xffffffffffffffff;
  local_358 = 0xffffffffffffffff;
  local_350 = 0xffffffffffffffff;
  local_348 = 0xffffffffffffffff;
  local_340 = 3;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0xffffffffffffffff;
  local_318 = 0xffffffffffffffff;
  local_310 = 0xffffffffffffffff;
  local_308 = 0xffffffffffffffff;
  local_300 = 0xffffffffffffffff;
  local_2f8 = 4;
  local_2f0 = 0;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>::
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>(&local_b30,&local_958);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_bd8,7,8);
  iVar17 = (int)local_bd0;
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bd8,7);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,8);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased count",iVar17,1);
  iVar16 = 1;
  iVar15 = iVar16;
  if (((local_bd0._4_4_ != 1) && (iVar15 = local_bd0._4_4_, local_bd0 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased keys",iVar15,iVar17);
  iVar15 = iVar16;
  if (((local_bd0._4_4_ != 1) && (iVar15 = local_bd0._4_4_, local_bd0 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased values",iVar15,iVar17);
  local_948.ArrayNum = local_b30.ArrayNum;
  local_948.DataPtr = (FExportMapEntry *)local_b30.AllocatorInstance.Data;
  if ((local_b30.ArrayNum < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_938 = &local_948;
  uStack_930 = 1;
  local_7c8._12_4_ = uStack_92c;
  local_7c8.ArrayNum = 1;
  local_7c8.DataPtr = local_938;
  FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
            ((FPublicExportMap *)&local_bd8,&local_7c8);
  iVar15 = local_b30.ArrayNum;
  iVar34 = 1;
  iVar18 = iVar34;
  if (((local_bd0._4_4_ != 1) && (iVar18 = local_bd0._4_4_, local_bd0 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports has populated our keys",iVar18,
             iVar15 + iVar17);
  iVar15 = local_b30.ArrayNum;
  if (((local_bd0._4_4_ != 1) && (iVar34 = local_bd0._4_4_, local_bd0 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"PreInsert has populated our values (should mostly be InvalidValue)",iVar34,
             iVar15 + iVar17);
  FVar25 = local_bd8;
  iVar15 = local_bd0._4_4_;
  bVar14 = false;
  if (local_bd0._4_4_ == 1) {
    FVar25.Allocation = (uchar *)&local_bd8;
    iVar15 = iVar16;
  }
  else if ((local_bd0 < 0) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  pFVar1 = (FPublicExportMap_u_0 *)(FVar25.Allocation + (longlong)iVar15 * 8);
  if ((FPublicExportMap_u_0 *)FVar25.Allocation == pFVar1) {
LAB_1422ff4b1:
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_928,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_928,0);
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar27 = *FVar25.SingleItemKey;
      if (uVar27 == 7) {
        bVar14 = true;
      }
      iVar15 = 8;
      if (uVar27 != 7) {
        iVar15 = -1;
      }
      iVar16 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bd8,uVar27);
      pwVar23 = L"Pre-existing keys remain intact after PreInsertPublicExports";
      if (uVar27 != 7) {
        pwVar23 = L"All preinserted keys are initialized to InvalidValue";
      }
      FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar23,iVar16,iVar15);
      FVar25.Allocation = (uchar *)(FVar25.SingleItemKey + 8);
    } while ((FPublicExportMap_u_0 *)FVar25.Allocation != pFVar1);
    if (!bVar14) goto LAB_1422ff4b1;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports does not add new values",
             (int)local_bd0,iVar17);
  uVar22 = 0;
  if ((local_b30.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_bd8,
                      *(ulong64 *)(local_b30.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find stored key with no value set",iVar15,-1);
  if ((local_b30.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b30.AllocatorInstance.Data + 0x38);
  if ((local_b30.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FLoadedPackageRef::FPublicExportMap::Store
            ((FPublicExportMap *)&local_bd8,*(ulong64 *)(local_b30.AllocatorInstance.Data + 0x38),
             iVar15);
  if ((local_b30.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(local_b30.AllocatorInstance.Data + 0x38);
  if ((local_b30.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar16 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_bd8,
                      *(ulong64 *)(local_b30.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar16,iVar15);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_bd0,iVar17 + 1);
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bd8,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find missing key",iVar15,-1);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_bd8,0x6f,0x6f);
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bd8,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_bd0,iVar17 + 2);
  bVar14 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_bd8,0x6f);
  if (!bVar14) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_918,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_918,0);
    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Remove decreased count",(int)local_bd0,iVar17 + 1);
  bVar14 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_bd8,0x6f);
  if (bVar14) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_908,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_908,0);
    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Failed remove did not increase count",(int)local_bd0,
             iVar17 + 1);
  iVar17 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_bd8,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find removed key returns no value set",iVar17,-1);
  if (local_b30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b30.AllocatorInstance.Data);
  }
  if (1 < local_bd0._4_4_) {
    FMemory::Free(local_bd8.Allocation);
  }
  local_c10.Allocation = (uchar *)0x0;
  local_c08 = 0;
  local_c00[0] = -1;
  local_128 = 0xb;
  uStack_120 = 2;
  local_118 = 0xd;
  uStack_110 = 4;
  local_108 = 0xf;
  uStack_100 = 6;
  local_f8 = 0x11;
  uStack_f0 = 8;
  local_e8 = 1;
  local_bc0.Data = (FScriptContainerElement *)0x0;
  local_bb8 = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,9,0,&local_bc0,9,&local_bb4);
  uVar9 = _UNK_1508b8e88;
  uVar8 = ___xmm_0000000800000011000000060000000f;
  uVar7 = _UNK_1508b8e78;
  uVar6 = ___xmm_000000040000000d000000020000000b;
  *(ulonglong *)local_bc0.Data = local_128;
  *(ulonglong *)(local_bc0.Data + 8) = uStack_120;
  local_b8 = 1;
  *(ulonglong *)(local_bc0.Data + 0x10) = local_118;
  *(ulonglong *)(local_bc0.Data + 0x18) = uStack_110;
  *(ulonglong *)(local_bc0.Data + 0x20) = local_108;
  *(ulonglong *)(local_bc0.Data + 0x28) = uStack_100;
  *(ulonglong *)(local_bc0.Data + 0x30) = local_f8;
  *(ulonglong *)(local_bc0.Data + 0x38) = uStack_f0;
  *(ulonglong *)(local_bc0.Data + 0x40) = local_e8;
  local_b20.Data = (FScriptContainerElement *)0x0;
  local_b18 = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,9,0,&local_b20,9,&local_b14);
  local_d8 = uVar6;
  uStack_d0 = uVar7;
  local_c8 = uVar8;
  uStack_c0 = uVar9;
  *(undefined8 *)local_b20.Data = uVar6;
  *(undefined8 *)(local_b20.Data + 8) = uVar7;
  *(undefined8 *)(local_b20.Data + 0x10) = uVar8;
  *(undefined8 *)(local_b20.Data + 0x18) = uVar9;
  *(undefined4 *)(local_b20.Data + 0x20) = 1;
  if ((local_bb8 != local_b18) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreExistingKeys.Num() == PreExistingValues.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x318c,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_2e8.CookedSerialOffset = 0;
  local_2e8.FilterFlags = None;
  local_2e8.Pad[0] = '\0';
  local_2e8.Pad[1] = '\0';
  local_2e8.Pad[2] = '\0';
  local_25c = 0;
  local_25b = 0;
  local_259 = 0;
  local_214 = 0;
  local_213 = 0;
  local_211 = 0;
  local_1cc = 0;
  local_1cb = 0;
  local_1c9 = 0;
  local_8f8._First = &local_2e8;
  local_8f8._Last = (FExportMapEntry *)local_1c8;
  local_2e8.CookedSerialSize = 0;
  local_2e8.ObjectName.Index = 0xffffffff;
  local_2e8.ObjectName.Number = 0xffffffff;
  local_2e8.OuterIndex.TypeAndId = 0xffffffffffffffff;
  local_2e8.ClassIndex.TypeAndId = 0xffffffffffffffff;
  local_2e8.SuperIndex.TypeAndId = 0xffffffffffffffff;
  local_2e8.TemplateIndex.TypeAndId = 0xffffffffffffffff;
  local_2e8.PublicExportHash = 0xc;
  local_2e8.ObjectFlags = RF_NoFlags;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0xffffffffffffffff;
  local_288 = 0xffffffffffffffff;
  local_280 = 0xffffffffffffffff;
  local_278 = 0xffffffffffffffff;
  local_270 = 0xffffffffffffffff;
  local_268 = 1;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0xffffffffffffffff;
  local_240 = 0xffffffffffffffff;
  local_238 = 0xffffffffffffffff;
  local_230 = 0xffffffffffffffff;
  local_228 = 0xffffffffffffffff;
  local_220 = 3;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0xffffffffffffffff;
  local_1f8 = 0xffffffffffffffff;
  local_1f0 = 0xffffffffffffffff;
  local_1e8 = 0xffffffffffffffff;
  local_1e0 = 0xffffffffffffffff;
  local_1d8 = 0xe;
  local_1d0 = 0;
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>::
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>(&local_b80,&local_8f8);
  if (0 < (int)local_bb8) {
    lVar37 = 0;
    uVar36 = uVar22;
    do {
      uVar28 = (uint)uVar22;
      uVar30 = 0;
      if ((int)uVar28 < (int)local_b18) {
        uVar30 = ~uVar28 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      iVar17 = *(int *)(local_b20.Data + lVar37);
      uVar30 = 0;
      if ((int)uVar28 < (int)local_bb8) {
        uVar30 = ~uVar28 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      FLoadedPackageRef::FPublicExportMap::Store
                ((FPublicExportMap *)&local_c10,*(ulong64 *)(local_bc0.Data + uVar36),iVar17);
      uVar22 = (ulonglong)(uVar28 + 1);
      lVar37 = lVar37 + 4;
      uVar36 = uVar36 + 8;
    } while ((int)(uVar28 + 1) < (int)local_bb8);
  }
  uVar30 = local_bb8;
  iVar17 = (int)local_c08;
  local_8e8 = local_bc0.Data;
  local_ad8 = (int)local_c08;
  local_178.Elements._0_8_ = 0;
  local_178.Elements._8_8_ = 0;
  local_178.Elements._32_8_ = 0;
  local_178.Elements._40_4_ = 0;
  local_178.Elements._44_4_ = 0x80;
  local_178.Elements._48_4_ = 0xffffffff;
  local_178.Elements._52_4_ = 0;
  local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_178.HashSize = 0;
  if (((int)local_bb8 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  uStack_8e0 = uVar30;
  local_7b8._12_4_ = uStack_8dc;
  local_7b8.ArrayNum = uVar30;
  local_7b8.DataPtr = (ulong64 *)local_8e8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Append
            (&local_178,&local_7b8);
  iVar15 = local_b80.ArrayNum;
  pFVar2 = local_b80.AllocatorInstance.Data + (longlong)local_b80.ArrayNum * 0x48;
  FVar26.Data = local_b80.AllocatorInstance.Data;
  while( true ) {
    if (local_b80.ArrayNum != iVar15) {
      local_bf8[0] = 0;
      `TCheckedPointerIterator<FExportMapEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_bf8);
    }
    if (FVar26.Data == pFVar2) break;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(&local_178,&local_a98,(bool *)(FVar26.Data + 0x38));
    FVar26.Data = FVar26.Data + 0x48;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",iVar17,local_b18);
  iVar15 = local_c08._4_4_;
  iVar18 = 1;
  iVar16 = iVar18;
  if (((local_c08._4_4_ != 1) && (iVar16 = iVar15, local_c08 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Store increased keys",iVar16,iVar17);
  iVar15 = local_c08._4_4_;
  iVar16 = iVar18;
  if (((local_c08._4_4_ != 1) && (iVar16 = iVar15, local_c08 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased values",iVar16,iVar17);
  local_8d8.ArrayNum = local_b80.ArrayNum;
  local_8d8.DataPtr = (FExportMapEntry *)local_b80.AllocatorInstance.Data;
  if ((local_b80.ArrayNum < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_8c8 = &local_8d8;
  uStack_8c0 = 1;
  local_7a8._12_4_ = uStack_8bc;
  local_7a8.ArrayNum = 1;
  local_7a8.DataPtr = local_8c8;
  FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
            ((FPublicExportMap *)&local_c10,&local_7a8);
  uVar11 = local_178.Elements._52_4_;
  iVar15 = local_c08._4_4_;
  uVar10 = local_178.Elements._8_4_;
  iVar16 = iVar18;
  if (((local_c08._4_4_ != 1) && (iVar16 = iVar15, local_c08 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports has populated our keys",iVar16,
             uVar10 - uVar11);
  uVar11 = local_178.Elements._52_4_;
  iVar15 = local_c08._4_4_;
  uVar10 = local_178.Elements._8_4_;
  iVar16 = iVar18;
  if (((local_c08._4_4_ != 1) && (iVar16 = iVar15, local_c08 < 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"PreInsert has populated our values (should mostly be InvalidValue)",iVar16,
             uVar10 - uVar11);
  uVar30 = local_bb8;
  local_1c8._0_8_ = (FScriptContainerElement *)0x0;
  local_1c8._8_8_ = 0;
  local_1a8.TypeAndId = 0;
  local_1a0 = 0;
  local_19c = 0x80;
  local_198 = -1;
  local_194 = 0;
  local_188 = (ForElementType<FSetElementId>)0x0;
  local_180 = 0;
  if (local_bb8 != 0) {
    if ((int)local_bb8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)local_bb8);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_1c8,local_bb8);
    if (3 < uVar30) {
      uVar22 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
      lVar37 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_a98._4_4_ = (int)lVar37;
      iVar18 = 1 << ((byte)lVar37 & 0x1f);
    }
    if ((local_180 == 0) || (local_180 < iVar18)) {
      local_180 = iVar18;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 local_1c8);
    }
  }
  uVar30 = local_c08._4_4_;
  if (local_c08._4_4_ == 1) {
    uVar30 = 1;
    local_ae0.Allocation = (uchar *)&local_c10;
  }
  else {
    local_ae0.Allocation = local_c10.Allocation;
    if (local_c08 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
    }
  }
  local_a84._4_8_ = (FPublicExportMap_u_0 *)(local_ae0.Allocation + (longlong)(int)uVar30 * 8);
  uVar28 = local_c08._4_4_;
  if ((FPublicExportMap_u_0 *)local_ae0.Allocation !=
      (FPublicExportMap_u_0 *)(local_ae0.Allocation + (longlong)(int)uVar30 * 8)) {
LAB_142300024:
    FVar25 = local_c10;
                    /* WARNING: Load size is inaccurate */
    puVar3 = *local_ae0.Allocation;
    local_ab0 = puVar3;
    for (FVar26.Data = local_bc0.Data; FVar26.Data != local_bc0.Data + (longlong)(int)local_bb8 * 8;
        FVar26.Data = FVar26.Data + 8) {
      if (*(uchar **)FVar26.Data == puVar3) {
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64_const_&>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_1c8,&local_a90,(bool *)&local_ab0);
        FVar26.Data = local_bc0.Data;
        goto joined_r0x0001423000ae;
      }
    }
    if (puVar3 == (uchar *)0x1) {
      pwVar23 = L"Ensure preinsert didn\'t overwrite the existing value";
      iVar15 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_c10,1);
      iVar17 = 1;
    }
    else {
      uVar30 = uVar28;
      if (uVar28 == 1) {
        FVar25.Allocation = (uchar *)&local_c10;
        uVar24 = 0;
        uVar28 = 1;
        uVar35 = 1;
LAB_142300330:
        do {
          iVar17 = (uVar28 >> 1) + uVar24;
          if (*(uchar **)(FVar25.Allocation + (longlong)iVar17 * 8) < puVar3) {
            uVar24 = iVar17 + (uVar28 & 1);
          }
          uVar5 = uVar28 >> 1;
          uVar28 = uVar28 >> 1;
        } while (uVar5 != 0);
      }
      else {
        if ((int)uVar28 < 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar14) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          uVar30 = local_c08._4_4_;
        }
        uVar24 = 0;
        uVar35 = uVar28;
        if (0 < (int)uVar28) goto LAB_142300330;
      }
      if ((int)uVar24 < (int)uVar30) {
        uVar28 = 0;
        if ((int)uVar24 < (int)uVar35) {
          uVar28 = ~uVar24 >> 0x1f;
        }
        if (uVar28 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar14) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          uVar30 = local_c08._4_4_;
        }
        if (*(uchar **)(FVar25.Allocation + (longlong)(int)uVar24 * 8) != puVar3)
        goto LAB_14230044f;
        if (uVar30 == 1) {
          piVar29 = local_c00;
          uVar30 = 1;
        }
        else {
          piVar29 = (int *)(local_c10.Allocation + (longlong)(int)uVar30 * 8);
          if (((int)uVar30 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
        }
        uVar28 = 0;
        if ((int)uVar24 < (int)uVar30) {
          uVar28 = ~uVar24 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        iVar15 = piVar29[(int)uVar24];
      }
      else {
LAB_14230044f:
        iVar15 = -1;
      }
      pwVar23 = L"All preinserted keys are initialized to InvalidValue";
      iVar17 = -1;
    }
    goto LAB_14230046b;
  }
LAB_14230049e:
  uVar30 = local_bb8;
  FVar26.Data = local_bc0.Data;
  uVar22 = 0;
  uVar27 = (ulong64)(int)local_bb8;
  if (((int)local_bb8 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  local_788._0_8_ = (FScriptContainerElement *)0x0;
  local_788._8_8_ = 0;
  local_768 = (ForElementType<unsigned_int>)0x0;
  local_760 = 0;
  local_75c = 0x80;
  local_758 = -1;
  local_754 = 0;
  local_748.Data = (FScriptContainerElement *)0x0;
  local_740 = 0;
  if (uVar30 == 0) goto LAB_1423007c4;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar27);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_788,uVar30);
  uVar28 = 1;
  if (3 < uVar30) {
    uVar36 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
    lVar37 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    local_a90._4_4_ = (int)lVar37;
    uVar28 = 1 << ((byte)lVar37 & 0x1f);
  }
  if ((local_740 != 0) && ((int)uVar28 <= (int)local_740)) goto LAB_1423007c4;
  local_740 = uVar28;
  if (local_748.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_748,0,0,4);
  }
  if (uVar28 != 0) {
    uVar30 = uVar28;
    if (uVar28 < 2) {
      if (local_748.Data != (FScriptContainerElement *)0x0) {
        uVar30 = 0;
        goto LAB_1423005ac;
      }
    }
    else {
LAB_1423005ac:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_748,0,uVar30,4);
    }
    if (0 < (int)uVar28) {
      uVar31 = (ulonglong)uVar28;
      uVar36 = uVar22;
      do {
        FVar21.Data = local_750;
        if (local_748.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_748.Data;
        }
        uVar19 = uVar36 & (longlong)(int)uVar28 - 1U;
        uVar36 = uVar36 + 1;
        *(undefined4 *)(FVar21.Data + uVar19 * 4) = 0xffffffff;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
  }
  if (local_740 != 0) {
    pTStack_ac8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_788 + 0x10);
    local_ad0 = 0;
    uStack_acc = 1;
    local_ac0 = 0xffffffff;
    uStack_abc = 0;
    uStack_ab8 = 0;
    if (local_760 != 0) {
      FVar33 = (ForElementType<unsigned_int>)((longlong)local_788 + 0x10);
      if (local_768 != (ForElementType<unsigned_int>)0x0) {
        FVar33 = local_768;
      }
      uVar30 = *(uint *)FVar33;
      uVar36 = uVar22;
      while (uVar30 == 0) {
        uStack_ab8 = (int)uVar36 + 0x20;
        uVar36 = (ulonglong)uStack_ab8;
        iVar15 = (int)uVar22;
        local_ad0 = iVar15 + 1;
        uVar22 = (ulonglong)local_ad0;
        if ((int)((local_760 - 1) + ((int)(local_760 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_ad0)
        goto LAB_1423006ef;
        uVar30 = ((uint *)((longlong)FVar33 + 4))[iVar15];
        local_ac0 = 0xffffffff;
      }
      uStack_acc = -uVar30 & uVar30;
      uVar22 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
      lVar37 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      uStack_abc = (uStack_ab8 - 1) + (int)lVar37;
      uVar22 = (ulonglong)uStack_abc;
      local_a88 = (int)lVar37;
      if ((int)local_760 < (int)uStack_abc) {
LAB_1423006ef:
        uVar22 = (ulonglong)local_760;
        uStack_abc = local_760;
      }
    }
    local_ac0 = 0xffffffff;
    local_a78 = (longlong *)local_788;
    local_a70._padding_ = CONCAT44(uStack_acc,local_ad0);
    local_a70.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_788 + 0x10);
    local_a70.UnvisitedBitMask = 0xffffffff;
    local_a70.CurrentBitIndex = uStack_abc;
    local_a70.BaseBitIndex = uStack_ab8;
    local_a70._28_4_ = uStack_ab4;
    if ((int)uVar22 < (int)local_760) {
      do {
        puVar32 = (undefined8 *)((longlong)(int)uVar22 * 0x10 + *local_a78);
        uVar30 = (int)((ulonglong)*puVar32 >> 0x20) * 0x17 + (int)*puVar32 & local_740 - 1;
        *(uint *)((longlong)puVar32 + 0xc) = uVar30;
        FVar21.Data = local_750;
        if (local_748.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_748.Data;
        }
        uVar36 = (longlong)(int)local_740 - 1U & (longlong)(int)uVar30;
        *(undefined4 *)(puVar32 + 1) = *(undefined4 *)(FVar21.Data + uVar36 * 4);
        *(int *)(FVar21.Data + uVar36 * 4) = (int)uVar22;
        local_a70.UnvisitedBitMask = local_a70.UnvisitedBitMask & ~local_a70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a70);
        uVar22 = (ulonglong)(uint)local_a70.CurrentBitIndex;
      } while (local_a70.CurrentBitIndex < (local_a70.Array)->NumBits);
    }
  }
LAB_1423007c4:
  pFVar2 = FVar26.Data + uVar27 * 8;
  for (; FVar26.Data != pFVar2; FVar26.Data = FVar26.Data + 8) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               local_788,(ulong64 *)local_a84,(bool *)FVar26.Data);
  }
  pTVar20 = TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            Difference((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                        *)local_1c8,&local_a8,
                       (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                        *)local_788);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"All preexisting keys are still in the map",
             *(int *)&(pTVar20->Elements).field_0x8 - *(int *)&(pTVar20->Elements).field_0x34,0);
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  local_740 = 0;
  if (local_748.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_748.Data);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_788);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"PreInsertPublicExports does not add new values",
             (int)local_c08,iVar17);
  if ((local_b80.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar17 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_c10,
                      *(ulong64 *)(local_b80.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find stored key with no value set",iVar17,-1);
  if ((local_b80.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar17 = *(int *)(local_b80.AllocatorInstance.Data + 0x38);
  if ((local_b80.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FLoadedPackageRef::FPublicExportMap::Store
            ((FPublicExportMap *)&local_c10,*(ulong64 *)(local_b80.AllocatorInstance.Data + 0x38),
             iVar17);
  if ((local_b80.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar17 = *(int *)(local_b80.AllocatorInstance.Data + 0x38);
  if ((local_b80.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar15 = FLoadedPackageRef::FPublicExportMap::Find
                     ((FPublicExportMap *)&local_c10,
                      *(ulong64 *)(local_b80.AllocatorInstance.Data + 0x38));
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar15,iVar17);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_c08,local_b18 + 1);
  iVar17 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_c10,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find missing key",iVar17,-1);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_c10,0x6f,0x6f);
  iVar17 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_c10,0x6f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar17,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased count",(int)local_c08,local_b18 + 2);
  bVar14 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_c10,0x6f);
  if (!bVar14) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_8b8,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_8b8,0);
    if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Remove decreased count",(int)local_c08,local_b18 + 1);
  bVar14 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_c10,0x6f);
  if (bVar14) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_8a8,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_8a8,0);
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Failed remove did not increase count",(int)local_c08,
             local_b18 + 1);
  iVar17 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_c10,0x6f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Find removed key returns no value set",iVar17,-1);
  local_180 = 0;
  if (local_188 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1c8);
  local_178.HashSize = 0;
  if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_178.Elements);
  if (local_b80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b80.AllocatorInstance.Data);
  }
  if (local_b20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b20.Data);
  }
  if (local_bc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc0.Data);
  }
  if (1 < (int)local_c08._4_4_) {
    FMemory::Free(local_c10.Allocation);
  }
  return true;
joined_r0x0001423000ae:
  if (FVar26.Data == local_bc0.Data + (longlong)(int)local_bb8 * 8) goto LAB_1423000be;
  if (*(uchar **)FVar26.Data == puVar3) {
    uVar30 = (uint)((longlong)FVar26.Data - (longlong)local_bc0.Data >> 3);
    uVar28 = 0;
    if ((int)uVar30 < (int)local_b18) {
      uVar28 = ~uVar30 >> 0x1f;
    }
    if (uVar28 != 0) goto LAB_1423000ff;
    goto LAB_1423000c5;
  }
  FVar26.Data = FVar26.Data + 8;
  goto joined_r0x0001423000ae;
LAB_1423000be:
  uVar30 = 0xffffffff;
LAB_1423000c5:
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("(Index >= 0) & (Index < ArrayNum)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                      ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar14) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
LAB_1423000ff:
  FVar25 = local_c10;
  uVar28 = local_c08._4_4_;
  iVar17 = *(int *)(local_b20.Data + (longlong)(int)uVar30 * 4);
  if (local_c08._4_4_ == 1) {
    FVar25.Allocation = (uchar *)&local_c10;
    uVar24 = 0;
    uVar30 = local_c08._4_4_;
    uVar28 = 1;
    uVar35 = 1;
LAB_142300192:
    do {
      iVar15 = (uVar28 >> 1) + uVar24;
      if (*(uchar **)(FVar25.Allocation + (longlong)iVar15 * 8) < puVar3) {
        uVar24 = iVar15 + (uVar28 & 1);
      }
      uVar5 = uVar28 >> 1;
      uVar28 = uVar28 >> 1;
    } while (uVar5 != 0);
  }
  else {
    if (local_c08 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
    }
    uVar24 = 0;
    uVar30 = local_c08._4_4_;
    uVar35 = uVar28;
    if (0 < (int)uVar28) goto LAB_142300192;
  }
  if ((int)uVar24 < (int)uVar30) {
    uVar28 = 0;
    if ((int)uVar24 < (int)uVar35) {
      uVar28 = ~uVar24 >> 0x1f;
    }
    if (uVar28 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      uVar30 = local_c08._4_4_;
    }
    if (*(uchar **)(FVar25.Allocation + (longlong)(int)uVar24 * 8) == puVar3) {
      if (uVar30 == 1) {
        piVar29 = local_c00;
        uVar30 = 1;
      }
      else {
        piVar29 = (int *)(local_c10.Allocation + (longlong)(int)uVar30 * 8);
        if (((int)uVar30 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
      }
      uVar28 = 0;
      if ((int)uVar24 < (int)uVar30) {
        uVar28 = ~uVar24 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      iVar15 = piVar29[(int)uVar24];
      goto LAB_1423002b1;
    }
  }
  iVar15 = -1;
LAB_1423002b1:
  pwVar23 = L"Pre-existing keys remain intact after PreInsertPublicExports";
LAB_14230046b:
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar23,iVar15,iVar17);
  local_ae0.Allocation = (uchar *)(local_ae0.SingleItemKey + 8);
  iVar17 = local_ad8;
  if (local_ae0.Allocation == (uchar *)local_a84._4_8_) goto LAB_14230049e;
  uVar28 = local_c08._4_4_;
  goto LAB_142300024;
}

// GetBeautifiedTestName @ 142300c90

FString * __thiscall
FPublicExportMapPreInsertPublicExportsTest::GetBeautifiedTestName
          (FPublicExportMapPreInsertPublicExportsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Core.Loading.FPublicExportMap.PreInsertPublicExports");
  return __return_storage_ptr__;
}

