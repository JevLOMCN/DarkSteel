// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 8

// GetTestFlags @ 142aae170

EAutomationTestFlags __thiscall
FAssetRegistryTagSerializationTest::GetTestFlags(FAssetRegistryTagSerializationTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 142aae180

bool __thiscall
FAssetRegistryTagSerializationTest::IsStressTest(FAssetRegistryTagSerializationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142aae190

uint __thiscall
FAssetRegistryTagSerializationTest::GetRequiredDeviceNum(FAssetRegistryTagSerializationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142aae1a0

FString * __thiscall
FAssetRegistryTagSerializationTest::GetTestSourceFileName
          (FAssetRegistryTagSerializationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryArchive.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142aae1d0

int __thiscall
FAssetRegistryTagSerializationTest::GetTestSourceFileLine(FAssetRegistryTagSerializationTest *this)

{
  return 0x163;
}

// GetTests @ 142aae1e0

/* WARNING: Removing unreachable block (ram,0x000142aae2cd) */
/* WARNING: Removing unreachable block (ram,0x000142aae398) */

void __thiscall
FAssetRegistryTagSerializationTest::GetTests
          (FAssetRegistryTagSerializationTest *this,
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
  
  ::FString::FString(&local_18,"System.AssetRegistry.SerializeTagMap");
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

// RunTest @ 142aae3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAssetRegistryTagSerializationTest::RunTest
          (FAssetRegistryTagSerializationTest *this,FString *param_1)

{
  uint *puVar1;
  FAssetDataTagMap *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  FAssetRegistryHeader FVar7;
  FAutomationTestBase *this_00;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FString *pFVar15;
  FAssetDataTagMapSharedView FVar16;
  ulonglong uVar17;
  ulong64 uVar18;
  FPartialMapHandle this_01;
  FMapHandle FVar19;
  ForElementType<unsigned_int> FVar20;
  ulonglong uVar21;
  FName FVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  FAssetDataTagMapSharedView_u_0 FVar25;
  ForAnyElementType FVar26;
  undefined8 *puVar27;
  FName *pFVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  FName *pFVar32;
  undefined1 auStackY_f18 [32];
  FAssetDataTagMapSharedView_u_0 local_ec8;
  undefined8 local_ec0;
  ForAnyElementType local_eb8;
  undefined8 local_eb0;
  undefined1 local_ea8;
  undefined1 local_ea7;
  undefined1 local_ea6 [6];
  FAssetRegistryHeader local_ea0;
  FAssetDataTagMapSharedView_u_0 local_e98;
  FAssetDataTagMapSharedView_u_0 local_e90;
  ulong64 local_e88;
  ulong64 local_e80;
  ulong64 local_e78;
  uint local_e70;
  uint uStack_e6c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e68;
  undefined4 local_e60;
  uint uStack_e5c;
  uint uStack_e58;
  undefined4 uStack_e54;
  void *local_e50;
  undefined8 local_e48;
  FAssetDataTagMapSharedView local_e40;
  undefined1 local_e38 [16];
  undefined1 local_e28 [16];
  undefined1 local_e18 [16];
  undefined1 local_e08 [16];
  FAutomationTestBase *local_df8;
  FPartialMapHandle local_df0;
  FPartialMapHandle local_de8;
  FName local_de0;
  FName local_dd8;
  FString local_dd0;
  FString local_dc0;
  longlong *local_db0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_da8;
  char *local_d88;
  FString local_d80;
  char *local_d70;
  FString local_d68;
  undefined **local_d58;
  char **local_d50;
  char **local_d48;
  undefined1 *local_d40;
  FName *local_d38;
  undefined1 *local_d30;
  char **local_d28;
  char **local_d20;
  char **local_d18;
  undefined1 *local_d10;
  char **local_d08;
  undefined ***local_d00;
  char **local_cf8;
  char **local_cf0;
  FSparseArrayAllocationInfo local_ce8;
  initializer_list<FName> local_cd8;
  char **local_cc8;
  undefined **local_cc0;
  char *local_cb8;
  FString local_cb0;
  char *local_ca0;
  FString local_c98;
  undefined *local_c88;
  FString local_c80;
  char *local_c70;
  FString local_c68;
  char *local_c58;
  FString local_c50;
  char *local_c40;
  FString local_c38;
  char *local_c28;
  FString local_c20;
  char *local_c10;
  FString local_c08;
  undefined1 local_bf8 [8];
  undefined1 local_bf0 [8];
  FAssetDataTagMapSharedView local_be8 [2];
  FArchiveState local_bd8;
  undefined8 local_b48;
  void **local_b40;
  undefined8 local_b38;
  FArchiveState local_b28;
  undefined8 local_a98;
  void **local_a90;
  undefined8 local_a88;
  FArchiveState local_a78;
  undefined8 local_9e8;
  void **local_9e0;
  undefined8 local_9d8;
  undefined1 local_9c8 [192];
  undefined1 local_908 [192];
  FString local_848;
  FString local_838;
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
  undefined1 local_708 [32];
  ForElementType<unsigned_int> local_6e8;
  uint local_6e0;
  int local_6dc;
  int local_6d8;
  uint local_6d4;
  undefined1 local_6d0 [8];
  ForAnyElementType local_6c8;
  uint local_6c0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_6b8;
  char *local_668;
  FString local_660;
  char *local_650;
  FString local_648;
  char *local_638;
  FString local_630;
  undefined1 local_620 [8];
  FName local_618;
  FName local_610;
  FName local_608;
  FName local_600;
  FName local_5f8;
  FName local_5f0;
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  FName local_5d0;
  FName local_5c8;
  FString local_5c0;
  char *local_5b0;
  FString local_5a8;
  char *local_598;
  FString local_590;
  char *local_580;
  FString local_578;
  char *local_568;
  FString local_560;
  char *local_550;
  FString local_548;
  char *local_538;
  FString local_530;
  undefined1 local_520 [8];
  FAssetRegistryWriter local_518;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f18;
  uVar21 = 0;
  local_ec8.Loose = (FAssetDataTagMap *)0x0;
  local_ec0 = 0;
  local_e90.Loose = (FAssetDataTagMap *)0x0;
  local_df8 = (FAutomationTestBase *)this;
  iVar11 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,(ForAnyElementType *)&local_ec8.Fixed,(int *)((longlong)&local_ec0 + 4))
  ;
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)&local_e90.Fixed);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)&local_e90.Fixed);
  pFVar15 = ::FString::FString(&local_7a8,"StringValue");
  local_cb8 = "Key";
  ::FString::FString(&local_cb0,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_7d8,"StringValue_0");
  local_ca0 = "Key_0";
  ::FString::FString(&local_c98,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_cc8 = &local_cb8;
  local_cc0 = &local_c88;
  FVar16 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_e38);
  if (((local_ec8.Loose <= (ulonglong)FVar16.field0_0x0) &&
      ((ulonglong)FVar16.field0_0x0 <
       (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + local_ec0._4_4_))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar11 = (int)local_ec0;
  if ((int)local_ec0 == local_ec0._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&local_ec8.Fixed,
                        (int *)((longlong)&local_ec0 + 4));
  }
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)FVar16.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_e38);
  if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c98.Data.AllocatorInstance.Data);
  }
  if (local_cb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cb0.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::FString(&local_7c8,"NameValue");
  local_c88 = &s_Name;
  ::FString::FString(&local_c80,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_7b8,"NameValue_0");
  local_c70 = "Name_0";
  ::FString::FString(&local_c68,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_d58 = &local_c88;
  local_d50 = &local_c58;
  FVar16 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)(local_e38 + 8)
                       );
  if (((local_ec8.Loose <= (ulonglong)FVar16.field0_0x0) &&
      ((ulonglong)FVar16.field0_0x0 <
       (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + local_ec0._4_4_))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar11 = (int)local_ec0;
  if ((int)local_ec0 == local_ec0._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&local_ec8.Fixed,
                        (int *)((longlong)&local_ec0 + 4));
  }
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)FVar16.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_e38 + 8));
  if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c68.Data.AllocatorInstance.Data);
  }
  if (local_c80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c80.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::FString(&local_798,"/S/P.C\'P.O\'");
  local_668 = "FullPath";
  ::FString::FString(&local_660,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_788,"P.O");
  local_650 = "PkgPath";
  ::FString::FString(&local_648,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_778,"O");
  local_638 = "ObjPath";
  ::FString::FString(&local_630,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_d48 = &local_668;
  local_d40 = local_620;
  FVar16 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_e28);
  if (((local_ec8.Loose <= (ulonglong)FVar16.field0_0x0) &&
      ((ulonglong)FVar16.field0_0x0 <
       (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + local_ec0._4_4_))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar11 = (int)local_ec0;
  if ((int)local_ec0 == local_ec0._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&local_ec8.Fixed,
                        (int *)((longlong)&local_ec0 + 4));
  }
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)FVar16.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_e28);
  if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_630.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_660.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::FString(&local_768,"/S/P.C\'P.O_0\'");
  local_5c8 = (FName)0x1507d6d80;
  ::FString::FString(&local_5c0,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_758,"/S/P.C\'P_0.O\'");
  local_5b0 = "NumPath_1";
  ::FString::FString(&local_5a8,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_748,"/S/P.C_0\'P.O\'");
  local_598 = "NumPath_2";
  ::FString::FString(&local_590,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_738,"/S/P.C\'P_0.O_0\'");
  local_580 = "NumPath_3";
  ::FString::FString(&local_578,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_728,"/S/P.C_0\'P_0.O\'");
  local_568 = "NumPath_4";
  ::FString::FString(&local_560,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_718,"/S/P.C_0\'P.O_0\'");
  local_550 = "NumPath_5";
  ::FString::FString(&local_548,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_848,"/S/P.C_0\'P_0.O_0\'");
  local_538 = "NumPath_6";
  ::FString::FString(&local_530,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_d38 = &local_5c8;
  local_d30 = local_520;
  FVar16 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)(local_e28 + 8)
                       );
  if (((local_ec8.Loose <= (ulonglong)FVar16.field0_0x0) &&
      ((ulonglong)FVar16.field0_0x0 <
       (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + local_ec0._4_4_))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar11 = (int)local_ec0;
  if ((int)local_ec0 == local_ec0._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&local_ec8.Fixed,
                        (int *)((longlong)&local_ec0 + 4));
  }
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)FVar16.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_e28 + 8));
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data.AllocatorInstance.Data);
  }
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Data.AllocatorInstance.Data);
  }
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::FString(&local_838,"SameSame");
  local_c58 = "SameSame";
  ::FString::FString(&local_c50,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_828,"SameSame");
  local_c40 = "AlsoSame";
  ::FString::FString(&local_c38,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_d28 = &local_c58;
  local_d20 = &local_c28;
  FVar16 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_e18);
  if (((local_ec8.Loose <= (ulonglong)FVar16.field0_0x0) &&
      ((ulonglong)FVar16.field0_0x0 <
       (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + local_ec0._4_4_))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar11 = (int)local_ec0;
  if ((int)local_ec0 == local_ec0._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&local_ec8.Fixed,
                        (int *)((longlong)&local_ec0 + 4));
  }
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)FVar16.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_e18);
  if (local_c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c38.Data.AllocatorInstance.Data);
  }
  if (local_c50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c50.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::FString(&local_818,"FilterValue1");
  local_c28 = "FilterKey1";
  ::FString::FString(&local_c20,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar15 = ::FString::FString(&local_808,"FilterValue2");
  local_c10 = "FilterKey2";
  ::FString::FString(&local_c08,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_d18 = &local_c28;
  local_d10 = local_bf8;
  FVar16 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)(local_e18 + 8)
                       );
  if (((local_ec8.Loose <= (ulonglong)FVar16.field0_0x0) &&
      ((ulonglong)FVar16.field0_0x0 <
       (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + local_ec0._4_4_))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar11 = (int)local_ec0;
  if ((int)local_ec0 == local_ec0._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&local_ec8.Fixed,
                        (int *)((longlong)&local_ec0 + 4));
  }
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)FVar16.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_e18 + 8));
  if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c08.Data.AllocatorInstance.Data);
  }
  if (local_c20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c20.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::FString(&local_7f8,
                               "NSLOCTEXT(\"\", \"5F8411BA4D1A349F6E2C56BB04A1A810\", \"Content Browser Walkthrough\")"
                              );
  local_d70 = "Localized";
  ::FString::FString(&local_d68,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_d08 = &local_d70;
  local_d00 = &local_d58;
  FVar16 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_e08);
  if (((local_ec8.Loose <= (ulonglong)FVar16.field0_0x0) &&
      ((ulonglong)FVar16.field0_0x0 <
       (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + local_ec0._4_4_))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar11 = (int)local_ec0;
  if ((int)local_ec0 == local_ec0._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&local_ec8.Fixed,
                        (int *)((longlong)&local_ec0 + 4));
  }
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)FVar16.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_e08);
  if (local_d68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d68.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::FString(&local_7e8,L"Wideß");
  local_d88 = "Wide";
  ::FString::FString(&local_d80,pFVar15);
  pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_cf8 = &local_d88;
  local_cf0 = &local_d70;
  FVar16 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)(local_e08 + 8)
                       );
  if (((local_ec8.Loose <= (ulonglong)FVar16.field0_0x0) &&
      ((ulonglong)FVar16.field0_0x0 <
       (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + local_ec0._4_4_))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar11 = (int)local_ec0;
  if ((int)local_ec0 == local_ec0._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&local_ec8.Fixed,
                        (int *)((longlong)&local_ec0 + 4));
  }
  local_ec0 = CONCAT44(local_ec0._4_4_,iVar11 + 1);
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(&(local_ec8.Loose)->_padding_ + iVar11),
             (FAssetDataTagMapSharedView *)FVar16.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_e08 + 8));
  if (local_d80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d80.Data.AllocatorInstance.Data);
  }
  local_e50 = (void *)0x0;
  local_e48 = 0;
  local_708._0_8_ = (FScriptContainerElement *)0x0;
  local_708._8_8_ = 0;
  local_6e8 = (ForElementType<unsigned_int>)0x0;
  local_6e0 = 0;
  local_6dc = 0x80;
  local_6d8 = -1;
  local_6d4 = 0;
  local_6c8.Data = (FScriptContainerElement *)0x0;
  local_6c0 = 0;
  local_6b8.Elements._0_8_ = 0;
  local_6b8.Elements._8_8_ = 0;
  local_6b8.Elements._32_8_ = 0;
  local_6b8.Elements._40_4_ = 0;
  local_6b8.Elements._44_4_ = 0x80;
  local_6b8.Elements._48_4_ = 0xffffffff;
  local_6b8.Elements._52_4_ = 0;
  local_6b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_6b8.HashSize = 0;
  ::FName::FName(&local_de0,"Name");
  ::FName::FName(&local_dd8,"Name_0");
  uVar29 = (ulonglong)local_6d4;
  uVar24 = local_708._8_4_;
  if (local_708._8_4_ != local_6d4) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_708);
    if ((longlong)local_708._8_8_ < 0) {
      local_708._8_8_ = (ulonglong)(uint)local_708._12_4_ << 0x20;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_708,0,(int *)(local_708 + 0xc));
      uVar24 = local_708._8_4_;
    }
    else {
      local_708._8_8_ = (ulonglong)(uint)local_708._12_4_ << 0x20;
      uVar24 = 0;
    }
    local_6d8 = -1;
    local_6d4 = 0;
    local_6e0 = 0;
    uVar29 = uVar21;
  }
  uVar30 = (uVar24 - local_6d4) + 2;
  if (uVar30 <= uVar24 - local_6d4) goto LAB_142aaf4dd;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar30);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_708,uVar30);
  if (uVar30 < 4) {
    uVar24 = 1;
  }
  else {
    uVar29 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((local_6c0 == 0) || ((int)local_6c0 < (int)uVar24)) {
    local_6c0 = uVar24;
    if ((ForElementType<FSetElementId>)local_6c8.Data != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6c8,0,0,4);
    }
    if (uVar24 != 0) {
      uVar30 = uVar24;
      if (uVar24 < 2) {
        if ((ForElementType<FSetElementId>)local_6c8.Data != (ForElementType<FSetElementId>)0x0) {
          uVar30 = 0;
          goto LAB_142aaf307;
        }
      }
      else {
LAB_142aaf307:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6c8,0,uVar30,4);
      }
      if (0 < (int)uVar24) {
        uVar31 = (ulonglong)uVar24;
        uVar29 = uVar21;
        do {
          FVar26.Data = (FScriptContainerElement *)local_6d0;
          if ((ForElementType<FSetElementId>)local_6c8.Data != (ForElementType<FSetElementId>)0x0) {
            FVar26.Data = local_6c8.Data;
          }
          uVar17 = uVar29 & (longlong)(int)uVar24 - 1U;
          uVar29 = uVar29 + 1;
          *(undefined4 *)((longlong)FVar26.Data + uVar17 * 4) = 0xffffffff;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
    }
    if (local_6c0 != 0) {
      pTStack_e68 = (TBitArray<FDefaultBitArrayAllocator> *)(local_708 + 0x10);
      local_e70 = 0;
      uStack_e6c = 1;
      uStack_e5c = 0;
      uStack_e58 = 0;
      if (local_6e0 != 0) {
        FVar20 = (ForElementType<unsigned_int>)((longlong)local_708 + 0x10);
        if (local_6e8 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = local_6e8;
        }
        uVar24 = *(uint *)FVar20;
        uVar29 = uVar21;
        while (uVar24 == 0) {
          uStack_e58 = (int)uVar29 + 0x20;
          uVar29 = (ulonglong)uStack_e58;
          iVar11 = (int)uVar21;
          local_e70 = iVar11 + 1;
          uVar21 = (ulonglong)local_e70;
          if ((int)((local_6e0 - 1) + ((int)(local_6e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_e70)
          goto LAB_142aaf417;
          uVar24 = ((uint *)((longlong)FVar20 + 4))[iVar11];
        }
        uStack_e6c = -uVar24 & uVar24;
        uVar21 = (ulonglong)uStack_e6c * 2 + 1;
        lVar5 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uStack_e5c = (int)lVar5 + -1 + uStack_e58;
        uVar21 = (ulonglong)uStack_e5c;
        if ((int)local_6e0 < (int)uStack_e5c) {
LAB_142aaf417:
          uVar21 = (ulonglong)local_6e0;
          uStack_e5c = local_6e0;
        }
      }
      local_e60 = 0xffffffff;
      local_db0 = (longlong *)local_708;
      local_da8._padding_ = CONCAT44(uStack_e6c,local_e70);
      local_da8.CurrentBitIndex = uStack_e5c;
      local_da8.UnvisitedBitMask = 0xffffffff;
      local_da8._28_4_ = uStack_e54;
      local_da8.BaseBitIndex = uStack_e58;
      local_da8.Array = pTStack_e68;
      if ((int)uVar21 < (int)local_6e0) {
        do {
          puVar27 = (undefined8 *)((longlong)(int)uVar21 * 0x10 + *local_db0);
          uVar4 = *puVar27;
          uVar24 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
          uVar24 = local_6c0 - 1 & uVar24 + (int)((ulonglong)uVar4 >> 0x20);
          *(uint *)((longlong)puVar27 + 0xc) = uVar24;
          FVar26.Data = (FScriptContainerElement *)local_6d0;
          if ((ForElementType<FSetElementId>)local_6c8.Data != (ForElementType<FSetElementId>)0x0) {
            FVar26.Data = local_6c8.Data;
          }
          uVar29 = (longlong)(int)local_6c0 - 1U & (longlong)(int)uVar24;
          *(undefined4 *)(puVar27 + 1) = *(undefined4 *)((longlong)FVar26.Data + uVar29 * 4);
          *(int *)((longlong)FVar26.Data + uVar29 * 4) = (int)uVar21;
          local_da8.UnvisitedBitMask = local_da8.UnvisitedBitMask & ~local_da8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_da8);
          uVar21 = (ulonglong)(uint)local_da8.CurrentBitIndex;
        } while (local_da8.CurrentBitIndex < (local_da8.Array)->NumBits);
      }
    }
  }
  uVar29 = (ulonglong)local_6d4;
LAB_142aaf4dd:
  pFVar32 = &local_de0;
  do {
    if ((int)uVar29 == 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,4,1,(ForAnyElementType *)local_708,(int *)(local_708 + 8),
                          (int *)(local_708 + 0xc));
      uVar24 = local_6e0;
      if (local_6e0 == 0) {
        iVar14 = 0;
LAB_142aaf596:
        if (local_6dc < (int)(local_6e0 + 1)) {
          uVar30 = local_6dc + 0x1fU >> 5;
          uVar13 = local_6e0 + 0x20 >> 5;
          if (uVar13 < 5) {
            local_6dc = 4;
          }
          else {
            uVar21 = (ulonglong)uVar13;
            if (uVar30 < 5) {
              uVar30 = 0;
            }
            if (uVar30 == 0) {
              uVar29 = 4;
              if (4 < uVar21) {
                uVar29 = uVar21;
              }
            }
            else {
              uVar29 = ((ulonglong)uVar13 * 3 >> 3) + 0x10 + uVar21;
            }
            uVar18 = FMemory::QuantizeSize(uVar29 * 4,0);
            local_6dc = (int)(uVar18 >> 2);
            if (local_6dc < (int)uVar13) {
              local_6dc = 0x7fffffff;
            }
          }
          local_6dc = local_6dc << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_708 + 0x10),local_6e0);
        }
        local_6e0 = local_6e0 + 1;
        uVar13 = (int)local_6e0 >> 0x1f & 0x1f;
        uVar30 = local_6e0 + uVar13;
        iVar12 = (uVar30 & 0x1f) - uVar13;
        if (iVar12 != 0) {
          FVar20 = (ForElementType<unsigned_int>)((longlong)local_708 + 0x10);
          if (local_6e8 != (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_6e8;
          }
          puVar1 = (uint *)((longlong)FVar20 + (longlong)((int)uVar30 >> 5) * 4);
          *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
        }
      }
      else {
        iVar14 = (int)(local_6e0 + ((int)local_6e0 >> 0x1f & 0x1fU)) >> 5;
        if (iVar14 != (int)(((int)(local_6e0 - 1) >> 0x1f & 0x1fU) + (local_6e0 - 1)) >> 5)
        goto LAB_142aaf596;
        local_6e0 = local_6e0 + 1;
      }
      FVar20 = (ForElementType<unsigned_int>)((longlong)local_708 + 0x10);
      if (local_6e8 != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_6e8;
      }
      puVar1 = (uint *)((longlong)FVar20 + (longlong)iVar14 * 4);
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar24 & 0x1f));
      iVar14 = local_6d8;
    }
    else {
      local_6d4 = (int)uVar29 - 1;
      iVar14 = *(int *)(local_708._0_8_ + (longlong)local_6d8 * 0x10 + 4);
      iVar11 = local_6d8;
      if (local_6d4 != 0) {
        *(undefined4 *)(local_708._0_8_ + (longlong)iVar14 * 0x10) = 0xffffffff;
      }
    }
    local_6d8 = iVar14;
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_708,&local_ce8,iVar11);
    iVar11 = local_ce8.Index;
    pFVar28 = (FName *)0x0;
    if (local_ce8.Pointer != (FName *)0x0) {
      *(FName *)local_ce8.Pointer = *pFVar32;
      (((FName *)((longlong)local_ce8.Pointer + 8))->ComparisonIndex).Value = 0xffffffff;
      pFVar28 = local_ce8.Pointer;
    }
    FVar22 = *pFVar28;
    uVar24 = ::GetTypeHash(FVar22.ComparisonIndex.Value);
    uVar24 = uVar24 + FVar22.Number;
    if ((local_708._8_4_ - local_6d4 != 1) && (local_708._8_4_ != local_6d4)) {
      FVar26.Data = (FScriptContainerElement *)local_6d0;
      if ((ForElementType<FSetElementId>)local_6c8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar26.Data = local_6c8.Data;
      }
      for (iVar14 = *(int *)((longlong)FVar26.Data + (ulonglong)(local_6c0 - 1 & uVar24) * 4);
          iVar14 != -1; iVar14 = *(int *)(local_708._0_8_ + (longlong)iVar14 * 0x10 + 8)) {
        if (*(FName *)(local_708._0_8_ + (longlong)iVar14 * 0x10) == *pFVar28) {
          if (iVar14 != -1) {
            *(FName *)(local_708._0_8_ + (longlong)iVar14 * 0x10) = *pFVar28;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_708,iVar11,1);
            goto LAB_142aaf881;
          }
          break;
        }
      }
    }
    uVar30 = local_708._8_4_ - local_6d4;
    if (uVar30 < 4) {
      uVar13 = 1;
    }
    else {
      uVar21 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar13 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar30 < 1) || ((int)uVar13 <= (int)local_6c0)) {
      uVar24 = local_6c0 - 1 & uVar24;
      pFVar28[1].Number = uVar24;
      FVar26.Data = (FScriptContainerElement *)local_6d0;
      if ((ForElementType<FSetElementId>)local_6c8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar26.Data = local_6c8.Data;
      }
      uVar21 = (longlong)(int)local_6c0 - 1U & (longlong)(int)uVar24;
      pFVar28[1].ComparisonIndex.Value = *(uint *)((longlong)FVar26.Data + uVar21 * 4);
      *(int *)((longlong)FVar26.Data + uVar21 * 4) = iVar11;
    }
    else {
      local_6c0 = uVar13;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_708);
    }
LAB_142aaf881:
    uVar29 = (ulonglong)local_6d4;
    pFVar32 = pFVar32 + 1;
    if (pFVar32 == (FName *)&local_dd0) {
      ::FName::FName(&local_618,"FullPath");
      ::FName::FName(&local_610,"PkgPath");
      ::FName::FName(&local_608,"ObjPath");
      ::FName::FName(&local_600,"NumPath_0");
      ::FName::FName(&local_5f8,"NumPath_1");
      ::FName::FName(&local_5f0,"NumPath_2");
      ::FName::FName(&local_5e8,"NumPath_3");
      ::FName::FName(&local_5e0,"NumPath_4");
      ::FName::FName(&local_5d8,"NumPath_5");
      ::FName::FName(&local_5d0,"NumPath_6");
      local_cd8._First = &local_618;
      local_cd8._Last = &local_5c8;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&local_6b8,&local_cd8);
      local_ea0.Version = PreVersioning;
      local_ea0.bFilterEditorOnlyData = false;
      local_ea0._5_3_ = 0;
      local_bd8._padding_ = 0;
      local_bd8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_bd8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_bd8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_bd8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_bd8._40_8_ = 0;
      local_bd8.ArSerializingDefaults = 0;
      local_bd8.ArPortFlags = 0;
      local_bd8.ArMaxSerializeSize = 0;
      local_bd8.ArUEVer.FileVersionUE4 = 0;
      local_bd8.ArUEVer.FileVersionUE5 = 0;
      local_bd8.ArLicenseeUEVer = 0;
      local_bd8.ArEngineVer.Major = 0;
      local_bd8.ArEngineVer.Minor = 0;
      local_bd8.ArEngineVer.Patch = 0;
      local_bd8.ArEngineVer._6_2_ = 0;
      local_bd8.ArEngineVer.Changelist = 0;
      local_bd8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_bd8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_bd8.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_bd8.SerializedProperty = (FProperty *)0x0;
      local_bd8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_bd8.bCustomVersionsAreReset = false;
      local_bd8._129_7_ = 0;
      local_bd8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_bd8);
      local_b48 = 0;
      local_bd8._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      local_b40 = &local_e50;
      local_b38 = 0;
      FArchiveState::SetIsSaving(&local_bd8,true);
      (**(code **)(local_bd8._padding_ + 0x108))(&local_bd8,0);
      local_bd8._padding_ = (longlong)&___7FMemoryWriter__6B_;
      FAssetRegistryWriter::FAssetRegistryWriter
                (&local_518,(FAssetRegistryWriterOptions *)local_708,(FArchive *)&local_bd8);
      this_00 = local_df8;
      iVar11 = (int)local_ec0;
      uVar21 = (ulonglong)(int)local_ec0;
      pFVar2 = (FAssetDataTagMap *)(&(local_ec8.Loose)->_padding_ + uVar21);
      FVar25 = local_ec8;
      while( true ) {
        if ((int)uVar21 != iVar11) {
          `TCheckedPointerIterator<FAssetDataTagMapSharedView,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_ea8);
        }
        if (FVar25.Loose == pFVar2) break;
        this_01 = FixedTagPrivate::FStoreBuilder::AddTagMap(&local_518.Tags,local_be8);
        local_e88 = FixedTagPrivate::FPartialMapHandle::ToInt((FPartialMapHandle *)this_01);
        if (*(ulong64 **)(local_518._padding_ + 8) < *(ulong64 **)local_518._padding_ + 1) {
          if ((local_518._padding_._2_1_ & 1) == 0) {
            (**(code **)(local_518._padding_ + 0x188))();
            uVar21 = local_ec0 & 0xffffffff;
            FVar25.Loose = (FAssetDataTagMap *)&(FVar25.Loose)->_padding_;
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_518,&local_e88);
            uVar21 = local_ec0 & 0xffffffff;
            FVar25.Loose = (FAssetDataTagMap *)&(FVar25.Loose)->_padding_;
          }
        }
        else {
          local_e88 = **(ulong64 **)local_518._padding_;
          *(longlong *)local_518._padding_ = *(longlong *)local_518._padding_ + 8;
          uVar21 = local_ec0 & 0xffffffff;
          FVar25.Loose = (FAssetDataTagMap *)&(FVar25.Loose)->_padding_;
        }
      }
      FAssetRegistryWriter::~FAssetRegistryWriter(&local_518);
      FArchive::~FArchive((FArchive *)&local_bd8);
      iVar11 = (int)local_ec0;
      local_eb8.Data = (FScriptContainerElement *)0x0;
      local_eb0 = 0;
      if ((int)local_ec0 < 1) {
        if ((int)local_ec0 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(local_ec0 & 0xffffffff);
        }
      }
      else {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,(int)local_ec0,&local_eb8,(int *)&local_eb0,
                            (int *)((longlong)&local_eb0 + 4));
        DefaultConstructItems<FAssetDataTagMapSharedView,int>
                  (local_eb8.Data + (longlong)iVar14 * 8,iVar11);
      }
      local_b28._padding_ = 0;
      local_b28.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_b28.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_b28.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_b28.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_b28._40_8_ = 0;
      local_b28.ArSerializingDefaults = 0;
      local_b28.ArPortFlags = 0;
      local_b28.ArMaxSerializeSize = 0;
      local_b28.ArUEVer.FileVersionUE4 = 0;
      local_b28.ArUEVer.FileVersionUE5 = 0;
      local_b28.ArLicenseeUEVer = 0;
      local_b28.ArEngineVer.Major = 0;
      local_b28.ArEngineVer.Minor = 0;
      local_b28.ArEngineVer.Patch = 0;
      local_b28.ArEngineVer._6_2_ = 0;
      local_b28.ArEngineVer.Changelist = 0;
      local_b28.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_b28.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_b28.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_b28.SerializedProperty = (FProperty *)0x0;
      local_b28.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_b28.bCustomVersionsAreReset = false;
      local_b28._129_7_ = 0;
      local_b28.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_b28);
      local_a98 = 0;
      local_b28._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_a90 = &local_e50;
      local_a88 = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading(&local_b28,true);
      (**(code **)(local_b28._padding_ + 0x108))(&local_b28,0);
      local_ea0.Version = LatestVersion;
      local_ea0.bFilterEditorOnlyData = false;
      FAssetRegistryReader::FAssetRegistryReader
                ((FAssetRegistryReader *)local_9c8,(FArchive *)&local_b28,0,local_ea0);
      iVar11 = (int)local_eb0;
      uVar21 = (ulonglong)(int)local_eb0;
      pFVar3 = local_eb8.Data + uVar21 * 8;
      FVar26.Data = local_eb8.Data;
      while( true ) {
        if ((int)uVar21 != iVar11) {
          `TCheckedPointerIterator<FAssetDataTagMapSharedView,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_ea7);
        }
        if (FVar26.Data == pFVar3) break;
        if (*(ulong64 **)(local_9c8._8_8_ + 8) < *(ulong64 **)local_9c8._8_8_ + 1) {
          if ((local_9c8[0x2a] & 1) == 0) {
            (**(code **)(local_9c8._0_8_ + 0x188))((FArchive *)local_9c8,&local_e80,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)local_9c8,&local_e80);
          }
        }
        else {
          local_e80 = **(ulong64 **)local_9c8._8_8_;
          *(longlong *)local_9c8._8_8_ = *(longlong *)local_9c8._8_8_ + 8;
        }
        local_df0 = FixedTagPrivate::FPartialMapHandle::FromInt(local_e80);
        FVar19 = FixedTagPrivate::FPartialMapHandle::MakeFullHandle(&local_df0,(uint)local_bf0);
        FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
                  ((FAssetDataTagMapSharedView *)&local_e98.Fixed,*(FMapHandle *)FVar19);
        FAssetDataTagMapSharedView::operator=
                  ((FAssetDataTagMapSharedView *)FVar26.Data,
                   (FAssetDataTagMapSharedView *)&local_e98.Fixed);
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                  ((FAssetDataTagMapSharedView *)&local_e98.Fixed);
        uVar21 = local_eb0 & 0xffffffff;
        FVar26.Data = FVar26.Data + 8;
      }
      local_9c8._0_8_ = &___7FAssetRegistryReader__6B_;
      if (local_9c8._176_8_ != 0) {
        do {
          cVar10 = (**(code **)(**(longlong **)(local_9c8._176_8_ + 0x60) + 0x20))
                             (*(longlong **)(local_9c8._176_8_ + 0x60),0xffffffff,0);
        } while (cVar10 == '\0');
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_9c8._184_8_);
      if ((FStore *)local_9c8._168_8_ != (FStore *)0x0) {
        FixedTagPrivate::FStore::Release((FStore *)local_9c8._168_8_);
      }
      if ((FScriptContainerElement *)local_9c8._152_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_9c8._152_8_);
      }
      FArchiveProxy::~FArchiveProxy((FArchiveProxy *)local_9c8);
      FArchive::~FArchive((FArchive *)&local_b28);
      if (((int)local_eb0 == (int)local_ec0) &&
         (bVar8 = CompareItems<FAssetDataTagMapSharedView,int>
                            ((FAssetDataTagMapSharedView *)local_eb8.Data,
                             (FAssetDataTagMapSharedView *)local_ec8.Loose,(int)local_eb0), bVar8))
      {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      ::FString::FString(&local_dd0,"SerializeTagsAndBundles round-trip");
      FVar22 = (FName)L"";
      if (local_dd0.Data.ArrayNum != 0) {
        FVar22 = (FName)local_dd0.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar22,bVar8);
      if ((FName)local_dd0.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_dd0.Data.AllocatorInstance.Data);
      }
      local_a78._padding_ = 0;
      local_a78.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_a78.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_a78.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_a78.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_a78._40_8_ = 0;
      local_a78.ArSerializingDefaults = 0;
      local_a78.ArPortFlags = 0;
      local_a78.ArMaxSerializeSize = 0;
      local_a78.ArUEVer.FileVersionUE4 = 0;
      local_a78.ArUEVer.FileVersionUE5 = 0;
      local_a78.ArLicenseeUEVer = 0;
      local_a78.ArEngineVer.Major = 0;
      local_a78.ArEngineVer.Minor = 0;
      local_a78.ArEngineVer.Patch = 0;
      local_a78.ArEngineVer._6_2_ = 0;
      local_a78.ArEngineVer.Changelist = 0;
      local_a78.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_a78.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_a78.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_a78.SerializedProperty = (FProperty *)0x0;
      local_a78.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_a78.bCustomVersionsAreReset = false;
      local_a78._129_7_ = 0;
      local_a78.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_a78);
      local_9e8 = 0;
      local_9d8 = 0x7fffffffffffffff;
      local_a78._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_9e0 = &local_e50;
      FArchiveState::SetIsLoading(&local_a78,true);
      (**(code **)(local_a78._padding_ + 0x108))(&local_a78,0);
      local_e98.Bits._0_4_ = 0x16;
      local_e98.Fixed.PairBegin = local_e98.Fixed.PairBegin & 0xffffff00;
      FVar7._4_4_ = local_e98.Fixed.PairBegin;
      FVar7.Version = LatestVersion;
      FAssetRegistryReader::FAssetRegistryReader
                ((FAssetRegistryReader *)local_908,(FArchive *)&local_a78,0,FVar7);
      iVar11 = (int)local_eb0;
      uVar21 = (ulonglong)(int)local_eb0;
      pFVar3 = local_eb8.Data + uVar21 * 8;
      FVar26.Data = local_eb8.Data;
      while( true ) {
        if ((int)uVar21 != iVar11) {
          `TCheckedPointerIterator<FAssetDataTagMapSharedView,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_ea6);
        }
        if (FVar26.Data == pFVar3) break;
        if (*(ulong64 **)(local_908._8_8_ + 8) < *(ulong64 **)local_908._8_8_ + 1) {
          if ((local_908[0x2a] & 1) == 0) {
            (**(code **)(local_908._0_8_ + 0x188))((FArchive *)local_908,&local_e78,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)local_908,&local_e78);
          }
        }
        else {
          local_e78 = **(ulong64 **)local_908._8_8_;
          *(longlong *)local_908._8_8_ = *(longlong *)local_908._8_8_ + 8;
        }
        local_de8 = FixedTagPrivate::FPartialMapHandle::FromInt(local_e78);
        FVar19 = FixedTagPrivate::FPartialMapHandle::MakeFullHandle(&local_de8,(uint)local_bf8);
        FAssetDataTagMapSharedView::FAssetDataTagMapSharedView(&local_e40,*(FMapHandle *)FVar19);
        bVar8 = ::operator==((FAssetDataTagMapSharedView *)FVar26.Data,&local_e40);
        ::FString::FString(&local_dc0,"Fixed tag map equality");
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_dc0.Data.ArrayNum != 0) {
          FVar23.Data = local_dc0.Data.AllocatorInstance.Data;
        }
        FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar23.Data,bVar8);
        if (local_dc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_dc0.Data.AllocatorInstance.Data);
        }
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_e40);
        uVar21 = local_eb0 & 0xffffffff;
        FVar26.Data = FVar26.Data + 8;
      }
      local_908._0_8_ = &___7FAssetRegistryReader__6B_;
      if (local_908._176_8_ != 0) {
        do {
          cVar10 = (**(code **)(**(longlong **)(local_908._176_8_ + 0x60) + 0x20))
                             (*(longlong **)(local_908._176_8_ + 0x60),0xffffffff,0);
        } while (cVar10 == '\0');
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_908._184_8_);
      if ((FStore *)local_908._168_8_ != (FStore *)0x0) {
        FixedTagPrivate::FStore::Release((FStore *)local_908._168_8_);
      }
      if ((FScriptContainerElement *)local_908._152_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_908._152_8_);
      }
      FArchiveProxy::~FArchiveProxy((FArchiveProxy *)local_908);
      FArchive::~FArchive((FArchive *)&local_a78);
      DestructItems<FAssetDataTagMapSharedView,int>
                ((FAssetDataTagMapSharedView *)local_eb8.Data,(int)local_eb0);
      if (local_eb8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_eb8.Data);
      }
      local_6b8.HashSize = 0;
      if (local_6b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_6b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_6b8.Elements);
      local_6c0 = 0;
      if ((ForElementType<FSetElementId>)local_6c8.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_6c8.Data);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_708);
      if (local_e50 != (void *)0x0) {
        FMemory::Free(local_e50);
      }
      DestructItems<FAssetDataTagMapSharedView,int>
                ((FAssetDataTagMapSharedView *)local_ec8.Loose,(int)local_ec0);
      if (local_ec8.Loose != (FAssetDataTagMap *)0x0) {
        FMemory::Free(local_ec8.Loose);
      }
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 142ab0150

FString * __thiscall
FAssetRegistryTagSerializationTest::GetBeautifiedTestName
          (FAssetRegistryTagSerializationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AssetRegistry.SerializeTagMap");
  return __return_storage_ptr__;
}

