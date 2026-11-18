// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// GetTestFlags @ 149fbc200

EAutomationTestFlags __thiscall
FPCGFilterElementsByIndexTest_InputFilter::GetTestFlags
          (FPCGFilterElementsByIndexTest_InputFilter *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fbc240

bool __thiscall
FPCGFilterElementsByIndexTest_InputFilter::IsStressTest
          (FPCGFilterElementsByIndexTest_InputFilter *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fbc250

uint __thiscall
FPCGFilterElementsByIndexTest_InputFilter::GetRequiredDeviceNum
          (FPCGFilterElementsByIndexTest_InputFilter *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fbc260

FString * __thiscall
FPCGFilterElementsByIndexTest_InputFilter::GetTestSourceFileName
          (FPCGFilterElementsByIndexTest_InputFilter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGFilterByIndexTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fbc290

int __thiscall
FPCGFilterElementsByIndexTest_InputFilter::GetTestSourceFileLine
          (FPCGFilterElementsByIndexTest_InputFilter *this)

{
  return 0x1e3;
}

// GetTests @ 149fbc2a0

/* WARNING: Removing unreachable block (ram,0x000149fbc38d) */
/* WARNING: Removing unreachable block (ram,0x000149fbc458) */

void __thiscall
FPCGFilterElementsByIndexTest_InputFilter::GetTests
          (FPCGFilterElementsByIndexTest_InputFilter *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.FilterElementsByIndex.InputFilter");
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

// RunTest @ 149fbc480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGFilterElementsByIndexTest_InputFilter::RunTest
          (FPCGFilterElementsByIndexTest_InputFilter *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  UPCGFilterElementsByIndexSettings *pUVar11;
  ulonglong uVar12;
  TArrayView<int_const_,int> *pTVar13;
  byte bVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  TSparseSetElement<int> *pTVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  bool bVar28;
  undefined1 auStackY_668 [32];
  int local_628;
  int local_624;
  int local_620;
  uint uStack_61c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_618;
  undefined4 local_610;
  uint uStack_60c;
  int iStack_608;
  undefined4 uStack_604;
  uint local_600;
  uint uStack_5fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5f8;
  undefined4 local_5f0;
  uint uStack_5ec;
  uint uStack_5e8;
  undefined4 uStack_5e4;
  UClass *local_5e0;
  TArray<int,TSizedDefaultAllocator<32>_> **local_5d8;
  FName local_5d0;
  TArray<int,TSizedDefaultAllocator<32>_> **local_5c8;
  FString local_5c0;
  FString local_5b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_5a0;
  undefined4 local_598;
  FString local_590;
  FString local_580;
  longlong *local_570;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_568;
  longlong *local_548;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_540;
  initializer_list<int> local_518;
  initializer_list<int> local_508;
  code *local_4f8;
  TArray<int,TSizedDefaultAllocator<32>_> ***local_4f0;
  code *local_4e8;
  int *local_4e0;
  FSparseArrayAllocationInfo local_4d8;
  code *local_4c8;
  TArray<int,TSizedDefaultAllocator<32>_> ***local_4c0;
  code *local_4b8;
  int *local_4b0;
  TArrayView<int_const_,int> local_4a8;
  TArrayView<int_const_,int> local_498;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_488;
  FTestData local_458;
  undefined1 local_3c8 [32];
  ForElementType<unsigned_int> local_3a8;
  uint local_3a0;
  uint local_39c;
  int local_398;
  int local_394;
  FScriptContainerElement local_390 [8];
  ForAnyElementType local_388;
  uint local_380;
  int local_378;
  undefined4 local_374;
  undefined4 local_370;
  int local_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined1 local_358 [32];
  void *local_338;
  undefined4 local_330;
  uint local_32c;
  undefined4 local_328;
  undefined4 local_324;
  ForElementType<FSetElementId> local_318;
  int local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  FInsideOutsideFilterData local_2c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_188;
  FInsideOutsideFilterData local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_668;
  local_5e0 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_5e0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_5e0);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_458,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_5e0);
  local_488._0_8_ = 0;
  local_488._40_8_ = 0;
  pUVar11 = PCGTestsCommon::GenerateSettings<UPCGFilterElementsByIndexSettings>
                      (&local_458,&local_488);
  pvVar6 = ThreadLocalStoragePointer;
  uVar24 = (ulonglong)_tls_index;
  pUVar11->bSelectIndicesByInput = true;
  piVar22 = (int *)(*(longlong *)((longlong)pvVar6 + uVar24 * 8) + 0x9d4c);
  if ((*piVar22 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_368 = 0;
    uStack_364 = 3;
    local_360 = 5;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,3,0,&FilteredIndices.AllocatorInstance,3,&FilteredIndices.ArrayMax);
    FVar27 = FilteredIndices.AllocatorInstance;
    *(ulonglong *)FilteredIndices.AllocatorInstance.Data = CONCAT44(uStack_364,local_368);
    *(undefined4 *)(FVar27.Data + 8) = local_360;
    atexit(`FPCGFilterElementsByIndexTest_InputFilter::RunTest'::__l2::
           _dynamic_atexit_destructor_for__FilteredIndices__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar22 < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), uVar5 = _UNK_15202fd98,
     uVar4 = ___xmm_00000006000000040000000200000001, ::_TSS1 == -1)) {
    local_2f8 = 7;
    uStack_2f4 = 8;
    local_2f0 = 9;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,7,0,&UnfilteredIndices.AllocatorInstance,7,&UnfilteredIndices.ArrayMax);
    FVar27 = UnfilteredIndices.AllocatorInstance;
    local_308 = uVar4;
    uStack_300 = uVar5;
    *(undefined8 *)UnfilteredIndices.AllocatorInstance.Data = uVar4;
    *(undefined8 *)(FVar27.Data + 8) = uVar5;
    *(ulonglong *)(FVar27.Data + 0x10) = CONCAT44(uStack_2f4,local_2f8);
    *(undefined4 *)(FVar27.Data + 0x18) = local_2f0;
    atexit(`FPCGFilterElementsByIndexTest_InputFilter::RunTest'::__l2::
           _dynamic_atexit_destructor_for__UnfilteredIndices__);
    _Init_thread_footer(&::_TSS1);
  }
  local_624 = 10;
  local_5a0 = &FilteredIndices;
  local_598 = 3;
  FPCGAttributePropertySelector::SetExtraProperty
            ((FPCGAttributePropertySelector *)&pUVar11->IndexSelectionAttribute,Index,true);
  local_5d8 = &local_5a0;
  local_4c0 = &local_5d8;
  local_4b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InputFilter::RunTest'::__l2::<lambda_1>,UPCGData_*>
              ::Call;
  local_4c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InputFilter::RunTest'::__l3::<lambda_3>,UPCGData_*>
              ::Call;
  local_4b0 = &local_624;
  PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
            (&local_2c8,&local_458,pUVar11,(TFunctionRef<UPCGData_*___cdecl(void)> *)&local_4b8,
             (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_4c8);
  local_518._First = &local_378;
  local_378 = 0;
  local_518._Last = &local_36c;
  local_374 = 1;
  local_370 = 2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1d8,&local_518);
  bVar7 = PCGFilterByIndexTest::Helpers::ValidateOutputElement(&local_2c8.InsideData,3,&local_1d8);
  ::FString::FString(&local_5c0,"Output inside filter is valid");
  FVar27.Data = (FScriptContainerElement *)L"";
  if (local_5c0.Data.ArrayNum != 0) {
    FVar27.Data = local_5c0.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,bVar7);
  if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
  }
  local_1d8.HashSize = 0;
  if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1d8.Elements);
  if (bVar7) {
    local_508._First = (int *)&local_2e8;
    local_508._Last = &local_2cc;
    local_2d8 = 7;
    local_2e8 = ___xmm_00000006000000050000000400000003;
    uStack_2e0 = _UNK_1510c2288;
    local_2d4 = 8;
    local_2d0 = 9;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_188,&local_508);
    bVar7 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                      (&local_2c8.OutsideData,7,&local_188);
    ::FString::FString(&local_5b0,"Output outside filter is valid");
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_5b0.Data.ArrayNum != 0) {
      FVar27.Data = local_5b0.Data.AllocatorInstance.Data;
    }
    bVar7 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,bVar7);
    if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
    }
    local_188.HashSize = 0;
    if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_188.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188.Elements);
    if (!bVar7) goto LAB_149fbd1b7;
    local_2c8.OutsideData.Tags.HashSize = 0;
    if (local_2c8.OutsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8.OutsideData.Tags.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2c8.OutsideData.Tags.Elements);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_2c8.OutsideData.Data);
    local_2c8.InsideData.Tags.HashSize = 0;
    if (local_2c8.InsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8.InsideData.Tags.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2c8.InsideData.Tags.Elements);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_2c8);
    FLazyName::Resolve(&PCGFilterByIndexTest::Constants::FilterIndexName);
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&pUVar11->IndexSelectionAttribute,local_5d0,true);
    local_5c8 = &local_5a0;
    local_4e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InputFilter::RunTest'::__l2::<lambda_1>,UPCGData_*>
                ::Call;
    local_4f0 = &local_5c8;
    local_4f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InputFilter::RunTest'::__l10::<lambda_4>,UPCGData_*>
                ::Call;
    local_4e0 = &local_624;
    PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
              (&local_138,&local_458,pUVar11,(TFunctionRef<UPCGData_*___cdecl(void)> *)&local_4e8,
               (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_4f8);
    iVar9 = FilteredIndices.ArrayNum;
    FVar27 = FilteredIndices.AllocatorInstance;
    uVar24 = (ulonglong)FilteredIndices.ArrayNum;
    if ((FilteredIndices.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    uVar15 = 0;
    local_39c = 0x80;
    local_3c8._8_8_ = 0;
    local_3c8._0_8_ = (FScriptContainerElement *)0x0;
    local_3a8 = (ForElementType<unsigned_int>)0x0;
    local_3a0 = 0;
    local_398 = -1;
    local_394 = 0;
    local_388.Data = (FScriptContainerElement *)0x0;
    local_380 = 0;
    if (iVar9 != 0) {
      if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum(uVar24);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_3c8,iVar9);
      uVar20 = 1;
      if (3 < (uint)iVar9) {
        uVar25 = (ulonglong)(((uint)(uVar24 >> 1) & 0x7fffffff) + 7) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar20 = 1 << ((byte)lVar19 & 0x1f);
      }
      if ((local_380 == 0) || ((int)local_380 < (int)uVar20)) {
        local_380 = uVar20;
        if (local_388.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_388,0,0,4);
        }
        if (uVar20 != 0) {
          uVar17 = uVar20;
          if (uVar20 < 2) {
            if (local_388.Data != (FScriptContainerElement *)0x0) {
              uVar17 = 0;
              goto LAB_149fbc96d;
            }
          }
          else {
LAB_149fbc96d:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_388,0,uVar17,4);
          }
          if (0 < (int)uVar20) {
            uVar26 = (ulonglong)uVar20;
            uVar25 = uVar15;
            do {
              FVar16.Data = local_390;
              if (local_388.Data != (FScriptContainerElement *)0x0) {
                FVar16.Data = local_388.Data;
              }
              uVar12 = uVar25 & (longlong)(int)uVar20 - 1U;
              uVar25 = uVar25 + 1;
              *(undefined4 *)(FVar16.Data + uVar12 * 4) = 0xffffffff;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
        }
        if (local_380 != 0) {
          pTStack_5f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3c8 + 0x10);
          local_600 = 0;
          uStack_5fc = 1;
          uStack_5ec = 0;
          uStack_5e8 = 0;
          if (local_3a0 != 0) {
            FVar18 = (ForElementType<unsigned_int>)((longlong)local_3c8 + 0x10);
            if (local_3a8 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = local_3a8;
            }
            uVar20 = *(uint *)FVar18;
            uVar25 = uVar15;
            while (uVar20 == 0) {
              uStack_5e8 = (int)uVar25 + 0x20;
              uVar25 = (ulonglong)uStack_5e8;
              iVar9 = (int)uVar15;
              local_600 = iVar9 + 1;
              uVar15 = (ulonglong)local_600;
              if ((int)((local_3a0 - 1) + ((int)(local_3a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_600) goto LAB_149fbca8e;
              uVar20 = ((uint *)((longlong)FVar18 + 4))[iVar9];
            }
            uStack_5fc = -uVar20 & uVar20;
            uVar15 = (ulonglong)uStack_5fc * 2 + 1;
            lVar19 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uStack_5ec = (uStack_5e8 - 1) + (int)lVar19;
            uVar15 = (ulonglong)uStack_5ec;
            if ((int)local_3a0 < (int)uStack_5ec) {
LAB_149fbca8e:
              uVar15 = (ulonglong)local_3a0;
              uStack_5ec = local_3a0;
            }
          }
          local_5f0 = 0xffffffff;
          local_570 = (longlong *)local_3c8;
          local_568._padding_ = CONCAT44(uStack_5fc,local_600);
          local_568.CurrentBitIndex = uStack_5ec;
          local_568.UnvisitedBitMask = 0xffffffff;
          local_568._28_4_ = uStack_5e4;
          local_568.BaseBitIndex = uStack_5e8;
          local_568.Array = pTStack_5f8;
          if ((int)uVar15 < (int)local_3a0) {
            do {
              iVar9 = (int)uVar15;
              uVar20 = local_380 - 1 & *(uint *)(*local_570 + (longlong)iVar9 * 0xc);
              lVar19 = *local_570 + (longlong)iVar9 * 0xc;
              *(uint *)(lVar19 + 8) = uVar20;
              FVar16.Data = local_390;
              if (local_388.Data != (FScriptContainerElement *)0x0) {
                FVar16.Data = local_388.Data;
              }
              uVar15 = (longlong)(int)local_380 - 1U & (longlong)(int)uVar20;
              *(undefined4 *)(lVar19 + 4) = *(undefined4 *)(FVar16.Data + uVar15 * 4);
              *(int *)(FVar16.Data + uVar15 * 4) = iVar9;
              local_568.UnvisitedBitMask = local_568.UnvisitedBitMask & ~local_568._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_568);
              uVar15 = (ulonglong)(uint)local_568.CurrentBitIndex;
            } while (local_568.CurrentBitIndex < (local_568.Array)->NumBits);
          }
        }
      }
    }
    pFVar1 = FVar27.Data + uVar24 * 4;
    iVar9 = local_398;
    for (; local_398 = iVar9, FVar27.Data != pFVar1; FVar27.Data = FVar27.Data + 4) {
      pTVar23 = (TSparseSetElement<int> *)0x0;
      if (local_394 == 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)local_3c8,(int *)(local_3c8 + 8),
                           (int *)(local_3c8 + 0xc));
        iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_3c8 + 0x10),1);
        FVar18 = (ForElementType<unsigned_int>)((longlong)local_3c8 + 0x10);
        if (local_3a8 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_3a8;
        }
        bVar14 = (byte)iVar10 & 0x1f;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0x1f;
          bVar14 = bVar14 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar10 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar14 & 0x1f));
      }
      else {
        local_394 = local_394 + -1;
        local_398 = *(int *)(local_3c8._0_8_ + (longlong)iVar9 * 0xc + 4);
        if (local_394 != 0) {
          *(undefined4 *)(local_3c8._0_8_ + (longlong)local_398 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_3c8,&local_4d8,iVar9);
      if (local_4d8.Pointer != (TSparseSetElement<int> *)0x0) {
        *(undefined4 *)local_4d8.Pointer = *(undefined4 *)FVar27.Data;
        *(undefined4 *)((longlong)local_4d8.Pointer + 4) = 0xffffffff;
        pTVar23 = local_4d8.Pointer;
      }
      uVar20 = *(uint *)pTVar23;
      local_628 = local_4d8.Index;
      bVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_3c8,uVar20,
                         pTVar23,&local_628,(bool *)0x0);
      if (!bVar7) {
        uVar21 = 1;
        uVar17 = local_3c8._8_4_ - local_394;
        if (3 < uVar17) {
          uVar24 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar21 = 1 << ((byte)lVar19 & 0x1f);
        }
        if (((int)uVar17 < 1) || ((int)uVar21 <= (int)local_380)) {
          uVar20 = local_380 - 1 & uVar20;
          *(uint *)&pTVar23->field_0x8 = uVar20;
          FVar16.Data = local_390;
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_388.Data;
          }
          uVar24 = (longlong)(int)local_380 - 1U & (longlong)(int)uVar20;
          *(undefined4 *)&pTVar23->field_0x4 = *(undefined4 *)(FVar16.Data + uVar24 * 4);
          *(int *)(FVar16.Data + uVar24 * 4) = local_628;
        }
        else {
          local_380 = uVar21;
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_388,0,0,4);
          }
          if (uVar21 != 0) {
            uVar20 = uVar21;
            if (uVar21 < 2) {
              if (local_388.Data != (FScriptContainerElement *)0x0) {
                uVar20 = 0;
                goto LAB_149fbcd00;
              }
            }
            else {
LAB_149fbcd00:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_388,0,uVar20,4);
            }
            if (0 < (int)uVar21) {
              uVar15 = (ulonglong)uVar21;
              uVar24 = 0;
              do {
                FVar16.Data = local_390;
                if (local_388.Data != (FScriptContainerElement *)0x0) {
                  FVar16.Data = local_388.Data;
                }
                uVar25 = uVar24 & (longlong)(int)uVar21 - 1U;
                uVar24 = uVar24 + 1;
                *(undefined4 *)(FVar16.Data + uVar25 * 4) = 0xffffffff;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
          }
          if (local_380 != 0) {
            pTStack_618 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3c8 + 0x10);
            uStack_61c = 1;
            local_620 = 0;
            uStack_60c = 0;
            iStack_608 = 0;
            if (local_3a0 != 0) {
              FVar18 = (ForElementType<unsigned_int>)((longlong)local_3c8 + 0x10);
              if (local_3a8 != (ForElementType<unsigned_int>)0x0) {
                FVar18 = local_3a8;
              }
              uVar20 = *(uint *)FVar18;
              iStack_608 = 0;
              local_620 = 0;
              while (uVar20 == 0) {
                iStack_608 = iStack_608 + 0x20;
                lVar19 = (longlong)local_620;
                local_620 = local_620 + 1;
                if ((int)((local_3a0 - 1) + ((int)(local_3a0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_620
                   ) goto LAB_149fbce1e;
                uVar20 = ((uint *)((longlong)FVar18 + 4))[lVar19];
              }
              uStack_61c = -uVar20 & uVar20;
              uVar24 = (ulonglong)uStack_61c * 2 + 1;
              lVar19 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              uStack_60c = (int)lVar19 + -1 + iStack_608;
              if ((int)local_3a0 < (int)uStack_60c) {
LAB_149fbce1e:
                uStack_60c = local_3a0;
              }
            }
            local_610 = 0xffffffff;
            local_548 = (longlong *)local_3c8;
            local_540._padding_ = CONCAT44(uStack_61c,local_620);
            local_540.CurrentBitIndex = uStack_60c;
            local_540.UnvisitedBitMask = 0xffffffff;
            local_540._28_4_ = uStack_604;
            local_540.BaseBitIndex = iStack_608;
            local_540.Array = pTStack_618;
            uVar20 = uStack_60c;
            if ((int)uStack_60c < (int)local_3a0) {
              do {
                uVar17 = local_380 - 1 & *(uint *)(*local_548 + (longlong)(int)uVar20 * 0xc);
                lVar19 = *local_548 + (longlong)(int)uVar20 * 0xc;
                *(uint *)(lVar19 + 8) = uVar17;
                FVar16.Data = local_390;
                if (local_388.Data != (FScriptContainerElement *)0x0) {
                  FVar16.Data = local_388.Data;
                }
                uVar24 = (longlong)(int)local_380 - 1U & (longlong)(int)uVar17;
                *(undefined4 *)(lVar19 + 4) = *(undefined4 *)(FVar16.Data + uVar24 * 4);
                *(uint *)(FVar16.Data + uVar24 * 4) = uVar20;
                local_540.UnvisitedBitMask = local_540.UnvisitedBitMask & ~local_540._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_540);
                uVar20 = local_540.CurrentBitIndex;
              } while (local_540.CurrentBitIndex < (local_540.Array)->NumBits);
            }
          }
        }
      }
      iVar9 = local_398;
    }
    bVar7 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                      (&local_138.InsideData,3,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_3c8);
    ::FString::FString(&local_590,"Output inside filter is valid");
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_590.Data.ArrayNum != 0) {
      FVar27.Data = local_590.Data.AllocatorInstance.Data;
    }
    bVar7 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,bVar7);
    if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_590.Data.AllocatorInstance.Data);
    }
    local_380 = 0;
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
    bVar28 = local_3c8._12_4_ != 0;
    local_3c8._8_8_ = (ulonglong)(uint)local_3c8._12_4_ << 0x20;
    if (bVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_3c8,0,(int *)(local_3c8 + 0xc));
    }
    local_398 = -1;
    local_394 = 0;
    local_3a0 = 0;
    if (0x80 < local_39c) {
      local_39c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_3c8 + 0x10),0);
    }
    if (local_3a8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_3a8);
    }
    if ((FScriptContainerElement *)local_3c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3c8._0_8_);
    }
    if (bVar7) {
      pTVar13 = TArrayView<int_const_,int>::
                TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                          (&local_498,&UnfilteredIndices);
      local_4a8.DataPtr = pTVar13->DataPtr;
      local_4a8.ArrayNum = pTVar13->ArrayNum;
      local_4a8._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
      local_358._0_8_ = (FScriptContainerElement *)0x0;
      local_358._8_8_ = 0;
      local_338 = (void *)0x0;
      local_330 = 0;
      local_32c = 0x80;
      local_328 = 0xffffffff;
      local_324 = 0;
      local_318 = (ForElementType<FSetElementId>)0x0;
      local_310 = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_358,&local_4a8);
      bVar7 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                        (&local_138.OutsideData,7,
                         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_358);
      ::FString::FString(&local_580,"Output outside filter is valid");
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_580.Data.ArrayNum != 0) {
        FVar27.Data = local_580.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,bVar7);
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
      local_310 = 0;
      if (local_318 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_318);
      }
      bVar28 = local_358._12_4_ != 0;
      local_358._8_8_ = (ulonglong)(uint)local_358._12_4_ << 0x20;
      if (bVar28) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_358,0,(int *)(local_358 + 0xc));
      }
      local_328 = 0xffffffff;
      local_324 = 0;
      local_330 = 0;
      if (0x80 < local_32c) {
        local_32c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_358 + 0x10),0);
      }
      if (local_338 != (void *)0x0) {
        FMemory::Free(local_338);
      }
      if ((FScriptContainerElement *)local_358._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_358._0_8_);
      }
      if (bVar7) {
        PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData(&local_138);
        bVar7 = true;
        goto LAB_149fbd219;
      }
    }
    PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData(&local_138);
  }
  else {
LAB_149fbd1b7:
    local_2c8.OutsideData.Tags.HashSize = 0;
    if (local_2c8.OutsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8.OutsideData.Tags.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2c8.OutsideData.Tags.Elements);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_2c8.OutsideData.Data);
    local_2c8.InsideData.Tags.HashSize = 0;
    if (local_2c8.InsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8.InsideData.Tags.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2c8.InsideData.Tags.Elements);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_2c8);
  }
  bVar7 = false;
LAB_149fbd219:
  PCGTestsCommon::FTestData::~FTestData(&local_458);
  return bVar7;
}

// GetBeautifiedTestName @ 149fbd3d0

FString * __thiscall
FPCGFilterElementsByIndexTest_InputFilter::GetBeautifiedTestName
          (FPCGFilterElementsByIndexTest_InputFilter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.FilterElementsByIndex.InputFilter");
  return __return_storage_ptr__;
}

// operator() @ 149ff4530

UPCGBasePointData * __thiscall
`FPCGFilterElementsByIndexTest_InputFilter::RunTest'::__l2::<lambda_2>::operator()
          (void *this,FName param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  UPCGBasePointData *pUVar11;
  UPCGMetadata *this_00;
  FPCGMetadataAttribute<int> *this_01;
  long64 *plVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int local_res18 [2];
  uint local_res20;
  FPCGMetadataDomain *local_68;
  longlong local_58;
  int local_50;
  int local_4c;
  uint local_48;
  long64 local_40;
  
  pUVar11 = PCGTestsCommon::CreateRandomBasePointData(*(int *)((longlong)this + 8),0x2a,false);
  if ((pUVar11 == (UPCGBasePointData *)0x0) ||
     (this_00 = (UPCGMetadata *)(**(code **)(pUVar11->_padding_ + 0x328))(pUVar11),
     this_00 == (UPCGMetadata *)0x0)) {
    local_68 = (FPCGMetadataDomain *)0x0;
  }
  else {
    local_68 = UPCGMetadata::GetMetadataDomain(this_00,&PCGMetadataDomainID::Default);
    if (local_68 != (FPCGMetadataDomain *)0x0) goto LAB_149ff45c5;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("DomainMetadata",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGFilterByIndexTest.cpp"
                     ,0x1f6,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    pUVar11 = (UPCGBasePointData *)(*pcVar6)();
    return pUVar11;
  }
LAB_149ff45c5:
  iVar10 = *(int *)(*(longlong *)this + 8);
  iVar8 = (**(code **)(pUVar11->_padding_ + 0x488))(pUVar11);
  if ((iVar8 != iVar10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FilterPointData->GetNumPoints() == FilteredIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGFilterByIndexTest.cpp"
                         ,0x1f7,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar11 = (UPCGBasePointData *)(*pcVar6)();
    return pUVar11;
  }
  (**(code **)(pUVar11->_padding_ + 0x4f8))(pUVar11,&local_58,1);
  if ((local_48 != *(uint *)(*(longlong *)this + 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Range.Num() == FilteredIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGFilterByIndexTest.cpp"
                         ,0x1fa,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar11 = (UPCGBasePointData *)(*pcVar6)();
    return pUVar11;
  }
  local_res18[0] = -1;
  this_01 = FPCGMetadataDomain::CreateAttribute<int>(local_68,param_1,local_res18,true,true);
  uVar13 = 0;
  local_res20 = local_48;
  lVar14 = 0;
  while( true ) {
    if (uVar13 == local_res20) {
      return pUVar11;
    }
    if (uVar13 == (int)uVar13 % local_4c) {
      plVar12 = (long64 *)((longlong)local_50 * (longlong)((int)uVar13 % local_4c) + local_58);
    }
    else {
      plVar12 = &local_40;
    }
    FPCGMetadataDomain::InitializeOnSet
              (local_68,plVar12,-1,(FPCGMetadataDomain *)0x0,-1,(FPCGMetadataDomain *)0x0);
    plVar3 = *(longlong **)this;
    uVar9 = 0;
    if ((int)uVar13 < (int)plVar3[1]) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar11 = (UPCGBasePointData *)(*pcVar6)();
      return pUVar11;
    }
    uVar13 = uVar13 + 1;
    lVar4 = *plVar12;
    pFVar15 = (FScriptContainerElement *)(*plVar3 + lVar14);
    lVar14 = lVar14 + 4;
    if ((lVar4 == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemKey != PCGInvalidEntryKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x24b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar11 = (UPCGBasePointData *)(*pcVar6)();
      return pUVar11;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
    pTVar2 = &this_01->Values;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= pFVar15) && (pFVar15 < pFVar5 + (longlong)(this_01->Values).ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar10 = (this_01->Values).ArrayNum;
    piVar1 = &(this_01->Values).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    (this_01->Values).ArrayNum = iVar10 + 1;
    *(undefined4 *)(pFVar5 + (longlong)iVar10 * 4) = *(undefined4 *)pFVar15;
    iVar8 = this_01->ValueKeyOffset;
    ReleaseSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)this_01,lVar4,iVar8 + iVar10,false);
  }
  pcVar6 = (code *)swi(3);
  pUVar11 = (UPCGBasePointData *)(*pcVar6)();
  return pUVar11;
}

