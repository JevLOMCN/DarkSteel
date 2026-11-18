// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 8

// GetTestFlags @ 142b31770

EAutomationTestFlags __thiscall
FEnumerateAssetsPerformance::GetTestFlags(FEnumerateAssetsPerformance *this)

{
  return PerfFilter|EditorContext;
}

// IsStressTest @ 142b31780

bool __thiscall FEnumerateAssetsPerformance::IsStressTest(FEnumerateAssetsPerformance *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142b31790

uint __thiscall FEnumerateAssetsPerformance::GetRequiredDeviceNum(FEnumerateAssetsPerformance *this)

{
  return 1;
}

// GetTestSourceFileName @ 142b317a0

FString * __thiscall
FEnumerateAssetsPerformance::GetTestSourceFileName
          (FEnumerateAssetsPerformance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryStateTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142b317d0

int __thiscall FEnumerateAssetsPerformance::GetTestSourceFileLine(FEnumerateAssetsPerformance *this)

{
  return 0xf;
}

// GetTests @ 142b317e0

/* WARNING: Removing unreachable block (ram,0x000142b318cd) */
/* WARNING: Removing unreachable block (ram,0x000142b31998) */

void __thiscall
FEnumerateAssetsPerformance::GetTests
          (FEnumerateAssetsPerformance *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AssetRegistry.AssetRegistryState.EnumerateAssetsPerformance")
  ;
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

// RunTest @ 142b319c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FEnumerateAssetsPerformance::RunTest(FEnumerateAssetsPerformance *this,FString *param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName *pFVar5;
  void *pvVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  FAssetData *pFVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_868 [32];
  FTopLevelAssetPath local_828;
  undefined1 local_818 [16];
  FTopLevelAssetPath local_808;
  TArrayView<int_const_,int> local_7f8;
  FName local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  FAssetDataTagMap local_7d8;
  FTopLevelAssetPath local_7b8;
  TStringBuilderBase<wchar_t> local_7a8;
  wchar_t local_788 [16];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_768;
  FAssetRegistryState local_718;
  undefined1 local_4a8 [544];
  void *local_288;
  undefined4 local_280;
  bool local_270;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [30];
  ulonglong auStack_20c [56];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_868;
  local_7b8.AssetName.Number = 0;
  local_828.AssetName = (FName)this;
  pFVar5 = ::FName::FName((FName *)&local_7f8,0x1e,L"/Engine/AssetRegistryStateTest",FNAME_Add);
  iVar10 = 0;
  uStack_7e0 = 0x18;
  FVar1 = *pFVar5;
  local_7e8 = (FName)0x1509977a0;
  local_818._8_8_ = CONCAT44(uStack_7dc,0x18);
  local_818._0_8_ = L"/Script/Engine.Blueprint";
  local_808.PackageName.ComparisonIndex.Value = 0;
  local_808.PackageName.Number = 0;
  local_808.AssetName.ComparisonIndex.Value = 0;
  local_808.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_808,(TStringView<wchar_t> *)local_818);
  local_718.CachedAssets.Elements._0_8_ = 0;
  local_718.CachedAssets.Elements._8_8_ = 0;
  local_718.CachedAssets.Elements._32_8_ = 0;
  local_718.CachedAssets.Elements._40_4_ = 0;
  local_718.CachedAssets.Elements._44_4_ = 0x80;
  local_718.CachedAssets.Elements._48_4_ = 0xffffffff;
  local_718.CachedAssets.Elements._52_4_ = 0;
  local_718.CachedAssets.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_718.CachedAssets.HashSize = 0;
  local_718.CachedAssetsByPackageName._0_8_ = 0;
  local_718.CachedAssetsByPackageName._8_8_ = 0;
  local_718.CachedAssetsByPackageName._32_8_ = 0;
  local_718.CachedAssetsByPackageName._40_4_ = 0;
  local_718.CachedAssetsByPackageName._44_4_ = 0x80;
  local_718.CachedAssetsByPackageName._48_4_ = 0xffffffff;
  local_718.CachedAssetsByPackageName._52_4_ = 0;
  local_718.CachedAssetsByPackageName._64_8_ = 0;
  local_718.CachedAssetsByPackageName._72_4_ = 0;
  local_718.CachedAssetsByPath._0_8_ = 0;
  local_718.CachedAssetsByPath._8_8_ = 0;
  local_718.CachedAssetsByPath._32_8_ = 0;
  local_718.CachedAssetsByPath._40_4_ = 0;
  local_718.CachedAssetsByPath._44_4_ = 0x80;
  local_718.CachedAssetsByPath._48_4_ = 0xffffffff;
  local_718.CachedAssetsByPath._52_4_ = 0;
  local_718.CachedAssetsByPath._64_8_ = 0;
  local_718.CachedAssetsByPath._72_4_ = 0;
  local_718.CachedAssetsByClass._0_8_ = 0;
  local_718.CachedAssetsByClass._8_8_ = 0;
  local_718.CachedAssetsByClass._32_8_ = 0;
  local_718.CachedAssetsByClass._40_4_ = 0;
  local_718.CachedAssetsByClass._44_4_ = 0x80;
  local_718.CachedAssetsByClass._48_4_ = 0xffffffff;
  local_718.CachedAssetsByClass._52_4_ = 0;
  local_718.CachedAssetsByClass._64_8_ = 0;
  local_718.CachedAssetsByClass._72_4_ = 0;
  local_718.CachedClassesByTag._0_8_ = 0;
  local_718.CachedClassesByTag._8_8_ = 0;
  local_718.CachedClassesByTag._32_8_ = 0;
  local_718.CachedClassesByTag._40_4_ = 0;
  local_718.CachedClassesByTag._44_4_ = 0x80;
  local_718.CachedClassesByTag._48_4_ = 0xffffffff;
  local_718.CachedClassesByTag._52_4_ = 0;
  local_718.CachedClassesByTag._64_8_ = 0;
  local_718.CachedClassesByTag._72_4_ = 0;
  local_718.CachedDependsNodes._0_8_ = 0;
  local_718.CachedDependsNodes._8_8_ = 0;
  local_718.CachedDependsNodes._32_8_ = 0;
  local_718.CachedDependsNodes._40_4_ = 0;
  local_718.CachedDependsNodes._44_4_ = 0x80;
  local_718.CachedDependsNodes._48_4_ = 0xffffffff;
  local_718.CachedDependsNodes._52_4_ = 0;
  local_718.CachedDependsNodes._64_8_ = 0;
  local_718.CachedDependsNodes._72_4_ = 0;
  local_718.CachedPackageData._0_8_ = 0;
  local_718.CachedPackageData._8_8_ = 0;
  local_718.CachedPackageData._32_8_ = 0;
  local_718.CachedPackageData._40_4_ = 0;
  local_718.CachedPackageData._44_4_ = 0x80;
  local_718.CachedPackageData._48_4_ = 0xffffffff;
  local_718.CachedPackageData._52_4_ = 0;
  local_718.CachedPackageData._64_8_ = 0;
  local_718.CachedPackageData._72_4_ = 0;
  local_718.PreallocatedAssetDataBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.PreallocatedAssetDataBuffers.ArrayNum = 0;
  local_718.PreallocatedAssetDataBuffers.ArrayMax = 0;
  local_718.PreallocatedDependsNodeDataBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_718.PreallocatedDependsNodeDataBuffers.ArrayNum = 0;
  local_718.PreallocatedDependsNodeDataBuffers.ArrayMax = 0;
  local_718.PreallocatedPackageDataBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.PreallocatedPackageDataBuffers.ArrayNum = 0;
  local_718.PreallocatedPackageDataBuffers.ArrayMax = 0;
  local_718.NumAssets = 0;
  local_718.NumDependsNodes = 0;
  local_718.NumPackageData = 0;
  local_718.bCookedGlobalAssetRegistryState = false;
  do {
    local_268.Base = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.CurPos = local_248;
    local_268.End = (wchar_t *)local_48;
    if (local_48 < auStack_20c) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,0x1e);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L"/Engine/AssetRegistryStateTest",0x3c)
    ;
    local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 0x3c);
    pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_268,L"/Package",8);
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar7,L"%d");
    local_7a8.Base = local_788;
    local_7a8.bIsDynamic = false;
    local_7a8.bIsExternal = false;
    local_7a8.CurPos = local_788;
    local_7a8.End = (wchar_t *)&local_768;
    pvVar6 = FGenericPlatformString::Memcpy(local_788,L"Package",0xe);
    local_7a8.CurPos = (wchar_t *)((longlong)pvVar6 + 0xe);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_7a8,L"%d");
    pFVar5 = ::FName::FName(&local_828.PackageName,
                            (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1),
                            local_268.Base,FNAME_Add);
    FVar2 = *pFVar5;
    pFVar8 = ::operator_new(0x68);
    FVar4 = local_808.AssetName;
    FVar3 = local_808.PackageName;
    if (pFVar8 == (FAssetData *)0x0) {
      pFVar8 = (FAssetData *)0x0;
    }
    else {
      local_818._0_4_ = 0;
      local_818._4_4_ = 0;
      local_818._8_8_ = local_818._8_8_ & 0xffffffff00000000;
      local_7d8._padding_ = 0;
      local_7d8._padding_ = 0;
      local_7d8.RefCount.Counter = 0;
      local_7d8._20_4_ = 0;
      pFVar5 = ::FName::FName(&local_7e8,
                              (int)((longlong)local_7a8.CurPos - (longlong)local_7a8.Base >> 1),
                              local_7a8.Base,FNAME_Add);
      local_7f8.DataPtr = (int *)local_818._0_8_;
      local_7f8._8_8_ = local_818._8_8_;
      local_7b8.PackageName = FVar3;
      local_7b8.AssetName = FVar4;
      pFVar8 = FAssetData::FAssetData(pFVar8,FVar2,FVar1,*pFVar5,&local_7b8,&local_7d8,&local_7f8,0)
      ;
    }
    FAssetRegistryState::AddAssetData(&local_718,pFVar8);
    local_7f8.DataPtr = (int *)FVar2;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_7a8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 1000000);
  FARCompiledFilter::FARCompiledFilter((FARCompiledFilter *)local_4a8);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_4a8,
             &local_828.PackageName,(bool *)&local_7f8);
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
  Emplace<FTopLevelAssetPath_const_&>
            ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *)
             (local_4a8 + 400),&local_828,(bool *)&local_808);
  FVar1 = local_828.AssetName;
  local_270 = true;
  lVar9 = 10;
  local_768.Elements._0_8_ = 0;
  local_768.Elements._8_8_ = 0;
  local_768.Elements._32_8_ = 0;
  local_768.Elements._40_4_ = 0;
  local_768.Elements._44_4_ = 0x80;
  local_768.Elements._48_4_ = 0xffffffff;
  local_768.Elements._52_4_ = 0;
  local_768.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_768.HashSize = 0;
  do {
    local_828.AssetName = (FName)&local_828;
    local_828.PackageName.ComparisonIndex.Value = 0;
    local_818._8_8_ = &local_828.AssetName;
    local_818._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FEnumerateAssetsPerformance::RunTest'::__l6::<lambda_1>,bool,FAssetData_const_&>
         ::Call;
    FAssetRegistryState::EnumerateAssets
              (&local_718,(FARCompiledFilter *)local_4a8,&local_768,
               (TFunctionRef<bool___cdecl(FAssetData_const_&)> *)local_818,AllowUnfilteredArAssets);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)FVar1,L"EnumerateAssets: Expected number of assets was found."
               ,local_828.PackageName.ComparisonIndex.Value,1);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  local_768.HashSize = 0;
  if (local_768.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_768.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_768.Elements);
  local_280 = 0;
  if (local_288 != (void *)0x0) {
    FMemory::Free(local_288);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_4a8 + 0x1e0));
  local_4a8._472_4_ = 0;
  if ((ForElementType<FSetElementId>)local_4a8._464_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4a8._464_8_);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_4a8 + 400));
  local_4a8._392_4_ = 0;
  if ((ForElementType<FSetElementId>)local_4a8._384_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4a8._384_8_);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_4a8 + 0x140));
  local_4a8._312_4_ = 0;
  if ((ForElementType<FSetElementId>)local_4a8._304_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4a8._304_8_);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_4a8 + 0xf0));
  local_4a8._232_4_ = 0;
  if ((ForElementType<FSetElementId>)local_4a8._224_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4a8._224_8_);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_4a8 + 0xa0));
  local_4a8._152_4_ = 0;
  if ((ForElementType<FSetElementId>)local_4a8._144_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4a8._144_8_);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_4a8 + 0x50));
  local_4a8._72_4_ = 0;
  if ((ForElementType<FSetElementId>)local_4a8._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4a8._64_8_);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_4a8);
  FAssetRegistryState::~FAssetRegistryState(&local_718);
  return true;
}

// GetBeautifiedTestName @ 142b32100

FString * __thiscall
FEnumerateAssetsPerformance::GetBeautifiedTestName
          (FEnumerateAssetsPerformance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.AssetRegistry.AssetRegistryState.EnumerateAssetsPerformance");
  return __return_storage_ptr__;
}

