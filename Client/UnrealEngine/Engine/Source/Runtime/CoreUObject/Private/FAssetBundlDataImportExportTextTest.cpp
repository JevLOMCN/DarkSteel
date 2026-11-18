// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141e4d0a0

EAutomationTestFlags __thiscall
FAssetBundlDataImportExportTextTest::GetTestFlags(FAssetBundlDataImportExportTextTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e4d0b0

bool __thiscall
FAssetBundlDataImportExportTextTest::IsStressTest(FAssetBundlDataImportExportTextTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e4d0c0

uint __thiscall
FAssetBundlDataImportExportTextTest::GetRequiredDeviceNum(FAssetBundlDataImportExportTextTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e4d0d0

FString * __thiscall
FAssetBundlDataImportExportTextTest::GetTestSourceFileName
          (FAssetBundlDataImportExportTextTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetBundleData.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e4d100

int __thiscall
FAssetBundlDataImportExportTextTest::GetTestSourceFileLine
          (FAssetBundlDataImportExportTextTest *this)

{
  return 0x2ed;
}

// GetTests @ 141e4d110

/* WARNING: Removing unreachable block (ram,0x000141e4d1fd) */
/* WARNING: Removing unreachable block (ram,0x000141e4d2c8) */

void __thiscall
FAssetBundlDataImportExportTextTest::GetTests
          (FAssetBundlDataImportExportTextTest *this,
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
  
  ::FString::FString(&local_18,"System.AssetRegistry.AssetBundleData.ImportExportText");
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

// RunTest @ 141e4d2f0

bool __thiscall
FAssetBundlDataImportExportTextTest::RunTest
          (FAssetBundlDataImportExportTextTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UScriptStruct *this_00;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPackage *pUVar7;
  FOutputDeviceRedirector *pFVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  FString local_2a8;
  FAssetBundleEntry *local_298;
  undefined8 local_290;
  FTopLevelAssetPath local_288;
  FAssetBundleEntry *local_278;
  undefined8 local_270;
  FAssetBundleEntry *local_268;
  undefined8 local_260;
  FTopLevelAssetPath local_258;
  FTopLevelAssetPath local_248;
  FAssetBundleEntry *local_238;
  undefined8 local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FName local_1e8;
  FName local_1e0;
  FScriptContainerElement *local_1d8;
  FName local_1d0;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  char *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  char *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  char *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TStringView<char> local_88;
  TStringView<char> local_78;
  TStringView<char> local_68;
  undefined8 local_58;
  
  if (Z_Registration_Info_UScriptStruct_FAssetBundleData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FAssetBundleData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleData,(UObject *)pUVar7,
                         L"AssetBundleData");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FAssetBundleData.OuterSingleton;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0 = 0;
  local_58 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  local_2b0 = CONCAT44(local_2b0._4_4_,iVar6 + 1);
  pFVar2 = local_2b8.Data + (longlong)iVar6 * 0x18;
  *(undefined8 *)&pFVar2->field_0x0 = 0;
  pFVar1 = pFVar2 + 8;
  *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  local_1d8 = pFVar2;
  ::FName::FName(&local_res18,"TestBundle");
  *(FName *)&pFVar2->field_0x0 = local_res18;
  uStack_130 = 0x1c;
  local_138 = "/Game/Characters/Steve.Steve";
  local_88._12_4_ = uStack_12c;
  local_88.Size = 0x1c;
  local_88.DataPtr = "/Game/Characters/Steve.Steve";
  local_288.PackageName.ComparisonIndex.Value = 0;
  local_288.PackageName.Number = 0;
  local_288.AssetName.ComparisonIndex.Value = 0;
  local_288.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_288,&local_88);
                    /* WARNING: Load size is inaccurate */
  if (((*pFVar1 <= &local_288) &&
      (&local_288 < (FTopLevelAssetPath *)(*pFVar1 + (longlong)*(int *)(pFVar2 + 0x14) * 0x10))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = *(int *)(pFVar2 + 0x10);
  if (iVar6 == *(int *)(pFVar2 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)pFVar1,(int *)(pFVar2 + 0x14));
  }
  *(int *)(pFVar2 + 0x10) = iVar6 + 1;
                    /* WARNING: Load size is inaccurate */
  FVar10.Data = *pFVar1;
  *(FName *)(FVar10.Data + (longlong)iVar6 * 0x10) = local_288.PackageName;
  ((FName *)(FVar10.Data + (longlong)iVar6 * 0x10))[1] = local_288.AssetName;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  UScriptStruct::ExportText
            (this_00,&local_2a8,&local_2b8,(void *)0x0,(UObject *)0x0,0,(UObject *)0x0,true);
  bVar4 = local_2a8.Data.ArrayNum < 2;
  ::FString::FString(&local_1c0,
                     "Single-asset bundle: Export with no defaults: Exported text not empty");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_1c0.Data.ArrayNum != 0) {
    FVar10.Data = local_1c0.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,bVar4);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    local_res20 = (FName)this_00->_padding_;
    local_278 = (FAssetBundleEntry *)0x0;
    local_270 = 0;
    ::FName::ToString(&local_res20,&local_128);
    GetGlobalLogSingleton();
    pFVar8 = FOutputDeviceRedirector::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_2a8.Data.ArrayNum != 0) {
      FVar10.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    pwVar9 = UScriptStruct::ImportText
                       (this_00,(wchar_t *)FVar10.Data,&local_278,(UObject *)0x0,0,
                        (FOutputDevice *)pFVar8,&local_128,true);
    ::FString::FString(&local_1b0,
                       "Single-asset bundle: Export with no defaults: Asset bundle data re-imports successfully"
                      );
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1b0.Data.ArrayNum != 0) {
      FVar10.Data = local_1b0.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestNotEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,pwVar9,(wchar_t *)0x0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      ::FString::FString(&local_228,
                         "Single-asset bundle: Export with no defaults: Re-imported asset bundle data matches"
                        );
      FVar10.Data = local_228.Data.AllocatorInstance.Data;
      if (((int)local_270 != (int)local_2b0) ||
         (bVar4 = CompareItems<FAssetBundleEntry,int>
                            (local_278,(FAssetBundleEntry *)local_2b8.Data,(int)local_270), !bVar4))
      {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_118,L"%s: The two values are not equal.");
        (*pcVar3)(this,&local_118,0);
        FVar10.Data = local_228.Data.AllocatorInstance.Data;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          FVar10.Data = local_228.Data.AllocatorInstance.Data;
        }
      }
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
    }
    DestructItems<FAssetBundleEntry,int>(local_278,(int)local_270);
    if (local_278 != (FAssetBundleEntry *)0x0) {
      FMemory::Free(local_278);
    }
  }
  ::FString::Reset(&local_2a8,0);
  UScriptStruct::ExportText
            (this_00,&local_2a8,&local_2b8,&local_2b8,(UObject *)0x0,0,(UObject *)0x0,true);
  bVar4 = local_2a8.Data.ArrayNum < 2;
  ::FString::FString(&local_1a0,"Single-asset bundle: Export with defaults: Exported text not empty"
                    );
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_1a0.Data.ArrayNum != 0) {
    FVar10.Data = local_1a0.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,bVar4);
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    local_1e8 = (FName)this_00->_padding_;
    local_268 = (FAssetBundleEntry *)0x0;
    local_260 = 0;
    ::FName::ToString(&local_1e8,&local_108);
    GetGlobalLogSingleton();
    pFVar8 = FOutputDeviceRedirector::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_2a8.Data.ArrayNum != 0) {
      FVar10.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    pwVar9 = UScriptStruct::ImportText
                       (this_00,(wchar_t *)FVar10.Data,&local_268,(UObject *)0x0,0,
                        (FOutputDevice *)pFVar8,&local_108,true);
    ::FString::FString(&local_190,
                       "Single-asset bundle: Export with defaults: Asset bundle data re-imports successfully"
                      );
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar10.Data = local_190.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestNotEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,pwVar9,(wchar_t *)0x0);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      ::FString::FString(&local_218,
                         "Single-asset bundle: Export with defaults: Re-imported asset bundle data matches"
                        );
      FVar10.Data = local_218.Data.AllocatorInstance.Data;
      if (((int)local_260 != (int)local_2b0) ||
         (bVar4 = CompareItems<FAssetBundleEntry,int>
                            (local_268,(FAssetBundleEntry *)local_2b8.Data,(int)local_260), !bVar4))
      {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
        (*pcVar3)(this,&local_f8,0);
        FVar10.Data = local_218.Data.AllocatorInstance.Data;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          FVar10.Data = local_218.Data.AllocatorInstance.Data;
        }
      }
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
    }
    DestructItems<FAssetBundleEntry,int>(local_268,(int)local_260);
    if (local_268 != (FAssetBundleEntry *)0x0) {
      FMemory::Free(local_268);
    }
  }
  ::FName::FName(&local_1e0,"TestBundle");
  uStack_e0 = 0x1c;
  local_258.PackageName.ComparisonIndex.Value = 0;
  local_258.PackageName.Number = 0;
  *(FName *)&local_1d8->field_0x0 = local_1e0;
  local_e8 = "/Game/Characters/Geoff.Geoff";
  local_78._12_4_ = uStack_dc;
  local_78.Size = 0x1c;
  local_78.DataPtr = "/Game/Characters/Geoff.Geoff";
  local_258.AssetName.ComparisonIndex.Value = 0;
  local_258.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_258,&local_78);
                    /* WARNING: Load size is inaccurate */
  if (((*pFVar1 <= &local_258) &&
      (&local_258 < (FTopLevelAssetPath *)(*pFVar1 + (longlong)*(int *)(pFVar2 + 0x14) * 0x10))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = *(int *)(pFVar2 + 0x10);
  if (iVar6 == *(int *)(pFVar2 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)pFVar1,(int *)(pFVar2 + 0x14));
  }
  uStack_d0 = 0x1a;
  *(int *)(pFVar2 + 0x10) = iVar6 + 1;
                    /* WARNING: Load size is inaccurate */
  FVar10.Data = *pFVar1;
  local_248.PackageName.ComparisonIndex.Value = 0;
  local_248.PackageName.Number = 0;
  local_248.AssetName.ComparisonIndex.Value = 0;
  local_248.AssetName.Number = 0;
  *(FName *)(FVar10.Data + (longlong)iVar6 * 0x10) = local_258.PackageName;
  ((FName *)(FVar10.Data + (longlong)iVar6 * 0x10))[1] = local_258.AssetName;
  local_d8 = "/Game/Characters/Mary.Mary";
  local_68._12_4_ = uStack_cc;
  local_68.Size = 0x1a;
  local_68.DataPtr = "/Game/Characters/Mary.Mary";
  FTopLevelAssetPath::TrySetPath(&local_248,&local_68);
                    /* WARNING: Load size is inaccurate */
  if (((*pFVar1 <= &local_248) &&
      (&local_248 < (FTopLevelAssetPath *)(*pFVar1 + (longlong)*(int *)(pFVar2 + 0x14) * 0x10))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = *(int *)(pFVar2 + 0x10);
  if (iVar6 == *(int *)(pFVar2 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)pFVar1,(int *)(pFVar2 + 0x14));
  }
  *(int *)(pFVar2 + 0x10) = iVar6 + 1;
                    /* WARNING: Load size is inaccurate */
  FVar10.Data = *pFVar1;
  *(FName *)(FVar10.Data + (longlong)iVar6 * 0x10) = local_248.PackageName;
  ((FName *)(FVar10.Data + (longlong)iVar6 * 0x10))[1] = local_248.AssetName;
  ::FString::Reset(&local_2a8,0);
  UScriptStruct::ExportText
            (this_00,&local_2a8,&local_2b8,(void *)0x0,(UObject *)0x0,0,(UObject *)0x0,true);
  bVar4 = local_2a8.Data.ArrayNum < 2;
  ::FString::FString(&local_180,
                     "Multi-asset bundle: Export with no defaults: Exported text not empty");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar10.Data = local_180.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,bVar4);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    local_1d0 = (FName)this_00->_padding_;
    local_238 = (FAssetBundleEntry *)0x0;
    local_230 = 0;
    ::FName::ToString(&local_1d0,&local_c8);
    GetGlobalLogSingleton();
    pFVar8 = FOutputDeviceRedirector::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_2a8.Data.ArrayNum != 0) {
      FVar10.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    pwVar9 = UScriptStruct::ImportText
                       (this_00,(wchar_t *)FVar10.Data,&local_238,(UObject *)0x0,0,
                        (FOutputDevice *)pFVar8,&local_c8,true);
    ::FString::FString(&local_170,
                       "Multi-asset bundle: Export with no defaults: Asset bundle data re-imports successfully"
                      );
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_170.Data.ArrayNum != 0) {
      FVar10.Data = local_170.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestNotEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,pwVar9,(wchar_t *)0x0);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      ::FString::FString(&local_208,
                         "Multi-asset bundle: Export with no defaults: Re-imported asset bundle data matches"
                        );
      FVar10.Data = local_208.Data.AllocatorInstance.Data;
      if (((int)local_230 != (int)local_2b0) ||
         (bVar4 = CompareItems<FAssetBundleEntry,int>
                            (local_238,(FAssetBundleEntry *)local_2b8.Data,(int)local_230), !bVar4))
      {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_b8,L"%s: The two values are not equal.");
        (*pcVar3)(this,&local_b8,0);
        FVar10.Data = local_208.Data.AllocatorInstance.Data;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          FVar10.Data = local_208.Data.AllocatorInstance.Data;
        }
      }
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
    }
    DestructItems<FAssetBundleEntry,int>(local_238,(int)local_230);
    if (local_238 != (FAssetBundleEntry *)0x0) {
      FMemory::Free(local_238);
    }
  }
  ::FString::Reset(&local_2a8,0);
  UScriptStruct::ExportText
            (this_00,&local_2a8,&local_2b8,&local_2b8,(UObject *)0x0,0,(UObject *)0x0,true);
  bVar4 = local_2a8.Data.ArrayNum < 2;
  ::FString::FString(&local_160,"Multi-asset bundle: Export with defaults: Exported text not empty")
  ;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    FVar10.Data = local_160.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,bVar4);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    local_1c8 = (FName)this_00->_padding_;
    local_298 = (FAssetBundleEntry *)0x0;
    local_290 = 0;
    ::FName::ToString(&local_1c8,&local_a8);
    GetGlobalLogSingleton();
    pFVar8 = FOutputDeviceRedirector::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_2a8.Data.ArrayNum != 0) {
      FVar10.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    pwVar9 = UScriptStruct::ImportText
                       (this_00,(wchar_t *)FVar10.Data,&local_298,(UObject *)0x0,0,
                        (FOutputDevice *)pFVar8,&local_a8,true);
    ::FString::FString(&local_150,
                       "Multi-asset bundle: Export with defaults: Asset bundle data re-imports successfully"
                      );
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_150.Data.ArrayNum != 0) {
      FVar10.Data = local_150.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestNotEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,pwVar9,(wchar_t *)0x0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      ::FString::FString(&local_1f8,
                         "Multi-asset bundle: Export with defaults: Re-imported asset bundle data matches"
                        );
      FVar10.Data = local_1f8.Data.AllocatorInstance.Data;
      if (((int)local_290 != (int)local_2b0) ||
         (bVar4 = CompareItems<FAssetBundleEntry,int>
                            (local_298,(FAssetBundleEntry *)local_2b8.Data,(int)local_290), !bVar4))
      {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_98,L"%s: The two values are not equal.");
        (*pcVar3)(this,&local_98,0);
        FVar10.Data = local_1f8.Data.AllocatorInstance.Data;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
          FVar10.Data = local_1f8.Data.AllocatorInstance.Data;
        }
      }
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
    }
    DestructItems<FAssetBundleEntry,int>(local_298,(int)local_290);
    if (local_298 != (FAssetBundleEntry *)0x0) {
      FMemory::Free(local_298);
    }
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  DestructItems<FAssetBundleEntry,int>((FAssetBundleEntry *)local_2b8.Data,(int)local_2b0);
  if ((FAssetBundleEntry *)local_2b8.Data != (FAssetBundleEntry *)0x0) {
    FMemory::Free(local_2b8.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141e4de90

FString * __thiscall
FAssetBundlDataImportExportTextTest::GetBeautifiedTestName
          (FAssetBundlDataImportExportTextTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AssetRegistry.AssetBundleData.ImportExportText")
  ;
  return __return_storage_ptr__;
}

