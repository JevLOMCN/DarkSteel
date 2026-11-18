// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f85d20

EAutomationTestFlags __thiscall
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::GetTestFlags
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f85d30

bool __thiscall
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::IsStressTest
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f85d40

uint __thiscall
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::GetRequiredDeviceNum
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f85d50

FString * __thiscall
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::GetTestSourceFileName
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f85d80

int __thiscall
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::GetTestSourceFileLine
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this)

{
  return 0x1d;
}

// GetTests @ 149f85d90

/* WARNING: Removing unreachable block (ram,0x000149f85e7d) */
/* WARNING: Removing unreachable block (ram,0x000149f85f48) */

void __thiscall
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::GetTests
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeFilter.Params.NoGenerateEmptyOutput");
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

// RunTest @ 149f85f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::RunTest
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this,FString *param_1)

{
  FPCGContext *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UPCGAttributeFilteringSettings *pUVar12;
  longlong lVar13;
  FPCGTaggedData *pFVar14;
  UPCGParamData *pUVar15;
  TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> TVar16;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar17;
  ulonglong uVar18;
  int iVar19;
  FPCGTaggedData *pFVar20;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [8];
  undefined1 local_240 [56];
  int local_208;
  int local_204;
  TSharedPtr<IPCGElement,1> local_200;
  ForAnyElementType local_1f0;
  undefined1 local_1e8 [16];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1c8;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_1b8;
  int local_1b0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1a8;
  FTestData local_198;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_108;
  TObjectPtr<UPCGData_const_>_u_0 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  ForElementType<FSetElementId> local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_98;
  undefined4 local_94;
  TObjectPtr<UPCGSettings>_u_0 local_90;
  ForAnyElementType local_88;
  ulonglong local_80;
  undefined8 local_78;
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  
  local_70._24_8_ = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1f0.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1f0.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1f0.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_198,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1f0);
  iVar11 = 0;
  local_108._0_8_ = 0;
  local_108._40_8_ = 0;
  pUVar12 = PCGTestsCommon::GenerateSettings<UPCGAttributeFilteringSettings>(&local_198,&local_108);
  if (pUVar12 == (UPCGAttributeFilteringSettings *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                       ,0x347,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
  }
  UPCGSettings::GetElement(local_198.Settings,&local_200);
  pUVar12->Operator = Greater;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar12->TargetAttribute,
             PCGPointFilterTest::DoubleAttributeName,true);
  dVar5 = __real_3fd0000000000000;
  dVar4 = __real_3ff0000000000000;
  (pUVar12->AttributeTypes).Type = Double;
  pUVar12->bUseConstantThreshold = true;
  iVar19 = iVar11;
  do {
    local_70._0_4_ = 0x100;
    local_90.DebugPtr = (UPCGSettings *)0x0;
    local_80 = 0;
    local_b8.AllocatorInstance.InlineData[0] = '\0';
    local_b8.AllocatorInstance.InlineData[1] = '\0';
    local_b8.AllocatorInstance.InlineData[2] = '\0';
    local_b8.AllocatorInstance.InlineData[3] = '\0';
    local_b8.AllocatorInstance.InlineData[4] = '\0';
    local_b8.AllocatorInstance.InlineData[5] = '\0';
    local_b8.AllocatorInstance.InlineData[6] = '\0';
    local_b8.AllocatorInstance.InlineData[7] = '\0';
    local_b8.AllocatorInstance.InlineData[8] = '\0';
    local_b8.AllocatorInstance.InlineData[9] = '\0';
    local_b8.AllocatorInstance.InlineData[10] = '\0';
    local_b8.AllocatorInstance.InlineData[0xb] = '\0';
    local_b8.AllocatorInstance.InlineData[0xc] = '\0';
    local_b8.AllocatorInstance.InlineData[0xd] = '\0';
    local_b8.AllocatorInstance.InlineData[0xe] = '\0';
    local_b8.AllocatorInstance.InlineData[0xf] = '\0';
    local_d8.DebugPtr = (UPCGData *)0x0;
    local_d0 = 0;
    local_c8 = (undefined1  [8])0x0;
    local_c0 = (ForElementType<FSetElementId>)0x0;
    local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_b8.NumBits = 0;
    local_b8.MaxBits = 0x80;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_78._0_1_ = false;
    local_78._1_3_ = 0;
    local_78._4_4_ = 0;
    local_70._4_8_ = 0;
    local_70._12_4_ = 0xffffffff;
    if (local_198.InputData.TaggedData.ArrayNum == local_198.InputData.TaggedData.ArrayMax) {
      local_198.InputData.TaggedData.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x878,(ForAnyElementType *)&local_198.InputData,
                      &local_198.InputData.TaggedData.ArrayMax);
    }
    lVar13 = (longlong)local_198.InputData.TaggedData.ArrayNum;
    local_198.InputData.TaggedData.ArrayNum = local_198.InputData.TaggedData.ArrayNum + 1;
    pFVar14 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         (local_198.InputData.TaggedData.AllocatorInstance.Data + lVar13 * 0x78),
                         (FPCGTaggedData *)&local_d8.ObjectPtr);
    local_80 = local_80 & 0xffffffff00000000;
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_c8,0,local_c0._0_4_);
    iVar8 = local_c0._4_4_;
    local_c0 = (ForElementType<FSetElementId>)((ulonglong)local_c0 & 0xffffffff00000000);
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_c8,0,(int *)&local_c0.field_0x4);
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    local_b8.NumBits = 0;
    if (0x80 < (uint)local_b8.MaxBits) {
      local_b8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
    }
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
    }
    if (local_c8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_c8);
    }
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_d8.ObjectPtr);
    pFVar14->Pin = PCGPinConstants::DefaultInputLabel;
    pUVar15 = PCGPointFilterTest::GenerateAttributeSetWithSingleValue
                        (((double)iVar19 + dVar4) * dVar5);
    FPCGDataPtrWrapper::operator=(&pFVar14->Data,(UPCGData *)pUVar15);
    iVar19 = iVar19 + 1;
  } while (iVar19 < 4);
  pUVar12->bGenerateOutputDataEvenIfEmpty = false;
  (pUVar12->AttributeTypes).DoubleValue = 0.0;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_198,(UPCGNode *)local_240);
  do {
    if (local_200.Object == (IPCGElement *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
    }
    bVar9 = IPCGElement::Execute(local_200.Object,(FPCGContext *)local_240._0_8_);
  } while (!bVar9);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_240._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_240 + 0x20),
             &PCGPointFilterTest::InsideFilterLabel);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_240._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_240 + 0x30),
             &PCGPointFilterTest::OutsideFilterLabel);
  bVar9 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"InFilter pin has correct number of outputs",
                     local_240._40_4_,4);
  if (bVar9) {
    bVar9 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"OutFilter pin has correct number of outputs",
                       local_208,0);
    uVar7 = local_240._40_4_;
    if (bVar9) {
      uVar18 = (ulonglong)(int)local_240._40_4_;
      local_240[0x10] = local_248[0];
      pFVar20 = (FPCGTaggedData *)(local_240._32_8_ + uVar18 * 0x78);
      pFVar14 = (FPCGTaggedData *)local_240._32_8_;
      iVar19 = iVar11;
      while( true ) {
        if ((uint)uVar18 != uVar7) {
          local_240[8] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_240 + 8);
        }
        if (pFVar14 == pFVar20) break;
        bVar9 = `PCGPointFilterTest::GetNumEmptyData'::__l2::<lambda_1>::operator()
                          (local_240 + 0x10,pFVar14);
        iVar8 = iVar19 + 1;
        if (!bVar9) {
          iVar8 = iVar19;
        }
        iVar19 = iVar8;
        pFVar14 = pFVar14 + 1;
        uVar18 = (ulonglong)(uint)local_240._40_4_;
      }
      bVar9 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,
                         L"InFilter data has correct number of empty outputs",iVar19,0);
      if (bVar9) {
        (pUVar12->AttributeTypes).DoubleValue = 0.3330000042915344;
        TVar16 = PCGTestsCommon::FTestData::InitializeTestContext(&local_198,(UPCGNode *)local_1e8);
        uVar6 = local_240._0_8_;
        pFVar1 = (FPCGContext *)local_240._0_8_;
        if ((FPCGContext *)local_240 != TVar16.Ptr) {
          pFVar1 = (FPCGContext *)(TVar16.Ptr)->_padding_;
          (TVar16.Ptr)->_padding_ = 0;
          if ((FPCGContext *)local_240._0_8_ != (FPCGContext *)0x0) {
            plVar3 = (longlong *)local_240._0_8_;
            local_240._0_8_ = pFVar1;
            (**(code **)*plVar3)(uVar6,1);
            pFVar1 = (FPCGContext *)local_240._0_8_;
          }
        }
        local_240._0_8_ = pFVar1;
        if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
          (*(code *)**(undefined8 **)local_1e8._0_8_)(local_1e8._0_8_,1);
        }
        do {
          if (local_200.Object == (IPCGElement *)0x0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar9) {
              pcVar2 = (code *)swi(3);
              uVar10 = (*pcVar2)();
              return (bool)uVar10;
            }
          }
          bVar9 = IPCGElement::Execute(local_200.Object,(FPCGContext *)local_240._0_8_);
        } while (!bVar9);
        pTVar17 = FPCGDataCollection::GetInputsByPin
                            ((FPCGDataCollection *)(local_240._0_8_ + 0x38),&local_1d8,
                             &PCGPointFilterTest::InsideFilterLabel);
        if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_240 + 0x20) != pTVar17) {
          DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_240._32_8_,local_240._40_4_);
          if ((FPCGTaggedData *)local_240._32_8_ != (FPCGTaggedData *)0x0) {
            FMemory::Free((void *)local_240._32_8_);
          }
          local_240._32_8_ = (pTVar17->AllocatorInstance).Data;
          (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_240._40_4_ = pTVar17->ArrayNum;
          local_240._44_4_ = pTVar17->ArrayMax;
          pTVar17->ArrayNum = 0;
          pTVar17->ArrayMax = 0;
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
        if ((FPCGTaggedData *)local_1d8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_1d8.AllocatorInstance.Data);
        }
        pTVar17 = FPCGDataCollection::GetInputsByPin
                            ((FPCGDataCollection *)(local_240._0_8_ + 0x38),&local_1c8,
                             &PCGPointFilterTest::OutsideFilterLabel);
        if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_240 + 0x30) != pTVar17) {
          DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_240._48_8_,local_208);
          if ((FPCGTaggedData *)local_240._48_8_ != (FPCGTaggedData *)0x0) {
            FMemory::Free((void *)local_240._48_8_);
          }
          local_240._48_8_ = (pTVar17->AllocatorInstance).Data;
          (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_208 = pTVar17->ArrayNum;
          local_204 = pTVar17->ArrayMax;
          pTVar17->ArrayNum = 0;
          pTVar17->ArrayMax = 0;
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
        if ((FPCGTaggedData *)local_1c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
        }
        bVar9 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,L"InFilter pin has correct number of outputs"
                           ,local_240._40_4_,3);
        if (bVar9) {
          bVar9 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,
                             L"OutFilter pin has correct number of outputs",local_208,1);
          uVar7 = local_240._40_4_;
          if (bVar9) {
            uVar18 = (ulonglong)(int)local_240._40_4_;
            pFVar20 = (FPCGTaggedData *)(local_240._32_8_ + uVar18 * 0x78);
            pFVar14 = (FPCGTaggedData *)local_240._32_8_;
            while( true ) {
              if ((uint)uVar18 != uVar7) {
                local_240[0x18] = false;
                `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_240 + 0x18);
              }
              if (pFVar14 == pFVar20) break;
              bVar9 = `PCGPointFilterTest::GetNumEmptyData'::__l2::<lambda_1>::operator()
                                (local_248,pFVar14);
              iVar19 = iVar11 + 1;
              if (!bVar9) {
                iVar19 = iVar11;
              }
              iVar11 = iVar19;
              pFVar14 = pFVar14 + 1;
              uVar18 = (ulonglong)(uint)local_240._40_4_;
            }
            bVar9 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,
                               L"InFilter data has correct number of empty outputs",iVar11,0);
            if (bVar9) {
              iVar11 = PCGPointFilterTest::GetNumEmptyData
                                 ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                  (local_240 + 0x30));
              bVar9 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,
                                 L"OutFilter data has correct number of empty outputs",iVar11,0);
              if (bVar9) {
                (pUVar12->AttributeTypes).DoubleValue = 1.0;
                TVar16 = PCGTestsCommon::FTestData::InitializeTestContext
                                   (&local_198,(UPCGNode *)(local_1e8 + 8));
                uVar6 = local_240._0_8_;
                pFVar1 = (FPCGContext *)local_240._0_8_;
                if ((FPCGContext *)local_240 != TVar16.Ptr) {
                  pFVar1 = (FPCGContext *)(TVar16.Ptr)->_padding_;
                  (TVar16.Ptr)->_padding_ = 0;
                  if ((FPCGContext *)local_240._0_8_ != (FPCGContext *)0x0) {
                    plVar3 = (longlong *)local_240._0_8_;
                    local_240._0_8_ = pFVar1;
                    (**(code **)*plVar3)(uVar6,1);
                    pFVar1 = (FPCGContext *)local_240._0_8_;
                  }
                }
                local_240._0_8_ = pFVar1;
                if ((undefined8 *)local_1e8._8_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_1e8._8_8_)(local_1e8._8_8_,1);
                }
                do {
                  if (local_200.Object == (IPCGElement *)0x0) {
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L"");
                    if (bVar9) {
                      pcVar2 = (code *)swi(3);
                      uVar10 = (*pcVar2)();
                      return (bool)uVar10;
                    }
                  }
                  bVar9 = IPCGElement::Execute(local_200.Object,(FPCGContext *)local_240._0_8_);
                } while (!bVar9);
                pTVar17 = FPCGDataCollection::GetInputsByPin
                                    ((FPCGDataCollection *)(local_240._0_8_ + 0x38),
                                     (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                     &local_1b8.ObjectPtr,&PCGPointFilterTest::InsideFilterLabel);
                if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_240 + 0x20) !=
                    pTVar17) {
                  DestructItems<FPCGTaggedData,int>
                            ((FPCGTaggedData *)local_240._32_8_,local_240._40_4_);
                  if ((FPCGTaggedData *)local_240._32_8_ != (FPCGTaggedData *)0x0) {
                    FMemory::Free((void *)local_240._32_8_);
                  }
                  local_240._32_8_ = (pTVar17->AllocatorInstance).Data;
                  (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  local_240._40_4_ = pTVar17->ArrayNum;
                  local_240._44_4_ = pTVar17->ArrayMax;
                  pTVar17->ArrayNum = 0;
                  pTVar17->ArrayMax = 0;
                }
                DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_1b8.DebugPtr,local_1b0);
                if ((FPCGTaggedData *)local_1b8.DebugPtr != (FPCGTaggedData *)0x0) {
                  FMemory::Free(local_1b8.DebugPtr);
                }
                pTVar17 = FPCGDataCollection::GetInputsByPin
                                    ((FPCGDataCollection *)(local_240._0_8_ + 0x38),&local_1a8,
                                     &PCGPointFilterTest::OutsideFilterLabel);
                if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_240 + 0x30) !=
                    pTVar17) {
                  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_240._48_8_,local_208);
                  if ((FPCGTaggedData *)local_240._48_8_ != (FPCGTaggedData *)0x0) {
                    FMemory::Free((void *)local_240._48_8_);
                  }
                  local_240._48_8_ = (pTVar17->AllocatorInstance).Data;
                  (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  local_208 = pTVar17->ArrayNum;
                  local_204 = pTVar17->ArrayMax;
                  pTVar17->ArrayNum = 0;
                  pTVar17->ArrayMax = 0;
                }
                DestructItems<FPCGTaggedData,int>
                          ((FPCGTaggedData *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
                if ((FPCGTaggedData *)local_1a8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
                  FMemory::Free(local_1a8.AllocatorInstance.Data);
                }
                bVar9 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,
                                   L"InFilter pin has correct number of outputs",local_240._40_4_,0)
                ;
                if (bVar9) {
                  bVar9 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,
                                     L"OutFilter pin has correct number of outputs",local_208,4);
                  if (bVar9) {
                    iVar11 = PCGPointFilterTest::GetNumEmptyData
                                       ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                        (local_240 + 0x30));
                    bVar9 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,
                                       L"OutFilter data has correct number of empty outputs",iVar11,
                                       0);
                    if (bVar9) {
                      bVar9 = true;
                      goto LAB_149f86836;
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
  bVar9 = false;
LAB_149f86836:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_240._48_8_,local_208);
  if ((FPCGTaggedData *)local_240._48_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_240._48_8_);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_240._32_8_,local_240._40_4_);
  if ((FPCGTaggedData *)local_240._32_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_240._32_8_);
  }
  if ((FPCGContext *)local_240._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_240._0_8_)(local_240._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_200.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_198);
  return bVar9;
}

// GetBeautifiedTestName @ 149f868f0

FString * __thiscall
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::GetBeautifiedTestName
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Plugins.PCG.AttributeFilter.Params.NoGenerateEmptyOutput");
  return __return_storage_ptr__;
}

