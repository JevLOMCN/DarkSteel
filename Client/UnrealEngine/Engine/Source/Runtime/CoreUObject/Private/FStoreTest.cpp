// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// GetTestFlags @ 141e684e0

EAutomationTestFlags __thiscall FixedTagPrivate::FStoreTest::GetTestFlags(FStoreTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e684f0

bool __thiscall FixedTagPrivate::FStoreTest::IsStressTest(FStoreTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e68500

uint __thiscall FixedTagPrivate::FStoreTest::GetRequiredDeviceNum(FStoreTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e68510

FString * __thiscall
FixedTagPrivate::FStoreTest::GetTestSourceFileName(FStoreTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e68540

int __thiscall FixedTagPrivate::FStoreTest::GetTestSourceFileLine(FStoreTest *this)

{
  return 0x6e2;
}

// GetTests @ 141e68550

/* WARNING: Removing unreachable block (ram,0x000141e6863d) */
/* WARNING: Removing unreachable block (ram,0x000141e68708) */

void __thiscall
FixedTagPrivate::FStoreTest::GetTests
          (FStoreTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AssetRegistry.FixedTag.Store");
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

// RunTest @ 141e68730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FixedTagPrivate::FStoreTest::RunTest(FStoreTest *this,FString *param_1)

{
  FDisplayNameEntryId FVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FString *pFVar9;
  FAssetDataTagMapSharedView FVar10;
  ulonglong uVar11;
  FName *pFVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  FName FVar15;
  TPairInitializer<char_const_*,FString> *pTVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  undefined1 auStackY_ab8 [32];
  FAssetDataTagMapSharedView_u_0 local_a68;
  undefined8 local_a60;
  ForAnyElementType local_a58;
  int local_a50;
  int local_a4c;
  ForAnyElementType local_a48;
  int local_a40;
  int local_a3c;
  FString local_a38;
  FString local_a28;
  uint local_a18;
  uint uStack_a14;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a10;
  undefined4 local_a08;
  uint uStack_a04;
  uint uStack_a00;
  undefined4 uStack_9fc;
  FString local_9f8;
  FString local_9e8;
  undefined1 local_9d8 [16];
  undefined1 local_9c8 [16];
  undefined1 local_9b8 [16];
  undefined1 local_9a8 [16];
  FName local_998;
  FString local_990;
  FName local_980;
  FName local_978;
  FString local_970;
  FString local_960;
  FString local_950;
  FName local_940;
  undefined1 local_938 [16];
  int local_928;
  FString local_920;
  FString local_910;
  FString local_900;
  FString local_8f0;
  FStoreTest *local_8e0;
  FAssetDataTagMapSharedView_u_0 *local_8d8;
  FString local_8d0;
  FString local_8c0;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  FString local_880;
  FString local_870;
  longlong *local_860;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_858;
  char *local_838;
  FString local_830;
  char *local_820;
  FString local_818;
  char *local_808;
  FString local_800;
  undefined1 local_7f0 [8];
  char **local_7e8;
  char **local_7e0;
  char **local_7d8;
  TStringView<char> *local_7d0;
  char **local_7c8;
  undefined1 *local_7c0;
  char **local_7b8;
  char **local_7b0;
  char **local_7a8;
  char **local_7a0;
  initializer_list<FName> local_798;
  char *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  char *local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  char *local_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  char *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  char *local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  FString local_738;
  FString local_728;
  char **local_718;
  undefined **local_710;
  undefined **local_708;
  char **local_700;
  char **local_6f8;
  undefined1 *local_6f0;
  FName *local_6e8;
  undefined1 *local_6e0;
  char *local_6d8;
  FString local_6d0;
  char *local_6c0;
  FString local_6b8;
  undefined *local_6a8;
  FString local_6a0;
  char *local_690;
  FString local_688;
  char *local_678;
  FString local_670;
  char *local_660;
  FString local_658;
  char *local_648;
  FString local_640;
  char *local_630;
  FString local_628;
  TStringView<char> local_618;
  TStringView<wchar_t> local_608;
  TStringView<wchar_t> local_5f8;
  FName local_5e8 [2];
  TStringView<char> local_5d8;
  TStringView<char> local_5c8;
  TStringView<char> local_5b8;
  TStringView<char> local_5a8;
  FStoreData local_598;
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
  int local_42c;
  int local_41c;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FStoreData local_378;
  undefined1 local_2c8 [32];
  ForElementType<unsigned_int> local_2a8;
  uint local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  undefined1 local_290 [8];
  ForAnyElementType local_288;
  uint local_280;
  undefined1 local_278 [32];
  void *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  ForElementType<FSetElementId> local_238;
  int local_230;
  undefined1 local_228 [32];
  void *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  ForElementType<FSetElementId> local_1f0;
  ulonglong local_1e0;
  ForAnyElementType local_1d8;
  undefined8 uStack_1d0;
  TBitArray<FDefaultBitArrayAllocator> local_1c8;
  undefined8 local_1a8;
  ForElementType<FSetElementId> FStack_1a0;
  ulonglong uStack_190;
  char *local_188;
  FString local_180;
  char *local_170;
  FString local_168;
  char *local_158;
  FString local_150;
  undefined1 local_140 [8];
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  char *local_d0;
  FString local_c8;
  char *local_b8;
  FString local_b0;
  char *local_a0;
  FString local_98;
  char *local_88;
  FString local_80;
  char *local_70;
  FString local_68;
  char *local_58;
  FString local_50;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_ab8;
  uVar14 = 0;
  local_a68.Loose = (FAssetDataTagMap *)0x0;
  local_a60 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4));
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = 0;
  pFVar9 = ::FString::FString(&local_408,"StringValue");
  local_6d8 = "Key";
  ::FString::FString(&local_6d0,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_3f8,"StringValue_0");
  local_6c0 = "Key_0";
  ::FString::FString(&local_6b8,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_718 = &local_6d8;
  local_710 = &local_6a8;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_938);
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_938);
  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
  }
  if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_3d8,"NameValue");
  local_6a8 = &s_Name;
  ::FString::FString(&local_6a0,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_3c8,"NameValue_0");
  local_690 = "Name_0";
  ::FString::FString(&local_688,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_708 = &local_6a8;
  local_700 = &local_678;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_9d8);
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_9d8);
  if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.Data.AllocatorInstance.Data);
  }
  if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_3b8,"/S/P.C\'P.O\'");
  local_188 = "FullPath";
  ::FString::FString(&local_180,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_3a8,"P.O");
  local_170 = "PkgPath";
  ::FString::FString(&local_168,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_398,"O");
  local_158 = "ObjPath";
  ::FString::FString(&local_150,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_6f8 = &local_188;
  local_6f0 = local_140;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)(local_9d8 + 8)
                       );
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_9d8 + 8));
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_388,"/S/P.C\'P.O_0\'");
  local_e8 = (FName)0x1507d6d80;
  ::FString::FString(&local_e0,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_4e8,"/S/P.C\'P_0.O\'");
  local_d0 = "NumPath_1";
  ::FString::FString(&local_c8,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_4d8,"/S/P.C_0\'P.O\'");
  local_b8 = "NumPath_2";
  ::FString::FString(&local_b0,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_4c8,"/S/P.C\'P_0.O_0\'");
  local_a0 = "NumPath_3";
  ::FString::FString(&local_98,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_4b8,"/S/P.C_0\'P_0.O\'");
  local_88 = "NumPath_4";
  ::FString::FString(&local_80,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_4a8,"/S/P.C_0\'P.O_0\'");
  local_70 = "NumPath_5";
  ::FString::FString(&local_68,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_468,"/S/P.C_0\'P_0.O_0\'");
  local_58 = "NumPath_6";
  ::FString::FString(&local_50,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_6e8 = &local_e8;
  local_6e0 = local_40;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_9c8);
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_9c8);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_3e8,"SameSame");
  local_678 = "SameSame";
  ::FString::FString(&local_670,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_498,"SameSame");
  local_660 = "AlsoSame";
  ::FString::FString(&local_658,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_7e8 = &local_678;
  local_7e0 = &local_648;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)(local_9c8 + 8)
                       );
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_9c8 + 8));
  if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data.AllocatorInstance.Data);
  }
  if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_670.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_488,"FilterValue1");
  local_648 = "FilterKey1";
  ::FString::FString(&local_640,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar9 = ::FString::FString(&local_478,"FilterValue2");
  local_630 = "FilterKey2";
  ::FString::FString(&local_628,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_7d8 = &local_648;
  local_7d0 = &local_618;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_9b8);
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_9b8);
  if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Data.AllocatorInstance.Data);
  }
  if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_418,
                              "NSLOCTEXT(\"\", \"5F8411BA4D1A349F6E2C56BB04A1A810\", \"Content Browser Walkthrough\")"
                             );
  local_808 = "Localized";
  ::FString::FString(&local_800,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_7c8 = &local_808;
  local_7c0 = local_7f0;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)(local_9b8 + 8)
                       );
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_9b8 + 8));
  if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_800.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_458,L"Wideß");
  local_838 = "Wide";
  ::FString::FString(&local_830,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_7b8 = &local_838;
  local_7b0 = &local_820;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)local_9a8);
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)local_9a8);
  if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_830.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_448,"stringvalue");
  local_820 = "LowerCase";
  ::FString::FString(&local_818,pFVar9);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_7a8 = &local_820;
  local_7a0 = &local_808;
  FVar10 = MakeLooseMap((initializer_list<TPairInitializer<char_const_*,FString>_> *)(local_9a8 + 8)
                       );
  if (((local_a68.Loose <= (ulonglong)FVar10.field0_0x0) &&
      ((ulonglong)FVar10.field0_0x0 <
       (FAssetDataTagMap *)(&(local_a68.Loose)->_padding_ + local_a60._4_4_))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)local_a60;
  if ((int)local_a60 == local_a60._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_a68.Fixed,(int *)((longlong)&local_a60 + 4)
                      );
  }
  local_a60 = CONCAT44(local_a60._4_4_,iVar8 + 1);
  (&(local_a68.Loose)->_padding_)[iVar8] = *(longlong *)FVar10.field0_0x0;
  *(undefined8 *)FVar10.field0_0x0 = 0;
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_9a8 + 8));
  if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.Data.AllocatorInstance.Data);
  }
  local_2c8._0_8_ = (FScriptContainerElement *)0x0;
  local_2c8._8_8_ = 0;
  local_2a8 = (ForElementType<unsigned_int>)0x0;
  local_2a0 = 0;
  local_29c = 0x80;
  local_298 = -1;
  local_294 = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  local_278._0_8_ = (void *)0x0;
  local_278._8_8_ = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_24c = 0x80;
  local_248 = 0xffffffff;
  local_244 = 0;
  local_238 = (ForElementType<FSetElementId>)0x0;
  local_230 = 0;
  ::FName::FName(&local_980,"Name");
  ::FName::FName(&local_978,"Name_0");
  iVar8 = local_2c8._8_4_;
  if (local_2c8._8_4_ != local_294) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2c8);
    if ((longlong)local_2c8._8_8_ < 0) {
      local_2c8._8_8_ = (ulonglong)(uint)local_2c8._12_4_ << 0x20;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_2c8,0,(int *)(local_2c8 + 0xc));
      iVar8 = local_2c8._8_4_;
    }
    else {
      local_2c8._8_8_ = (ulonglong)(uint)local_2c8._12_4_ << 0x20;
      iVar8 = 0;
    }
    local_298 = -1;
    local_294 = 0;
    local_2a0 = 0;
  }
  uVar17 = (iVar8 - local_294) + 2;
  if (uVar17 <= (uint)(iVar8 - local_294)) goto LAB_141e69962;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_2c8,uVar17);
  if (uVar17 < 4) {
    uVar17 = 1;
  }
  else {
    uVar20 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_280 != 0) && ((int)uVar17 <= (int)local_280)) goto LAB_141e69962;
  local_280 = uVar17;
  if ((ForElementType<FSetElementId>)local_288.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_288,0,0,4);
  }
  if (uVar17 != 0) {
    uVar19 = uVar17;
    if (uVar17 < 2) {
      if ((ForElementType<FSetElementId>)local_288.Data != (ForElementType<FSetElementId>)0x0) {
        uVar19 = 0;
        goto LAB_141e6977f;
      }
    }
    else {
LAB_141e6977f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_288,0,uVar19,4);
    }
    if (0 < (int)uVar17) {
      uVar21 = (ulonglong)uVar17;
      uVar20 = uVar14;
      do {
        FVar13.Data = (FScriptContainerElement *)local_290;
        if ((ForElementType<FSetElementId>)local_288.Data != (ForElementType<FSetElementId>)0x0) {
          FVar13.Data = local_288.Data;
        }
        uVar11 = uVar20 & (longlong)(int)uVar17 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)((longlong)FVar13.Data + uVar11 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_280 != 0) {
    pTStack_a10 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10);
    local_a18 = 0;
    uStack_a14 = 1;
    uStack_a04 = 0;
    uStack_a00 = 0;
    if (local_2a0 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_2c8 + 0x10);
      if (local_2a8 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_2a8;
      }
      uVar17 = *(uint *)FVar22;
      uVar20 = uVar14;
      while (uVar17 == 0) {
        uStack_a00 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_a00;
        iVar8 = (int)uVar14;
        local_a18 = iVar8 + 1;
        uVar14 = (ulonglong)local_a18;
        if ((int)((local_2a0 - 1) + ((int)(local_2a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a18)
        goto LAB_141e69898;
        uVar17 = ((uint *)((longlong)FVar22 + 4))[iVar8];
      }
      uStack_a14 = -uVar17 & uVar17;
      uVar14 = (ulonglong)uStack_a14 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_a04 = (uStack_a00 - 1) + (int)lVar4;
      uVar14 = (ulonglong)uStack_a04;
      if ((int)local_2a0 < (int)uStack_a04) {
LAB_141e69898:
        uVar14 = (ulonglong)local_2a0;
        uStack_a04 = local_2a0;
      }
    }
    local_a08 = 0xffffffff;
    local_860 = (longlong *)local_2c8;
    local_858._padding_ = CONCAT44(uStack_a14,local_a18);
    local_858.CurrentBitIndex = uStack_a04;
    local_858.UnvisitedBitMask = 0xffffffff;
    local_858._28_4_ = uStack_9fc;
    local_858.BaseBitIndex = uStack_a00;
    local_858.Array = pTStack_a10;
    if ((int)uVar14 < (int)local_2a0) {
      do {
        puVar18 = (undefined8 *)((longlong)(int)uVar14 * 0x10 + *local_860);
        uVar3 = *puVar18;
        uVar17 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar17 = local_280 - 1 & uVar17 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar18 + 0xc) = uVar17;
        FVar13.Data = (FScriptContainerElement *)local_290;
        if ((ForElementType<FSetElementId>)local_288.Data != (ForElementType<FSetElementId>)0x0) {
          FVar13.Data = local_288.Data;
        }
        uVar20 = (longlong)(int)local_280 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((longlong)FVar13.Data + uVar20 * 4);
        *(int *)((longlong)FVar13.Data + uVar20 * 4) = (int)uVar14;
        local_858.UnvisitedBitMask = local_858.UnvisitedBitMask & ~local_858._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_858);
        uVar14 = (ulonglong)(uint)local_858.CurrentBitIndex;
      } while (local_858.CurrentBitIndex < (local_858.Array)->NumBits);
    }
  }
LAB_141e69962:
  pFVar12 = &local_980;
  do {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2c8,&local_940,
               (bool *)pFVar12);
    pFVar12 = pFVar12 + 1;
  } while (pFVar12 != (FName *)&local_970);
  ::FName::FName(&local_138,"FullPath");
  ::FName::FName(&local_130,"PkgPath");
  ::FName::FName(&local_128,"ObjPath");
  ::FName::FName(&local_120,"NumPath_0");
  ::FName::FName(&local_118,"NumPath_1");
  ::FName::FName(&local_110,"NumPath_2");
  ::FName::FName(&local_108,"NumPath_3");
  ::FName::FName(&local_100,"NumPath_4");
  ::FName::FName(&local_f8,"NumPath_5");
  ::FName::FName(&local_f0,"NumPath_6");
  local_798._First = &local_138;
  local_798._Last = &local_e8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_278,&local_798);
  local_8d8 = &local_a68;
  local_8e0 = this;
  `FixedTagPrivate::FStoreTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_8e0,&local_598,(FOptions *)local_2c8);
  uStack_780 = 0xd;
  local_788 = "StringValue_0";
  local_5d8._12_4_ = uStack_77c;
  local_5d8.Size = 0xd;
  local_5d8.DataPtr = "StringValue_0";
  uVar17 = CountOccurences(&local_598.AnsiStrings,&local_5d8);
  ::FString::FString(&local_970,"String values contains");
  FVar15 = (FName)L"";
  if (local_970.Data.ArrayNum != 0) {
    FVar15 = (FName)local_970.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar15,uVar17,1);
  if ((FName)local_970.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_970.Data.AllocatorInstance.Data);
  }
  uStack_770 = 0xb;
  local_778 = "StringValue";
  local_5c8._12_4_ = uStack_76c;
  local_5c8.Size = 0xb;
  local_5c8.DataPtr = "StringValue";
  uVar17 = CountOccurences(&local_598.AnsiStrings,&local_5c8);
  ::FString::FString(&local_960,"String values contains");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_960.Data.ArrayNum != 0) {
    FVar13.Data = local_960.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,uVar17,2);
  if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_960.Data.AllocatorInstance.Data);
  }
  local_768 = "stringvalue";
  uStack_760 = 0xb;
  local_5b8._12_4_ = uStack_75c;
  local_5b8.Size = 0xb;
  local_5b8.DataPtr = "stringvalue";
  uVar17 = CountOccurences(&local_598.AnsiStrings,&local_5b8);
  ::FString::FString(&local_950,"String values lower case");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_950.Data.ArrayNum != 0) {
    FVar13.Data = local_950.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,uVar17,1);
  if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_950.Data.AllocatorInstance.Data);
  }
  uStack_750 = 9;
  local_758 = "NameValue";
  local_5a8._12_4_ = uStack_74c;
  local_5a8.Size = 9;
  local_5a8.DataPtr = "NameValue";
  uVar17 = CountOccurences(&local_598.AnsiStrings,&local_5a8);
  ::FString::FString(&local_a38,"String values excludes");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_a38.Data.ArrayNum != 0) {
    FVar13.Data = local_a38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,uVar17,0);
  if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Data.AllocatorInstance.Data);
  }
  uStack_740 = 8;
  local_748 = "SameSame";
  local_618._12_4_ = uStack_73c;
  local_618.Size = 8;
  local_618.DataPtr = "SameSame";
  uVar17 = CountOccurences(&local_598.AnsiStrings,&local_618);
  ::FString::FString(&local_a28,"String value deduplication");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_a28.Data.ArrayNum != 0) {
    FVar13.Data = local_a28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,uVar17,1);
  if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_990,"Wide characters");
  local_a28.Data.ArrayMax = local_42c;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_990.Data.ArrayNum != 0) {
    FVar13.Data = local_990.Data.AllocatorInstance.Data;
  }
  local_a38.Data.ArrayMax = local_41c;
  local_a28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x1507d6f28;
  local_a28.Data.ArrayNum = 5;
  local_608._12_4_ = local_42c;
  local_608.Size = 5;
  local_a38.Data.AllocatorInstance.Data = local_598.WideStrings.AllocatorInstance.Data;
  local_5f8._12_4_ = local_41c;
  local_5f8.Size = local_598.WideStrings.ArrayNum + -1;
  local_608.DataPtr = L"Wideß";
  local_5f8.DataPtr = (wchar_t *)local_598.WideStrings.AllocatorInstance.Data;
  local_a38.Data.ArrayNum = local_598.WideStrings.ArrayNum + -1;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,&local_5f8,&local_608);
  if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_990.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::FName::FName(local_5e8,"NameValue");
  FVar1.Id.Value = (FNameEntryId)(pFVar12->ComparisonIndex).Value;
  local_a48.Data = (FScriptContainerElement *)0x0;
  local_a40 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_a48,1,&local_a3c);
  *(FNameEntryId *)local_a48.Data = FVar1.Id.Value;
  ::FString::FString(&local_9f8,"Numberless name values");
  FVar13.Data = local_9f8.Data.AllocatorInstance.Data;
  if ((local_598.NumberlessNames.ArrayNum != local_a40) ||
     (bVar6 = CompareItems<FDisplayNameEntryId,int>
                        ((FDisplayNameEntryId *)local_598.NumberlessNames.AllocatorInstance.Data,
                         (FDisplayNameEntryId *)local_a48.Data,local_598.NumberlessNames.ArrayNum),
     !bVar6)) {
    pcVar5 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_738,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_738,0);
    FVar13.Data = local_9f8.Data.AllocatorInstance.Data;
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
      FVar13.Data = local_9f8.Data.AllocatorInstance.Data;
    }
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (local_a48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data);
  }
  ::FName::FName(&local_998,"NameValue_0");
  local_a58.Data = (FScriptContainerElement *)0x0;
  local_a50 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_a58,1,&local_a4c);
  *(FName *)local_a58.Data = local_998;
  ::FString::FString(&local_9e8,"Numbered name values");
  FVar13.Data = local_9e8.Data.AllocatorInstance.Data;
  if ((local_598.Names.ArrayNum != local_a50) ||
     (bVar6 = CompareItems<FName,int>
                        ((FName *)local_598.Names.AllocatorInstance.Data,(FName *)local_a58.Data,
                         local_598.Names.ArrayNum), !bVar6)) {
    pcVar5 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_728,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_728,0);
    FVar13.Data = local_9e8.Data.AllocatorInstance.Data;
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
      FVar13.Data = local_9e8.Data.AllocatorInstance.Data;
    }
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if ((FName *)local_a58.Data != (FName *)0x0) {
    FMemory::Free(local_a58.Data);
  }
  ::FString::FString((FString *)(local_938 + 8),"Numberless path values");
  pTVar16 = (TPairInitializer<char_const_*,FString> *)L"";
  if (local_928 != 0) {
    pTVar16 = (TPairInitializer<char_const_*,FString> *)local_938._8_8_;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)pTVar16,local_598.NumberlessExportPaths.ArrayNum
             ,3);
  if ((TPairInitializer<char_const_*,FString> *)local_938._8_8_ !=
      (TPairInitializer<char_const_*,FString> *)0x0) {
    FMemory::Free((void *)local_938._8_8_);
  }
  ::FString::FString(&local_920,"Numbered path values");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_920.Data.ArrayNum != 0) {
    FVar13.Data = local_920.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_598.ExportPaths.ArrayNum,7);
  if (local_920.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_920.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_910,"Localized values");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_910.Data.ArrayNum != 0) {
    FVar13.Data = local_910.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_598.Texts.ArrayNum,1);
  if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_910.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_900,"Numberless keys");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_900.Data.ArrayNum != 0) {
    FVar13.Data = local_900.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_598.NumberlessPairs.ArrayNum,
             10);
  if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_8f0,"Numbered keys");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_8f0.Data.ArrayNum != 0) {
    FVar13.Data = local_8f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_598.Pairs.ArrayNum,0xb);
  if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
  }
  FStoreData::~FStoreData(&local_598);
  local_1f0.InlineData[0] = '\0';
  local_1f0.InlineData[1] = '\0';
  local_1f0.InlineData[2] = '\0';
  local_1f0.InlineData[3] = '\0';
  local_1f0._padding_ = 0;
  local_1c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  FStack_1a0.InlineData[0] = '\0';
  FStack_1a0.InlineData[1] = '\0';
  FStack_1a0.InlineData[2] = '\0';
  FStack_1a0.InlineData[3] = '\0';
  FStack_1a0._padding_ = 0;
  uStack_1d0 = 0;
  local_1c8.NumBits = 0;
  local_1c8.MaxBits = 0x80;
  local_1a8 = 0xffffffff;
  FStack_1a0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_190 = 0;
  local_228._16_8_ = 0;
  local_228._24_8_ = 0;
  local_1e0 = 0;
  local_228._0_8_ = (void *)0x0;
  local_228._8_8_ = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1fc = 0x80;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1f0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1c8.AllocatorInstance.InlineData[0] = '\0';
  local_1c8.AllocatorInstance.InlineData[1] = '\0';
  local_1c8.AllocatorInstance.InlineData[2] = '\0';
  local_1c8.AllocatorInstance.InlineData[3] = '\0';
  local_1c8.AllocatorInstance.InlineData[4] = '\0';
  local_1c8.AllocatorInstance.InlineData[5] = '\0';
  local_1c8.AllocatorInstance.InlineData[6] = '\0';
  local_1c8.AllocatorInstance.InlineData[7] = '\0';
  local_1c8.AllocatorInstance.InlineData[8] = '\0';
  local_1c8.AllocatorInstance.InlineData[9] = '\0';
  local_1c8.AllocatorInstance.InlineData[10] = '\0';
  local_1c8.AllocatorInstance.InlineData[0xb] = '\0';
  local_1c8.AllocatorInstance.InlineData[0xc] = '\0';
  local_1c8.AllocatorInstance.InlineData[0xd] = '\0';
  local_1c8.AllocatorInstance.InlineData[0xe] = '\0';
  local_1c8.AllocatorInstance.InlineData[0xf] = '\0';
  `FixedTagPrivate::FStoreTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_8e0,&local_378,(FOptions *)local_228);
  uStack_190 = uStack_190 & 0xffffffff00000000;
  if (FStack_1a0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_1a0.SecondaryData);
  }
  uVar14 = uStack_1d0 >> 0x20;
  uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
  if ((int)uVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_1d8,0,(int *)((longlong)&uStack_1d0 + 4));
  }
  iVar8 = local_1c8.MaxBits;
  local_1a8 = 0xffffffff;
  local_1c8._24_8_ = (ulonglong)(uint)local_1c8.MaxBits << 0x20;
  if (0x80 < (uint)iVar8) {
    local_1c8.NumBits = 0;
    local_1c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1c8,0);
  }
  if (local_1c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1c8.AllocatorInstance.SecondaryData);
  }
  if (local_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  local_1e0 = local_1e0 & 0xffffffff00000000;
  if (local_1f0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1f0.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_228,0);
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if ((void *)local_228._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_228._0_8_);
  }
  ::FString::FString(&local_8d0,"Numberless name values");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_8d0.Data.ArrayNum != 0) {
    FVar13.Data = local_8d0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_378.NumberlessNames.ArrayNum,0
            );
  if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_8c0,"Numbered name values");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_8c0.Data.ArrayNum != 0) {
    FVar13.Data = local_8c0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_378.Names.ArrayNum,0);
  if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_8b0,"Numberless path values");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_8b0.Data.ArrayNum != 0) {
    FVar13.Data = local_8b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
             local_378.NumberlessExportPaths.ArrayNum,0);
  if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_8a0,"Numbered path values");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_8a0.Data.ArrayNum != 0) {
    FVar13.Data = local_8a0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_378.ExportPaths.ArrayNum,0);
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_890,"Localized values");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_890.Data.ArrayNum != 0) {
    FVar13.Data = local_890.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_378.Texts.ArrayNum,1);
  if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_880,"Numberless keys");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_880.Data.ArrayNum != 0) {
    FVar13.Data = local_880.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_378.NumberlessPairs.ArrayNum,
             10);
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_870,"Numbered keys");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_870.Data.ArrayNum != 0) {
    FVar13.Data = local_870.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,local_378.Pairs.ArrayNum,0xb);
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  FStoreData::~FStoreData(&local_378);
  local_230 = 0;
  if (local_238 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_278,0);
  if (local_258 != (void *)0x0) {
    FMemory::Free(local_258);
  }
  if ((void *)local_278._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  local_280 = 0;
  if ((ForElementType<FSetElementId>)local_288.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_288.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_2c8,0);
  if (local_2a8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a8);
  }
  if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._0_8_);
  }
  DestructItems<FAssetDataTagMapSharedView,int>
            ((FAssetDataTagMapSharedView *)local_a68.Loose,(int)local_a60);
  if (local_a68.Loose != (FAssetDataTagMap *)0x0) {
    FMemory::Free(local_a68.Loose);
  }
  return true;
}

// GetBeautifiedTestName @ 141e6a5e0

FString * __thiscall
FixedTagPrivate::FStoreTest::GetBeautifiedTestName(FStoreTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AssetRegistry.FixedTag.Store");
  return __return_storage_ptr__;
}

// operator() @ 141e8bab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStoreData * __thiscall
`FixedTagPrivate::FStoreTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FStoreData *__return_storage_ptr__,FOptions *param_1)

{
  int *piVar1;
  FThreadSafeCounter *pFVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  FAutomationTestBase *this_00;
  code *pcVar8;
  ushort uVar9;
  ushort uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  FStoreData *pFVar17;
  FPartialMapHandle FVar18;
  FPartialMapHandle FVar19;
  ulonglong *puVar20;
  ForAnyElementType FVar21;
  undefined1 auStack_438 [32];
  FPartialMapHandle local_418;
  FPartialMapHandle local_410;
  longlong local_408;
  longlong local_400;
  undefined8 local_3f8;
  undefined1 local_3e8;
  undefined1 local_3e7 [7];
  FPartialMapHandle local_3e0;
  undefined8 local_3d8;
  FPartialMapHandle local_3d0;
  undefined8 local_3c8;
  ulonglong local_3c0;
  ushort local_3b8;
  undefined2 uStack_3b6;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined8 *local_3a8;
  undefined1 local_3a0 [16];
  FString local_390;
  FAssetDataTagMapSharedView local_380;
  FStoreBuilder local_378;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_438;
  local_3b0 = this;
  local_3a0._8_8_ = __return_storage_ptr__;
  FixedTagPrivate::FStoreBuilder::FStoreBuilder(&local_378,param_1);
  plVar5 = *(longlong **)((longlong)this + 8);
  local_3d0.bHasNumberlessKeys = false;
  local_3d0._1_1_ = 0;
  local_3d0.Num = 0;
  local_3d0.PairBegin = 0;
  local_3c8 = 0;
  puVar20 = (ulonglong *)*plVar5;
  lVar11 = plVar5[1];
  puVar3 = puVar20 + (int)lVar11;
  while( true ) {
    if ((int)plVar5[1] != (int)lVar11) {
      local_3e8 = 0;
      `TCheckedPointerIterator<FAssetDataTagMapSharedView,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_3e8);
    }
    if (puVar20 == puVar3) break;
    local_3a8 = (undefined8 *)*puVar20;
    if (((ulonglong)local_3a8 & 1) == 0) {
      if ((((byte)local_3a8 ^ 1) & local_3a8 != (undefined8 *)0x0) != 0) {
        LOCK();
        *(int *)(local_3a8 + 2) = *(int *)(local_3a8 + 2) + 1;
        UNLOCK();
      }
    }
    else {
      uVar16 = ((ulonglong)local_3a8 & 0xffff) >> 2;
      if ((FixedTagPrivate::GStores.Data[uVar16] == (FStore *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < Capacity && Data[Index] != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                              ,0x180,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FStoreData *)(*pcVar8)();
        return pFVar17;
      }
      LOCK();
      pFVar2 = &FixedTagPrivate::GStores.Data[uVar16]->RefCount;
      pFVar2->Counter = pFVar2->Counter + 1;
      UNLOCK();
    }
    FVar18 = FixedTagPrivate::FStoreBuilder::AddTagMap(&local_378,&local_380);
    if ((ulonglong)local_3d0 <= (ulonglong)FVar18) {
      if ((ulonglong)FVar18 < (ulonglong)((longlong)local_3d0 + (longlong)local_3c8._4_4_ * 8)) {
        local_400 = (longlong)(int)local_3c8;
        local_3f8 = 8;
        local_410 = local_3d0;
        local_418 = FVar18;
        local_408 = (longlong)local_3c8._4_4_;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FStoreData *)(*pcVar8)();
          return pFVar17;
        }
      }
    }
    iVar14 = (int)local_3c8;
    if ((int)local_3c8 == local_3c8._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&local_3d0,(int *)((longlong)&local_3c8 + 4));
    }
    puVar12 = local_3a8;
    local_3c8 = CONCAT44(local_3c8._4_4_,iVar14 + 1);
    *(undefined8 *)((longlong)local_3d0 + (longlong)iVar14 * 8) = *(undefined8 *)FVar18;
    if (((ulonglong)local_3a8 & 1) == 0) {
      if ((((byte)local_3a8 ^ 1) & local_3a8 != (undefined8 *)0x0) != 0) {
        LOCK();
        piVar1 = (int *)(local_3a8 + 2);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar14 == 1) && (local_3a8 != (undefined8 *)0x0)) {
          DestructItems<TTuple<FName,FString>,int>
                    ((TTuple<FName,FString> *)*local_3a8,*(int *)(local_3a8 + 1));
          pvVar6 = (void *)*puVar12;
          if (pvVar6 != (void *)0x0) {
            FMemory::Free(pvVar6);
          }
          ::operator_delete(puVar12,0x18);
        }
      }
      puVar20 = puVar20 + 1;
    }
    else {
      uVar16 = ((ulonglong)local_3a8 & 0xffff) >> 2;
      if ((FixedTagPrivate::GStores.Data[uVar16] == (FStore *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < Capacity && Data[Index] != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                              ,0x180,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FStoreData *)(*pcVar8)();
        return pFVar17;
      }
      FixedTagPrivate::FStore::Release(FixedTagPrivate::GStores.Data[uVar16]);
      puVar20 = puVar20 + 1;
    }
  }
  FixedTagPrivate::FStoreBuilder::Finalize(&local_378,(FStoreData *)local_3a0._8_8_);
  FixedTagPrivate::MakeTestStore((FStoreData *)local_3a0);
  puVar12 = local_3b0;
  iVar14 = (int)local_3c8;
  uVar16 = (ulonglong)(int)local_3c8;
  local_3e0.bHasNumberlessKeys = false;
  local_3e0._1_1_ = 0;
  local_3e0.Num = 0;
  local_3e0.PairBegin = 0;
  local_3d8 = 0;
  FVar18 = (FPartialMapHandle)((longlong)local_3d0 + uVar16 * 8);
  FVar19 = local_3d0;
  while( true ) {
    if ((int)uVar16 != iVar14) {
      local_3e7[0] = 0;
      `TCheckedPointerIterator<FixedTagPrivate::FPartialMapHandle,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_3e7);
    }
    if (FVar19 == FVar18) {
      puVar7 = (undefined8 *)puVar12[1];
      this_00 = (FAutomationTestBase *)*puVar12;
      if (((int)local_3d8 == *(int *)(puVar7 + 1)) &&
         (bVar13 = CompareItems<FAssetDataTagMapSharedView,int>
                             ((FAssetDataTagMapSharedView *)local_3e0,
                              (FAssetDataTagMapSharedView *)*puVar7,(int)local_3d8), bVar13)) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      ::FString::FString(&local_390,"StoreBuilder round-trip");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_390.Data.ArrayNum != 0) {
        FVar21.Data = local_390.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar21.Data,bVar13);
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      DestructItems<FAssetDataTagMapSharedView,int>
                ((FAssetDataTagMapSharedView *)local_3e0,(int)local_3d8);
      if (local_3e0 != (FPartialMapHandle)0x0) {
        FMemory::Free((void *)local_3e0);
      }
      if ((FStore *)local_3a0._0_8_ != (FStore *)0x0) {
        FixedTagPrivate::FStore::Release((FStore *)local_3a0._0_8_);
      }
      if (local_3d0 != (FPartialMapHandle)0x0) {
        FMemory::Free((void *)local_3d0);
      }
      FixedTagPrivate::FStoreBuilder::~FStoreBuilder(&local_378);
      return (FStoreData *)local_3a0._8_8_;
    }
    puVar7 = *(undefined8 **)FVar19;
    uVar4 = *(uint *)(local_3a0._0_8_ + 0xb0);
    local_3b0 = puVar7;
    if ((0x3fff < uVar4) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StoreIndex < FStoreManager::Capacity",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                            ,0x2e4,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      pFVar17 = (FStoreData *)(*pcVar8)();
      return pFVar17;
    }
    uStack_3b6 = local_3b0._2_2_;
    uVar9 = (short)uVar4 * 2;
    uStack_3b4 = local_3b0._4_4_;
    uVar10 = ((ushort)puVar7 & 1 | uVar9) * 2;
    local_3b8 = uVar10 | 1;
    local_3c0 = CONCAT44(local_3b0._4_4_,CONCAT22(local_3b0._2_2_,uVar10)) | 1;
    uVar9 = (uVar9 & 0x7fff) >> 1;
    if ((FixedTagPrivate::GStores.Data[uVar9] == (FStore *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < Capacity && Data[Index] != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                            ,0x180,L""), bVar13)) break;
    LOCK();
    pFVar2 = &FixedTagPrivate::GStores.Data[uVar9]->RefCount;
    pFVar2->Counter = pFVar2->Counter + 1;
    UNLOCK();
    if ((ulonglong)local_3e0 <= &local_3c0) {
      if (&local_3c0 < (ulonglong *)((longlong)local_3e0 + (longlong)local_3d8._4_4_ * 8)) {
        local_400 = (longlong)(int)local_3d8;
        local_3f8 = 8;
        local_418 = (FPartialMapHandle)&local_3c0;
        local_410 = local_3e0;
        local_408 = (longlong)local_3d8._4_4_;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FStoreData *)(*pcVar8)();
          return pFVar17;
        }
      }
    }
    iVar15 = (int)local_3d8;
    if ((int)local_3d8 == local_3d8._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&local_3e0,(int *)((longlong)&local_3d8 + 4));
    }
    FVar19 = (FPartialMapHandle)((longlong)FVar19 + 8);
    local_3d8 = CONCAT44(local_3d8._4_4_,iVar15 + 1);
    *(ulonglong *)((longlong)local_3e0 + (longlong)iVar15 * 8) = local_3c0;
    uVar16 = local_3c8 & 0xffffffff;
    local_3c0 = 0;
  }
  pcVar8 = (code *)swi(3);
  pFVar17 = (FStoreData *)(*pcVar8)();
  return pFVar17;
}

