// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 8

// GetTestFlags @ 142aad0e0

EAutomationTestFlags __thiscall
FAssetRegistryAssetPathStringsTest::GetTestFlags(FAssetRegistryAssetPathStringsTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 142aad0f0

bool __thiscall
FAssetRegistryAssetPathStringsTest::IsStressTest(FAssetRegistryAssetPathStringsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142aad100

uint __thiscall
FAssetRegistryAssetPathStringsTest::GetRequiredDeviceNum(FAssetRegistryAssetPathStringsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142aad110

FString * __thiscall
FAssetRegistryAssetPathStringsTest::GetTestSourceFileName
          (FAssetRegistryAssetPathStringsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142aad140

int __thiscall
FAssetRegistryAssetPathStringsTest::GetTestSourceFileLine(FAssetRegistryAssetPathStringsTest *this)

{
  return 0x131a;
}

// GetTests @ 142aad150

/* WARNING: Removing unreachable block (ram,0x000142aad23d) */
/* WARNING: Removing unreachable block (ram,0x000142aad308) */

void __thiscall
FAssetRegistryAssetPathStringsTest::GetTests
          (FAssetRegistryAssetPathStringsTest *this,
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
  
  ::FString::FString(&local_18,"System.AssetRegistry.AssetPathStrings");
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

// RunTest @ 142aad330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAssetRegistryAssetPathStringsTest::RunTest
          (FAssetRegistryAssetPathStringsTest *this,FString *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FName FVar6;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298 [12];
  uint uStack_28c;
  undefined1 local_288 [16];
  FTopLevelAssetPath local_278;
  FTopLevelAssetPath local_268;
  FName local_258;
  FString local_250;
  FAssetDataTagMap local_240;
  FString local_228;
  FString local_218;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FSoftObjectPath local_1f0;
  FSoftObjectPath local_1d0;
  FSoftObjectPath local_1b0;
  FCachedAssetKey local_190;
  FCachedAssetKey local_180;
  FCachedAssetKey local_170;
  FAssetData local_160;
  FAssetData local_f8;
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  ::FName::FName(&local_208,L"/Path/To/PackageName");
  ::FName::FName(&local_200,L"/Path/To/PackageName.OuterName");
  ::FName::FName(&local_1f8,L"/Path/To/PackageName.OuterName:SubOuterName");
  ::FName::FName(&local_258,L"AssetName");
  ::FName::ToString(&local_258,(FString *)local_288);
  pwVar3 = L"";
  ::FName::ToString(&local_208,(FString *)local_298);
  ::FString::PrintfImpl(&local_250,L"%s.%s");
  if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  ::FName::ToString(&local_258,(FString *)local_288);
  ::FName::ToString(&local_200,(FString *)local_298);
  ::FString::PrintfImpl(&local_218,L"%s:%s");
  if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  ::FName::ToString(&local_258,(FString *)local_288);
  ::FName::ToString(&local_1f8,(FString *)local_298);
  ::FString::PrintfImpl(&local_228,L"%s.%s");
  if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  local_278.PackageName = (FName)local_250.Data.AllocatorInstance.Data;
  local_1b0.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_1b0.AssetPath.PackageName.Number = 0;
  local_1b0.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_1b0.AssetPath.AssetName.Number = 0;
  local_1b0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.SubPathString.Data.ArrayNum = 0;
  local_1b0.SubPathString.Data.ArrayMax = 0;
  local_278.AssetName.ComparisonIndex.Value = local_250.Data.ArrayNum - 1;
  if (local_250.Data.ArrayNum == 0) {
    local_278.AssetName.ComparisonIndex.Value = 0;
  }
  local_298._0_8_ = local_250.Data.AllocatorInstance.Data;
  uStack_28c = local_278.AssetName.Number;
  local_298._8_4_ = local_278.AssetName.ComparisonIndex.Value;
  FSoftObjectPath::SetPath(&local_1b0,(TStringView<wchar_t> *)local_298);
  local_278.PackageName = (FName)local_218.Data.AllocatorInstance.Data;
  local_1d0.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_1d0.AssetPath.PackageName.Number = 0;
  local_1d0.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_1d0.AssetPath.AssetName.Number = 0;
  local_1d0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.SubPathString.Data.ArrayNum = 0;
  local_1d0.SubPathString.Data.ArrayMax = 0;
  local_278.AssetName.ComparisonIndex.Value = local_218.Data.ArrayNum - 1;
  if (local_218.Data.ArrayNum == 0) {
    local_278.AssetName.ComparisonIndex.Value = 0;
  }
  local_298._0_8_ = local_218.Data.AllocatorInstance.Data;
  uStack_28c = local_278.AssetName.Number;
  local_298._8_4_ = local_278.AssetName.ComparisonIndex.Value;
  FSoftObjectPath::SetPath(&local_1d0,(TStringView<wchar_t> *)local_298);
  local_278.PackageName = (FName)local_228.Data.AllocatorInstance.Data;
  local_1f0.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_1f0.AssetPath.PackageName.Number = 0;
  local_1f0.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_1f0.AssetPath.AssetName.Number = 0;
  local_1f0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.SubPathString.Data.ArrayNum = 0;
  local_1f0.SubPathString.Data.ArrayMax = 0;
  local_278.AssetName.ComparisonIndex.Value = local_228.Data.ArrayNum - 1;
  if (local_228.Data.ArrayNum == 0) {
    local_278.AssetName.ComparisonIndex.Value = 0;
  }
  local_298._0_8_ = local_228.Data.AllocatorInstance.Data;
  stack0xfffffffffffffd70 = local_278.AssetName;
  FSoftObjectPath::SetPath(&local_1f0,(TStringView<wchar_t> *)local_298);
  pFVar1 = FSoftObjectPath::ToString(&local_1b0,(FString *)local_298);
  FVar6 = (FName)L"";
  if (local_250.Data.ArrayNum != 0) {
    FVar6 = (FName)local_250.Data.AllocatorInstance.Data;
  }
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"SoftObjectPath::ToString() correct for top-level asset",
             pwVar5,(wchar_t *)FVar6);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  pFVar1 = FSoftObjectPath::ToString(&local_1d0,(FString *)local_298);
  FVar6 = (FName)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar6 = (FName)local_218.Data.AllocatorInstance.Data;
  }
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"SoftObjectPath::ToString() correct for subobject asset",
             pwVar5,(wchar_t *)FVar6);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  pFVar1 = FSoftObjectPath::ToString(&local_1f0,(FString *)local_298);
  FVar6 = (FName)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar6 = (FName)local_228.Data.AllocatorInstance.Data;
  }
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"SoftObjectPath::ToString() correct for sub-subobject asset",pwVar5,(wchar_t *)FVar6);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_190,&local_1b0);
  pFVar1 = ::FName::ToString(&local_208,(FString *)local_288);
  pFVar2 = ::FName::ToString(&local_190.OuterPath,(FString *)local_298);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCachedAssetKey::OuterPath correct for top-level asset",
             pwVar4,pwVar5);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  pFVar1 = ::FName::ToString(&local_258,(FString *)local_288);
  pFVar2 = ::FName::ToString(&local_190.ObjectName,(FString *)local_298);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCachedAssetKey::ObjectName correct for top-level asset",
             pwVar4,pwVar5);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_180,&local_1d0);
  pFVar1 = ::FName::ToString(&local_200,(FString *)local_288);
  pFVar2 = ::FName::ToString(&local_180.OuterPath,(FString *)local_298);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCachedAssetKey::OuterPath correct for subobject asset",
             pwVar4,pwVar5);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  pFVar1 = ::FName::ToString(&local_258,(FString *)local_288);
  pFVar2 = ::FName::ToString(&local_180.ObjectName,(FString *)local_298);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCachedAssetKey::ObjectName correct for subobject asset",
             pwVar4,pwVar5);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_170,&local_1f0);
  pFVar1 = ::FName::ToString(&local_1f8,(FString *)local_288);
  pFVar2 = ::FName::ToString(&local_170.OuterPath,(FString *)local_298);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"FCachedAssetKey::OuterPath correct for sub-subobject asset",pwVar4,pwVar5);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  pFVar1 = ::FName::ToString(&local_258,(FString *)local_288);
  pFVar2 = ::FName::ToString(&local_170.ObjectName,(FString *)local_298);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"FCachedAssetKey::ObjectName correct for sub-subobject asset",pwVar4,pwVar5);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  pFVar1 = UE::AssetRegistry::Private::FCachedAssetKey::ToString(&local_190,(FString *)local_298);
  FVar6 = (FName)L"";
  if (local_250.Data.ArrayNum != 0) {
    FVar6 = (FName)local_250.Data.AllocatorInstance.Data;
  }
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCachedAssetKey::ToString() correct for top-level asset",
             pwVar5,(wchar_t *)FVar6);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  pFVar1 = UE::AssetRegistry::Private::FCachedAssetKey::ToString(&local_180,(FString *)local_298);
  FVar6 = (FName)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar6 = (FName)local_218.Data.AllocatorInstance.Data;
  }
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCachedAssetKey::ToString() correct for subobject asset",
             pwVar5,(wchar_t *)FVar6);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  pFVar1 = UE::AssetRegistry::Private::FCachedAssetKey::ToString(&local_170,(FString *)local_298);
  FVar6 = (FName)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar6 = (FName)local_228.Data.AllocatorInstance.Data;
  }
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"FCachedAssetKey::ToString() correct for sub-subobject asset",pwVar5,(wchar_t *)FVar6)
  ;
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  FPackageName::ObjectPathToPackageName((FString *)local_298,&local_250);
  local_288._8_4_ = 0x1a;
  local_240._padding_ = 0;
  local_240._padding_ = 0;
  local_288._0_8_ = "/Script/CoreUObject.Object";
  local_278.PackageName.ComparisonIndex.Value = 0;
  local_278.PackageName.Number = 0;
  local_278.AssetName = (FName)((ulonglong)stack0xfffffffffffffd70 & 0xffffffff00000000);
  local_240.RefCount.Counter = 0;
  local_240._20_4_ = 0;
  local_268.PackageName.ComparisonIndex.Value = 0;
  local_268.PackageName.Number = 0;
  local_268.AssetName.ComparisonIndex.Value = 0;
  local_268.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_268,(TStringView<char> *)local_288);
  local_288._0_4_ = local_278.PackageName.ComparisonIndex.Value;
  local_288._4_4_ = local_278.PackageName.Number;
  local_288._8_4_ = local_278.AssetName.ComparisonIndex.Value;
  local_288._12_4_ = local_278.AssetName.Number;
  local_278.PackageName = local_268.PackageName;
  local_278.AssetName = local_268.AssetName;
  FAssetData::FAssetData
            (&local_160,(FString *)local_298,&local_250,&local_278,&local_240,
             (TArrayView<int_const_,int> *)local_288,0);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  FPackageName::ObjectPathToPackageName((FString *)local_288,&local_218);
  local_298._8_4_ = 0x1a;
  local_240._padding_ = 0;
  local_240._padding_ = 0;
  local_298._0_8_ = "/Script/CoreUObject.Object";
  local_278.PackageName.ComparisonIndex.Value = 0;
  local_278.PackageName.Number = 0;
  local_278.AssetName = (FName)((ulonglong)uStack_28c << 0x20);
  local_240.RefCount.Counter = 0;
  local_240._20_4_ = 0;
  local_268.PackageName.ComparisonIndex.Value = 0;
  local_268.PackageName.Number = 0;
  local_268.AssetName.ComparisonIndex.Value = 0;
  local_268.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_268,(TStringView<char> *)local_298);
  local_298._0_4_ = local_278.PackageName.ComparisonIndex.Value;
  local_298._4_4_ = local_278.PackageName.Number;
  stack0xfffffffffffffd70 = local_278.AssetName;
  local_278.PackageName = local_268.PackageName;
  local_278.AssetName = local_268.AssetName;
  FAssetData::FAssetData
            (&local_90,(FString *)local_288,&local_218,&local_278,&local_240,
             (TArrayView<int_const_,int> *)local_298,0);
  if ((FName)local_288._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  FPackageName::ObjectPathToPackageName((FString *)local_288,&local_228);
  local_298._8_4_ = 0x1a;
  local_240._padding_ = 0;
  local_240._padding_ = 0;
  local_298._0_8_ = "/Script/CoreUObject.Object";
  local_278.PackageName.ComparisonIndex.Value = 0;
  local_278.PackageName.Number = 0;
  local_278.AssetName = (FName)((ulonglong)uStack_28c << 0x20);
  local_240.RefCount.Counter = 0;
  local_240._20_4_ = 0;
  local_268.PackageName.ComparisonIndex.Value = 0;
  local_268.PackageName.Number = 0;
  local_268.AssetName.ComparisonIndex.Value = 0;
  local_268.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_268,(TStringView<char> *)local_298);
  local_298._0_4_ = local_278.PackageName.ComparisonIndex.Value;
  local_298._4_4_ = local_278.PackageName.Number;
  stack0xfffffffffffffd70 = local_278.AssetName;
  local_278.PackageName = local_268.PackageName;
  local_278.AssetName = local_268.AssetName;
  FAssetData::FAssetData
            (&local_f8,(FString *)local_288,&local_228,&local_278,&local_240,
             (TArrayView<int_const_,int> *)local_298,0);
  if ((FName)local_288._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  pFVar1 = FAssetData::GetObjectPathString(&local_160,(FString *)local_298);
  FVar6 = (FName)L"";
  if (local_250.Data.ArrayNum != 0) {
    FVar6 = (FName)local_250.Data.AllocatorInstance.Data;
  }
  if ((pFVar1->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FAssetData::AppendPath() correct for top-level asset",
             pwVar3,(wchar_t *)FVar6);
  if ((FName)local_298._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if (local_f8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_f8.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_f8.TagsAndValues);
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  if (local_160.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_160.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_160.TagsAndValues);
  if (local_1f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_1d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_1b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((FName)local_228.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if ((FName)local_218.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if ((FName)local_250.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 142aadd60

FString * __thiscall
FAssetRegistryAssetPathStringsTest::GetBeautifiedTestName
          (FAssetRegistryAssetPathStringsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AssetRegistry.AssetPathStrings");
  return __return_storage_ptr__;
}

