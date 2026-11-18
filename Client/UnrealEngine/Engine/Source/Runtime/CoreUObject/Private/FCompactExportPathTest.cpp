// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141e68110

EAutomationTestFlags __thiscall
FixedTagPrivate::FCompactExportPathTest::GetTestFlags(FCompactExportPathTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e68120

bool __thiscall FixedTagPrivate::FCompactExportPathTest::IsStressTest(FCompactExportPathTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e68130

uint __thiscall
FixedTagPrivate::FCompactExportPathTest::GetRequiredDeviceNum(FCompactExportPathTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e68140

FString * __thiscall
FixedTagPrivate::FCompactExportPathTest::GetTestSourceFileName
          (FCompactExportPathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e68170

int __thiscall
FixedTagPrivate::FCompactExportPathTest::GetTestSourceFileLine(FCompactExportPathTest *this)

{
  return 0x6d6;
}

// GetTests @ 141e68180

/* WARNING: Removing unreachable block (ram,0x000141e6826d) */
/* WARNING: Removing unreachable block (ram,0x000141e68338) */

void __thiscall
FixedTagPrivate::FCompactExportPathTest::GetTests
          (FCompactExportPathTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AssetRegistry.FixedTag.NumberlessExportPath");
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

// RunTest @ 141e68360

bool __thiscall
FixedTagPrivate::FCompactExportPathTest::RunTest(FCompactExportPathTest *this,FString *param_1)

{
  byte bVar1;
  FNumberlessExportPath *pFVar2;
  FName FVar3;
  wchar_t *pwVar4;
  byte bVar5;
  FTopLevelAssetPath local_78;
  FString local_68;
  TStringView<char> local_58;
  FNumberlessExportPath local_48;
  FAssetRegistryExportPath local_38;
  
  local_68.Data.ArrayNum = 0xb;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x1507d6c38;
  local_58._12_4_ = local_68.Data.ArrayMax;
  local_58.Size = 0xb;
  local_58.DataPtr = "/S/P.C\'P.O\'";
  ParseExportPath<TStringView<char>_>(&local_38,&local_58);
  pFVar2 = MakeNumberlessPath(&local_48,&local_38);
  local_78.PackageName.ComparisonIndex.Value = 0;
  local_78.PackageName.Number = 0;
  local_78.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetName.Number = 0;
  local_58.DataPtr = *(char **)pFVar2;
  local_58.Size = *(int *)&pFVar2->Package;
  local_58._12_4_ = pFVar2->Object;
  FTopLevelAssetPath::TrySetPath
            (&local_78,(FName)((ulonglong)local_58.DataPtr & 0xffffffff),
             (FName)((ulonglong)local_58.DataPtr >> 0x20));
  FVar3 = (FName)(local_58._8_8_ & 0xffffffff);
  if ((local_38.ClassPath.PackageName == local_78.PackageName) &&
     (local_38.ClassPath.AssetName == local_78.AssetName)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  bVar5 = 0;
  if (local_38.Object == (FName)((ulonglong)local_58._8_8_ >> 0x20)) {
    bVar5 = bVar1;
  }
  ::FString::FString(&local_68,"Roundtrip");
  pwVar4 = L"";
  if (local_68.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar4,(bool)(bVar5 & local_38.Package == FVar3));
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141e68470

FString * __thiscall
FixedTagPrivate::FCompactExportPathTest::GetBeautifiedTestName
          (FCompactExportPathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AssetRegistry.FixedTag.NumberlessExportPath");
  return __return_storage_ptr__;
}

