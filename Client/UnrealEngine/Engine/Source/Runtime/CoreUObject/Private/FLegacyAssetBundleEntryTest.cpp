// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141e4bc90

EAutomationTestFlags __thiscall
FLegacyAssetBundleEntryTest::GetTestFlags(FLegacyAssetBundleEntryTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e4bca0

bool __thiscall FLegacyAssetBundleEntryTest::IsStressTest(FLegacyAssetBundleEntryTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e4bcb0

uint __thiscall FLegacyAssetBundleEntryTest::GetRequiredDeviceNum(FLegacyAssetBundleEntryTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e4bcc0

FString * __thiscall
FLegacyAssetBundleEntryTest::GetTestSourceFileName
          (FLegacyAssetBundleEntryTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetBundleData.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e4bcf0

int __thiscall FLegacyAssetBundleEntryTest::GetTestSourceFileLine(FLegacyAssetBundleEntryTest *this)

{
  return 0x2a9;
}

// GetTests @ 141e4bd00

/* WARNING: Removing unreachable block (ram,0x000141e4bded) */
/* WARNING: Removing unreachable block (ram,0x000141e4beb8) */

void __thiscall
FLegacyAssetBundleEntryTest::GetTests
          (FLegacyAssetBundleEntryTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AssetRegistry.AssetBundleEntry.LegacyAssetBundleEntry");
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

// RunTest @ 141e4bee0

bool __thiscall
FLegacyAssetBundleEntryTest::RunTest(FLegacyAssetBundleEntryTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  FOutputDeviceRedirector *pFVar6;
  ForAnyElementType FVar7;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  FName local_3a0;
  ForAnyElementType local_398;
  undefined8 local_390;
  FName local_388;
  ForAnyElementType local_380;
  undefined8 local_378;
  FName local_370;
  ForAnyElementType local_368;
  undefined8 local_360;
  FTopLevelAssetPath local_358;
  FTopLevelAssetPath local_348;
  FTopLevelAssetPath local_338;
  FTopLevelAssetPath local_328;
  FTopLevelAssetPath local_318;
  FTopLevelAssetPath local_308;
  FTopLevelAssetPath local_2f8;
  FTopLevelAssetPath local_2e8;
  FAssetBundleEntry local_2d8;
  FAssetBundleEntry local_2c0;
  FAssetBundleEntry local_2a8;
  FAssetBundleEntry local_290;
  FAssetBundleEntry local_278;
  FAssetBundleEntry local_260;
  FName local_248;
  FScriptContainerElement *local_240;
  FScriptContainerElement *local_238;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FName local_1d0;
  FName local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8 [2];
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  FString local_168;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  ::FName::FName(&local_res18,"Empty");
  ::FString::FString(&local_1e0,L"(BundleName=\"Empty\",AssetPaths=())");
  ::FString::FString(&local_1f0,L"(BundleName=\"Empty\",AssetPaths=)");
  local_380.Data = (FScriptContainerElement *)0x0;
  local_378 = 0;
  ::FName::FName(&local_res20,"Single");
  local_128 = L"/Game/Characters/Steve.Steve";
  uStack_120 = 0x1c;
  local_b8._12_4_ = uStack_11c;
  local_b8.Size = 0x1c;
  local_b8.DataPtr = L"/Game/Characters/Steve.Steve";
  local_388 = local_res20;
  local_308.PackageName.ComparisonIndex.Value = 0;
  local_308.PackageName.Number = 0;
  local_308.AssetName.ComparisonIndex.Value = 0;
  local_308.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_308,&local_b8);
  if (((local_380.Data <= &local_308) &&
      (&local_308 < (FTopLevelAssetPath *)(local_380.Data + (longlong)local_378._4_4_ * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (int)local_378;
  if ((int)local_378 == local_378._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_380,(int *)((longlong)&local_378 + 4));
  }
  local_378 = CONCAT44(local_378._4_4_,iVar4 + 1);
  *(FName *)&local_380.Data[(longlong)iVar4 * 0x10].field_0x0 = local_308.PackageName;
  *(FName *)(local_380.Data + (longlong)iVar4 * 0x10 + 8) = local_308.AssetName;
  ::FString::FString(&local_200,
                     L"(BundleName=\"Single\",BundleAssets=(\"/Game/Characters/Steve.Steve\"))");
  local_398.Data = (FScriptContainerElement *)0x0;
  local_390 = 0;
  ::FName::FName(&local_1d0,"Multi");
  local_3a0 = local_1d0;
  uStack_130 = 0x26;
  local_138 = L"/Game/Meshes/ConcreteWall.ConcreteWall";
  local_a8._12_4_ = uStack_12c;
  local_a8.Size = 0x26;
  local_a8.DataPtr = L"/Game/Meshes/ConcreteWall.ConcreteWall";
  local_2f8.PackageName.ComparisonIndex.Value = 0;
  local_2f8.PackageName.Number = 0;
  local_2f8.AssetName.ComparisonIndex.Value = 0;
  local_2f8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_2f8,&local_a8);
  if (((local_398.Data <= &local_2f8) &&
      (&local_2f8 < (FTopLevelAssetPath *)(local_398.Data + (longlong)local_390._4_4_ * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (int)local_390;
  if ((int)local_390 == local_390._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_398,(int *)((longlong)&local_390 + 4));
  }
  uStack_140 = 0x22;
  local_148 = L"/Game/Meshes/GarbageCan.GarbageCan";
  local_2e8.PackageName.ComparisonIndex.Value = 0;
  local_2e8.PackageName.Number = 0;
  local_2e8.AssetName.ComparisonIndex.Value = 0;
  local_2e8.AssetName.Number = 0;
  *(FName *)&local_398.Data[(longlong)iVar4 * 0x10].field_0x0 = local_2f8.PackageName;
  *(FName *)(local_398.Data + (longlong)iVar4 * 0x10 + 8) = local_2f8.AssetName;
  local_98._12_4_ = uStack_13c;
  local_98.Size = 0x22;
  local_98.DataPtr = L"/Game/Meshes/GarbageCan.GarbageCan";
  local_390._0_4_ = iVar4 + 1;
  FTopLevelAssetPath::TrySetPath(&local_2e8,&local_98);
  if (((local_398.Data <= &local_2e8) &&
      (&local_2e8 < (FTopLevelAssetPath *)(local_398.Data + (longlong)local_390._4_4_ * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((int)local_390 == local_390._4_4_) {
    local_390._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_398,(int *)((longlong)&local_390 + 4));
  }
  uStack_150 = 0x20;
  local_158 = L"/Game/Blueprints/Widget.Widget_C";
  local_358.PackageName.ComparisonIndex.Value = 0;
  local_358.PackageName.Number = 0;
  local_358.AssetName.ComparisonIndex.Value = 0;
  local_358.AssetName.Number = 0;
  *(FName *)&local_398.Data[(longlong)(int)local_390 * 0x10].field_0x0 = local_2e8.PackageName;
  *(FName *)(local_398.Data + (longlong)(int)local_390 * 0x10 + 8) = local_2e8.AssetName;
  local_88._12_4_ = uStack_14c;
  local_88.Size = 0x20;
  local_88.DataPtr = L"/Game/Blueprints/Widget.Widget_C";
  local_390._0_4_ = (int)local_390 + 1;
  FTopLevelAssetPath::TrySetPath(&local_358,&local_88);
  if (((local_398.Data <= &local_358) &&
      (&local_358 < (FTopLevelAssetPath *)(local_398.Data + (longlong)local_390._4_4_ * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((int)local_390 == local_390._4_4_) {
    local_390._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_398,(int *)((longlong)&local_390 + 4));
  }
  lVar5 = (longlong)(int)local_390;
  local_390 = CONCAT44(local_390._4_4_,(int)local_390 + 1);
  *(FName *)&local_398.Data[lVar5 * 0x10].field_0x0 = local_358.PackageName;
  *(FName *)(local_398.Data + lVar5 * 0x10 + 8) = local_358.AssetName;
  ::FString::FString(&local_210,
                     L"(BundleName=\"Multi\",BundleAssets=(\"/Game/Meshes/ConcreteWall.ConcreteWall\",\"/Game/Meshes/GarbageCan.GarbageCan\",\"/Game/Blueprints/Widget.Widget_C\"))"
                    );
  local_368.Data = (FScriptContainerElement *)0x0;
  local_360 = 0;
  ::FName::FName(&local_1c8,"Subobject");
  local_118 = L"/Game/Characters/Steve.Steve";
  uStack_110 = 0x1c;
  local_78._12_4_ = uStack_10c;
  local_78.Size = 0x1c;
  local_78.DataPtr = L"/Game/Characters/Steve.Steve";
  local_370 = local_1c8;
  local_348.PackageName.ComparisonIndex.Value = 0;
  local_348.PackageName.Number = 0;
  local_348.AssetName.ComparisonIndex.Value = 0;
  local_348.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_348,&local_78);
  if (((local_368.Data <= &local_348) &&
      (&local_348 < (FTopLevelAssetPath *)(local_368.Data + (longlong)local_360._4_4_ * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (int)local_360;
  if ((int)local_360 == local_360._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_368,(int *)((longlong)&local_360 + 4));
  }
  local_360 = CONCAT44(local_360._4_4_,iVar4 + 1);
  *(FName *)&local_368.Data[(longlong)iVar4 * 0x10].field_0x0 = local_348.PackageName;
  *(FName *)(local_368.Data + (longlong)iVar4 * 0x10 + 8) = local_348.AssetName;
  ::FString::FString(&local_220,
                     L"(BundleName=\"Subobject\",BundleAssets=(\"/Game/Characters/Steve.Steve:Hat\"))"
                    );
  local_2c0.BundleName.ComparisonIndex.Value = 0;
  local_2c0.BundleName.Number = 0;
  local_1c0 = (FScriptContainerElement *)L"";
  if (local_1e0.Data.ArrayNum != 0) {
    local_1c0 = local_1e0.Data.AllocatorInstance.Data;
  }
  local_2c0.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.AssetPaths.ArrayNum = 0;
  local_2c0.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar6 = FOutputDeviceRedirector::Get();
  bVar2 = FAssetBundleEntry::ImportTextItem
                    (&local_2c0,(wchar_t **)&local_1c0,1,(UObject *)0x0,(FOutputDevice *)pFVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Empty asset bundle imports from text",bVar2);
  if (((local_2c0.BundleName != local_res18) || (local_2c0.AssetPaths.ArrayNum != 0)) ||
     (bVar2 = CompareItems<FTopLevelAssetPath,int>
                        ((FTopLevelAssetPath *)local_2c0.AssetPaths.AllocatorInstance.Data,
                         (FTopLevelAssetPath *)0x0,0), !bVar2)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_108,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  local_260.BundleName.ComparisonIndex.Value = 0;
  local_260.BundleName.Number = 0;
  local_1b8 = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    local_1b8 = local_1f0.Data.AllocatorInstance.Data;
  }
  local_260.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.AssetPaths.ArrayNum = 0;
  local_260.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar6 = FOutputDeviceRedirector::Get();
  bVar2 = FAssetBundleEntry::ImportTextItem
                    (&local_260,(wchar_t **)&local_1b8,1,(UObject *)0x0,(FOutputDevice *)pFVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Empty asset bundle without inner parens imports from text",bVar2);
  if (((local_260.BundleName != local_res18) || (local_260.AssetPaths.ArrayNum != 0)) ||
     (bVar2 = CompareItems<FTopLevelAssetPath,int>
                        ((FTopLevelAssetPath *)local_260.AssetPaths.AllocatorInstance.Data,
                         (FTopLevelAssetPath *)0x0,0), !bVar2)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  local_278.BundleName.ComparisonIndex.Value = 0;
  local_278.BundleName.Number = 0;
  local_1b0 = (FScriptContainerElement *)L"";
  if (local_200.Data.ArrayNum != 0) {
    local_1b0 = local_200.Data.AllocatorInstance.Data;
  }
  local_278.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.AssetPaths.ArrayNum = 0;
  local_278.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar6 = FOutputDeviceRedirector::Get();
  bVar2 = FAssetBundleEntry::ImportTextItem
                    (&local_278,(wchar_t **)&local_1b0,1,(UObject *)0x0,(FOutputDevice *)pFVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Single-asset asset bundle imports from text",bVar2);
  if (local_278.BundleName == local_388) {
    if ((local_278.AssetPaths.ArrayNum != (int)local_378) ||
       (bVar2 = CompareItems<FTopLevelAssetPath,int>
                          ((FTopLevelAssetPath *)local_278.AssetPaths.AllocatorInstance.Data,
                           (FTopLevelAssetPath *)local_380.Data,local_278.AssetPaths.ArrayNum),
       !bVar2)) goto LAB_141e4c6ad;
  }
  else {
LAB_141e4c6ad:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_e8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  local_290.BundleName.ComparisonIndex.Value = 0;
  local_290.BundleName.Number = 0;
  local_1a8[0] = (FScriptContainerElement *)L"";
  if (local_210.Data.ArrayNum != 0) {
    local_1a8[0] = local_210.Data.AllocatorInstance.Data;
  }
  local_290.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.AssetPaths.ArrayNum = 0;
  local_290.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar6 = FOutputDeviceRedirector::Get();
  bVar2 = FAssetBundleEntry::ImportTextItem
                    (&local_290,(wchar_t **)local_1a8,1,(UObject *)0x0,(FOutputDevice *)pFVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Multi-asset asset bundle imports from text",bVar2);
  if (local_290.BundleName == local_3a0) {
    if ((local_290.AssetPaths.ArrayNum != (int)local_390) ||
       (bVar2 = CompareItems<FTopLevelAssetPath,int>
                          ((FTopLevelAssetPath *)local_290.AssetPaths.AllocatorInstance.Data,
                           (FTopLevelAssetPath *)local_398.Data,local_290.AssetPaths.ArrayNum),
       !bVar2)) goto LAB_141e4c782;
  }
  else {
LAB_141e4c782:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_d8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  local_2a8.BundleName.ComparisonIndex.Value = 0;
  local_2a8.BundleName.Number = 0;
  local_238 = (FScriptContainerElement *)L"";
  if (local_220.Data.ArrayNum != 0) {
    local_238 = local_220.Data.AllocatorInstance.Data;
  }
  local_2a8.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.AssetPaths.ArrayNum = 0;
  local_2a8.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar6 = FOutputDeviceRedirector::Get();
  bVar2 = FAssetBundleEntry::ImportTextItem
                    (&local_2a8,(wchar_t **)&local_238,1,(UObject *)0x0,(FOutputDevice *)pFVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Subobject asset bundle imports from text",bVar2);
  if (local_2a8.BundleName == local_370) {
    if ((local_2a8.AssetPaths.ArrayNum != (int)local_360) ||
       (bVar2 = CompareItems<FTopLevelAssetPath,int>
                          ((FTopLevelAssetPath *)local_2a8.AssetPaths.AllocatorInstance.Data,
                           (FTopLevelAssetPath *)local_368.Data,local_2a8.AssetPaths.ArrayNum),
       !bVar2)) goto LAB_141e4c848;
  }
  else {
LAB_141e4c848:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  local_3b0.Data = (FScriptContainerElement *)0x0;
  local_3a8 = 0;
  ::FName::FName(&local_248,"MixedFormat");
  uStack_190 = 0x26;
  local_198 = L"/Game/Meshes/ConcreteWall.ConcreteWall";
  local_48._12_4_ = uStack_18c;
  local_48.Size = 0x26;
  local_48.DataPtr = L"/Game/Meshes/ConcreteWall.ConcreteWall";
  local_338.PackageName.ComparisonIndex.Value = 0;
  local_338.PackageName.Number = 0;
  local_338.AssetName.ComparisonIndex.Value = 0;
  local_338.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_338,&local_48);
  if (((local_3b0.Data <= &local_338) &&
      (&local_338 < (FTopLevelAssetPath *)(local_3b0.Data + (longlong)local_3a8._4_4_ * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (int)local_3a8;
  if ((int)local_3a8 == local_3a8._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_3b0,(int *)((longlong)&local_3a8 + 4));
  }
  local_188 = L"/Game/Meshes/GarbageCan.GarbageCan";
  uStack_180 = 0x22;
  local_328.PackageName.ComparisonIndex.Value = 0;
  local_328.PackageName.Number = 0;
  local_328.AssetName.ComparisonIndex.Value = 0;
  local_328.AssetName.Number = 0;
  *(FName *)&local_3b0.Data[(longlong)iVar4 * 0x10].field_0x0 = local_338.PackageName;
  *(FName *)(local_3b0.Data + (longlong)iVar4 * 0x10 + 8) = local_338.AssetName;
  local_68._12_4_ = uStack_17c;
  local_68.Size = 0x22;
  local_68.DataPtr = L"/Game/Meshes/GarbageCan.GarbageCan";
  local_3a8._0_4_ = iVar4 + 1;
  FTopLevelAssetPath::TrySetPath(&local_328,&local_68);
  if (((local_3b0.Data <= &local_328) &&
      (&local_328 < (FTopLevelAssetPath *)(local_3b0.Data + (longlong)local_3a8._4_4_ * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((int)local_3a8 == local_3a8._4_4_) {
    local_3a8._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_3b0,(int *)((longlong)&local_3a8 + 4));
  }
  local_178 = L"/Game/Blueprints/Widget.Widget_C";
  uStack_170 = 0x20;
  local_318.PackageName.ComparisonIndex.Value = 0;
  local_318.PackageName.Number = 0;
  local_318.AssetName.ComparisonIndex.Value = 0;
  local_318.AssetName.Number = 0;
  *(FName *)&local_3b0.Data[(longlong)(int)local_3a8 * 0x10].field_0x0 = local_328.PackageName;
  *(FName *)(local_3b0.Data + (longlong)(int)local_3a8 * 0x10 + 8) = local_328.AssetName;
  local_58._12_4_ = uStack_16c;
  local_58.Size = 0x20;
  local_58.DataPtr = L"/Game/Blueprints/Widget.Widget_C";
  local_3a8._0_4_ = (int)local_3a8 + 1;
  FTopLevelAssetPath::TrySetPath(&local_318,&local_58);
  if (((local_3b0.Data <= &local_318) &&
      (&local_318 < (FTopLevelAssetPath *)(local_3b0.Data + (longlong)local_3a8._4_4_ * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((int)local_3a8 == local_3a8._4_4_) {
    local_3a8._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_3b0,(int *)((longlong)&local_3a8 + 4));
  }
  lVar5 = (longlong)(int)local_3a8;
  local_3a8 = CONCAT44(local_3a8._4_4_,(int)local_3a8 + 1);
  *(FName *)&local_3b0.Data[lVar5 * 0x10].field_0x0 = local_318.PackageName;
  *(FName *)(local_3b0.Data + lVar5 * 0x10 + 8) = local_318.AssetName;
  ::FString::FString(&local_230,
                     L"(BundleName=\"MixedFormat\",AssetPaths=(\"/Game/Meshes/ConcreteWall.ConcreteWall\"),BundleAssets=(\"/Game/Meshes/GarbageCan.GarbageCan\",\"/Game/Blueprints/Widget.Widget_C\"))"
                    );
  local_2d8.BundleName.ComparisonIndex.Value = 0;
  local_2d8.BundleName.Number = 0;
  local_240 = (FScriptContainerElement *)L"";
  if (local_230.Data.ArrayNum != 0) {
    local_240 = local_230.Data.AllocatorInstance.Data;
  }
  local_2d8.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.AssetPaths.ArrayNum = 0;
  local_2d8.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar6 = FOutputDeviceRedirector::Get();
  bVar2 = FAssetBundleEntry::ImportTextItem
                    (&local_2d8,(wchar_t **)&local_240,1,(UObject *)0x0,(FOutputDevice *)pFVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Mixed format asset bundle imports from text",bVar2);
  FVar7.Data = local_2d8.AssetPaths.AllocatorInstance.Data;
  if (local_2d8.BundleName == local_248) {
    if ((local_2d8.AssetPaths.ArrayNum == (int)local_3a8) &&
       (bVar2 = CompareItems<FTopLevelAssetPath,int>
                          ((FTopLevelAssetPath *)local_2d8.AssetPaths.AllocatorInstance.Data,
                           (FTopLevelAssetPath *)local_3b0.Data,local_2d8.AssetPaths.ArrayNum),
       bVar2)) goto LAB_141e4cc4c;
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_168,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_168,0);
  FVar7.Data = local_2d8.AssetPaths.AllocatorInstance.Data;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
    FVar7.Data = local_2d8.AssetPaths.AllocatorInstance.Data;
  }
LAB_141e4cc4c:
  if ((FTopLevelAssetPath *)FVar7.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_3b0.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_3b0.Data);
  }
  if ((FTopLevelAssetPath *)local_2a8.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_2a8.AssetPaths.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_290.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_290.AssetPaths.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_278.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_278.AssetPaths.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_260.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_260.AssetPaths.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_2c0.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_2c0.AssetPaths.AllocatorInstance.Data);
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_368.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_368.Data);
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_398.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_398.Data);
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_380.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_380.Data);
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141e4cd70

FString * __thiscall
FLegacyAssetBundleEntryTest::GetBeautifiedTestName
          (FLegacyAssetBundleEntryTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.AssetRegistry.AssetBundleEntry.LegacyAssetBundleEntry");
  return __return_storage_ptr__;
}

