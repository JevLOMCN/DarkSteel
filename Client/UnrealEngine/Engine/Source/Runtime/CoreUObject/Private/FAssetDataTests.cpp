// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141e6aa70

EAutomationTestFlags __thiscall FAssetDataTests::GetTestFlags(FAssetDataTests *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e6aa80

bool __thiscall FAssetDataTests::IsStressTest(FAssetDataTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e6aa90

uint __thiscall FAssetDataTests::GetRequiredDeviceNum(FAssetDataTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e6aaa0

FString * __thiscall
FAssetDataTests::GetTestSourceFileName(FAssetDataTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetData.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e6aad0

int __thiscall FAssetDataTests::GetTestSourceFileLine(FAssetDataTests *this)

{
  return 0x57f;
}

// GetTests @ 141e6aae0

/* WARNING: Removing unreachable block (ram,0x000141e6abcd) */
/* WARNING: Removing unreachable block (ram,0x000141e6ac98) */

void __thiscall
FAssetDataTests::GetTests
          (FAssetDataTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.CoreUObject.AssetData");
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

// RunTest @ 141e6acc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FAssetDataTests::RunTest(FAssetDataTests *this,FString *param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  FAssetDataTagMapSharedView FVar5;
  bool bVar6;
  undefined1 uVar7;
  FString *pFVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined1 auStack_b8 [40];
  FString local_90;
  FAssetData local_80;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80.ChunkIDs.ArrayMax = 2;
  local_80.PackageName.ComparisonIndex.Value = 0;
  local_80.PackageName.Number = 0;
  local_80.PackagePath.ComparisonIndex.Value = 0;
  local_80.PackagePath.Number = 0;
  local_80.AssetName.ComparisonIndex.Value = 0;
  local_80.AssetName.Number = 0;
  local_80.AssetClass.ComparisonIndex.Value = 0;
  local_80.AssetClass.Number = 0;
  local_80.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_80.AssetClassPath.PackageName.Number = 0;
  local_80.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_80.AssetClassPath.AssetName.Number = 0;
  local_80.ChunkArrayRegistryHandle.Index = -1;
  local_80.PackageFlags = 0;
  local_80.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_80.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_80.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_80.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_80.ChunkIDs.ArrayNum = 0;
  pFVar8 = FAssetData::GetObjectPathString(&local_80,&local_90);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty Asset Data: Object path string is empty",pwVar10,
             L"");
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_80.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FVar5.field0_0x0 = (FAssetDataTagMapSharedView_u_0)local_80.TagsAndValues;
  if (((ulonglong)local_80.TagsAndValues.field0_0x0 & 1) == 0) {
    if (((local_80.TagsAndValues.field0_0x0.Bits._0_1_ ^ 1) &
        local_80.TagsAndValues.field0_0x0.Loose != (FAssetDataTagMapSharedView_u_0)0x0) != 0) {
      LOCK();
      pFVar1 = (FThreadSafeCounter *)((longlong)local_80.TagsAndValues.field0_0x0 + 0x10);
      iVar2 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      if ((iVar2 == 1) &&
         (local_80.TagsAndValues.field0_0x0.Loose != (FAssetDataTagMapSharedView_u_0)0x0)) {
        DestructItems<TTuple<FName,FString>,int>
                  ((TTuple<FName,FString> *)*(longlong *)local_80.TagsAndValues.field0_0x0,
                   (int)*(longlong *)((longlong)local_80.TagsAndValues.field0_0x0 + 8));
        pvVar3 = (void *)*(longlong *)FVar5.field0_0x0;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        ::operator_delete((void *)FVar5.field0_0x0,0x18);
      }
    }
  }
  else {
    uVar9 = (ulonglong)local_80.TagsAndValues.field0_0x0 >> 2 & 0x3fff;
    if (FixedTagPrivate::GStores.Data[uVar9] == (FStore *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    FixedTagPrivate::FStore::Release(FixedTagPrivate::GStores.Data[uVar9]);
  }
  return true;
}

// GetBeautifiedTestName @ 141e6ae50

FString * __thiscall
FAssetDataTests::GetBeautifiedTestName(FAssetDataTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.CoreUObject.AssetData");
  return __return_storage_ptr__;
}

