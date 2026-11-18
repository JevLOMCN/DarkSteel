// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fabf90

EAutomationTestFlags __thiscall
FPCGFilterElementsByIndexTest_Basic::GetTestFlags(FPCGFilterElementsByIndexTest_Basic *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fabfa0

bool __thiscall
FPCGFilterElementsByIndexTest_Basic::IsStressTest(FPCGFilterElementsByIndexTest_Basic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fabfb0

uint __thiscall
FPCGFilterElementsByIndexTest_Basic::GetRequiredDeviceNum(FPCGFilterElementsByIndexTest_Basic *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fabfc0

FString * __thiscall
FPCGFilterElementsByIndexTest_Basic::GetTestSourceFileName
          (FPCGFilterElementsByIndexTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGFilterByIndexTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fabff0

int __thiscall
FPCGFilterElementsByIndexTest_Basic::GetTestSourceFileLine
          (FPCGFilterElementsByIndexTest_Basic *this)

{
  return 0x15a;
}

// GetTests @ 149fac020

/* WARNING: Removing unreachable block (ram,0x000149fac10d) */
/* WARNING: Removing unreachable block (ram,0x000149fac1d8) */

void __thiscall
FPCGFilterElementsByIndexTest_Basic::GetTests
          (FPCGFilterElementsByIndexTest_Basic *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.FilterElementsByIndex.Basic");
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

// RunTest @ 149fac240

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
FPCGFilterElementsByIndexTest_Basic::RunTest
          (FPCGFilterElementsByIndexTest_Basic *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UPCGFilterElementsByIndexSettings *pUVar4;
  FString *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_318 [32];
  int local_2e8 [4];
  initializer_list<int> local_2d8;
  initializer_list<int> local_2c8;
  int local_2b8 [4];
  FTestData local_2a8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_218;
  undefined1 local_1e8 [12];
  int iStack_1dc;
  undefined1 *local_1d8;
  undefined8 uStack_1d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1c8;
  undefined1 local_178 [24];
  undefined8 uStack_160;
  void *local_158;
  int local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  void *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  TObjectPtr<UPCGData_const_>_u_0 local_128 [2];
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_118;
  void *local_d8;
  undefined4 local_d0;
  TObjectPtr<UPCGData_const_>_u_0 local_b0 [2];
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  void *local_60;
  undefined4 local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_1e8._0_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1e8._0_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1e8._0_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_2a8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)local_1e8);
  local_218._0_8_ = 0;
  local_218._40_8_ = 0;
  pUVar4 = PCGTestsCommon::GenerateSettings<UPCGFilterElementsByIndexSettings>
                     (&local_2a8,&local_218);
  pUVar4->bSelectIndicesByInput = false;
  local_2b8[0] = 10;
  pFVar5 = ::FString::FString((FString *)&local_2c8,L"Empty expression in parsed string");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar5,Contains,1,true);
  pFVar5 = &pUVar4->SelectedIndices;
  ::FString::Empty(pFVar5);
  local_2d8._Last = local_2e8;
  local_1e8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
       ::Call;
  local_2d8._First =
       (int *)UE::Core::Private::Function::
              TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l3::<lambda_2>,UPCGData_*>
              ::Call;
  unique0x00009c00 = local_2b8;
  PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
            ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,&local_2a8,pUVar4,
             (TFunctionRef<UPCGData_*___cdecl(void)> *)local_1e8,
             (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8);
  local_178._16_8_ = 0;
  uStack_160 = 0;
  local_140 = 0;
  local_12c = 0;
  local_178._0_8_ = (FScriptContainerElement *)0x0;
  local_178._12_4_ = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (void *)0x0;
  if (local_128[0].DebugPtr == (UPCGData *)0x0) {
    bVar2 = true;
  }
  else {
    iVar3 = PCGHelpers::GetNumberOfElements(local_128[0].DebugPtr);
    bVar2 = iVar3 == 0;
  }
  ::FString::FString((FString *)local_1e8,"Output inside filter is valid");
  pwVar8 = L"";
  pwVar7 = L"";
  if (local_1e8._8_4_ != 0) {
    pwVar7 = (wchar_t *)local_1e8._0_8_;
  }
  bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
  if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._0_8_);
  }
  local_130 = 0;
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  iVar3 = SUB84(local_178._8_8_,4);
  local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
  }
  local_148 = 0xffffffff;
  local_144 = 0;
  local_150 = 0;
  if (0x80 < local_14c) {
    local_14c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),0);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if (bVar2) {
    local_2d8._First = (int *)local_178;
    local_2d8._Last = &local_150;
    local_178._0_8_ = __xmm_00000003000000020000000100000000;
    local_178._8_8_ = _UNK_150631e08;
    local_158 = (void *)0x900000008;
    local_178._16_8_ = ___xmm_00000007000000060000000500000004;
    uStack_160 = _UNK_150631eb8;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2d8);
    bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                      ((FPCGTaggedData *)&local_b0[0].ObjectPtr,10,&local_1c8);
    ::FString::FString((FString *)local_1e8,"Output outside filter is valid");
    pwVar7 = L"";
    if (local_1e8._8_4_ != 0) {
      pwVar7 = (wchar_t *)local_1e8._0_8_;
    }
    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
    if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1e8._0_8_);
    }
    local_1c8.HashSize = 0;
    if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1c8.Elements);
    if (!bVar2) goto LAB_149fad5ac;
    local_58 = 0;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a0);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_b0[0].ObjectPtr);
    local_d0 = 0;
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_128[0].ObjectPtr);
    pFVar6 = ::FString::FString((FString *)&local_2c8,":");
    if (pFVar5 != pFVar6) {
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar5->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pUVar4->SelectedIndices).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (pUVar4->SelectedIndices).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_2c8._First != (int *)0x0) {
      FMemory::Free(local_2c8._First);
    }
    local_2d8._Last = local_2e8;
    local_1e8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
         ::Call;
    local_2d8._First =
         (int *)UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l10::<lambda_3>,UPCGData_*>
                ::Call;
    unique0x00009c00 = local_2b8;
    PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
              ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,&local_2a8,pUVar4,
               (TFunctionRef<UPCGData_*___cdecl(void)> *)local_1e8,
               (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8);
    local_2d8._First = (int *)local_178;
    local_2d8._Last = &local_150;
    local_178._0_8_ = __xmm_00000003000000020000000100000000;
    local_178._8_8_ = _UNK_150631e08;
    local_158 = (void *)0x900000008;
    local_178._16_8_ = ___xmm_00000007000000060000000500000004;
    uStack_160 = _UNK_150631eb8;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2d8);
    bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                      ((FPCGTaggedData *)&local_128[0].ObjectPtr,10,&local_1c8);
    ::FString::FString((FString *)local_1e8,"Output inside filter is valid");
    pwVar7 = L"";
    if (local_1e8._8_4_ != 0) {
      pwVar7 = (wchar_t *)local_1e8._0_8_;
    }
    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
    if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1e8._0_8_);
    }
    local_1c8.HashSize = 0;
    if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1c8.Elements);
    if (!bVar2) goto LAB_149fad5ac;
    local_178._16_8_ = 0;
    uStack_160 = 0;
    local_140 = 0;
    local_12c = 0;
    local_178._0_8_ = (FScriptContainerElement *)0x0;
    local_178._8_8_ = 0;
    local_158 = (void *)0x0;
    local_150 = 0;
    local_14c = 0x80;
    local_148 = 0xffffffff;
    local_144 = 0;
    local_138 = (void *)0x0;
    if (local_b0[0].DebugPtr == (UPCGData *)0x0) {
      bVar2 = true;
    }
    else {
      iVar3 = PCGHelpers::GetNumberOfElements(local_b0[0].DebugPtr);
      bVar2 = iVar3 == 0;
    }
    ::FString::FString((FString *)local_1e8,"Output outside filter is valid");
    pwVar7 = L"";
    if (local_1e8._8_4_ != 0) {
      pwVar7 = (wchar_t *)local_1e8._0_8_;
    }
    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
    if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1e8._0_8_);
    }
    local_130 = 0;
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_178);
    if (!bVar2) goto LAB_149fad5ac;
    PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData
              ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
    pFVar6 = ::FString::FString((FString *)&local_2c8,"0,2,4");
    ::FString::operator=(pFVar5,pFVar6);
    if (local_2c8._First != (int *)0x0) {
      FMemory::Free(local_2c8._First);
    }
    local_2d8._Last = local_2e8;
    local_1e8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
         ::Call;
    local_2d8._First =
         (int *)UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l17::<lambda_4>,UPCGData_*>
                ::Call;
    unique0x00009c00 = local_2b8;
    PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
              ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,&local_2a8,pUVar4,
               (TFunctionRef<UPCGData_*___cdecl(void)> *)local_1e8,
               (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8);
    local_2c8._First = (int *)local_1e8;
    local_2c8._Last = &iStack_1dc;
    local_1e8._0_8_ = &DAT_200000000;
    stack0xfffffffffffffe20 = (int *)CONCAT44(iStack_1dc,4);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
    bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                      ((FPCGTaggedData *)&local_128[0].ObjectPtr,3,&local_1c8);
    ::FString::FString((FString *)&local_2d8,"Output inside filter is valid");
    pwVar7 = L"";
    if ((int)local_2d8._Last != 0) {
      pwVar7 = (wchar_t *)local_2d8._First;
    }
    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
    if ((code *)local_2d8._First != (code *)0x0) {
      FMemory::Free(local_2d8._First);
    }
    local_1c8.HashSize = 0;
    if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1c8.Elements);
    if (bVar2) {
      local_2c8._First = (int *)local_1e8;
      local_2c8._Last = (int *)((longlong)&uStack_1d0 + 4);
      local_1e8._0_8_ = ___xmm_00000006000000050000000300000001;
      stack0xfffffffffffffe20 = _UNK_15202fda8;
      local_1d8 = (undefined1 *)0x800000007;
      uStack_1d0._0_4_ = 9;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
      bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                        ((FPCGTaggedData *)&local_b0[0].ObjectPtr,7,&local_1c8);
      ::FString::FString((FString *)&local_2d8,"Output outside filter is valid");
      pwVar7 = L"";
      if ((int)local_2d8._Last != 0) {
        pwVar7 = (wchar_t *)local_2d8._First;
      }
      bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
      if ((code *)local_2d8._First != (code *)0x0) {
        FMemory::Free(local_2d8._First);
      }
      local_1c8.HashSize = 0;
      if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1c8.Elements);
      if (bVar2) {
        PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData
                  ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
        pFVar6 = ::FString::FString((FString *)&local_2c8,"-2");
        ::FString::operator=(pFVar5,pFVar6);
        if (local_2c8._First != (int *)0x0) {
          FMemory::Free(local_2c8._First);
        }
        local_2c8._Last = local_2e8;
        local_2d8._First =
             (int *)UE::Core::Private::Function::
                    TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
                    ::Call;
        local_2c8._First =
             (int *)UE::Core::Private::Function::
                    TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l24::<lambda_5>,UPCGData_*>
                    ::Call;
        local_2d8._Last = local_2b8;
        PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
                  ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,&local_2a8,pUVar4,
                   (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8,
                   (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2c8);
        local_2c8._First = (int *)local_1e8;
        local_1e8._0_4_ = 8;
        local_2c8._Last = (int *)(local_1e8 + 4);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
        bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                          ((FPCGTaggedData *)&local_128[0].ObjectPtr,1,&local_1c8);
        ::FString::FString((FString *)&local_2d8,"Output inside filter is valid");
        pwVar7 = L"";
        if ((int)local_2d8._Last != 0) {
          pwVar7 = (wchar_t *)local_2d8._First;
        }
        bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
        if ((code *)local_2d8._First != (code *)0x0) {
          FMemory::Free(local_2d8._First);
        }
        local_1c8.HashSize = 0;
        if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1c8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1c8.Elements);
        if (bVar2) {
          local_2c8._First = (int *)local_1e8;
          local_2c8._Last = (int *)&local_1c8;
          local_1e8._0_8_ = ___xmm_00000004000000030000000200000001;
          stack0xfffffffffffffe20 = _UNK_150631e38;
          local_1d8 = ___xmm_00000009000000070000000600000005;
          uStack_1d0 = _UNK_15202fdb8;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
          bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                            ((FPCGTaggedData *)&local_b0[0].ObjectPtr,9,&local_1c8);
          ::FString::FString((FString *)&local_2d8,"Output outside filter is valid");
          pwVar7 = L"";
          if ((int)local_2d8._Last != 0) {
            pwVar7 = (wchar_t *)local_2d8._First;
          }
          bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
          if ((code *)local_2d8._First != (code *)0x0) {
            FMemory::Free(local_2d8._First);
          }
          local_1c8.HashSize = 0;
          if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_1c8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1c8.Elements);
          if (bVar2) {
            PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData
                      ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
            pFVar6 = ::FString::FString((FString *)&local_2c8,"1:3");
            ::FString::operator=(pFVar5,pFVar6);
            if (local_2c8._First != (int *)0x0) {
              FMemory::Free(local_2c8._First);
            }
            local_2c8._Last = local_2e8;
            local_2d8._First =
                 (int *)UE::Core::Private::Function::
                        TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
                        ::Call;
            local_2c8._First =
                 (int *)UE::Core::Private::Function::
                        TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l31::<lambda_6>,UPCGData_*>
                        ::Call;
            local_2d8._Last = local_2b8;
            PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
                      ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,&local_2a8,pUVar4,
                       (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8,
                       (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2c8);
            local_2c8._First = (int *)local_1e8;
            local_2c8._Last = (int *)(local_1e8 + 8);
            local_1e8._0_8_ = &DAT_200000001;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
            bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                              ((FPCGTaggedData *)&local_128[0].ObjectPtr,2,&local_1c8);
            ::FString::FString((FString *)&local_2d8,"Output inside filter is valid");
            pwVar7 = L"";
            if ((int)local_2d8._Last != 0) {
              pwVar7 = (wchar_t *)local_2d8._First;
            }
            bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
            if ((code *)local_2d8._First != (code *)0x0) {
              FMemory::Free(local_2d8._First);
            }
            local_1c8.HashSize = 0;
            if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1c8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_1c8.Elements);
            if (bVar2) {
              local_2c8._First = (int *)local_1e8;
              local_2c8._Last = (int *)&local_1c8;
              local_1e8._0_8_ = ___xmm_00000005000000040000000300000000;
              stack0xfffffffffffffe20 = _UNK_15202fd78;
              local_1d8 = ___xmm_00000009000000080000000700000006;
              uStack_1d0 = _UNK_15071d308;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
              bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                ((FPCGTaggedData *)&local_b0[0].ObjectPtr,8,&local_1c8);
              ::FString::FString((FString *)&local_2d8,"Output outside filter is valid");
              pwVar7 = L"";
              if ((int)local_2d8._Last != 0) {
                pwVar7 = (wchar_t *)local_2d8._First;
              }
              bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
              if ((code *)local_2d8._First != (code *)0x0) {
                FMemory::Free(local_2d8._First);
              }
              local_1c8.HashSize = 0;
              if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_1c8.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_1c8.Elements);
              if (bVar2) {
                PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData
                          ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
                pFVar6 = ::FString::FString((FString *)&local_2c8,"2:2");
                ::FString::operator=(pFVar5,pFVar6);
                if (local_2c8._First != (int *)0x0) {
                  FMemory::Free(local_2c8._First);
                }
                local_2c8._Last = local_2e8;
                local_2d8._First =
                     (int *)UE::Core::Private::Function::
                            TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
                            ::Call;
                local_2c8._First =
                     (int *)UE::Core::Private::Function::
                            TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l38::<lambda_7>,UPCGData_*>
                            ::Call;
                local_2d8._Last = local_2b8;
                PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
                          ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,&local_2a8,pUVar4,
                           (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8,
                           (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2c8);
                local_2c8._First = (int *)local_1e8;
                local_1e8._0_4_ = 2;
                local_2c8._Last = (int *)(local_1e8 + 4);
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
                bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                  ((FPCGTaggedData *)&local_128[0].ObjectPtr,1,&local_1c8);
                ::FString::FString((FString *)&local_2d8,"Output inside filter is valid");
                pwVar7 = L"";
                if ((int)local_2d8._Last != 0) {
                  pwVar7 = (wchar_t *)local_2d8._First;
                }
                bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
                if ((code *)local_2d8._First != (code *)0x0) {
                  FMemory::Free(local_2d8._First);
                }
                local_1c8.HashSize = 0;
                if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_1c8.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_1c8.Elements);
                if (bVar2) {
                  local_2c8._First = (int *)local_1e8;
                  local_2c8._Last = (int *)&local_1c8;
                  local_1e8._0_8_ = ___xmm_00000005000000040000000300000001;
                  stack0xfffffffffffffe20 = _UNK_15202fd88;
                  local_1d8 = ___xmm_00000009000000080000000700000006;
                  uStack_1d0 = _UNK_15071d308;
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
                  bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                    ((FPCGTaggedData *)&local_b0[0].ObjectPtr,9,&local_1c8);
                  ::FString::FString((FString *)&local_2d8,"Output outside filter is valid");
                  pwVar7 = L"";
                  if ((int)local_2d8._Last != 0) {
                    pwVar7 = (wchar_t *)local_2d8._First;
                  }
                  bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
                  if ((code *)local_2d8._First != (code *)0x0) {
                    FMemory::Free(local_2d8._First);
                  }
                  local_1c8.HashSize = 0;
                  if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_1c8.Hash.SecondaryData);
                  }
                  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            (&local_1c8.Elements);
                  if (bVar2) {
                    PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData
                              ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
                    pFVar6 = ::FString::FString((FString *)&local_2c8,"-3:-1");
                    ::FString::operator=(pFVar5,pFVar6);
                    if (local_2c8._First != (int *)0x0) {
                      FMemory::Free(local_2c8._First);
                    }
                    local_2c8._Last = local_2e8;
                    local_2d8._First =
                         (int *)UE::Core::Private::Function::
                                TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
                                ::Call;
                    local_2c8._First =
                         (int *)UE::Core::Private::Function::
                                TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l45::<lambda_8>,UPCGData_*>
                                ::Call;
                    local_2d8._Last = local_2b8;
                    PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
                              ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,&local_2a8,pUVar4
                               ,(TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8,
                               (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2c8);
                    local_2c8._First = (int *)local_1e8;
                    local_2c8._Last = (int *)(local_1e8 + 8);
                    local_1e8._0_8_ = (FScriptContainerElement *)0x800000007;
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
                    bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                      ((FPCGTaggedData *)&local_128[0].ObjectPtr,2,&local_1c8);
                    ::FString::FString((FString *)&local_2d8,"Output inside filter is valid");
                    pwVar7 = L"";
                    if ((int)local_2d8._Last != 0) {
                      pwVar7 = (wchar_t *)local_2d8._First;
                    }
                    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,bVar2);
                    if ((code *)local_2d8._First != (code *)0x0) {
                      FMemory::Free(local_2d8._First);
                    }
                    local_1c8.HashSize = 0;
                    if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FMemory::Free((void *)local_1c8.Hash.SecondaryData);
                    }
                    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              (&local_1c8.Elements);
                    if (bVar2) {
                      local_2c8._First = (int *)local_1e8;
                      local_2c8._Last = (int *)((longlong)&uStack_1d0 + 4);
                      local_1e8._0_8_ = ___xmm_00000004000000030000000200000001;
                      stack0xfffffffffffffe20 = _UNK_150631e38;
                      local_1d8 = &DAT_600000005;
                      uStack_1d0._0_4_ = 9;
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8);
                      bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                        ((FPCGTaggedData *)&local_b0[0].ObjectPtr,8,&local_1c8);
                      ::FString::FString((FString *)&local_2d8,"Output outside filter is valid");
                      pwVar7 = L"";
                      if ((int)local_2d8._Last != 0) {
                        pwVar7 = (wchar_t *)local_2d8._First;
                      }
                      bVar2 = FAutomationTestBase::TestTrue
                                        ((FAutomationTestBase *)this,pwVar7,bVar2);
                      if ((code *)local_2d8._First != (code *)0x0) {
                        FMemory::Free(local_2d8._First);
                      }
                      local_1c8.HashSize = 0;
                      if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FMemory::Free((void *)local_1c8.Hash.SecondaryData);
                      }
                      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::
                      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                (&local_1c8.Elements);
                      if (bVar2) {
                        PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData
                                  ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
                        pFVar6 = ::FString::FString((FString *)&local_2c8,"0,2:3,4");
                        ::FString::operator=(pFVar5,pFVar6);
                        if (local_2c8._First != (int *)0x0) {
                          FMemory::Free(local_2c8._First);
                        }
                        local_2c8._Last = local_2e8;
                        local_2d8._First =
                             (int *)UE::Core::Private::Function::
                                    TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
                                    ::Call;
                        local_2c8._First =
                             (int *)UE::Core::Private::Function::
                                    TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l52::<lambda_9>,UPCGData_*>
                                    ::Call;
                        local_2d8._Last = local_2b8;
                        PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
                                  ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,&local_2a8,
                                   pUVar4,(TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8,
                                   (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2c8);
                        local_2c8._First = (int *)local_1e8;
                        local_2c8._Last = &iStack_1dc;
                        local_1e8._0_8_ = &DAT_200000000;
                        stack0xfffffffffffffe20 = (int *)CONCAT44(iStack_1dc,4);
                        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_1c8,&local_2c8)
                        ;
                        bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                          ((FPCGTaggedData *)&local_128[0].ObjectPtr,3,&local_1c8);
                        ::FString::FString((FString *)&local_2d8,"Output inside filter is valid");
                        pwVar7 = L"";
                        if ((int)local_2d8._Last != 0) {
                          pwVar7 = (wchar_t *)local_2d8._First;
                        }
                        bVar2 = FAutomationTestBase::TestTrue
                                          ((FAutomationTestBase *)this,pwVar7,bVar2);
                        if ((code *)local_2d8._First != (code *)0x0) {
                          FMemory::Free(local_2d8._First);
                        }
                        local_1c8.HashSize = 0;
                        if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                          FMemory::Free((void *)local_1c8.Hash.SecondaryData);
                        }
                        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::
                        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  (&local_1c8.Elements);
                        if (bVar2) {
                          local_2c8._First = (int *)local_1e8;
                          local_2c8._Last = (int *)((longlong)&uStack_1d0 + 4);
                          local_1e8._0_8_ = ___xmm_00000006000000050000000300000001;
                          stack0xfffffffffffffe20 = _UNK_15202fda8;
                          local_1d8 = (undefined1 *)0x800000007;
                          uStack_1d0._0_4_ = 9;
                          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
                                    (&local_1c8,&local_2c8);
                          bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                            ((FPCGTaggedData *)&local_b0[0].ObjectPtr,7,&local_1c8);
                          ::FString::FString((FString *)&local_2d8,"Output outside filter is valid")
                          ;
                          pwVar7 = L"";
                          if ((int)local_2d8._Last != 0) {
                            pwVar7 = (wchar_t *)local_2d8._First;
                          }
                          bVar2 = FAutomationTestBase::TestTrue
                                            ((FAutomationTestBase *)this,pwVar7,bVar2);
                          if ((code *)local_2d8._First != (code *)0x0) {
                            FMemory::Free(local_2d8._First);
                          }
                          local_1c8.HashSize = 0;
                          if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                            FMemory::Free((void *)local_1c8.Hash.SecondaryData);
                          }
                          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ::
                          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    (&local_1c8.Elements);
                          if (bVar2) {
                            PCGFilterByIndexTest::FInsideOutsideFilterData::
                            ~FInsideOutsideFilterData
                                      ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
                            pUVar4->bInvertFilter = true;
                            pFVar6 = ::FString::FString((FString *)&local_2c8,"0,2:3,4");
                            ::FString::operator=(pFVar5,pFVar6);
                            if (local_2c8._First != (int *)0x0) {
                              FMemory::Free(local_2c8._First);
                            }
                            local_2c8._Last = local_2e8;
                            local_2d8._First =
                                 (int *)UE::Core::Private::Function::
                                        TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l2::<lambda_1>,UPCGData_*>
                                        ::Call;
                            local_2c8._First =
                                 (int *)UE::Core::Private::Function::
                                        TFunctionRefCaller<`FPCGFilterElementsByIndexTest_Basic::RunTest'::__l59::<lambda_10>,UPCGData_*>
                                        ::Call;
                            local_2d8._Last = local_2b8;
                            PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
                                      ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr,
                                       &local_2a8,pUVar4,
                                       (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2d8,
                                       (TFunctionRef<UPCGData_*___cdecl(void)> *)&local_2c8);
                            local_2c8._First = (int *)local_1e8;
                            local_2c8._Last = (int *)((longlong)&uStack_1d0 + 4);
                            local_1e8._0_8_ = ___xmm_00000006000000050000000300000001;
                            stack0xfffffffffffffe20 = _UNK_15202fda8;
                            local_1d8 = (undefined1 *)0x800000007;
                            uStack_1d0._0_4_ = 9;
                            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
                                      (&local_1c8,&local_2c8);
                            bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                              ((FPCGTaggedData *)&local_128[0].ObjectPtr,7,
                                               &local_1c8);
                            ::FString::FString((FString *)&local_2d8,"Output inside filter is valid"
                                              );
                            pwVar7 = L"";
                            if ((int)local_2d8._Last != 0) {
                              pwVar7 = (wchar_t *)local_2d8._First;
                            }
                            bVar2 = FAutomationTestBase::TestTrue
                                              ((FAutomationTestBase *)this,pwVar7,bVar2);
                            if ((code *)local_2d8._First != (code *)0x0) {
                              FMemory::Free(local_2d8._First);
                            }
                            local_1c8.HashSize = 0;
                            if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
                            {
                              FMemory::Free((void *)local_1c8.Hash.SecondaryData);
                            }
                            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ::
                            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                      (&local_1c8.Elements);
                            if (bVar2) {
                              local_2c8._First = (int *)local_1e8;
                              local_2c8._Last = &iStack_1dc;
                              local_1e8._0_8_ = &DAT_200000000;
                              stack0xfffffffffffffe20 = (int *)CONCAT44(iStack_1dc,4);
                              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
                                        (&local_1c8,&local_2c8);
                              bVar2 = PCGFilterByIndexTest::Helpers::ValidateOutputElement
                                                ((FPCGTaggedData *)&local_b0[0].ObjectPtr,3,
                                                 &local_1c8);
                              ::FString::FString((FString *)&local_2d8,
                                                 "Output outside filter is valid");
                              if ((int)local_2d8._Last != 0) {
                                pwVar8 = (wchar_t *)local_2d8._First;
                              }
                              bVar2 = FAutomationTestBase::TestTrue
                                                ((FAutomationTestBase *)this,pwVar8,bVar2);
                              if ((code *)local_2d8._First != (code *)0x0) {
                                FMemory::Free(local_2d8._First);
                              }
                              local_1c8.HashSize = 0;
                              if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
                                 ) {
                                FMemory::Free((void *)local_1c8.Hash.SecondaryData);
                              }
                              TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              ::
                              ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                        (&local_1c8.Elements);
                              if (bVar2) {
                                PCGFilterByIndexTest::FInsideOutsideFilterData::
                                ~FInsideOutsideFilterData
                                          ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
                                bVar2 = true;
                                goto LAB_149fad60e;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData
              ((FInsideOutsideFilterData *)&local_128[0].ObjectPtr);
  }
  else {
LAB_149fad5ac:
    local_58 = 0;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a0);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_b0[0].ObjectPtr);
    local_d0 = 0;
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_128[0].ObjectPtr);
  }
  bVar2 = false;
LAB_149fad60e:
  PCGTestsCommon::FTestData::~FTestData(&local_2a8);
  return bVar2;
}

// GetBeautifiedTestName @ 149fad670

FString * __thiscall
FPCGFilterElementsByIndexTest_Basic::GetBeautifiedTestName
          (FPCGFilterElementsByIndexTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.FilterElementsByIndex.Basic");
  return __return_storage_ptr__;
}

