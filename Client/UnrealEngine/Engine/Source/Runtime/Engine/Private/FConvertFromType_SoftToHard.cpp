// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 14886e2d0

EAutomationTestFlags __thiscall
FConvertFromType_SoftToHard::GetTestFlags(FConvertFromType_SoftToHard *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14886e2e0

bool __thiscall FConvertFromType_SoftToHard::IsStressTest(FConvertFromType_SoftToHard *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14886e2f0

uint __thiscall FConvertFromType_SoftToHard::GetRequiredDeviceNum(FConvertFromType_SoftToHard *this)

{
  return 1;
}

// GetTestSourceFileName @ 14886e300

FString * __thiscall
FConvertFromType_SoftToHard::GetTestSourceFileName
          (FConvertFromType_SoftToHard *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14886e330

int __thiscall FConvertFromType_SoftToHard::GetTestSourceFileLine(FConvertFromType_SoftToHard *this)

{
  return 0x20;
}

// GetTests @ 14886e340

/* WARNING: Removing unreachable block (ram,0x00014886e42d) */
/* WARNING: Removing unreachable block (ram,0x00014886e4f8) */

void __thiscall
FConvertFromType_SoftToHard::GetTests
          (FConvertFromType_SoftToHard *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"System.Engine.Loading.ConvertFromType_SoftToHard");
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

// RunTest @ 14886e520

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall
FConvertFromType_SoftToHard::RunTest(FConvertFromType_SoftToHard *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UPackage *pUVar5;
  FName *pFVar6;
  UAsyncLoadingTests_ConvertFromType_V1 *this_00;
  UPackage *pUVar7;
  UAsyncLoadingTests_ConvertFromType_V1 *this_01;
  FString *pFVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  UObjectBase *pUVar14;
  wchar_t *pwVar15;
  longlong local_res18;
  wchar_t *local_res20;
  FClassRedirectScope local_3f8;
  undefined1 local_3e8 [8];
  FDelegateAllocation local_3e0;
  UAsyncLoadingTests_ConvertFromType_V1 *local_3d0;
  undefined8 local_3c8;
  FSavePackageArgs local_3c0;
  FSavePackageArgs local_388;
  FString local_350;
  wchar_t *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  wchar_t *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  wchar_t *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  wchar_t *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  wchar_t *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  wchar_t *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FString local_2b8;
  FCoreRedirect *local_2a8;
  int iStack_2a0;
  FString local_298;
  wchar_t *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  wchar_t *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  FDestructionSentinel local_1d8;
  FDelegateAllocation *local_1c0;
  FString local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  FString local_128;
  TArrayView<FCoreRedirect_const_,int> local_118;
  TStringView<wchar_t> local_108;
  FName local_f8 [2];
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FName local_68;
  FString local_60;
  TStringView<wchar_t> local_48;
  
  FlushAsyncLoading(-1);
  local_res20 = L"TestObject";
  pUVar5 = CreatePackage(L"/Engine/TestConvertFromType_SoftToHard1");
  pFVar6 = ::FName::FName(&local_68,local_res20);
  this_00 = NewObject<UAsyncLoadingTests_ConvertFromType_V1>
                      ((UObject *)pUVar5,*pFVar6,RF_Standalone|RF_Public,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pUVar7 = CreatePackage(L"/Engine/TestConvertFromType_SoftToHard2");
  pFVar6 = ::FName::FName(local_f8,local_res20);
  this_01 = NewObject<UAsyncLoadingTests_ConvertFromType_V1>
                      ((UObject *)pUVar7,*pFVar6,RF_Standalone|RF_Public,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  local_3d0 = this_01;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UAsyncLoadingTests_ConvertFromType_V1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  FSoftObjectPtr::operator=(&(this_00->Reference).SoftObjectPtr,(FObjectPtr)&local_3d0);
  pUVar5->bHasBeenFullyLoaded = '\x01';
  pUVar7->bHasBeenFullyLoaded = '\x01';
  local_388.Error = (FOutputDevice *)GError;
  local_388._19_4_ = 0;
  local_388._23_1_ = 0;
  local_388.ArchiveCookData = (FArchiveCookData *)0x0;
  local_388.TopLevelFlags = RF_NoFlags;
  local_388.SaveFlags = 0;
  local_388.bForceByteSwapping = false;
  local_388.bWarnOfLongFilename = true;
  local_388.bSlowTask = true;
  local_388.FinalTimeStamp.Ticks = 0;
  local_388.SavePackageContext = (FSavePackageContext *)0x0;
  local_388.InOutSaveOverrides =
       (TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
        *)0x0;
  pFVar8 = FPackageName::GetAssetPackageExtension();
  ::FString::FString(&local_1e8,L"/Engine/TestConvertFromType_SoftToHard1");
  pFVar8 = FPackageName::LongPackageNameToFilename(&local_60,&local_1e8,pFVar8);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  bVar2 = UPackage::SavePackage(pUVar5,(UObject *)0x0,pwVar15,&local_388);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UPackage::SavePackage(Package1, nullptr, *FPackageName::LongPackageNameToFilename(PackagePath1, FPackageName::GetAssetPackageExtension()), FSavePackageArgs())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x3c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_3c0.Error = (FOutputDevice *)GError;
  local_3c0.SavePackageContext = (FSavePackageContext *)0x0;
  local_3c0.InOutSaveOverrides =
       (TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
        *)0x0;
  local_3c0._19_4_ = 0;
  local_3c0._23_1_ = 0;
  local_3c0.ArchiveCookData = (FArchiveCookData *)0x0;
  local_3c0.TopLevelFlags = RF_NoFlags;
  local_3c0.SaveFlags = 0;
  local_3c0.bForceByteSwapping = false;
  local_3c0.bWarnOfLongFilename = true;
  local_3c0.bSlowTask = true;
  local_3c0.FinalTimeStamp.Ticks = 0;
  pFVar8 = FPackageName::GetAssetPackageExtension();
  ::FString::FString(&local_350,L"/Engine/TestConvertFromType_SoftToHard2");
  pFVar8 = FPackageName::LongPackageNameToFilename(&local_1b8,&local_350,pFVar8);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  bVar2 = UPackage::SavePackage(pUVar7,(UObject *)0x0,pwVar15,&local_3c0);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UPackage::SavePackage(Package2, nullptr, *FPackageName::LongPackageNameToFilename(PackagePath2, FPackageName::GetAssetPackageExtension()), FSavePackageArgs())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this_00,RF_Standalone);
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this_01,RF_Standalone);
  iStack_330 = 0x32;
  local_338 = L"/Engine/TestConvertFromType_SoftToHard1.TestObject";
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V1::StaticClass();
  local_1a8._12_4_ = uStack_32c;
  local_1a8.Size = iStack_330;
  local_1a8.DataPtr = local_338;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_1a8,None);
  if (pUVar10 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UAsyncLoadingTests_ConvertFromType_V1>(nullptr, ObjectPath1) != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iStack_320 = 0x27;
  local_328 = L"/Engine/TestConvertFromType_SoftToHard1";
  pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
  local_198._12_4_ = uStack_31c;
  local_198.Size = iStack_320;
  local_198.DataPtr = local_328;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_198,None);
  if (pUVar10 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UPackage>(nullptr, PackagePath1) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iStack_310 = 0x32;
  local_318 = L"/Engine/TestConvertFromType_SoftToHard2.TestObject";
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V1::StaticClass();
  local_188._12_4_ = uStack_30c;
  local_188.Size = iStack_310;
  local_188.DataPtr = local_318;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_188,None);
  if (pUVar10 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UAsyncLoadingTests_ConvertFromType_V1>(nullptr, ObjectPath2) != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x46,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iStack_300 = 0x27;
  local_308 = L"/Engine/TestConvertFromType_SoftToHard2";
  pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
  local_178._12_4_ = uStack_2fc;
  local_178.Size = iStack_300;
  local_178.DataPtr = local_308;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_178,None);
  if (pUVar10 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UPackage>(nullptr, PackagePath2) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  CollectGarbage(RF_NoFlags,true);
  local_2f8 = L"/Engine/TestConvertFromType_SoftToHard1.TestObject";
  iStack_2f0 = 0x32;
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V1::StaticClass();
  local_168._12_4_ = uStack_2ec;
  local_168.Size = iStack_2f0;
  local_168.DataPtr = local_2f8;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_168,None);
  if (pUVar10 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UAsyncLoadingTests_ConvertFromType_V1>(nullptr, ObjectPath1) == nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x4b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2e8 = L"/Engine/TestConvertFromType_SoftToHard1";
  iStack_2e0 = 0x27;
  pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
  local_158._12_4_ = uStack_2dc;
  local_158.Size = iStack_2e0;
  local_158.DataPtr = local_2e8;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_158,None);
  if (pUVar10 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UPackage>(nullptr, PackagePath1) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2d8 = L"/Engine/TestConvertFromType_SoftToHard2.TestObject";
  iStack_2d0 = 0x32;
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V1::StaticClass();
  local_148._12_4_ = uStack_2cc;
  local_148.Size = iStack_2d0;
  local_148.DataPtr = local_2d8;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_148,None);
  if (pUVar10 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UAsyncLoadingTests_ConvertFromType_V1>(nullptr, ObjectPath2) == nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2c8 = L"/Engine/TestConvertFromType_SoftToHard2";
  iStack_2c0 = 0x27;
  pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
  local_138._12_4_ = uStack_2bc;
  local_138.Size = iStack_2c0;
  local_138.DataPtr = local_2c8;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_138,None);
  if (pUVar10 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UPackage>(nullptr, PackagePath2) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V2::StaticClass();
  pUVar11 = UAsyncLoadingTests_ConvertFromType_V1::StaticClass();
  FClassRedirectScope::FClassRedirectScope(&local_3f8,pUVar11,pUVar9);
  local_3c8 = 0;
  local_res18 = 0;
  local_3e8 = (undefined1  [8])0x0;
  local_3e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e8,
             (FWriteAccessScope *)&local_1d8);
  local_1c0 = &local_3e0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_3e0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FConvertFromType_SoftToHard::RunTest'::`74'::<lambda_1>_>
                ::_vftable_;
    puVar12[3] = &local_3c8;
    puVar12[4] = &local_res18;
    puVar12[5] = &local_res20;
  }
  if (local_1d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
  }
  ::FString::FString(&local_2b8,L"/Engine/TestConvertFromType_SoftToHard1");
  iVar4 = LoadPackageAsync(&local_2b8,
                           (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                            *)local_3e8,0,PKG_None,-1);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  FlushAsyncLoading(iVar4);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"The object should have been properly loaded",
             local_res18 != 0);
  if (local_res18 != 0) {
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"The hard-ref should now point to the object inside the second package",
               *(longlong *)(local_res18 + 0x28) != 0);
    pFVar8 = UObjectBaseUtility::GetPathName
                       (*(UObjectBaseUtility **)(local_res18 + 0x28),&local_128,(UObject *)0x0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      (pwVar15,L"/Engine/TestConvertFromType_SoftToHard2.TestObject");
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"The hard-ref should now point to the object inside the second package",iVar4 == 0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_298,L"Tests");
  iStack_2a0 = local_3f8.Redirects.ArrayNum;
  local_2a8 = (FCoreRedirect *)local_3f8.Redirects.AllocatorInstance.Data;
  if (local_3f8.Redirects.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_118.DataPtr = local_2a8;
  bVar2 = FCoreRedirects::RemoveRedirectList(&local_118,&local_298);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCoreRedirects::RemoveRedirectList(Redirects, L\"Tests\")",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  DestructItems<FCoreRedirect,int>
            ((FCoreRedirect *)local_3f8.Redirects.AllocatorInstance.Data,
             local_3f8.Redirects.ArrayNum);
  if ((FCoreRedirect *)local_3f8.Redirects.AllocatorInstance.Data != (FCoreRedirect *)0x0) {
    FMemory::Free(local_3f8.Redirects.AllocatorInstance.Data);
  }
  local_288 = L"/Engine/TestConvertFromType_SoftToHard1.TestObject";
  iStack_280 = 0x32;
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V2::StaticClass();
  local_108._12_4_ = uStack_27c;
  local_108.Size = iStack_280;
  local_108.DataPtr = local_288;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_108,None);
  if (pUVar10 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UAsyncLoadingTests_ConvertFromType_V2>(nullptr, ObjectPath1) != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_278 = L"/Engine/TestConvertFromType_SoftToHard1";
  iStack_270 = 0x27;
  pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
  local_98._12_4_ = uStack_26c;
  local_98.Size = iStack_270;
  local_98.DataPtr = local_278;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_98,None);
  if (pUVar10 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UPackage>(nullptr, PackagePath1) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x6e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_268 = L"/Engine/TestConvertFromType_SoftToHard2.TestObject";
  iStack_260 = 0x32;
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V2::StaticClass();
  local_e8._12_4_ = uStack_25c;
  local_e8.Size = iStack_260;
  local_e8.DataPtr = local_268;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_e8,None);
  if (pUVar10 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UAsyncLoadingTests_ConvertFromType_V2>(nullptr, ObjectPath2) != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_258 = L"/Engine/TestConvertFromType_SoftToHard2";
  iStack_250 = 0x27;
  pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
  local_d8._12_4_ = uStack_24c;
  local_d8.Size = iStack_250;
  local_d8.DataPtr = local_258;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_d8,None);
  if (pUVar10 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UPackage>(nullptr, PackagePath2) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x70,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_248 = L"/Engine/TestConvertFromType_SoftToHard1.TestObject";
  iStack_240 = 0x32;
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V2::StaticClass();
  local_c8._12_4_ = uStack_23c;
  local_c8.Size = iStack_240;
  local_c8.DataPtr = local_248;
  pUVar14 = (UObjectBase *)StaticFindObject(pUVar9,(UObject *)0x0,&local_c8,None);
  UObjectBase::AtomicallyClearFlags(pUVar14,RF_Standalone);
  local_238 = L"/Engine/TestConvertFromType_SoftToHard2.TestObject";
  iStack_230 = 0x32;
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V2::StaticClass();
  local_b8._12_4_ = uStack_22c;
  local_b8.Size = iStack_230;
  local_b8.DataPtr = local_238;
  pUVar14 = (UObjectBase *)StaticFindObject(pUVar9,(UObject *)0x0,&local_b8,None);
  UObjectBase::AtomicallyClearFlags(pUVar14,RF_Standalone);
  CollectGarbage(RF_NoFlags,true);
  local_228 = L"/Engine/TestConvertFromType_SoftToHard1.TestObject";
  iStack_220 = 0x32;
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V2::StaticClass();
  local_a8._12_4_ = uStack_21c;
  local_a8.Size = iStack_220;
  local_a8.DataPtr = local_228;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_a8,None);
  if (pUVar10 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UAsyncLoadingTests_ConvertFromType_V2>(nullptr, ObjectPath1) == nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x78,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_218 = L"/Engine/TestConvertFromType_SoftToHard1";
  iStack_210 = 0x27;
  pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
  local_48._12_4_ = uStack_20c;
  local_48.Size = iStack_210;
  local_48.DataPtr = local_218;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_48,None);
  if (pUVar10 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UPackage>(nullptr, PackagePath1) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_208 = L"/Engine/TestConvertFromType_SoftToHard2.TestObject";
  iStack_200 = 0x32;
  pUVar9 = UAsyncLoadingTests_ConvertFromType_V2::StaticClass();
  local_88._12_4_ = uStack_1fc;
  local_88.Size = iStack_200;
  local_88.DataPtr = local_208;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_88,None);
  if (pUVar10 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UAsyncLoadingTests_ConvertFromType_V2>(nullptr, ObjectPath2) == nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x7a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_1f8 = L"/Engine/TestConvertFromType_SoftToHard2";
  iStack_1f0 = 0x27;
  pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
  local_78._12_4_ = uStack_1ec;
  local_78.Size = iStack_1f0;
  local_78.DataPtr = local_1f8;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_78,None);
  if (pUVar10 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindObject<UPackage>(nullptr, PackagePath2) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x7b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// GetBeautifiedTestName @ 14886f120

FString * __thiscall
FConvertFromType_SoftToHard::GetBeautifiedTestName
          (FConvertFromType_SoftToHard *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.ConvertFromType_SoftToHard");
  return __return_storage_ptr__;
}

