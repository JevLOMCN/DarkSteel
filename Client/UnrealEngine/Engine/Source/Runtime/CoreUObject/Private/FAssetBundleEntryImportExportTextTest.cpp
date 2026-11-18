// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141e4a720

EAutomationTestFlags __thiscall
FAssetBundleEntryImportExportTextTest::GetTestFlags(FAssetBundleEntryImportExportTextTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e4a730

bool __thiscall
FAssetBundleEntryImportExportTextTest::IsStressTest(FAssetBundleEntryImportExportTextTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e4a740

uint __thiscall
FAssetBundleEntryImportExportTextTest::GetRequiredDeviceNum
          (FAssetBundleEntryImportExportTextTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e4a750

FString * __thiscall
FAssetBundleEntryImportExportTextTest::GetTestSourceFileName
          (FAssetBundleEntryImportExportTextTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetBundleData.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e4a780

int __thiscall
FAssetBundleEntryImportExportTextTest::GetTestSourceFileLine
          (FAssetBundleEntryImportExportTextTest *this)

{
  return 0x252;
}

// GetTests @ 141e4a790

/* WARNING: Removing unreachable block (ram,0x000141e4a87d) */
/* WARNING: Removing unreachable block (ram,0x000141e4a948) */

void __thiscall
FAssetBundleEntryImportExportTextTest::GetTests
          (FAssetBundleEntryImportExportTextTest *this,
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
  
  ::FString::FString(&local_18,"System.AssetRegistry.AssetBundleEntry.ImportExportText");
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

// RunTest @ 141e4a970

/* WARNING: Removing unreachable block (ram,0x000141e4ae17) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FAssetBundleEntryImportExportTextTest::RunTest
          (FAssetBundleEntryImportExportTextTest *this,FString *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  FOutputDeviceRedirector *pFVar8;
  FString *pFVar9;
  int iVar10;
  FTopLevelAssetPath *pFVar11;
  ForAnyElementType FVar12;
  FTopLevelAssetPath *pFVar13;
  ForAnyElementType FVar14;
  undefined1 local_res18 [8];
  FName local_res20;
  FAssetBundleEntry local_488;
  FString local_470;
  FAssetBundleEntry local_460;
  FTopLevelAssetPath local_448;
  FTopLevelAssetPath local_438;
  FTopLevelAssetPath local_428;
  FTopLevelAssetPath local_418;
  FName local_408;
  FTopLevelAssetPath *local_400;
  ulonglong local_3f8;
  FAssetBundleEntry local_3f0;
  FString local_3d8;
  FString local_3c8;
  FAssetBundleEntry local_3b8;
  FAssetBundleEntry local_3a0;
  FAssetBundleEntry local_388;
  FAssetBundleEntry local_370;
  FAssetBundleEntry local_358;
  FAssetBundleEntry local_340;
  FAssetBundleEntry local_328;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FSoftObjectPath local_2e0;
  FSoftObjectPath local_2c0;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  FScriptContainerElement *local_290;
  TStringOverload<FUtf8String> local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FName local_228;
  FName local_220;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FAssetBundleEntry local_200;
  FAssetBundleEntry local_1e8;
  FScriptContainerElement *local_1d0;
  FScriptContainerElement *local_1c8;
  FString local_1c0;
  FString local_1b0;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  FTopLevelAssetPath local_e8;
  TStringView<wchar_t> local_d8;
  undefined8 local_c8;
  FName local_b0;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_400 = (FTopLevelAssetPath *)0x0;
  local_3f8 = 0;
  ::FName::FName(&local_res20,"Empty");
  local_408 = local_res20;
  ::FString::FString(&local_2f0,L"(BundleName=\"Empty\",AssetPaths=)");
  local_460.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_460.AssetPaths.ArrayNum = 0;
  local_460.AssetPaths.ArrayMax = 0;
  ::FName::FName(&local_228,"Single");
  local_460.BundleName = local_228;
  uStack_160 = 0x1c;
  local_168 = L"/Game/Characters/Steve.Steve";
  local_d8._12_4_ = uStack_15c;
  local_d8.Size = 0x1c;
  local_d8.DataPtr = L"/Game/Characters/Steve.Steve";
  local_448.PackageName.ComparisonIndex.Value = 0;
  local_448.PackageName.Number = 0;
  local_448.AssetName.ComparisonIndex.Value = 0;
  local_448.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_448,&local_d8);
  if (((local_460.AssetPaths.AllocatorInstance.Data <= &local_448) &&
      (&local_448 <
       (FTopLevelAssetPath *)
       (local_460.AssetPaths.AllocatorInstance.Data + (longlong)local_460.AssetPaths.ArrayMax * 0x10
       ))) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = local_460.AssetPaths.ArrayNum;
  if (local_460.AssetPaths.ArrayNum == local_460.AssetPaths.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_460.AssetPaths.AllocatorInstance,&local_460.AssetPaths.ArrayMax)
    ;
  }
  local_460.AssetPaths.ArrayNum = iVar5 + 1;
  *(FName *)&local_460.AssetPaths.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
       local_448.PackageName;
  *(FName *)(local_460.AssetPaths.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
       local_448.AssetName;
  ::FString::FString(&local_300,
                     L"(BundleName=\"Single\",AssetPaths=(\"/Game/Characters/Steve.Steve\"))");
  local_488.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.AssetPaths.ArrayNum = 0;
  local_488.AssetPaths.ArrayMax = 0;
  ::FName::FName(&local_220,"Multi");
  local_488.BundleName = local_220;
  uStack_170 = 0x26;
  local_178 = L"/Game/Meshes/ConcreteWall.ConcreteWall";
  local_98._12_4_ = uStack_16c;
  local_98.Size = 0x26;
  local_98.DataPtr = L"/Game/Meshes/ConcreteWall.ConcreteWall";
  local_438.PackageName.ComparisonIndex.Value = 0;
  local_438.PackageName.Number = 0;
  local_438.AssetName.ComparisonIndex.Value = 0;
  local_438.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_438,&local_98);
  if (((local_488.AssetPaths.AllocatorInstance.Data <= &local_438) &&
      (&local_438 <
       (FTopLevelAssetPath *)
       (local_488.AssetPaths.AllocatorInstance.Data + (longlong)local_488.AssetPaths.ArrayMax * 0x10
       ))) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = local_488.AssetPaths.ArrayNum;
  if (local_488.AssetPaths.ArrayNum == local_488.AssetPaths.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_488.AssetPaths.AllocatorInstance,&local_488.AssetPaths.ArrayMax)
    ;
  }
  uStack_180 = 0x22;
  local_428.PackageName.ComparisonIndex.Value = 0;
  local_428.PackageName.Number = 0;
  local_428.AssetName.ComparisonIndex.Value = 0;
  local_428.AssetName.Number = 0;
  *(FName *)&local_488.AssetPaths.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
       local_438.PackageName;
  *(FName *)(local_488.AssetPaths.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
       local_438.AssetName;
  local_188 = L"/Game/Meshes/GarbageCan.GarbageCan";
  local_88._12_4_ = uStack_17c;
  local_88.Size = 0x22;
  local_88.DataPtr = L"/Game/Meshes/GarbageCan.GarbageCan";
  local_488.AssetPaths.ArrayNum = iVar5 + 1;
  FTopLevelAssetPath::TrySetPath(&local_428,&local_88);
  if (((local_488.AssetPaths.AllocatorInstance.Data <= &local_428) &&
      (&local_428 <
       (FTopLevelAssetPath *)
       (local_488.AssetPaths.AllocatorInstance.Data + (longlong)local_488.AssetPaths.ArrayMax * 0x10
       ))) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (local_488.AssetPaths.ArrayNum == local_488.AssetPaths.ArrayMax) {
    local_488.AssetPaths.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_488.AssetPaths.AllocatorInstance,&local_488.AssetPaths.ArrayMax);
  }
  uStack_190 = 0x20;
  local_418.PackageName.ComparisonIndex.Value = 0;
  local_418.PackageName.Number = 0;
  local_418.AssetName.ComparisonIndex.Value = 0;
  local_418.AssetName.Number = 0;
  *(FName *)&local_488.AssetPaths.AllocatorInstance.Data
             [(longlong)local_488.AssetPaths.ArrayNum * 0x10].field_0x0 = local_428.PackageName;
  *(FName *)(local_488.AssetPaths.AllocatorInstance.Data +
             (longlong)local_488.AssetPaths.ArrayNum * 0x10 + 8) = local_428.AssetName;
  local_198 = L"/Game/Blueprints/Widget.Widget_C";
  local_f8._12_4_ = uStack_18c;
  local_f8.Size = 0x20;
  local_f8.DataPtr = L"/Game/Blueprints/Widget.Widget_C";
  local_488.AssetPaths.ArrayNum = local_488.AssetPaths.ArrayNum + 1;
  FTopLevelAssetPath::TrySetPath(&local_418,&local_f8);
  if (((local_488.AssetPaths.AllocatorInstance.Data <= &local_418) &&
      (&local_418 <
       (FTopLevelAssetPath *)
       (local_488.AssetPaths.AllocatorInstance.Data + (longlong)local_488.AssetPaths.ArrayMax * 0x10
       ))) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = local_488.AssetPaths.ArrayNum;
  if (local_488.AssetPaths.ArrayNum == local_488.AssetPaths.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_488.AssetPaths.AllocatorInstance,&local_488.AssetPaths.ArrayMax)
    ;
  }
  local_488.AssetPaths.ArrayNum = iVar5 + 1;
  *(FName *)&local_488.AssetPaths.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
       local_418.PackageName;
  *(FName *)(local_488.AssetPaths.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
       local_418.AssetName;
  ::FString::FString(&local_310,
                     L"(BundleName=\"Multi\",AssetPaths=(\"/Game/Meshes/ConcreteWall.ConcreteWall\",\"/Game/Meshes/GarbageCan.GarbageCan\",\"/Game/Blueprints/Widget.Widget_C\"))"
                    );
  local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.Data.ArrayNum = 0;
  local_470.Data.ArrayMax = 0;
  local_c8 = 0;
  ::FString::AppendChars(&local_470,L"(BundleName=\"",0xd);
  ::FName::AppendString(&local_408,&local_470);
  ::FString::AppendChar(&local_470,L'\"');
  if ((int)local_3f8 == 0) {
    ::FString::AppendChars(&local_470,L",AssetPaths=",0xc);
    ::FString::AppendChars(&local_470,L")",1);
LAB_141e4b03d:
    bVar3 = true;
  }
  else {
    ::FString::AppendChars(&local_470,L",AssetPaths=(",0xd);
    iVar5 = (int)local_3f8;
    uVar7 = (ulonglong)(int)local_3f8;
    pFVar13 = local_400 + uVar7;
    local_2c0.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_2c0.AssetPath.PackageName.Number = 0;
    local_2c0.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_2c0.AssetPath.AssetName.Number = 0;
    local_2c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.SubPathString.Data.ArrayNum = 0;
    local_2c0.SubPathString.Data.ArrayMax = 0;
    pFVar11 = local_400;
    while( true ) {
      if ((int)uVar7 != iVar5) {
        `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      iVar10 = 0;
      if (pFVar11 == pFVar13) {
        iVar5 = local_470.Data.ArrayNum + -1;
        if (local_470.Data.ArrayNum == 0) {
          iVar5 = iVar10;
        }
        if (iVar5 + -1 < iVar5) {
          iVar5 = iVar5 + -1;
        }
        if (0 < iVar5) {
          iVar10 = iVar5;
        }
        ::FString::RemoveAt(&local_470,iVar10,1,No);
        ::FString::AppendChars(&local_470,L"))",2);
        if (local_2c0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_141e4b03d;
      }
      local_e8.PackageName = pFVar11->PackageName;
      local_e8.AssetName = pFVar11->AssetName;
      local_2e0.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_2e0.AssetPath.PackageName.Number = 0;
      local_2e0.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_2e0.AssetPath.AssetName.Number = 0;
      local_2e0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0.SubPathString.Data.ArrayNum = 0;
      local_2e0.SubPathString.Data.ArrayMax = 0;
      local_288.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.String.Data.ArrayNum = 0;
      local_288.String.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_2e0,&local_e8,&local_288);
      bVar3 = FSoftObjectPath::ExportTextItem
                        (&local_2e0,&local_470,&local_2c0,(UObject *)0x0,1,(UObject *)0x0);
      if (!bVar3) break;
      ::FString::AppendChar(&local_470,L',');
      if (local_2e0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.SubPathString.Data.AllocatorInstance.Data);
      }
      uVar7 = local_3f8 & 0xffffffff;
      pFVar11 = pFVar11 + 1;
    }
    iVar5 = local_470.Data.ArrayNum + -1;
    if (local_470.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    iVar6 = iVar5;
    if (0 < iVar5) {
      iVar6 = iVar10;
    }
    if (0 < iVar6) {
      iVar10 = iVar6;
    }
    ::FString::RemoveAt(&local_470,iVar10,iVar5 - iVar10,Default);
    if (local_2e0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_2c0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.SubPathString.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Empty asset bundle exports to text",bVar3);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_2f0.Data.ArrayNum != 0) {
    FVar12.Data = local_2f0.Data.AllocatorInstance.Data;
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_470.Data.ArrayNum != 0) {
    FVar14.Data = local_470.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty asset bundle exports to correct string",
             (wchar_t *)FVar14.Data,(wchar_t *)FVar12.Data);
  local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d8.Data.ArrayNum = 0;
  local_3d8.Data.ArrayMax = 0;
  local_200.BundleName.ComparisonIndex.Value = 0;
  local_200.BundleName.Number = 0;
  local_200.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.AssetPaths.ArrayNum = 0;
  local_200.AssetPaths.ArrayMax = 0;
  bVar3 = FAssetBundleEntry::ExportTextItem
                    (&local_460,&local_3d8,&local_200,(UObject *)0x0,1,(UObject *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Single-asset asset bundle exports to text",bVar3);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_300.Data.ArrayNum != 0) {
    FVar12.Data = local_300.Data.AllocatorInstance.Data;
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar14.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Single-asset asset bundle exports to correct string",
             (wchar_t *)FVar14.Data,(wchar_t *)FVar12.Data);
  local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.Data.ArrayNum = 0;
  local_3c8.Data.ArrayMax = 0;
  local_1e8.BundleName.ComparisonIndex.Value = 0;
  local_1e8.BundleName.Number = 0;
  local_1e8.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AssetPaths.ArrayNum = 0;
  local_1e8.AssetPaths.ArrayMax = 0;
  bVar3 = FAssetBundleEntry::ExportTextItem
                    (&local_488,&local_3c8,&local_1e8,(UObject *)0x0,1,(UObject *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Multi-asset asset bundle exports to text",bVar3);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_310.Data.ArrayNum != 0) {
    FVar12.Data = local_310.Data.AllocatorInstance.Data;
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_3c8.Data.ArrayNum != 0) {
    FVar14.Data = local_3c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Multi-asset asset bundle exports to correct string",
             (wchar_t *)FVar14.Data,(wchar_t *)FVar12.Data);
  local_328.BundleName.ComparisonIndex.Value = 0;
  local_328.BundleName.Number = 0;
  local_218 = (FScriptContainerElement *)L"";
  if (local_2f0.Data.ArrayNum != 0) {
    local_218 = local_2f0.Data.AllocatorInstance.Data;
  }
  local_328.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.AssetPaths.ArrayNum = 0;
  local_328.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar8 = FOutputDeviceRedirector::Get();
  bVar3 = FAssetBundleEntry::ImportTextItem
                    (&local_328,(wchar_t **)&local_218,1,(UObject *)0x0,(FOutputDevice *)pFVar8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Empty asset bundle imports from text",bVar3);
  if (local_328.BundleName == local_408) {
    if ((local_328.AssetPaths.ArrayNum != (int)local_3f8) ||
       (bVar3 = CompareItems<FTopLevelAssetPath,int>
                          ((FTopLevelAssetPath *)local_328.AssetPaths.AllocatorInstance.Data,
                           local_400,local_328.AssetPaths.ArrayNum), !bVar3)) goto LAB_141e4b223;
  }
  else {
LAB_141e4b223:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b0,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b0,0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
  }
  local_340.BundleName.ComparisonIndex.Value = 0;
  local_340.BundleName.Number = 0;
  local_210 = (FScriptContainerElement *)L"";
  if (local_300.Data.ArrayNum != 0) {
    local_210 = local_300.Data.AllocatorInstance.Data;
  }
  local_340.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.AssetPaths.ArrayNum = 0;
  local_340.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar8 = FOutputDeviceRedirector::Get();
  bVar3 = FAssetBundleEntry::ImportTextItem
                    (&local_340,(wchar_t **)&local_210,1,(UObject *)0x0,(FOutputDevice *)pFVar8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Single-asset asset bundle imports from text",bVar3);
  if (local_340.BundleName == local_460.BundleName) {
    if ((local_340.AssetPaths.ArrayNum != local_460.AssetPaths.ArrayNum) ||
       (bVar3 = CompareItems<FTopLevelAssetPath,int>
                          ((FTopLevelAssetPath *)local_340.AssetPaths.AllocatorInstance.Data,
                           (FTopLevelAssetPath *)local_460.AssetPaths.AllocatorInstance.Data,
                           local_340.AssetPaths.ArrayNum), !bVar3)) goto LAB_141e4b2ff;
  }
  else {
LAB_141e4b2ff:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c0,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c0,0);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
  }
  local_388.BundleName.ComparisonIndex.Value = 0;
  local_388.BundleName.Number = 0;
  local_208 = (FScriptContainerElement *)L"";
  if (local_310.Data.ArrayNum != 0) {
    local_208 = local_310.Data.AllocatorInstance.Data;
  }
  local_388.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.AssetPaths.ArrayNum = 0;
  local_388.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar8 = FOutputDeviceRedirector::Get();
  bVar3 = FAssetBundleEntry::ImportTextItem
                    (&local_388,(wchar_t **)&local_208,1,(UObject *)0x0,(FOutputDevice *)pFVar8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Multi-asset asset bundle imports from text",bVar3);
  if (local_388.BundleName == local_488.BundleName) {
    if ((local_388.AssetPaths.ArrayNum == local_488.AssetPaths.ArrayNum) &&
       (bVar3 = CompareItems<FTopLevelAssetPath,int>
                          ((FTopLevelAssetPath *)local_388.AssetPaths.AllocatorInstance.Data,
                           (FTopLevelAssetPath *)local_488.AssetPaths.AllocatorInstance.Data,
                           local_388.AssetPaths.ArrayNum), bVar3)) goto LAB_141e4b409;
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_138,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_138,0);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
LAB_141e4b409:
  pFVar9 = ::FString::FString(&local_78,
                              L"FAssetBundleEntry::ImportTextItem - Asset bundle entries should all be top level objects"
                             );
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar9,Contains,1,true);
  ::FString::FString(&local_238,
                     L"(BundleName=\"Subobject\",AssetPaths=(\"/Game/Characters/Steve.Steve:Hat\"))"
                    );
  local_358.BundleName.ComparisonIndex.Value = 0;
  local_358.BundleName.Number = 0;
  local_1d0 = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    local_1d0 = local_238.Data.AllocatorInstance.Data;
  }
  local_358.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_358.AssetPaths.ArrayNum = 0;
  local_358.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar8 = FOutputDeviceRedirector::Get();
  bVar3 = FAssetBundleEntry::ImportTextItem
                    (&local_358,(wchar_t **)&local_1d0,1,(UObject *)0x0,(FOutputDevice *)pFVar8);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Subobject bundle does not import from text",bVar3);
  FVar2 = local_b0;
  if (((local_358.BundleName != local_b0) || (local_358.AssetPaths.ArrayNum != 0)) ||
     (bVar3 = CompareItems<FTopLevelAssetPath,int>
                        ((FTopLevelAssetPath *)local_358.AssetPaths.AllocatorInstance.Data,
                         (FTopLevelAssetPath *)0x0,0), !bVar3)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_158,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = ::FString::FString(&local_68,
                              L"FAssetBundleEntry::ImportTextItem - Unterminated BundleName string")
  ;
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar9,Contains,1,true);
  ::FString::FString(&local_248,L"(BundleName=\"TestUnterminated,BundleAssets=))");
  local_370.BundleName.ComparisonIndex.Value = 0;
  local_370.BundleName.Number = 0;
  local_1c8 = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    local_1c8 = local_248.Data.AllocatorInstance.Data;
  }
  local_370.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.AssetPaths.ArrayNum = 0;
  local_370.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar8 = FOutputDeviceRedirector::Get();
  bVar3 = FAssetBundleEntry::ImportTextItem
                    (&local_370,(wchar_t **)&local_1c8,1,(UObject *)0x0,(FOutputDevice *)pFVar8);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Unterminated asset bundle name fails import",bVar3);
  if (((local_370.BundleName != FVar2) || (local_370.AssetPaths.ArrayNum != 0)) ||
     (bVar3 = CompareItems<FTopLevelAssetPath,int>
                        ((FTopLevelAssetPath *)local_370.AssetPaths.AllocatorInstance.Data,
                         (FTopLevelAssetPath *)0x0,0), !bVar3)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = ::FString::FString(&local_58,
                              L"AssetBundleEntry::ImportTextItem - Ill-formed asset bundle entry");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar9,Contains,1,true);
  ::FString::FString(&local_258,
                     L"(BundleName=\"TestUnterminated,BundleAssets=(\"/Game/Characters/Steve.Steve\")))"
                    );
  local_3b8.BundleName.ComparisonIndex.Value = 0;
  local_3b8.BundleName.Number = 0;
  local_2a0 = (FScriptContainerElement *)L"";
  if (local_258.Data.ArrayNum != 0) {
    local_2a0 = local_258.Data.AllocatorInstance.Data;
  }
  local_3b8.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.AssetPaths.ArrayNum = 0;
  local_3b8.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar8 = FOutputDeviceRedirector::Get();
  bVar3 = FAssetBundleEntry::ImportTextItem
                    (&local_3b8,(wchar_t **)&local_2a0,1,(UObject *)0x0,(FOutputDevice *)pFVar8);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Mismatched quotes asset bundle name fails import",bVar3);
  if (((local_3b8.BundleName != FVar2) || (local_3b8.AssetPaths.ArrayNum != 0)) ||
     (bVar3 = CompareItems<FTopLevelAssetPath,int>
                        ((FTopLevelAssetPath *)local_3b8.AssetPaths.AllocatorInstance.Data,
                         (FTopLevelAssetPath *)0x0,0), !bVar3)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = ::FString::FString(&local_48,
                              L"FAssetBundleEntry::ImportTextItem - Text does not start with expected prefix"
                             );
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar9,Contains,1,true);
  ::FString::FString(&local_268,
                     L"(BundleAssets=(\"/Game/Characters/Steve.Steve\"), BundleName=\"UnsupportedOrder\")"
                    );
  local_3a0.BundleName.ComparisonIndex.Value = 0;
  local_3a0.BundleName.Number = 0;
  local_290 = (FScriptContainerElement *)L"";
  if (local_268.Data.ArrayNum != 0) {
    local_290 = local_268.Data.AllocatorInstance.Data;
  }
  local_3a0.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.AssetPaths.ArrayNum = 0;
  local_3a0.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar8 = FOutputDeviceRedirector::Get();
  bVar3 = FAssetBundleEntry::ImportTextItem
                    (&local_3a0,(wchar_t **)&local_290,1,(UObject *)0x0,(FOutputDevice *)pFVar8);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Unsupported order fails import",bVar3);
  if (((local_3a0.BundleName != FVar2) || (local_3a0.AssetPaths.ArrayNum != 0)) ||
     (bVar3 = CompareItems<FTopLevelAssetPath,int>
                        ((FTopLevelAssetPath *)local_3a0.AssetPaths.AllocatorInstance.Data,
                         (FTopLevelAssetPath *)0x0,0), !bVar3)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_118,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = ::FString::FString(&local_38,
                              L"FAssetBundleEntry::ImportTextItem - Encountered key BundleAssets twice"
                             );
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar9,Contains,1,true);
  ::FString::FString(&local_278,
                     L"(BundleName=\"DuplicateKeys\",BundleAssets=(\"/Game/Characters/Steve.Steve\"),BundleAssets=(\"/Game/Characters/Will.Will\"))"
                    );
  local_3f0.BundleName.ComparisonIndex.Value = 0;
  local_3f0.BundleName.Number = 0;
  local_298 = (FScriptContainerElement *)L"";
  if (local_278.Data.ArrayNum != 0) {
    local_298 = local_278.Data.AllocatorInstance.Data;
  }
  local_3f0.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f0.AssetPaths.ArrayNum = 0;
  local_3f0.AssetPaths.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar8 = FOutputDeviceRedirector::Get();
  bVar3 = FAssetBundleEntry::ImportTextItem
                    (&local_3f0,(wchar_t **)&local_298,1,(UObject *)0x0,(FOutputDevice *)pFVar8);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"Duplicate keys fails import",bVar3);
  FVar12.Data = local_3f0.AssetPaths.AllocatorInstance.Data;
  if (((local_3f0.BundleName != FVar2) || (local_3f0.AssetPaths.ArrayNum != 0)) ||
     (bVar3 = CompareItems<FTopLevelAssetPath,int>
                        ((FTopLevelAssetPath *)local_3f0.AssetPaths.AllocatorInstance.Data,
                         (FTopLevelAssetPath *)0x0,0), !bVar3)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_108,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_108,0);
    FVar12.Data = local_3f0.AssetPaths.AllocatorInstance.Data;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
      FVar12.Data = local_3f0.AssetPaths.AllocatorInstance.Data;
    }
  }
  if ((FTopLevelAssetPath *)FVar12.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_3a0.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_3a0.AssetPaths.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_3b8.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_3b8.AssetPaths.AllocatorInstance.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_370.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_370.AssetPaths.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_358.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_358.AssetPaths.AllocatorInstance.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_388.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_388.AssetPaths.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_340.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_340.AssetPaths.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_328.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_328.AssetPaths.AllocatorInstance.Data);
  }
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_488.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_488.AssetPaths.AllocatorInstance.Data);
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  if ((FTopLevelAssetPath *)local_460.AssetPaths.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0
     ) {
    FMemory::Free(local_460.AssetPaths.AllocatorInstance.Data);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  if (local_400 != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_400);
  }
  return true;
}

// GetBeautifiedTestName @ 141e4bab0

FString * __thiscall
FAssetBundleEntryImportExportTextTest::GetBeautifiedTestName
          (FAssetBundleEntryImportExportTextTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AssetRegistry.AssetBundleEntry.ImportExportText"
                    );
  return __return_storage_ptr__;
}

