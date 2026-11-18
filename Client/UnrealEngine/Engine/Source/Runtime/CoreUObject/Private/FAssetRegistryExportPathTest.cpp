// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141e677a0

EAutomationTestFlags __thiscall
FAssetRegistryExportPathTest::GetTestFlags(FAssetRegistryExportPathTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e677b0

bool __thiscall FAssetRegistryExportPathTest::IsStressTest(FAssetRegistryExportPathTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e677c0

uint __thiscall
FAssetRegistryExportPathTest::GetRequiredDeviceNum(FAssetRegistryExportPathTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e677d0

FString * __thiscall
FAssetRegistryExportPathTest::GetTestSourceFileName
          (FAssetRegistryExportPathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e67800

int __thiscall
FAssetRegistryExportPathTest::GetTestSourceFileLine(FAssetRegistryExportPathTest *this)

{
  return 0x6c4;
}

// GetTests @ 141e67810

/* WARNING: Removing unreachable block (ram,0x000141e678fd) */
/* WARNING: Removing unreachable block (ram,0x000141e679c8) */

void __thiscall
FAssetRegistryExportPathTest::GetTests
          (FAssetRegistryExportPathTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AssetRegistry.ExportPath");
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

// RunTest @ 141e679f0

bool __thiscall
FAssetRegistryExportPathTest::RunTest(FAssetRegistryExportPathTest *this,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  FName local_res18;
  TStringView<wchar_t> local_108;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FAssetRegistryExportPath local_a8;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_f8.Data.ArrayNum = 0x11;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x1507d6c08;
  local_108.Size = 0x11;
  local_108._12_4_ = local_f8.Data.ArrayMax;
  local_108.DataPtr = L"/S/P.C_1\'P_2.O_3\'";
  ParseExportPath<TStringView<char>_>(&local_a8,(TStringView<char> *)&local_108);
  pFVar2 = FAssetRegistryExportPath::ToString(&local_a8,(FString *)&local_c8);
  pFVar7 = (FScriptContainerElement *)0x0;
  local_108.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar5 = (pFVar2->Data).ArrayNum;
  iVar9 = 0;
  local_108.Size = iVar5 + -1;
  if (iVar5 == 0) {
    local_108.Size = iVar9;
  }
  ::FString::FString(&local_f8,"Full numbered path");
  pFVar2 = ::FString::ConstructFromPtrSize((FString *)&local_e8,(uchar *)"/S/P.C_1\'P_2.O_3\'",0x11)
  ;
  pFVar6 = pFVar7;
  iVar5 = iVar9;
  if (&local_80 != pFVar2) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_e8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  pwVar8 = L"";
  local_e8.Size = iVar5 + -1;
  if (iVar5 == 0) {
    local_e8.Size = iVar9;
  }
  pwVar4 = L"";
  if (local_f8.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
  }
  local_e8.DataPtr = (wchar_t *)pFVar6;
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,&local_108,&local_e8);
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_c8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  local_108.Size = 0xb;
  local_108.DataPtr = L"/S/P.C\'P.O\'";
  local_c8.DataPtr = L"/S/P.C\'P.O\'";
  local_c8.Size = 0xb;
  local_c8._12_4_ = local_108._12_4_;
  ParseExportPath<TStringView<char>_>(&local_a8,(TStringView<char> *)&local_c8);
  pFVar2 = FAssetRegistryExportPath::ToString(&local_a8,(FString *)&local_b8);
  local_e8.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar5 = (pFVar2->Data).ArrayNum;
  iVar10 = 0;
  iVar1 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar1 = iVar10;
  }
  local_e8.Size = iVar1;
  ::FString::FString(&local_f8,"Full path");
  pFVar2 = ::FString::ConstructFromPtrSize((FString *)&local_c8,(uchar *)"/S/P.C\'P.O\'",0xb);
  pFVar6 = pFVar7;
  iVar5 = iVar10;
  if (&local_70 != pFVar2) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_c8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  pwVar4 = L"";
  local_c8.Size = iVar5 + -1;
  if (iVar5 == 0) {
    local_c8.Size = iVar9;
  }
  if (local_f8.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
  }
  local_c8._12_4_ = local_108._12_4_;
  local_108.DataPtr = local_e8.DataPtr;
  local_108.Size = local_e8.Size;
  local_108._12_4_ = local_e8._12_4_;
  local_c8.DataPtr = (wchar_t *)pFVar6;
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,&local_108,&local_c8);
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_b8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_b8.DataPtr);
  }
  local_108.Size = 3;
  local_108.DataPtr = L"P.O";
  local_b8.DataPtr = L"P.O";
  local_b8.Size = 3;
  local_b8._12_4_ = local_108._12_4_;
  ParseExportPath<TStringView<char>_>(&local_a8,(TStringView<char> *)&local_b8);
  pFVar2 = FAssetRegistryExportPath::ToString(&local_a8,(FString *)&local_d8);
  local_e8.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar5 = (pFVar2->Data).ArrayNum;
  iVar1 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar1 = iVar10;
  }
  local_e8.Size = iVar1;
  ::FString::FString(&local_f8,"Package path");
  pFVar2 = ::FString::ConstructFromPtrSize((FString *)&local_b8,(uchar *)"P.O",3);
  pFVar6 = pFVar7;
  if (&local_60 != pFVar2) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_b8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_b8.DataPtr);
  }
  pwVar4 = L"";
  local_c8.DataPtr = local_e8.DataPtr;
  local_c8.Size = local_e8.Size;
  local_c8._12_4_ = local_e8._12_4_;
  local_b8.Size = iVar10 + -1;
  if (iVar10 == 0) {
    local_b8.Size = iVar9;
  }
  local_108.Size = local_b8.Size;
  if (local_f8.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
  }
  local_b8._12_4_ = local_108._12_4_;
  local_108.DataPtr = (wchar_t *)pFVar6;
  local_b8.DataPtr = (wchar_t *)pFVar6;
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,&local_c8,&local_b8);
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_d8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  local_108.Size = 1;
  local_108.DataPtr = L"O";
  local_d8.DataPtr = L"O";
  local_d8.Size = 1;
  local_d8._12_4_ = local_108._12_4_;
  ParseExportPath<TStringView<char>_>(&local_a8,(TStringView<char> *)&local_d8);
  pFVar2 = FAssetRegistryExportPath::ToString(&local_a8,(FString *)&local_c8);
  local_e8.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar5 = (pFVar2->Data).ArrayNum;
  iVar10 = 0;
  iVar1 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar1 = iVar10;
  }
  local_e8.Size = iVar1;
  ::FString::FString(&local_f8,"Object only path");
  pFVar2 = ::FString::ConstructFromPtrSize((FString *)&local_d8,(uchar *)"O",1);
  pFVar6 = pFVar7;
  iVar5 = iVar10;
  if (&local_50 != pFVar2) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_d8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  pwVar4 = L"";
  local_b8.DataPtr = local_e8.DataPtr;
  local_b8.Size = local_e8.Size;
  local_b8._12_4_ = local_e8._12_4_;
  local_d8.Size = iVar5 + -1;
  if (iVar5 == 0) {
    local_d8.Size = iVar9;
  }
  local_108.Size = local_d8.Size;
  if (local_f8.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
  }
  local_d8._12_4_ = local_108._12_4_;
  local_108.DataPtr = (wchar_t *)pFVar6;
  local_d8.DataPtr = (wchar_t *)pFVar6;
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,&local_b8,&local_d8);
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  local_108.DataPtr = L"/S/P.C\'P.O\'";
  local_108.Size = 0xb;
  local_d8.DataPtr = L"/S/P.C\'P.O\'";
  local_d8.Size = 0xb;
  local_d8._12_4_ = local_108._12_4_;
  ParseExportPath<TStringView<char>_>(&local_a8,(TStringView<char> *)&local_d8);
  pFVar2 = FTopLevelAssetPath::ToString(&local_a8.ClassPath,(FString *)&local_c8);
  local_e8.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar5 = (pFVar2->Data).ArrayNum;
  iVar1 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar1 = iVar10;
  }
  local_e8.Size = iVar1;
  ::FString::FString(&local_f8,"Class parse");
  pFVar2 = ::FString::ConstructFromPtrSize((FString *)&local_d8,(uchar *)"/S/P.C",6);
  if (&local_40 != pFVar2) {
    pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_d8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  pwVar4 = L"";
  local_b8.DataPtr = local_e8.DataPtr;
  local_b8.Size = local_e8.Size;
  local_b8._12_4_ = local_e8._12_4_;
  local_d8.Size = iVar10 + -1;
  if (iVar10 == 0) {
    local_d8.Size = iVar9;
  }
  local_108.Size = local_d8.Size;
  if (local_f8.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
  }
  local_d8._12_4_ = local_108._12_4_;
  local_108.DataPtr = (wchar_t *)pFVar7;
  local_d8.DataPtr = (wchar_t *)pFVar7;
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,&local_b8,&local_d8);
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  pFVar3 = ::FName::FName(&local_res18,"P");
  local_108.DataPtr = L"/S/P.C\'P.O\'";
  local_108.Size = 0xb;
  local_d8.DataPtr = L"/S/P.C\'P.O\'";
  local_d8.Size = 0xb;
  local_d8._12_4_ = local_108._12_4_;
  ParseExportPath<TStringView<char>_>(&local_a8,(TStringView<char> *)&local_d8);
  ::FString::FString(&local_f8,"Package parse");
  pwVar4 = L"";
  if (local_f8.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,local_a8.Package,*pFVar3);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pFVar3 = ::FName::FName(&local_res18,"O");
  local_108.DataPtr = L"/S/P.C\'P.O\'";
  local_108.Size = 0xb;
  local_d8.DataPtr = L"/S/P.C\'P.O\'";
  local_d8.Size = 0xb;
  local_d8._12_4_ = local_108._12_4_;
  ParseExportPath<TStringView<char>_>(&local_a8,(TStringView<char> *)&local_d8);
  ::FString::FString(&local_f8,"Object parse");
  if (local_f8.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar8,local_a8.Object,*pFVar3);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141e680a0

FString * __thiscall
FAssetRegistryExportPathTest::GetBeautifiedTestName
          (FAssetRegistryExportPathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AssetRegistry.ExportPath");
  return __return_storage_ptr__;
}

