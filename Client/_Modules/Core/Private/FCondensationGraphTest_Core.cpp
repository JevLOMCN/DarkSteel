// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 1414c9d90

EAutomationTestFlags __thiscall
FCondensationGraphTest_Core::GetTestFlags(FCondensationGraphTest_Core *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414c9da0

bool __thiscall FCondensationGraphTest_Core::IsStressTest(FCondensationGraphTest_Core *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414c9db0

uint __thiscall FCondensationGraphTest_Core::GetRequiredDeviceNum(FCondensationGraphTest_Core *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414c9dc0

FString * __thiscall
FCondensationGraphTest_Core::GetTestSourceFileName
          (FCondensationGraphTest_Core *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x61,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x61,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x61,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\Graph\\GraphConvert.cpp"
             ,0x61);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414c9e60

int __thiscall FCondensationGraphTest_Core::GetTestSourceFileLine(FCondensationGraphTest_Core *this)

{
  return 0x203;
}

// GetTests @ 1414c9e70

/* WARNING: Removing unreachable block (ram,0x0001414c9fb9) */
/* WARNING: Removing unreachable block (ram,0x0001414ca084) */

void __thiscall
FCondensationGraphTest_Core::GetTests
          (FCondensationGraphTest_Core *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x24,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x24,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x24,"System.Core.Graph.CondensationGraph",0x24);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_28.Data;
  *(int *)(pFVar4 + 8) = local_20[0];
  *(int *)(pFVar4 + 0xc) = local_20[1];
  local_20[0] = 0;
  local_20[1] = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_18;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar4 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1414ca0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FCondensationGraphTest_Core::RunTest(FCondensationGraphTest_Core *this,FString *param_1)

{
  code *pcVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_1108 [32];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_10b8;
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *local_10b0;
  ForAnyElementType local_10a8;
  longlong lStack_10a0;
  long64 local_1098;
  uint local_1090;
  byte local_108c;
  uint local_1088 [2];
  ForAnyElementType local_1080;
  uint local_1078;
  uint uStack_1074;
  undefined1 local_1070 [8];
  ForAnyElementType local_1068;
  uint local_1060;
  int local_105c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_1058;
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *local_1050;
  ForAnyElementType *local_1048;
  int local_1040 [44];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_f90;
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> local_f80;
  int local_f70 [30];
  FScriptContainerElement *local_ef8;
  int local_ef0 [36];
  void *local_e60;
  undefined8 local_e58;
  void *local_e50;
  undefined8 local_e48;
  void *local_e40;
  undefined8 local_e38;
  void *local_e30;
  undefined8 local_e28;
  void *local_e20;
  undefined8 local_e18;
  void *local_e10;
  undefined8 local_e08;
  void *local_e00;
  undefined8 local_df8;
  void *local_df0;
  undefined8 local_de8;
  FCondensationGraphTest_Core *local_dd8;
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *local_dd0;
  void **local_dc8;
  void **local_dc0;
  void **local_db8;
  ForAnyElementType *local_db0;
  void **local_da8;
  undefined1 *local_da0;
  void **local_d98;
  void **local_d90;
  void **local_d88;
  undefined1 *local_d80;
  void **local_d78;
  void **local_d70;
  void **local_d68;
  int *local_d58;
  undefined4 uStack_d50;
  undefined4 uStack_d4c;
  undefined8 local_d48;
  undefined4 uStack_d40;
  uint uStack_d3c;
  int *local_d38;
  undefined4 uStack_d30;
  undefined4 uStack_d2c;
  int *local_d28;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  int *local_d18;
  undefined4 uStack_d10;
  undefined4 uStack_d0c;
  int *local_d08;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  undefined8 local_cf8;
  undefined4 uStack_cf0;
  uint uStack_cec;
  int *local_ce8;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  int *local_cd8;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  int *local_cc8;
  undefined4 uStack_cc0;
  undefined4 uStack_cbc;
  int *local_cb8;
  undefined4 uStack_cb0;
  undefined4 uStack_cac;
  undefined8 local_ca8;
  undefined4 uStack_ca0;
  uint uStack_c9c;
  int *local_c98;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  int *local_c88;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  int *local_c78;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  int *local_c68;
  undefined4 uStack_c60;
  undefined4 uStack_c5c;
  int *local_c58;
  undefined4 uStack_c50;
  undefined4 uStack_c4c;
  int *local_c48;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  int *local_c38;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  int *local_c28;
  undefined4 uStack_c20;
  undefined4 uStack_c1c;
  int *local_c18;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  int *local_c08;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  int *local_bf8;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  int *local_be8;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  undefined8 local_bd8;
  undefined4 uStack_bd0;
  uint uStack_bcc;
  int *local_bc8;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  int *local_bb8;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  int *local_ba8;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  int *local_b98;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  int *local_b88;
  undefined4 uStack_b80;
  undefined4 uStack_b7c;
  int *local_b78;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  int *local_b68;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  int *local_b58;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  int *local_b48;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  int *local_b38;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  undefined8 local_b28;
  undefined4 uStack_b20;
  uint uStack_b1c;
  int *local_b18;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  undefined8 local_b08;
  undefined4 uStack_b00;
  uint uStack_afc;
  int *local_af8;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  int *local_ae8;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  int *local_ad8;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  int *local_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  int *local_ab8;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  int *local_aa8;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  int *local_a98;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  int *local_a88;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  int *local_a78;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  int *local_a68;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  int *local_a58;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  int *local_a48;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  int *local_a38;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  int *local_a28;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  int *local_a18;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  int *local_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  int *local_9f8;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  int *local_9e8;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  int *local_9d8;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  int *local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  int *local_9b8;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  int *local_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  int *local_998;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  int *local_988;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  int *local_978;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  int *local_968;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  int *local_958;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  int *local_948;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  int *local_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  int *local_928;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  int *local_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  int *local_908;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  int *local_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  int *local_8e8;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  int *local_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  int *local_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined8 local_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  FScriptContainerElement *local_8a8;
  uint uStack_8a0;
  undefined4 uStack_89c;
  int *local_898;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  int *local_888;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  int *local_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  int *local_868;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  int *local_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  int *local_848;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  int *local_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  int *local_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  int *local_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  int *local_808;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  int *local_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  int *local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  int *local_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  int *local_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  int *local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  int *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  int *local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  int *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  int *local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  int *local_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  void *local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  void *pvStack_740;
  undefined8 local_738;
  void *local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  void *pvStack_718;
  undefined8 local_710;
  TArrayView<int_const_,int> local_708;
  TArrayView<int_const_,int> local_6f8;
  TArrayView<int_const_,int> local_6e8;
  TArrayView<int_const_,int> local_6d8;
  TArrayView<int_const_,int> local_6c8;
  TArrayView<int_const_,int> local_6b8;
  TArrayView<int_const_,int> local_6a8;
  TArrayView<int_const_,int> local_698;
  TArrayView<int_const_,int> local_688;
  TArrayView<int_const_,int> local_678;
  TArrayView<int_const_,int> local_668;
  TArrayView<int_const_,int> local_658;
  TArrayView<int_const_,int> local_648;
  TArrayView<int_const_,int> local_638;
  TArrayView<int_const_,int> local_628;
  TArrayView<int_const_,int> local_618;
  TArrayView<int_const_,int> local_608;
  TArrayView<int_const_,int> local_5f8;
  TArrayView<int_const_,int> local_5e8;
  TArrayView<int_const_,int> local_5d8;
  TArrayView<int_const_,int> local_5c8;
  TArrayView<int_const_,int> local_5b8;
  TArrayView<int_const_,int> local_5a8;
  TArrayView<int_const_,int> local_598;
  TArrayView<int_const_,int> local_588;
  TArrayView<int_const_,int> local_578;
  TArrayView<int_const_,int> local_568;
  TArrayView<int_const_,int> local_558;
  TArrayView<int_const_,int> local_548;
  TArrayView<int_const_,int> local_538;
  TArrayView<int_const_,int> local_528;
  TArrayView<int_const_,int> local_518;
  TArrayView<int_const_,int> local_508;
  TArrayView<int_const_,int> local_4f8;
  TArrayView<int_const_,int> local_4e8;
  TArrayView<int_const_,int> local_4d8;
  TArrayView<int_const_,int> local_4c8;
  TArrayView<int_const_,int> local_4b8;
  TArrayView<int_const_,int> local_4a8;
  TArrayView<int_const_,int> local_498;
  TArrayView<int_const_,int> local_488;
  TArrayView<int_const_,int> local_478;
  TArrayView<int_const_,int> local_468;
  TArrayView<int_const_,int> local_458;
  TArrayView<int_const_,int> local_448;
  TArrayView<int_const_,int> local_438;
  TArrayView<int_const_,int> local_428;
  TArrayView<int_const_,int> local_418;
  TArrayView<int_const_,int> local_408;
  TArrayView<int_const_,int> local_3f8;
  TArrayView<int_const_,int> local_3e8;
  TArrayView<int_const_,int> local_3d8;
  TArrayView<int_const_,int> local_3c8;
  TArrayView<int_const_,int> local_3b8;
  TArrayView<int_const_,int> local_3a8;
  TArrayView<int_const_,int> local_398;
  TArrayView<int_const_,int> local_388;
  TArrayView<int_const_,int> local_378;
  TArrayView<int_const_,int> local_368;
  TArrayView<int_const_,int> local_358;
  TArrayView<int_const_,int> local_348;
  TArrayView<int_const_,int> local_338;
  TArrayView<int_const_,int> local_328;
  TArrayView<int_const_,int> local_318;
  TArrayView<int_const_,int> local_308;
  TArrayView<int_const_,int> local_2f8;
  TArrayView<int_const_,int> local_2e8;
  TArrayView<int_const_,int> local_2d8;
  TArrayView<int_const_,int> local_2c8;
  TArrayView<int_const_,int> local_2b8;
  TArrayView<int_const_,int> local_2a8;
  TArrayView<int_const_,int> local_298;
  TArrayView<int_const_,int> local_288;
  TArrayView<int_const_,int> local_278;
  TArrayView<int_const_,int> local_268;
  TArrayView<int_const_,int> local_258;
  TArrayView<int_const_,int> local_248;
  TArrayView<int_const_,int> local_238;
  TArrayView<int_const_,int> local_228;
  TArrayView<int_const_,int> local_218;
  TArrayView<int_const_,int> local_208;
  TArrayView<int_const_,int> local_1f8;
  TArrayView<int_const_,int> local_1e8;
  TArrayView<int_const_,int> local_1d8;
  TArrayView<int_const_,int> local_1c8;
  TArrayView<int_const_,int> local_1b8;
  TArrayView<int_const_,int> local_1a8;
  TArrayView<int_const_,int> local_198;
  TArrayView<int_const_,int> local_188;
  TArrayView<int_const_,int> local_178;
  TArrayView<int_const_,int> local_168;
  TArrayView<int_const_,int> local_158;
  TArrayView<int_const_,int> local_148;
  TArrayView<int_const_,int> local_138;
  TArrayView<int_const_,int> local_128;
  int local_118 [4];
  int local_108 [4];
  int local_f8 [4];
  int local_e8 [4];
  int local_d8 [4];
  int local_c8 [4];
  int local_b8 [4];
  int local_a8 [4];
  int local_98 [4];
  undefined1 local_88 [16];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1108;
  pFVar21 = (FScriptContainerElement *)0x0;
  local_f90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10b8 = &local_f90;
  local_f90.ArrayNum = 0;
  local_f90.ArrayMax = 0;
  local_10b0 = &local_f80;
  local_f80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1058 = &local_f90;
  local_f80.ArrayNum = 0;
  local_f80.ArrayMax = 0;
  local_1050 = &local_f80;
  local_1048 = &local_10a8;
  local_dd0 = &local_f80;
  local_dc8 = &local_758;
  local_dc0 = &local_730;
  local_db8 = &local_e20;
  local_db0 = &local_10a8;
  local_da8 = &local_e30;
  local_da0 = local_88;
  local_d98 = &local_e40;
  local_d90 = &local_e50;
  local_d88 = &local_e60;
  local_d80 = local_1070;
  local_d78 = &local_e10;
  local_d70 = &local_df0;
  local_d68 = &local_e00;
  local_758 = (void *)0x0;
  uStack_750 = 0;
  local_738 = 0;
  local_748 = 0;
  pvStack_740 = (void *)0x0;
  local_710 = 0;
  local_730 = (void *)0x0;
  uStack_728 = 0;
  local_e20 = (void *)0x0;
  local_720 = 0;
  pvStack_718 = (void *)0x0;
  local_e18 = 0;
  local_10a8.Data = (FScriptContainerElement *)0x0;
  lStack_10a0 = 0;
  local_1098 = 0;
  local_e30 = (void *)0x0;
  local_e28 = 0;
  local_e40 = (void *)0x0;
  local_e38 = 0;
  local_e50 = (void *)0x0;
  local_e48 = 0;
  local_e60 = (void *)0x0;
  local_e58 = 0;
  local_e10 = (void *)0x0;
  local_e08 = 0;
  local_df0 = (void *)0x0;
  local_de8 = 0;
  local_e00 = (void *)0x0;
  local_df8 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_dd8 = this;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_cf8 = 0;
  uStack_cf0 = 0;
  local_6a8._8_8_ = (ulonglong)uStack_cec << 0x20;
  local_6a8.DataPtr = (int *)0x0;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_6a8);
  local_ce8 = local_1040 + 0x21;
  uStack_ce0 = 1;
  local_698._12_4_ = uStack_cdc;
  local_698.ArrayNum = 1;
  local_1040[0x21] = 0;
  local_698.DataPtr = local_ce8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_698);
  local_cd8 = local_1040 + 0x28;
  uStack_cd0 = 1;
  local_688._12_4_ = uStack_ccc;
  local_688.ArrayNum = 1;
  local_1040[0x28] = 1;
  local_688.DataPtr = local_cd8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_688);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,L"Each node depends on the previous one");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_cc8 = local_1040 + 0x29;
  uStack_cc0 = 1;
  local_678._12_4_ = uStack_cbc;
  local_678.ArrayNum = 1;
  local_1040[0x29] = 1;
  local_678.DataPtr = local_cc8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_678);
  local_cb8 = local_1040 + 0x2a;
  uStack_cb0 = 1;
  local_668._12_4_ = uStack_cac;
  local_668.ArrayNum = 1;
  local_1040[0x2a] = 2;
  local_668.DataPtr = local_cb8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_668);
  local_ca8 = 0;
  uStack_ca0 = 0;
  local_658._8_8_ = (ulonglong)uStack_c9c << 0x20;
  local_658.DataPtr = (int *)0x0;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_658);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,L"Each node depends on the next one");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_c98 = local_1040 + 0x2b;
  uStack_c90 = 1;
  local_648._12_4_ = uStack_c8c;
  local_648.ArrayNum = 1;
  local_1040[0x2b] = 0;
  local_648.DataPtr = local_c98;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_648);
  local_c88 = local_ef0 + 0x16;
  uStack_c80 = 2;
  local_708._12_4_ = uStack_c7c;
  local_708.ArrayNum = 2;
  local_ef0[0x16] = 0;
  local_ef0[0x17] = 1;
  local_708.DataPtr = local_c88;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_708);
  local_c78 = local_ef0 + 0x18;
  uStack_c70 = 2;
  local_628._12_4_ = uStack_c6c;
  local_628.ArrayNum = 2;
  local_ef0[0x18] = 1;
  local_ef0[0x19] = 2;
  local_628.DataPtr = local_c78;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_628);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()(&local_dd8,L"SelfReferences")
  ;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_c68 = local_ef0 + 0x1a;
  uStack_c60 = 2;
  local_618._12_4_ = uStack_c5c;
  local_618.ArrayNum = 2;
  local_ef0[0x1a] = 5;
  local_ef0[0x1b] = 7;
  local_618.DataPtr = local_c68;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,6,&local_618);
  local_c58 = local_ef0 + 0x1c;
  uStack_c50 = 2;
  local_608._12_4_ = uStack_c4c;
  local_608.ArrayNum = 2;
  local_ef0[0x1c] = 0;
  local_ef0[0x1d] = 1;
  local_608.DataPtr = local_c58;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,5,&local_608);
  local_c48 = local_1040;
  uStack_c40 = 1;
  local_5f8._12_4_ = uStack_c3c;
  local_5f8.ArrayNum = 1;
  local_1040[0] = 8;
  local_5f8.DataPtr = local_c48;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,7,&local_5f8);
  local_c38 = local_1040 + 1;
  uStack_c30 = 1;
  local_5e8._12_4_ = uStack_c2c;
  local_5e8.ArrayNum = 1;
  local_1040[1] = 3;
  local_5e8.DataPtr = local_c38;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_5e8);
  local_c28 = local_ef0 + 0x1e;
  uStack_c20 = 2;
  local_5d8._12_4_ = uStack_c1c;
  local_5d8.ArrayNum = 2;
  local_ef0[0x1e] = 3;
  local_ef0[0x1f] = 4;
  local_5d8.DataPtr = local_c28;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_5d8);
  local_c18 = local_1040 + 2;
  uStack_c10 = 1;
  local_5c8._12_4_ = uStack_c0c;
  local_5c8.ArrayNum = 1;
  local_1040[2] = 9;
  local_5c8.DataPtr = local_c18;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,8,&local_5c8);
  local_c08 = local_1040 + 3;
  local_1040[3] = 2;
  uStack_c00 = 1;
  local_5b8._12_4_ = uStack_bfc;
  local_5b8.ArrayNum = 1;
  local_5b8.DataPtr = local_c08;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_5b8);
  local_bf8 = local_1040 + 4;
  uStack_bf0 = 1;
  local_5a8._12_4_ = uStack_bec;
  local_5a8.ArrayNum = 1;
  local_1040[4] = 9;
  local_5a8.DataPtr = local_bf8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,4,&local_5a8);
  local_be8 = local_1040 + 5;
  uStack_be0 = 1;
  local_598._12_4_ = uStack_bdc;
  local_598.ArrayNum = 1;
  local_1040[5] = 2;
  local_598.DataPtr = local_be8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,9,&local_598);
  local_bd8 = 0;
  uStack_bd0 = 0;
  local_588._8_8_ = (ulonglong)uStack_bcc << 0x20;
  local_588.DataPtr = (int *)0x0;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_588);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,L"SketchedOutExample1");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_bc8 = local_ef0 + 0x20;
  uStack_bc0 = 2;
  local_578._12_4_ = uStack_bbc;
  local_578.ArrayNum = 2;
  local_ef0[0x20] = 0;
  local_ef0[0x21] = 1;
  local_578.DataPtr = local_bc8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_578);
  local_bb8 = local_ef0 + 0x22;
  uStack_bb0 = 2;
  local_638._12_4_ = uStack_bac;
  local_638.ArrayNum = 2;
  local_ef0[0x22] = 0;
  local_ef0[0x23] = 1;
  local_638.DataPtr = local_bb8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_638);
  local_ba8 = local_f70;
  uStack_ba0 = 2;
  local_568._12_4_ = uStack_b9c;
  local_568.ArrayNum = 2;
  local_f70[0] = 0;
  local_f70[1] = 1;
  local_568.DataPtr = local_ba8;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_568);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()(&local_dd8,L"Simple cycle");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_b98 = local_1040 + 6;
  uStack_b90 = 1;
  local_558._12_4_ = uStack_b8c;
  local_558.ArrayNum = 1;
  local_1040[6] = 1;
  local_558.DataPtr = local_b98;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_558);
  local_b88 = local_98;
  uStack_b80 = 3;
  local_548._12_4_ = uStack_b7c;
  local_548.ArrayNum = 3;
  local_98[0] = 0;
  local_98[1] = 1;
  local_98[2] = 2;
  local_548.DataPtr = local_b88;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_548);
  local_b78 = local_f70 + 2;
  uStack_b70 = 2;
  local_538._12_4_ = uStack_b6c;
  local_538.ArrayNum = 2;
  local_f70[2] = 2;
  local_f70[3] = 0;
  local_538.DataPtr = local_b78;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_538);
  local_b68 = local_118;
  uStack_b60 = 3;
  local_528._12_4_ = uStack_b5c;
  local_528.ArrayNum = 3;
  local_118[0] = 0;
  local_118[1] = 1;
  local_118[2] = 2;
  local_528.DataPtr = local_b68;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_528);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,L"Short cycle in a long cycle");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_b58 = local_1040 + 7;
  uStack_b50 = 1;
  local_518._12_4_ = uStack_b4c;
  local_518.ArrayNum = 1;
  local_1040[7] = 1;
  local_518.DataPtr = local_b58;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_518);
  local_b48 = local_f70 + 4;
  uStack_b40 = 2;
  local_508._12_4_ = uStack_b3c;
  local_508.ArrayNum = 2;
  local_f70[4] = 0;
  local_f70[5] = 2;
  local_508.DataPtr = local_b48;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_508);
  local_b38 = local_1040 + 8;
  uStack_b30 = 1;
  local_2b8._12_4_ = uStack_b2c;
  local_2b8.ArrayNum = 1;
  local_1040[8] = 3;
  local_2b8.DataPtr = local_b38;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_2b8);
  local_b28 = 0;
  uStack_b20 = 0;
  local_4f8._8_8_ = (ulonglong)uStack_b1c << 0x20;
  local_4f8.DataPtr = (int *)0x0;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_4f8);
  local_b18 = local_f70 + 6;
  uStack_b10 = 2;
  local_4e8._12_4_ = uStack_b0c;
  local_4e8.ArrayNum = 2;
  local_f70[6] = 0;
  local_f70[7] = 1;
  local_4e8.DataPtr = local_b18;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_4e8);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,
             L"Cycle in the root and with the root cycle depending on a chain of non-cycle verts");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_b08 = 0;
  uStack_b00 = 0;
  local_4d8._8_8_ = (ulonglong)uStack_afc << 0x20;
  local_4d8.DataPtr = (int *)0x0;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_4d8);
  local_af8 = local_1040 + 9;
  uStack_af0 = 1;
  local_4c8._12_4_ = uStack_aec;
  local_4c8.ArrayNum = 1;
  local_1040[9] = 0;
  local_4c8.DataPtr = local_af8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_4c8);
  local_ae8 = local_f70 + 8;
  uStack_ae0 = 2;
  local_4b8._12_4_ = uStack_adc;
  local_4b8.ArrayNum = 2;
  local_f70[8] = 1;
  local_f70[9] = 3;
  local_4b8.DataPtr = local_ae8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_4b8);
  local_ad8 = local_1040 + 10;
  uStack_ad0 = 1;
  local_4a8._12_4_ = uStack_acc;
  local_4a8.ArrayNum = 1;
  local_1040[10] = 2;
  local_4a8.DataPtr = local_ad8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_4a8);
  local_ac8 = local_f70 + 10;
  uStack_ac0 = 2;
  local_498._12_4_ = uStack_abc;
  local_498.ArrayNum = 2;
  local_f70[10] = 2;
  local_f70[0xb] = 3;
  local_498.DataPtr = local_ac8;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_498);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,
             L"Cycle in the root and with the root cycle depending on a chain of non-cycle verts, submitted in reverse"
            );
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_ab8 = local_1040 + 0xb;
  uStack_ab0 = 1;
  local_488._12_4_ = uStack_aac;
  local_488.ArrayNum = 1;
  local_1040[0xb] = 1;
  local_488.DataPtr = local_ab8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_488);
  local_aa8 = local_1040 + 0xc;
  uStack_aa0 = 1;
  local_478._12_4_ = uStack_a9c;
  local_478.ArrayNum = 1;
  local_1040[0xc] = 2;
  local_478.DataPtr = local_aa8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_478);
  local_a98 = local_1040 + 0xd;
  uStack_a90 = 1;
  local_468._12_4_ = uStack_a8c;
  local_468.ArrayNum = 1;
  local_1040[0xd] = 3;
  local_468.DataPtr = local_a98;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_468);
  uStack_a80 = 1;
  local_458._12_4_ = uStack_a7c;
  local_458.ArrayNum = 1;
  local_1040[0xe] = 2;
  local_a88 = local_1040 + 0xe;
  local_458.DataPtr = local_1040 + 0xe;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_458);
  local_a78 = local_f70 + 0xc;
  uStack_a70 = 2;
  local_448._12_4_ = uStack_a6c;
  local_448.ArrayNum = 2;
  local_f70[0xc] = 2;
  local_f70[0xd] = 3;
  local_448.DataPtr = local_a78;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_448);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,L"Cycle at a leaf and a chain from the root depending on that cycle");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_a68 = local_1040 + 0xf;
  uStack_a60 = 1;
  local_438._12_4_ = uStack_a5c;
  local_438.ArrayNum = 1;
  local_1040[0xf] = 1;
  local_438.DataPtr = local_a68;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_438);
  local_a58 = local_1040 + 0x10;
  uStack_a50 = 1;
  local_428._12_4_ = uStack_a4c;
  local_428.ArrayNum = 1;
  local_1040[0x10] = 0;
  local_428.DataPtr = local_a58;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_428);
  local_a48 = local_1040 + 0x11;
  uStack_a40 = 1;
  local_418._12_4_ = uStack_a3c;
  local_418.ArrayNum = 1;
  local_1040[0x11] = 1;
  local_418.DataPtr = local_a48;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_418);
  local_a38 = local_1040 + 0x12;
  uStack_a30 = 1;
  local_408._12_4_ = uStack_a2c;
  local_408.ArrayNum = 1;
  local_1040[0x12] = 2;
  local_408.DataPtr = local_a38;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_408);
  local_a28 = local_f70 + 0xe;
  uStack_a20 = 2;
  local_3f8._12_4_ = uStack_a1c;
  local_3f8.ArrayNum = 2;
  local_f70[0xe] = 0;
  local_f70[0xf] = 1;
  local_3f8.DataPtr = local_a28;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_3f8);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,
             L"Cycle in the root and with the root cycle depending on a chain of non-cycle verts");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_a18 = local_1040 + 0x13;
  uStack_a10 = 1;
  local_3e8._12_4_ = uStack_a0c;
  local_3e8.ArrayNum = 1;
  local_1040[0x13] = 1;
  local_3e8.DataPtr = local_a18;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_3e8);
  local_a08 = local_f70 + 0x10;
  uStack_a00 = 2;
  local_3d8._12_4_ = uStack_9fc;
  local_3d8.ArrayNum = 2;
  local_f70[0x10] = 2;
  local_f70[0x11] = 3;
  local_3d8.DataPtr = local_a08;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_3d8);
  local_9f8 = local_f70 + 0x12;
  uStack_9f0 = 2;
  local_3c8._12_4_ = uStack_9ec;
  local_3c8.ArrayNum = 2;
  local_f70[0x12] = 1;
  local_f70[0x13] = 3;
  local_3c8.DataPtr = local_9f8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_3c8);
  local_9e8 = local_f70 + 0x14;
  uStack_9e0 = 2;
  local_3b8._12_4_ = uStack_9dc;
  local_3b8.ArrayNum = 2;
  local_f70[0x14] = 1;
  local_f70[0x15] = 2;
  local_3b8.DataPtr = local_9e8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_3b8);
  local_9d8 = local_108;
  uStack_9d0 = 3;
  local_3a8._12_4_ = uStack_9cc;
  local_3a8.ArrayNum = 3;
  local_108[0] = 1;
  local_108[1] = 2;
  local_108[2] = 3;
  local_3a8.DataPtr = local_9d8;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_3a8);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,L"Vertex dependent upon a cycle");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_9c8 = local_1040 + 0x14;
  uStack_9c0 = 1;
  local_398._12_4_ = uStack_9bc;
  local_398.ArrayNum = 1;
  local_1040[0x14] = 1;
  local_398.DataPtr = local_9c8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_398);
  local_9b8 = local_1040 + 0x15;
  uStack_9b0 = 1;
  local_388._12_4_ = uStack_9ac;
  local_388.ArrayNum = 1;
  local_1040[0x15] = 2;
  local_388.DataPtr = local_9b8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_388);
  local_9a8 = local_f70 + 0x16;
  uStack_9a0 = 2;
  local_378._12_4_ = uStack_99c;
  local_378.ArrayNum = 2;
  local_f70[0x16] = 3;
  local_f70[0x17] = 5;
  local_378.DataPtr = local_9a8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_378);
  local_998 = local_1040 + 0x16;
  uStack_990 = 1;
  local_368._12_4_ = uStack_98c;
  local_368.ArrayNum = 1;
  local_1040[0x16] = 1;
  local_368.DataPtr = local_998;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_368);
  local_988 = local_1040 + 0x17;
  uStack_980 = 1;
  local_358._12_4_ = uStack_97c;
  local_358.ArrayNum = 1;
  local_1040[0x17] = 5;
  local_358.DataPtr = local_988;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,4,&local_358);
  local_978 = local_1040 + 0x18;
  uStack_970 = 1;
  local_348._12_4_ = uStack_96c;
  local_348.ArrayNum = 1;
  local_1040[0x18] = 6;
  local_348.DataPtr = local_978;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,5,&local_348);
  local_968 = local_1040 + 0x19;
  uStack_960 = 1;
  local_338._12_4_ = uStack_95c;
  local_338.ArrayNum = 1;
  local_1040[0x19] = 4;
  local_338.DataPtr = local_968;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,6,&local_338);
  local_958 = local_f8;
  uStack_950 = 3;
  local_328._12_4_ = uStack_94c;
  local_328.ArrayNum = 3;
  local_f8[0] = 1;
  local_f8[1] = 2;
  local_f8[2] = 3;
  local_328.DataPtr = local_958;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_328);
  local_948 = local_e8;
  uStack_940 = 3;
  local_318._12_4_ = uStack_93c;
  local_318.ArrayNum = 3;
  local_e8[0] = 4;
  local_e8[1] = 5;
  local_e8[2] = 6;
  local_318.DataPtr = local_948;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_318);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,L"One cycle dependent upon another");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_938 = local_f70 + 0x18;
  uStack_930 = 2;
  local_308._12_4_ = uStack_92c;
  local_308.ArrayNum = 2;
  local_f70[0x18] = 1;
  local_f70[0x19] = 3;
  local_308.DataPtr = local_938;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_308);
  local_928 = local_1040 + 0x1a;
  uStack_920 = 1;
  local_2f8._12_4_ = uStack_91c;
  local_2f8.ArrayNum = 1;
  local_1040[0x1a] = 2;
  local_2f8.DataPtr = local_928;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_2f8);
  local_918 = local_f70 + 0x1a;
  uStack_910 = 2;
  local_2e8._12_4_ = uStack_90c;
  local_2e8.ArrayNum = 2;
  local_f70[0x1a] = 1;
  local_f70[0x1b] = 5;
  local_2e8.DataPtr = local_918;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_2e8);
  local_908 = local_1040 + 0x1b;
  uStack_900 = 1;
  local_2d8._12_4_ = uStack_8fc;
  local_2d8.ArrayNum = 1;
  local_1040[0x1b] = 4;
  local_2d8.DataPtr = local_908;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_2d8);
  local_8f8 = local_1040 + 0x1c;
  uStack_8f0 = 1;
  local_2c8._12_4_ = uStack_8ec;
  local_2c8.ArrayNum = 1;
  local_1040[0x1c] = 3;
  local_2c8.DataPtr = local_8f8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,4,&local_2c8);
  local_8e8 = local_1040 + 0x1d;
  uStack_8e0 = 1;
  local_6b8._12_4_ = uStack_8dc;
  local_6b8.ArrayNum = 1;
  local_1040[0x1d] = 0;
  local_6b8.DataPtr = local_8e8;
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,5,&local_6b8);
  local_8d8 = (int *)&local_68;
  local_68 = ___xmm_00000005000000020000000100000000;
  uStack_60 = _UNK_150631e68;
  uStack_8d0 = 4;
  local_2a8._12_4_ = uStack_8cc;
  local_2a8.ArrayNum = 4;
  local_2a8.DataPtr = local_8d8;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_2a8);
  local_8c8 = local_f70 + 0x1c;
  uStack_8c0 = 2;
  local_298._12_4_ = uStack_8bc;
  local_298.ArrayNum = 2;
  local_f70[0x1c] = 3;
  local_f70[0x1d] = 4;
  local_298.DataPtr = local_8c8;
  if (lStack_10a0 == local_1098) {
    lStack_10a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                            (0x810,&local_10a8,&local_1098);
  }
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  lStack_10a0 = lStack_10a0 + 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>(pTVar9,&local_298);
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
            (&local_dd8,L"MutuallyReachableSet Problem1");
  `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
  local_1080.Data = (FScriptContainerElement *)0x0;
  local_1060 = 0;
  local_1078 = 0;
  uStack_1074 = 0;
  local_1068.Data = (FScriptContainerElement *)0x0;
  local_105c = 0;
  local_1088[0] = 0;
  pFVar11 = pFVar21;
  FVar13.Data = pFVar21;
  FVar15.Data = pFVar21;
  pFVar23 = pFVar21;
  do {
    iVar7 = (int)pFVar11;
    uVar6 = (uint)pFVar23;
    if (((FVar13.Data <= (FScriptContainerElement *)local_1088) &&
        ((FScriptContainerElement *)local_1088 < FVar13.Data + (longlong)(int)uStack_1074 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (uVar6 == uStack_1074) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_1080,(int *)&uStack_1074);
      FVar13.Data = local_1080.Data;
    }
    local_1078 = uVar6 + 1;
    pFVar23 = (FScriptContainerElement *)(ulonglong)local_1078;
    *(uint *)(FVar13.Data + (longlong)(int)uVar6 * 4) = local_1088[0];
    if (((FVar15.Data <= (FScriptContainerElement *)local_1088) &&
        ((FScriptContainerElement *)local_1088 < FVar15.Data + (longlong)local_105c * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (iVar7 == local_105c) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_1068,&local_105c);
      FVar15.Data = local_1068.Data;
    }
    local_1060 = iVar7 + 1;
    pFVar11 = (FScriptContainerElement *)(ulonglong)local_1060;
    *(uint *)(FVar15.Data + (longlong)iVar7 * 4) = local_1088[0];
    local_1088[0] = local_1088[0] + 1;
  } while ((int)local_1088[0] < 6);
  local_1090 = 0;
  do {
    uVar12 = 0;
    iVar7 = (int)pFVar23;
    if ((FVar13.Data <= (FScriptContainerElement *)&local_1090) &&
       ((FScriptContainerElement *)&local_1090 < FVar13.Data + (longlong)(int)uStack_1074 * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      pFVar21 = (FScriptContainerElement *)(ulonglong)local_1090;
    }
    if (iVar7 == 0) {
      uVar6 = 0;
      uVar22 = (uint)pFVar21;
      local_ef8 = FVar13.Data;
    }
    else {
      local_108c = *(uint *)FVar13.Data != (uint)pFVar21;
      uVar16 = uVar12;
      uVar19 = uVar12;
      do {
        iVar14 = (int)uVar16;
        uVar12 = uVar12 + 1;
        uVar16 = (ulonglong)(iVar14 + 1U);
        if ((int)(iVar14 + 1U) < iVar7) {
          do {
            if ((bool)local_108c != (*(int *)(FVar13.Data + uVar12 * 4) != (int)pFVar21)) break;
            uVar16 = (ulonglong)((int)uVar16 + 1);
            uVar12 = uVar12 + 1;
          } while ((longlong)uVar12 < (longlong)iVar7);
        }
        iVar20 = (int)uVar16 - iVar14;
        if (local_108c != 0) {
          iVar18 = (int)uVar19;
          if (iVar18 != iVar14) {
            memmove(FVar13.Data + (longlong)iVar18 * 4,FVar13.Data + (longlong)iVar14 * 4,
                    (longlong)iVar20 << 2);
            pFVar21 = (FScriptContainerElement *)(ulonglong)local_1090;
          }
          uVar19 = (ulonglong)(uint)(iVar18 + iVar20);
        }
        uVar6 = (uint)uVar19;
        local_108c = local_108c ^ 1;
      } while ((int)uVar16 < iVar7);
      uVar22 = (uint)pFVar21;
      local_ef8 = FVar13.Data;
      local_1078 = uVar6;
      if (((int)uVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), uVar22 = local_1090, bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (local_10b0->ArrayNum <= (int)uVar22) {
      TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_>::SetNum
                (local_10b0,uVar22 + 1,Default);
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (local_10b8,uVar22 + 1,Default);
    }
    pTVar2 = local_10b8;
    uVar10 = ~uVar22 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar22 < local_10b8->ArrayNum) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    lVar17 = (longlong)(int)uVar22 * 0x10;
    pFVar21 = (pTVar2->AllocatorInstance).Data + lVar17;
    iVar7 = *(int *)(pFVar21 + 0xc);
    *(uint *)&pFVar21[8].field_0x0 = uVar6;
    if ((uVar6 == 0) && (iVar7 == 0)) {
      *(int *)(pFVar21 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,iVar7,(ForAnyElementType *)pFVar21,uVar6,(int *)(pFVar21 + 0xc));
      if (uVar6 != 0) {
        memcpy(*(void **)&pFVar21->field_0x0,local_ef8,(longlong)(int)uVar6 << 2);
      }
    }
    pTVar2 = local_10b8;
    uVar8 = 0;
    if ((int)uVar22 < local_10b8->ArrayNum) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    pFVar21 = (pTVar2->AllocatorInstance).Data;
    local_8b8 = *(undefined8 *)(pFVar21 + lVar17);
    iVar7 = *(int *)(pFVar21 + lVar17 + 8);
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    pTVar3 = local_10b0;
    uVar8 = 0;
    if ((int)uVar22 < local_10b0->ArrayNum) {
      uVar8 = uVar10;
    }
    iStack_8b0 = iVar7;
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    pFVar21 = (pTVar3->AllocatorInstance).Data + lVar17;
    *(undefined8 *)pFVar21 = local_8b8;
    *(ulonglong *)(pFVar21 + 8) = CONCAT44(uStack_8ac,iStack_8b0);
    if (((FVar13.Data <= (FScriptContainerElement *)&local_1090) &&
        ((FScriptContainerElement *)&local_1090 < FVar13.Data + (longlong)(int)uStack_1074 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (uVar6 == uStack_1074) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_1080,(int *)&uStack_1074);
      FVar13.Data = local_1080.Data;
    }
    uVar22 = local_1060;
    FVar15.Data = local_1068.Data;
    local_1078 = uVar6 + 1;
    pFVar23 = (FScriptContainerElement *)(ulonglong)local_1078;
    *(uint *)(FVar13.Data + (longlong)(int)uVar6 * 4) = local_1090;
    local_1090 = local_1090 + 1;
    pFVar21 = (FScriptContainerElement *)(ulonglong)local_1090;
    if (5 < (int)local_1090) {
      local_8a8 = local_1068.Data;
      if (((int)local_1060 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      uStack_8a0 = uVar22;
      local_288._12_4_ = uStack_89c;
      local_288.ArrayNum = uVar22;
      local_288.DataPtr = (int *)local_8a8;
      if (lStack_10a0 == local_1098) {
        lStack_10a0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                (0x810,&local_10a8,&local_1098);
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
      lStack_10a0 = lStack_10a0 + 1;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>
                (pTVar9,&local_288);
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
                (&local_dd8,L"FullyConnectedGraph");
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
      if (FVar13.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
      local_898 = local_ef0;
      uStack_890 = 2;
      local_278._12_4_ = uStack_88c;
      local_278.ArrayNum = 2;
      local_ef0[0] = 1;
      local_ef0[1] = 3;
      local_278.DataPtr = local_898;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_278)
      ;
      local_888 = local_1040 + 0x1e;
      uStack_880 = 1;
      local_268._12_4_ = uStack_87c;
      local_268.ArrayNum = 1;
      local_1040[0x1e] = 2;
      local_268.DataPtr = local_888;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_268)
      ;
      local_878 = local_1040 + 0x1f;
      uStack_870 = 1;
      local_258._12_4_ = uStack_86c;
      local_258.ArrayNum = 1;
      local_1040[0x1f] = 0;
      local_258.DataPtr = local_878;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_258)
      ;
      local_868 = local_1040 + 0x20;
      uStack_860 = 1;
      local_248._12_4_ = uStack_85c;
      local_248.ArrayNum = 1;
      local_1040[0x20] = 4;
      local_248.DataPtr = local_868;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_248)
      ;
      local_858 = local_1040 + 0x27;
      uStack_850 = 1;
      local_238._12_4_ = uStack_84c;
      local_238.ArrayNum = 1;
      local_1040[0x27] = 5;
      local_238.DataPtr = local_858;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,4,&local_238)
      ;
      local_848 = local_ef0 + 2;
      uStack_840 = 2;
      local_228._12_4_ = uStack_83c;
      local_228.ArrayNum = 2;
      local_ef0[2] = 3;
      local_ef0[3] = 8;
      local_228.DataPtr = local_848;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,5,&local_228)
      ;
      local_838 = local_1040 + 0x22;
      uStack_830 = 1;
      local_218._12_4_ = uStack_82c;
      local_218.ArrayNum = 1;
      local_1040[0x22] = 7;
      local_218.DataPtr = local_838;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,6,&local_218)
      ;
      local_828 = local_ef0 + 4;
      uStack_820 = 2;
      local_208._12_4_ = uStack_81c;
      local_208.ArrayNum = 2;
      local_ef0[4] = 1;
      local_ef0[5] = 8;
      local_208.DataPtr = local_828;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,7,&local_208)
      ;
      local_818 = local_1040 + 0x23;
      uStack_810 = 1;
      local_1f8._12_4_ = uStack_80c;
      local_1f8.ArrayNum = 1;
      local_1040[0x23] = 6;
      local_1f8.DataPtr = local_818;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,8,&local_1f8)
      ;
      local_808 = (int *)&local_58;
      uStack_800 = 9;
      local_58 = __xmm_00000003000000020000000100000000;
      uStack_50 = _UNK_150631e08;
      local_38 = 8;
      local_1e8._12_4_ = uStack_7fc;
      local_1e8.ArrayNum = 9;
      local_48 = ___xmm_00000007000000060000000500000004;
      uStack_40 = _UNK_150631eb8;
      local_1e8.DataPtr = local_808;
      if (lStack_10a0 == local_1098) {
        lStack_10a0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                (0x810,&local_10a8,&local_1098);
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
      lStack_10a0 = lStack_10a0 + 1;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>
                (pTVar9,&local_1e8);
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
                (&local_dd8,L"Cycle of cycles");
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(&local_1058);
      local_7f8 = local_ef0 + 6;
      uStack_7f0 = 2;
      local_1d8._12_4_ = uStack_7ec;
      local_1d8.ArrayNum = 2;
      local_ef0[6] = 1;
      local_ef0[7] = 5;
      local_1d8.DataPtr = local_7f8;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,0,&local_1d8)
      ;
      local_7e8 = local_ef0 + 8;
      uStack_7e0 = 2;
      local_1c8._12_4_ = uStack_7dc;
      local_1c8.ArrayNum = 2;
      local_ef0[8] = 0;
      local_ef0[9] = 2;
      local_1c8.DataPtr = local_7e8;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,1,&local_1c8)
      ;
      local_7d8 = local_ef0 + 10;
      uStack_7d0 = 2;
      local_1b8._12_4_ = uStack_7cc;
      local_1b8.ArrayNum = 2;
      local_ef0[10] = 0;
      local_ef0[0xb] = 6;
      local_1b8.DataPtr = local_7d8;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,2,&local_1b8)
      ;
      local_7c8 = local_1040 + 0x24;
      uStack_7c0 = 1;
      local_1a8._12_4_ = uStack_7bc;
      local_1a8.ArrayNum = 1;
      local_1040[0x24] = 5;
      local_1a8.DataPtr = local_7c8;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,3,&local_1a8)
      ;
      local_7b8 = local_d8;
      uStack_7b0 = 3;
      local_198._12_4_ = uStack_7ac;
      local_198.ArrayNum = 3;
      local_d8[0] = 3;
      local_d8[1] = 5;
      local_d8[2] = 8;
      local_198.DataPtr = local_7b8;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,4,&local_198)
      ;
      local_7a8 = local_1040 + 0x25;
      uStack_7a0 = 1;
      local_188._12_4_ = uStack_79c;
      local_188.ArrayNum = 1;
      local_1040[0x25] = 4;
      local_188.DataPtr = local_7a8;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,5,&local_188)
      ;
      local_798 = local_1040 + 0x26;
      local_1040[0x26] = 7;
      uStack_790 = 1;
      local_178._12_4_ = uStack_78c;
      local_178.ArrayNum = 1;
      local_178.DataPtr = local_798;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,6,&local_178)
      ;
      local_788 = local_ef0 + 0xc;
      uStack_780 = 2;
      local_168._12_4_ = uStack_77c;
      local_168.ArrayNum = 2;
      local_ef0[0xc] = 6;
      local_ef0[0xd] = 0xb;
      local_168.DataPtr = local_788;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,7,&local_168)
      ;
      local_778 = local_ef0 + 0xe;
      uStack_770 = 2;
      local_158._12_4_ = uStack_76c;
      local_158.ArrayNum = 2;
      local_ef0[0xe] = 9;
      local_ef0[0xf] = 10;
      local_158.DataPtr = local_778;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,8,&local_158)
      ;
      local_768 = local_ef0 + 0x10;
      uStack_760 = 2;
      local_148._12_4_ = uStack_75c;
      local_148.ArrayNum = 2;
      local_ef0[0x10] = 8;
      local_ef0[0x11] = 10;
      local_148.DataPtr = local_768;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()(&local_10b8,9,&local_148)
      ;
      local_d58 = local_ef0 + 0x12;
      uStack_d50 = 2;
      local_138._12_4_ = uStack_d4c;
      local_138.ArrayNum = 2;
      local_ef0[0x12] = 8;
      local_ef0[0x13] = 9;
      local_138.DataPtr = local_d58;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()
                (&local_10b8,10,&local_138);
      local_d48 = 0;
      uStack_d40 = 0;
      local_128._8_8_ = (ulonglong)uStack_d3c << 0x20;
      local_128.DataPtr = (int *)0x0;
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()
                (&local_10b8,0xb,&local_128);
      local_d38 = local_b8;
      uStack_d30 = 3;
      local_6f8._12_4_ = uStack_d2c;
      local_6f8.ArrayNum = 3;
      local_b8[0] = 0;
      local_b8[1] = 1;
      local_b8[2] = 2;
      local_6f8.DataPtr = local_d38;
      if (lStack_10a0 == local_1098) {
        lStack_10a0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                (0x810,&local_10a8,&local_1098);
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
      lStack_10a0 = lStack_10a0 + 1;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>
                (pTVar9,&local_6f8);
      local_d28 = local_c8;
      uStack_d20 = 3;
      local_6e8._12_4_ = uStack_d1c;
      local_6e8.ArrayNum = 3;
      local_c8[0] = 3;
      local_c8[1] = 4;
      local_c8[2] = 5;
      local_6e8.DataPtr = local_d28;
      if (lStack_10a0 == local_1098) {
        lStack_10a0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                (0x810,&local_10a8,&local_1098);
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
      lStack_10a0 = lStack_10a0 + 1;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>
                (pTVar9,&local_6e8);
      local_d18 = local_ef0 + 0x14;
      uStack_d10 = 2;
      local_6d8._12_4_ = uStack_d0c;
      local_6d8.ArrayNum = 2;
      local_ef0[0x14] = 6;
      local_ef0[0x15] = 7;
      local_6d8.DataPtr = local_d18;
      if (lStack_10a0 == local_1098) {
        lStack_10a0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                (0x810,&local_10a8,&local_1098);
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
      lStack_10a0 = lStack_10a0 + 1;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>
                (pTVar9,&local_6d8);
      local_d08 = local_a8;
      uStack_d00 = 3;
      local_6c8._12_4_ = uStack_cfc;
      local_6c8.ArrayNum = 3;
      local_a8[0] = 8;
      local_a8[1] = 9;
      local_a8[2] = 10;
      local_6c8.DataPtr = local_d08;
      if (lStack_10a0 == local_1098) {
        lStack_10a0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                (0x810,&local_10a8,&local_1098);
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_10a8.Data + lStack_10a0 * 0x10);
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
      lStack_10a0 = lStack_10a0 + 1;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_&>
                (pTVar9,&local_6c8);
      `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()
                (&local_dd8,L"Tree of cycles");
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_e00 != (void *)0x0) {
        FMemory::Free(local_e00);
      }
      if (local_df0 != (void *)0x0) {
        FMemory::Free(local_df0);
      }
      if (local_e10 != (void *)0x0) {
        FMemory::Free(local_e10);
      }
      if (local_e60 != (void *)0x0) {
        FMemory::Free(local_e60);
      }
      if (local_e50 != (void *)0x0) {
        FMemory::Free(local_e50);
      }
      if (local_e40 != (void *)0x0) {
        FMemory::Free(local_e40);
      }
      if (local_e30 != (void *)0x0) {
        FMemory::Free(local_e30);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,__int64>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_10a8.Data,lStack_10a0);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_10a8.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_10a8.Data);
      }
      if (local_e20 != (void *)0x0) {
        FMemory::Free(local_e20);
      }
      if (pvStack_718 != (void *)0x0) {
        FMemory::Free(pvStack_718);
      }
      if (local_730 != (void *)0x0) {
        FMemory::Free(local_730);
      }
      if (pvStack_740 != (void *)0x0) {
        FMemory::Free(pvStack_740);
      }
      if (local_758 != (void *)0x0) {
        FMemory::Free(local_758);
      }
      if (local_f80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f80.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_f90.AllocatorInstance.Data,
                 local_f90.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_f90.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_f90.AllocatorInstance.Data);
      }
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 1414cc9c0

FString * __thiscall
FCondensationGraphTest_Core::GetBeautifiedTestName
          (FCondensationGraphTest_Core *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x24,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x24,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x24,
             "System.Core.Graph.CondensationGraph",0x24);
  return __return_storage_ptr__;
}

// operator() @ 141593080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FCondensationGraphTest_Core::RunTest'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TArrayView<int_const_,int> *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ForAnyElementType *pFVar12;
  longlong lVar13;
  undefined4 uStack_2c;
  
  if ((*(TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> **)((longlong)this + 8))->
      ArrayNum <= param_1) {
    TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_>::SetNum
              (*(TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 8),param_1 + 1,Default);
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
              (*(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> **)this
               ,param_1 + 1,Default);
  }
  plVar5 = *(longlong **)this;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar10 = uVar11;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  lVar13 = (longlong)param_1 * 0x10;
  pFVar12 = (ForAnyElementType *)(*plVar5 + lVar13);
  iVar4 = *(int *)((longlong)&pFVar12[1].Data + 4);
  piVar2 = (int *)((longlong)&pFVar12[1].Data + 4);
  *(int *)&pFVar12[1].Data = iVar3;
  if ((iVar3 == 0) && (iVar4 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,iVar4,pFVar12,iVar3,piVar2);
    if (iVar3 != 0) {
      memcpy(pFVar12->Data,param_2->DataPtr,(longlong)iVar3 << 2);
    }
  }
  plVar5 = *(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar10 = uVar11;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = *plVar5;
  uVar7 = *(undefined8 *)(lVar6 + lVar13);
  iVar3 = *(int *)(lVar6 + 8 + lVar13);
  if ((iVar3 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plVar5 = *(longlong **)((longlong)this + 8);
  uVar10 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar10 = uVar11;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar1 = (undefined8 *)(lVar13 + *plVar5);
  *puVar1 = uVar7;
  puVar1[1] = CONCAT44(uStack_2c,iVar3);
  return;
}

// operator() @ 1415a47e0

void __thiscall `FCondensationGraphTest_Core::RunTest'::__l2::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  
  pFVar3 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (*(int *)((longlong)&pFVar3[1].Data + 4) < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar3->Data,*(int *)&pFVar3[1].Data);
    *(undefined4 *)&pFVar3[1].Data = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,pFVar3,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar3->Data,*(int *)&pFVar3[1].Data);
    *(undefined4 *)&pFVar3[1].Data = 0;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar2 = *(int *)((longlong)&pFVar3[1].Data + 4);
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
  }
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
  if ((longlong)pFVar4[2].Data < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,__int64>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar4->Data,(long64)pFVar4[1].Data);
    pFVar4[1].Data = (FScriptContainerElement *)0x0;
    if (pFVar4[2].Data != (FScriptContainerElement *)0x0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0x10,8,0,pFVar4,0,(long64 *)(pFVar4 + 2));
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,__int64>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar4->Data,(long64)pFVar4[1].Data);
    pFVar4[1].Data = (FScriptContainerElement *)0x0;
  }
  return;
}

// operator() @ 1415a48e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
`FCondensationGraphTest_Core::RunTest'::__l2::<lambda_4>::operator()
          (void *this,FString *__return_storage_ptr__,TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  void *pvVar4;
  FString *pFVar5;
  int *piVar6;
  undefined1 auStack_288 [32];
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  pvVar4 = FGenericPlatformString::Memcpy(local_238,L"[",2);
  piVar6 = param_1->DataPtr;
  bVar3 = true;
  local_258.CurPos = (wchar_t *)((longlong)pvVar4 + 2);
  piVar1 = piVar6 + param_1->ArrayNum;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    if (bVar3) {
      bVar3 = false;
    }
    else {
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      *local_258.CurPos = L',';
      local_258.CurPos = local_258.CurPos + 1;
    }
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"%d");
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  pvVar4 = FGenericPlatformString::Memcpy(local_258.CurPos,L"]",2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.CurPos = (wchar_t *)((longlong)pvVar4 + 2);
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_268,local_258.Base,
                      (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  if (__return_storage_ptr__ != pFVar5) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return __return_storage_ptr__;
}

// operator() @ 1415a4ac0

/* WARNING: Removing unreachable block (ram,0x0001415a54b2) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FCondensationGraphTest_Core::RunTest'::__l2::<lambda_5>::operator()(void *this,wchar_t *param_1)

{
  FMappingManyToOne *pFVar1;
  FMappingOneToMany *pFVar2;
  FGraph *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType *pFVar8;
  int *piVar9;
  void *pvVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong64 uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  ForElementType<unsigned_int> this_00;
  longlong lVar26;
  ForAnyElementType *pFVar27;
  longlong lVar28;
  undefined8 *puVar29;
  uint *puVar30;
  ulonglong uVar31;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_228;
  uint local_224;
  uint *local_220;
  undefined1 local_218;
  char local_217;
  undefined1 local_216 [2];
  uint local_214;
  uint *local_210;
  uint local_208;
  uint local_204;
  uint *local_200;
  int local_1f8;
  uint *local_1f0;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  TArrayView<int_const_,int> *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  int *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  int *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FString local_158;
  FString local_148;
  FString local_138;
  int *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  int *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FString local_108;
  FString local_f8;
  TArrayView<TArrayView<int_const_,int>_const_,int> local_e8;
  TArrayView<int_const_,int> local_d8;
  TArrayView<int_const_,int> local_c8;
  FString local_b8;
  FString local_a8;
  TArrayView<int_const_,int> local_98;
  TArrayView<int_const_,int> local_88;
  FString local_78;
  FString local_68;
  uint *local_58;
  undefined8 uStack_50;
  
  pFVar1 = *(FMappingManyToOne **)((longlong)this + 0x20);
  pFVar2 = *(FMappingOneToMany **)((longlong)this + 0x18);
  pFVar3 = *(FGraph **)((longlong)this + 0x10);
  local_1c8 = (TArrayView<int_const_,int> *)**(undefined8 **)((longlong)this + 8);
  iVar13 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  if ((iVar13 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_e8._12_4_ = uStack_1bc;
  local_e8.ArrayNum = iVar13;
  local_e8.DataPtr = local_1c8;
  iStack_1c0 = iVar13;
  local_217 = UE::Graph::TryConstructCondensationGraph(&local_e8,pFVar3,pFVar2,pFVar1,Shrink);
  if ((bool)local_217 == (*(longlong *)(*(longlong *)((longlong)this + 0x28) + 8) != 0)) {
    this_00 = *(ForElementType<unsigned_int> *)((longlong)this + 0x38);
    uVar22 = *(uint *)(*(longlong *)((longlong)this + 8) + 8);
    iVar13 = *(int *)((ForElementType<unsigned_int> *)((longlong)this_00 + 0x18))->InlineData;
    local_1f8 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x20);
    *(uint *)((ForElementType<unsigned_int> *)((longlong)this_00 + 0x18))->InlineData = uVar22;
    local_224 = uVar22;
    if (*(int *)((longlong)this_00 + 0x1c) < (int)uVar22) {
      uVar21 = uVar22 + 0x1f >> 5;
      if (uVar21 < 5) {
        iVar14 = 4;
      }
      else {
        uVar16 = FMemory::QuantizeSize((ulonglong)uVar21 << 2,0);
        iVar14 = (int)(uVar16 >> 2);
        if (iVar14 < (int)uVar21) {
          iVar14 = 0x7fffffff;
        }
      }
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this_00,iVar13 + 0x1fU >> 5,iVar14,4);
      *(int *)((longlong)this_00 + 0x1c) = iVar14 << 5;
    }
    iVar13 = *(int *)((ForElementType<unsigned_int> *)((longlong)this_00 + 0x18))->InlineData;
    uVar19 = iVar13 >> 0x1f & 0x1f;
    uVar21 = iVar13 + uVar19;
    iVar13 = (uVar21 & 0x1f) - uVar19;
    if (iVar13 != 0) {
      if (*(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        this_00 = *(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10);
      }
      puVar30 = (uint *)((longlong)this_00 + (longlong)((int)uVar21 >> 5) * 4);
      *puVar30 = *puVar30 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x40),uVar22,No);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x38),0,uVar22,false);
    local_200 = *(uint **)((longlong)this + 0x18);
    iVar13 = 0;
    local_214 = local_200[8];
    uVar18 = (ulonglong)(int)local_214;
    puVar30 = *(uint **)(local_200 + 6);
    puVar25 = puVar30 + uVar18 * 4;
    local_210 = puVar25;
    while( true ) {
      local_220 = puVar30;
      if (local_200[8] != (uint)uVar18) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TArrayView<int_const_,int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar30 == puVar25) break;
      puVar23 = *(uint **)puVar30;
      uStack_50 = *(undefined8 *)(puVar30 + 2);
      puVar24 = puVar23 + (int)*(undefined8 *)(puVar30 + 2);
      local_58 = puVar23;
      for (; puVar23 != puVar24; puVar23 = puVar23 + 1) {
        uVar22 = *puVar23;
        lVar26 = *(longlong *)((longlong)this + 0x38);
        if ((((int)uVar22 < 0) || (*(int *)(lVar26 + 0x18) <= (int)uVar22)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)(lVar26 + 0x10) != 0) {
          lVar26 = *(longlong *)(lVar26 + 0x10);
        }
        uVar19 = 1 << ((byte)uVar22 & 0x1f);
        uVar21 = uVar22;
        if ((int)uVar22 < 0) {
          uVar21 = uVar22 + 0x1f;
        }
        lVar28 = (longlong)((int)uVar21 >> 5) * 4;
        if ((*(uint *)(lVar28 + lVar26) & uVar19) != 0) {
          plVar4 = *(longlong **)this;
          pcVar11 = *(code **)(*plVar4 + 0x28);
          uVar21 = 0;
          if ((int)uVar22 < *(int *)(*(longlong *)((longlong)this + 0x40) + 8)) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          ::FString::PrintfImpl
                    (&local_1a8,
                     L"Failed for case \"%s\": OutVertexToInVertices has the same invertex %d in both outvertex %d and outvertex %d."
                    );
          (*pcVar11)(plVar4,&local_1a8,0);
          goto LAB_1415a67e1;
        }
        lVar26 = *(longlong *)((longlong)this + 0x38);
        if ((((int)uVar22 < 0) || (*(int *)(lVar26 + 0x18) <= (int)uVar22)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)(lVar26 + 0x10) != 0) {
          lVar26 = *(longlong *)(lVar26 + 0x10);
        }
        puVar30 = (uint *)(lVar28 + lVar26);
        *puVar30 = *puVar30 | uVar19;
        plVar4 = *(longlong **)((longlong)this + 0x40);
        uVar21 = 0;
        if ((int)uVar22 < (int)plVar4[1]) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(int *)(*plVar4 + (longlong)(int)uVar22 * 4) = iVar13;
        puVar30 = local_220;
        puVar25 = local_210;
      }
      iVar13 = iVar13 + 1;
      uVar18 = (ulonglong)local_214;
      puVar30 = puVar30 + 4;
    }
    puVar30 = (uint *)(longlong)(int)local_224;
    uVar22 = 0;
    local_210 = puVar30;
    if (0 < (int)local_224) {
      lVar26 = 0;
      do {
        lVar28 = *(longlong *)((longlong)this + 0x38);
        if ((((int)uVar22 < 0) || (*(int *)(lVar28 + 0x18) <= (int)uVar22)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)(lVar28 + 0x10) != 0) {
          lVar28 = *(longlong *)(lVar28 + 0x10);
        }
        uVar21 = uVar22;
        if ((int)uVar22 < 0) {
          uVar21 = uVar22 + 0x1f;
        }
        if ((*(uint *)(lVar28 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar22 & 0x1f) & 1) == 0) {
          plVar4 = *(longlong **)this;
          pcVar11 = *(code **)(*plVar4 + 0x28);
          ::FString::PrintfImpl
                    (&local_188,
                     L"Failed for case \"%s\": OutVertexToInVertices is missing invertex %d; it did not assign that vertex to any outvertex."
                    );
          (*pcVar11)(plVar4,&local_188,0);
          local_1a8.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
          goto LAB_1415a67e1;
        }
        plVar4 = *(longlong **)((longlong)this + 0x40);
        plVar5 = *(longlong **)((longlong)this + 0x20);
        uVar19 = ~uVar22 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar22 < (int)plVar4[1]) {
          uVar21 = uVar19;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar28 = *plVar4;
        uVar21 = 0;
        if ((int)uVar22 < (int)plVar5[1]) {
          uVar21 = uVar19;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(int *)(lVar28 + lVar26 * 4) != *(int *)(*plVar5 + lVar26 * 4)) {
          plVar4 = *(longlong **)this;
          pcVar11 = *(code **)(*plVar4 + 0x28);
          uVar21 = 0;
          if ((int)uVar22 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8)) {
            uVar21 = uVar19;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar21 = 0;
          if ((int)uVar22 < *(int *)(*(longlong *)((longlong)this + 0x40) + 8)) {
            uVar21 = uVar19;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          ::FString::PrintfImpl
                    (&local_198,
                     L"Failed for case \"%s\": OutVertexToInVertices has outvertex %d <- invertex %d, but InVertexToOutVertex has invertex %d -> outvertex %d."
                    );
          (*pcVar11)(plVar4,&local_198);
          puVar30 = local_210;
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
            puVar30 = local_210;
          }
        }
        uVar22 = uVar22 + 1;
        lVar26 = lVar26 + 1;
      } while (lVar26 < (longlong)puVar30);
    }
    uVar22 = local_224;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x30),local_224,No);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x38),0,uVar22,false);
    local_200 = *(uint **)((longlong)this + 0x28);
    iVar13 = 0;
    local_1f0 = *(uint **)(local_200 + 2);
    puVar30 = *(uint **)local_200;
    local_220 = puVar30 + (longlong)local_1f0 * 4;
    while( true ) {
      puVar25 = local_220;
      if (*(uint **)(local_200 + 2) != local_1f0) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,__int64,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (puVar30 == puVar25) break;
      puVar24 = *(uint **)puVar30;
      uVar22 = puVar30[2];
      puVar25 = puVar24 + (int)uVar22;
      while( true ) {
        if (puVar30[2] != uVar22) {
          local_218 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_218)
          ;
        }
        if (puVar24 == puVar25) break;
        uVar21 = *puVar24;
        lVar26 = *(longlong *)((longlong)this + 0x38);
        if ((((int)uVar21 < 0) || (*(int *)(lVar26 + 0x18) <= (int)uVar21)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)(lVar26 + 0x10) != 0) {
          lVar26 = *(longlong *)(lVar26 + 0x10);
        }
        uVar19 = uVar21;
        if ((int)uVar21 < 0) {
          uVar19 = uVar21 + 0x1f;
        }
        puVar23 = (uint *)(lVar26 + (longlong)((int)uVar19 >> 5) * 4);
        *puVar23 = *puVar23 | 1 << ((byte)uVar21 & 0x1f);
        plVar4 = *(longlong **)((longlong)this + 0x30);
        uVar19 = 0;
        if ((int)uVar21 < (int)plVar4[1]) {
          uVar19 = ~uVar21 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar24 = puVar24 + 1;
        *(int *)(*plVar4 + (longlong)(int)uVar21 * 4) = iVar13;
      }
      iVar13 = iVar13 + 1;
      puVar30 = puVar30 + 4;
    }
    uVar18 = 0;
    if (0 < (longlong)local_210) {
      uVar22 = 1;
      uVar31 = uVar18;
      do {
        lVar26 = *(longlong *)((longlong)this + 0x38);
        uVar21 = (uint)uVar18;
        if ((((int)uVar21 < 0) || (*(int *)(lVar26 + 0x18) <= (int)uVar21)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)(lVar26 + 0x10) != 0) {
          lVar26 = *(longlong *)(lVar26 + 0x10);
        }
        uVar19 = uVar21;
        if ((int)uVar21 < 0) {
          uVar19 = uVar21 + 0x1f;
        }
        if ((*(uint *)(lVar26 + (longlong)((int)uVar19 >> 5) * 4) & uVar22) == 0) {
          plVar4 = *(longlong **)((longlong)this + 0x30);
          uVar19 = 0;
          if ((int)uVar21 < (int)plVar4[1]) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_1e0 = CONCAT44(local_1e0._4_4_,1);
          *(int *)(*plVar4 + uVar31 * 4) = iVar13;
          pFVar6 = *(ForAnyElementType **)((longlong)this + 0x28);
          local_1e8.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,0,&local_1e8,1,(int *)((longlong)&local_1e0 + 4));
          *(uint *)local_1e8.Data = uVar21;
          if (((pFVar6->Data <= (FScriptContainerElement *)&local_1e8) &&
              ((FScriptContainerElement *)&local_1e8 <
               pFVar6->Data + (longlong)pFVar6[2].Data * 0x10)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar17 = pFVar6[1].Data;
          if (pFVar17 == pFVar6[2].Data) {
            pFVar17 = (FScriptContainerElement *)
                      UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                (0x810,pFVar6,(long64 *)(pFVar6 + 2));
          }
          pFVar6[1].Data = pFVar17 + 1;
          pFVar7 = pFVar6->Data;
          *(undefined8 *)(pFVar7 + (longlong)pFVar17 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar7 + (longlong)pFVar17 * 0x10) = local_1e8.Data;
          local_1e8.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(pFVar7 + (longlong)pFVar17 * 0x10 + 8) = (undefined4)local_1e0;
          *(undefined4 *)(pFVar7 + (longlong)pFVar17 * 0x10 + 0xc) = local_1e0._4_4_;
          local_1e0 = 0;
          iVar13 = iVar13 + 1;
        }
        uVar18 = (ulonglong)(uVar21 + 1);
        uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
        uVar31 = uVar31 + 1;
      } while ((longlong)uVar31 < (longlong)local_210);
    }
    uVar22 = local_224;
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x38),0,local_224,false);
    local_214 = 0;
    local_res8 = SUB81(this,0);
    if (0 < (int)uVar22) {
      local_220 = (uint *)0x0;
      do {
        uVar22 = local_214;
        lVar26 = *(longlong *)((longlong)this + 0x38);
        if ((((int)local_214 < 0) || (*(int *)(lVar26 + 0x18) <= (int)local_214)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)(lVar26 + 0x10) != 0) {
          lVar26 = *(longlong *)(lVar26 + 0x10);
        }
        uVar21 = uVar22;
        if ((int)uVar22 < 0) {
          uVar21 = uVar22 + 0x1f;
        }
        if ((*(uint *)(lVar26 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar22 & 0x1f) & 1) == 0) {
          plVar4 = *(longlong **)((longlong)this + 0x30);
          uVar21 = 0;
          if ((int)uVar22 < (int)plVar4[1]) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_1f0 = (uint *)CONCAT44(local_1f0._4_4_,
                                       *(undefined4 *)(*plVar4 + (longlong)local_220 * 4));
          plVar4 = *(longlong **)((longlong)this + 0x40);
          uVar21 = 0;
          if ((int)uVar22 < (int)plVar4[1]) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x48);
          iVar13 = *(int *)((longlong)&pFVar8[1].Data + 4);
          local_200 = (uint *)CONCAT44(local_200._4_4_,
                                       *(undefined4 *)(*plVar4 + (longlong)local_220 * 4));
          *(undefined4 *)&pFVar8[1].Data = 0;
          if (iVar13 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,pFVar8,0,(int *)((longlong)&pFVar8[1].Data + 4));
          }
          plVar4 = *(longlong **)((longlong)this + 0x28);
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x48);
          lVar26 = (longlong)(int)local_1f0;
          uVar22 = 0;
          if (lVar26 < plVar4[1]) {
            uVar22 = (uint)((int)local_1f0 >> 0x1f) >> 0x1f ^ 1;
          }
          if ((uVar22 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar27 = (ForAnyElementType *)(*plVar4 + lVar26 * 0x10);
          if ((pFVar8 == pFVar27) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar13 = *(int *)&pFVar27[1].Data;
          if (iVar13 != 0) {
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar13,pFVar8,(int *)(pFVar8 + 1),
                                (int *)((longlong)&pFVar8[1].Data + 4));
            memcpy(pFVar8->Data + (longlong)iVar14 * 4,pFVar27->Data,(longlong)iVar13 << 2);
          }
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x50);
          iVar13 = *(int *)((longlong)&pFVar8[1].Data + 4);
          *(undefined4 *)&pFVar8[1].Data = 0;
          if (iVar13 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,pFVar8,0,(int *)((longlong)&pFVar8[1].Data + 4));
          }
          lVar28 = (longlong)(int)(uint)local_200;
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x50);
          lVar26 = *(longlong *)((longlong)this + 0x18);
          uVar22 = 0;
          if ((int)(uint)local_200 < *(int *)(lVar26 + 0x20)) {
            uVar22 = ~(uint)local_200 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          puVar29 = (undefined8 *)(lVar28 * 0x10 + *(longlong *)(lVar26 + 0x18));
          iVar13 = *(int *)(puVar29 + 1);
          if (iVar13 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar12) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
LAB_1415a5815:
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar13,pFVar8,(int *)(pFVar8 + 1),
                                (int *)((longlong)&pFVar8[1].Data + 4));
            memcpy(pFVar8->Data + (longlong)iVar14 * 4,(void *)*puVar29,(longlong)iVar13 << 2);
          }
          else if (iVar13 != 0) goto LAB_1415a5815;
          AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
                    ((int *)**(undefined8 **)((longlong)this + 0x48),
                     *(int *)(*(undefined8 **)((longlong)this + 0x48) + 1),local_res8,
                     (TLess<void>)local_res8);
          AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
                    ((int *)**(undefined8 **)((longlong)this + 0x50),
                     *(int *)(*(undefined8 **)((longlong)this + 0x50) + 1),local_res8,
                     (TLess<void>)local_res8);
          lVar26 = (longlong)*(int *)(*(undefined8 **)((longlong)this + 0x48) + 1);
          if (lVar26 != (int)(*(longlong **)((longlong)this + 0x50))[1]) {
LAB_1415a5b2d:
            plVar4 = *(longlong **)this;
            pvVar10 = *(void **)((longlong)this + 0x58);
            iVar13 = *(int *)(*(undefined8 **)((longlong)this + 0x48) + 1);
            pcVar11 = *(code **)(*plVar4 + 0x28);
            local_178 = (int *)**(undefined8 **)((longlong)this + 0x48);
            if ((iVar13 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_d8._12_4_ = uStack_16c;
            local_d8.ArrayNum = iVar13;
            local_d8.DataPtr = local_178;
            iStack_170 = iVar13;
            __l2::<lambda_4>::operator()(pvVar10,&local_a8,&local_d8);
            pvVar10 = *(void **)((longlong)this + 0x58);
            local_168 = (int *)**(undefined8 **)((longlong)this + 0x50);
            iStack_160 = *(int *)(*(undefined8 **)((longlong)this + 0x50) + 1);
            if ((iStack_160 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_c8._12_4_ = uStack_15c;
            local_c8.ArrayNum = iStack_160;
            local_c8.DataPtr = local_168;
            __l2::<lambda_4>::operator()(pvVar10,&local_b8,&local_c8);
            ::FString::PrintfImpl
                      (&local_158,
                       L"Failed for case \"%s\": Input vertex %d was placed into a component with invertices %s, but it was expected in a component with invertices %s."
                      );
            (*pcVar11)(plVar4,&local_158,0);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            local_1a8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              local_1a8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
            }
            goto LAB_1415a67e1;
          }
          piVar9 = (int *)**(undefined8 **)((longlong)this + 0x48);
          uVar22 = local_214;
          if (lVar26 != 0) {
            piVar20 = piVar9;
            do {
              if (*piVar20 !=
                  *(int *)((**(longlong **)((longlong)this + 0x50) - (longlong)piVar9) +
                          (longlong)piVar20)) goto LAB_1415a5b2d;
              lVar26 = lVar26 + -1;
              piVar20 = piVar20 + 1;
            } while (lVar26 != 0);
          }
        }
        local_214 = uVar22 + 1;
        local_220 = (uint *)((longlong)local_220 + 1);
        uVar22 = local_224;
      } while ((longlong)local_220 < (longlong)local_210);
    }
    if (local_217 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)this + 0x10) + 0x20) != 0) ||
         (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) != 0)) {
        plVar4 = *(longlong **)this;
        pcVar11 = *(code **)(*plVar4 + 0x28);
        ::FString::PrintfImpl
                  (&local_f8,
                   L"Failed for case \"%s\": Expected outgraph to be cleared since result was false, but it is non-empty."
                  );
        (*pcVar11)(plVar4,&local_f8,0);
        local_1a8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
LAB_1415a67e1:
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      uVar21 = 0;
      if (0 < (int)uVar22) {
        local_220 = (uint *)0x0;
        local_200 = (uint *)0x0;
        do {
          puVar25 = local_200;
          puVar30 = local_220;
          plVar4 = *(longlong **)((longlong)this + 0x40);
          uVar22 = 0;
          if ((int)uVar21 < (int)plVar4[1]) {
            uVar22 = ~uVar21 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          plVar5 = *(longlong **)((longlong)this + 8);
          uVar22 = *(uint *)(*plVar4 + (longlong)puVar30 * 4);
          uVar19 = 0;
          if ((int)uVar21 < (int)plVar5[1]) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar26 = *plVar5;
          puVar24 = *(uint **)(lVar26 + (longlong)puVar25);
          local_1f0 = puVar24 + *(int *)(lVar26 + 8 + (longlong)puVar25);
          if (puVar24 != local_1f0) {
            do {
              uVar19 = *puVar24;
              plVar4 = *(longlong **)((longlong)this + 0x40);
              uVar15 = 0;
              if ((int)uVar19 < (int)plVar4[1]) {
                uVar15 = ~uVar19 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar19 = *(uint *)(*plVar4 + (longlong)(int)uVar19 * 4);
              if (uVar19 != uVar22) {
                lVar26 = *(longlong *)((longlong)this + 0x10);
                uVar15 = 0;
                if ((int)uVar22 < *(int *)(lVar26 + 0x20)) {
                  uVar15 = ~uVar22 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar26 = *(longlong *)(lVar26 + 0x18);
                puVar25 = *(uint **)(lVar26 + (longlong)(int)uVar22 * 0x10);
                puVar30 = puVar25 + *(int *)(lVar26 + 8 + (longlong)(int)uVar22 * 0x10);
                while( true ) {
                  if (puVar25 == puVar30) {
                    plVar4 = *(longlong **)this;
                    pcVar11 = *(code **)(*plVar4 + 0x28);
                    ::FString::PrintfImpl
                              (&local_148,
                               L"Failed for case \"%s\": Missing edge in the condensation graph: expected edge from vertex %d in component %d to vertex %d in component %d, but this edge is missing."
                              );
                    (*pcVar11)(plVar4,&local_148,0);
                    local_1a8.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
                    goto LAB_1415a67e1;
                  }
                  if (*puVar25 == uVar19) break;
                  puVar25 = puVar25 + 1;
                }
              }
              puVar24 = puVar24 + 1;
              puVar30 = local_220;
              puVar25 = local_200;
            } while (puVar24 != local_1f0);
          }
          local_220 = (uint *)((longlong)puVar30 + 1);
          local_200 = puVar25 + 4;
          uVar21 = uVar21 + 1;
        } while ((longlong)local_220 < (longlong)local_210);
      }
      local_224 = 0;
      if (0 < local_1f8) {
        local_220 = (uint *)0x0;
        do {
          uVar22 = local_224;
          TBitArray<FDefaultBitArrayAllocator>::SetRange
                    (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x38),0,local_1f8,
                     false);
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x60);
          iVar13 = *(int *)((longlong)&pFVar8[1].Data + 4);
          *(undefined4 *)&pFVar8[1].Data = 0;
          if (iVar13 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,pFVar8,0,(int *)((longlong)&pFVar8[1].Data + 4));
          }
          lVar26 = *(longlong *)((longlong)this + 0x18);
          uVar21 = 0;
          if ((int)uVar22 < *(int *)(lVar26 + 0x20)) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar26 = *(longlong *)(lVar26 + 0x18);
          puVar25 = *(uint **)(lVar26 + (longlong)local_220);
          puVar30 = puVar25 + *(int *)(lVar26 + 8 + (longlong)local_220);
          local_210 = puVar25;
          local_200 = puVar30;
          if (puVar25 != puVar30) {
            do {
              uVar22 = *puVar25;
              plVar4 = *(longlong **)((longlong)this + 8);
              uVar21 = 0;
              if ((int)uVar22 < (int)plVar4[1]) {
                uVar21 = ~uVar22 >> 0x1f;
              }
              local_210 = puVar25;
              if ((uVar21 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              lVar26 = *plVar4;
              puVar24 = *(uint **)(lVar26 + (longlong)(int)uVar22 * 0x10);
              puVar23 = puVar24 + *(int *)(lVar26 + 8 + (longlong)(int)uVar22 * 0x10);
              for (; puVar24 != puVar23; puVar24 = puVar24 + 1) {
                uVar22 = *puVar24;
                plVar4 = *(longlong **)((longlong)this + 0x40);
                uVar21 = 0;
                if ((int)uVar22 < (int)plVar4[1]) {
                  uVar21 = ~uVar22 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar26 = *(longlong *)((longlong)this + 0x38);
                uVar22 = *(uint *)(*plVar4 + (longlong)(int)uVar22 * 4);
                local_208 = uVar22;
                if ((((int)uVar22 < 0) || (*(int *)(lVar26 + 0x18) <= (int)uVar22)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar21 = local_208;
                if (*(longlong *)(lVar26 + 0x10) != 0) {
                  lVar26 = *(longlong *)(lVar26 + 0x10);
                }
                uVar19 = uVar22 & 0x1f;
                if ((int)uVar22 < 0) {
                  uVar22 = uVar22 + 0x1f;
                }
                if ((*(uint *)(lVar26 + (longlong)((int)uVar22 >> 5) * 4) >> uVar19 & 1) == 0) {
                  lVar26 = *(longlong *)((longlong)this + 0x38);
                  if ((((int)local_208 < 0) || (*(int *)(lVar26 + 0x18) <= (int)local_208)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if (*(longlong *)(lVar26 + 0x10) != 0) {
                    lVar26 = *(longlong *)(lVar26 + 0x10);
                  }
                  uVar22 = uVar21;
                  if ((int)uVar21 < 0) {
                    uVar22 = uVar21 + 0x1f;
                  }
                  puVar30 = (uint *)(lVar26 + (longlong)((int)uVar22 >> 5) * 4);
                  *puVar30 = *puVar30 | 1 << ((byte)uVar21 & 0x1f);
                  pFVar8 = *(ForAnyElementType **)((longlong)this + 0x60);
                  if (((pFVar8->Data <= (FScriptContainerElement *)&local_208) &&
                      ((FScriptContainerElement *)&local_208 <
                       pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 4)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar13 = *(int *)&pFVar8[1].Data;
                  piVar9 = (int *)((longlong)&pFVar8[1].Data + 4);
                  if (iVar13 == *piVar9) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,pFVar8,piVar9);
                  }
                  *(int *)&pFVar8[1].Data = iVar13 + 1;
                  *(uint *)(pFVar8->Data + (longlong)iVar13 * 4) = local_208;
                }
                puVar25 = local_210;
                puVar30 = local_200;
              }
              puVar25 = puVar25 + 1;
              local_210 = puVar25;
            } while (puVar25 != puVar30);
          }
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x68);
          iVar13 = *(int *)((longlong)&pFVar8[1].Data + 4);
          *(undefined4 *)&pFVar8[1].Data = 0;
          if (iVar13 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,pFVar8,0,(int *)((longlong)&pFVar8[1].Data + 4));
          }
          lVar26 = *(longlong *)((longlong)this + 0x10);
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x68);
          uVar22 = 0;
          if ((int)local_224 < *(int *)(lVar26 + 0x20)) {
            uVar22 = ~local_224 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          puVar29 = (undefined8 *)(*(longlong *)(lVar26 + 0x18) + (longlong)local_220);
          iVar13 = *(int *)(puVar29 + 1);
          if (iVar13 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar12) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
LAB_1415a612a:
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar13,pFVar8,(int *)(pFVar8 + 1),
                                (int *)((longlong)&pFVar8[1].Data + 4));
            memcpy(pFVar8->Data + (longlong)iVar14 * 4,(void *)*puVar29,(longlong)iVar13 << 2);
          }
          else if (iVar13 != 0) goto LAB_1415a612a;
          AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
                    ((int *)**(undefined8 **)((longlong)this + 0x60),
                     *(int *)(*(undefined8 **)((longlong)this + 0x60) + 1),local_res8,
                     (TLess<void>)local_res8);
          AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
                    ((int *)**(undefined8 **)((longlong)this + 0x68),
                     *(int *)(*(undefined8 **)((longlong)this + 0x68) + 1),local_res8,
                     (TLess<void>)local_res8);
          iVar13 = local_1f8;
          lVar26 = (longlong)*(int *)(*(undefined8 **)((longlong)this + 0x68) + 1);
          if (lVar26 != (int)(*(longlong **)((longlong)this + 0x60))[1]) {
LAB_1415a6652:
            plVar4 = *(longlong **)this;
            pvVar10 = *(void **)((longlong)this + 0x58);
            iVar13 = *(int *)(*(undefined8 **)((longlong)this + 0x60) + 1);
            pcVar11 = *(code **)(*plVar4 + 0x28);
            local_128 = (int *)**(undefined8 **)((longlong)this + 0x60);
            if ((iVar13 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_98._12_4_ = uStack_11c;
            local_98.ArrayNum = iVar13;
            local_98.DataPtr = local_128;
            iStack_120 = iVar13;
            __l2::<lambda_4>::operator()(pvVar10,&local_68,&local_98);
            pvVar10 = *(void **)((longlong)this + 0x58);
            local_118 = (int *)**(undefined8 **)((longlong)this + 0x68);
            iStack_110 = *(int *)(*(undefined8 **)((longlong)this + 0x68) + 1);
            if ((iStack_110 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_88._12_4_ = uStack_10c;
            local_88.ArrayNum = iStack_110;
            local_88.DataPtr = local_118;
            __l2::<lambda_4>::operator()(pvVar10,&local_78,&local_88);
            ::FString::PrintfImpl
                      (&local_108,
                       L"Failed for case \"%s\": Expected component %d to have edges %s, but it had %s."
                      );
            (*pcVar11)(plVar4,&local_108,0);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            local_1a8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
              local_1a8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
            }
            goto LAB_1415a67e1;
          }
          piVar9 = (int *)**(undefined8 **)((longlong)this + 0x68);
          if (lVar26 != 0) {
            piVar20 = piVar9;
            do {
              if (*piVar20 !=
                  *(int *)((**(longlong **)((longlong)this + 0x60) - (longlong)piVar9) +
                          (longlong)piVar20)) goto LAB_1415a6652;
              lVar26 = lVar26 + -1;
              piVar20 = piVar20 + 1;
            } while (lVar26 != 0);
          }
          local_220 = local_220 + 4;
          local_224 = local_224 + 1;
        } while ((int)local_224 < local_1f8);
        local_228 = 0;
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x38),0,local_1f8,
                   false);
        while( true ) {
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x70);
          iVar14 = *(int *)((longlong)&pFVar8[1].Data + 4);
          *(undefined4 *)&pFVar8[1].Data = 0;
          if (iVar14 < iVar13) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar13,pFVar8,0,(int *)((longlong)&pFVar8[1].Data + 4));
          }
          iVar13 = local_228;
          lVar26 = *(longlong *)((longlong)this + 0x38);
          if (((local_228 < 0) || (*(int *)(lVar26 + 0x18) <= local_228)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(longlong *)(lVar26 + 0x10) != 0) {
            lVar26 = *(longlong *)(lVar26 + 0x10);
          }
          iVar14 = iVar13;
          if (iVar13 < 0) {
            iVar14 = iVar13 + 0x1f;
          }
          puVar30 = (uint *)(lVar26 + (longlong)(iVar14 >> 5) * 4);
          *puVar30 = *puVar30 | 1 << ((byte)iVar13 & 0x1f);
          pFVar8 = *(ForAnyElementType **)((longlong)this + 0x70);
          if (((pFVar8->Data <= (FScriptContainerElement *)&local_228) &&
              ((FScriptContainerElement *)&local_228 <
               pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar13 = *(int *)&pFVar8[1].Data;
          piVar9 = (int *)((longlong)&pFVar8[1].Data + 4);
          if (iVar13 == *piVar9) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar8,piVar9);
          }
          *(int *)&pFVar8[1].Data = iVar13 + 1;
          *(int *)(pFVar8->Data + (longlong)iVar13 * 4) = local_228;
          plVar4 = *(longlong **)((longlong)this + 0x70);
          iVar13 = (int)plVar4[1];
          iVar14 = local_228;
          while (local_228 = iVar14, 0 < iVar13) {
            if (((int)plVar4[1] < 1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar22 = *(uint *)(*plVar4 + -4 + (longlong)(int)plVar4[1] * 4);
            *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
            lVar26 = *(longlong *)((longlong)this + 0x10);
            uVar21 = 0;
            if ((int)uVar22 < *(int *)(lVar26 + 0x20)) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar26 = *(longlong *)(lVar26 + 0x18);
            puVar25 = *(uint **)(lVar26 + (longlong)(int)uVar22 * 0x10);
            puVar30 = puVar25 + *(int *)(lVar26 + 8 + (longlong)(int)uVar22 * 0x10);
            for (; puVar25 != puVar30; puVar25 = puVar25 + 1) {
              uVar22 = *puVar25;
              lVar26 = *(longlong *)((longlong)this + 0x38);
              local_204 = uVar22;
              if ((((int)uVar22 < 0) || (*(int *)(lVar26 + 0x18) <= (int)uVar22)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar21 = local_204;
              if (*(longlong *)(lVar26 + 0x10) != 0) {
                lVar26 = *(longlong *)(lVar26 + 0x10);
              }
              uVar19 = uVar22 & 0x1f;
              if ((int)uVar22 < 0) {
                uVar22 = uVar22 + 0x1f;
              }
              if ((*(uint *)(lVar26 + (longlong)((int)uVar22 >> 5) * 4) >> uVar19 & 1) == 0) {
                lVar26 = *(longlong *)((longlong)this + 0x38);
                if ((((int)local_204 < 0) || (*(int *)(lVar26 + 0x18) <= (int)local_204)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (*(longlong *)(lVar26 + 0x10) != 0) {
                  lVar26 = *(longlong *)(lVar26 + 0x10);
                }
                uVar22 = uVar21;
                if ((int)uVar21 < 0) {
                  uVar22 = uVar21 + 0x1f;
                }
                puVar24 = (uint *)(lVar26 + (longlong)((int)uVar22 >> 5) * 4);
                *puVar24 = *puVar24 | 1 << ((byte)uVar21 & 0x1f);
                pFVar8 = *(ForAnyElementType **)((longlong)this + 0x70);
                if (((pFVar8->Data <= (FScriptContainerElement *)&local_204) &&
                    ((FScriptContainerElement *)&local_204 <
                     pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 4)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                iVar13 = *(int *)&pFVar8[1].Data;
                piVar9 = (int *)((longlong)&pFVar8[1].Data + 4);
                if (iVar13 == *piVar9) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,pFVar8,piVar9);
                }
                *(int *)&pFVar8[1].Data = iVar13 + 1;
                *(uint *)(pFVar8->Data + (longlong)iVar13 * 4) = local_204;
              }
            }
            plVar4 = *(longlong **)((longlong)this + 0x70);
            iVar14 = local_228;
            iVar13 = (int)plVar4[1];
          }
          piVar20 = (int *)*plVar4;
          lVar26 = plVar4[1];
          piVar9 = piVar20 + (int)lVar26;
          while( true ) {
            if ((int)plVar4[1] != (int)lVar26) {
              local_216[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_216);
              iVar14 = local_228;
            }
            iVar13 = local_1f8;
            if (piVar20 == piVar9) break;
            if (*piVar20 < iVar14) {
              plVar4 = *(longlong **)this;
              pcVar11 = *(code **)(*plVar4 + 0x28);
              ::FString::PrintfImpl
                        (&local_138,
                         L"Failed for case \"%s\": Expected outgraph to be topologically sorted from root to leaf, but vertex %d is reachable from vertex %d."
                        );
              (*pcVar11)(plVar4,&local_138,0);
              local_1a8.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
              goto LAB_1415a67e1;
            }
            piVar20 = piVar20 + 1;
          }
          local_228 = iVar14 + 1;
          if (local_1f8 <= local_228) break;
          TBitArray<FDefaultBitArrayAllocator>::SetRange
                    (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x38),0,local_1f8,
                     false);
        }
      }
    }
  }
  else {
    plVar4 = *(longlong **)this;
    pcVar11 = *(code **)(*plVar4 + 0x28);
    ::FString::PrintfImpl
              (&local_1b8,
               L"Failed for case \"%s\": expected ConstructCondensationGraph to return %s but it returned %s."
              );
    (*pcVar11)(plVar4,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

