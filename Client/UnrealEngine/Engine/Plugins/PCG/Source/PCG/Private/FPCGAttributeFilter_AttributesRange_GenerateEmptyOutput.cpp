// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f837f0

EAutomationTestFlags __thiscall
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::GetTestFlags
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f83800

bool __thiscall
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::IsStressTest
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f83810

uint __thiscall
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::GetRequiredDeviceNum
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f83820

FString * __thiscall
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::GetTestSourceFileName
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f83850

int __thiscall
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::GetTestSourceFileLine
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this)

{
  return 0x1a;
}

// GetTests @ 149f83860

/* WARNING: Removing unreachable block (ram,0x000149f8394d) */
/* WARNING: Removing unreachable block (ram,0x000149f83a18) */

void __thiscall
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::GetTests
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeFilter.ParamsRange.GenerateEmptyOutput");
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

// RunTest @ 149f83a40

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
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::RunTest
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this,FString *param_1)

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
  UPCGAttributeFilteringRangeSettings *pUVar12;
  longlong lVar13;
  FPCGTaggedData *pFVar14;
  UPCGParamData *pUVar15;
  TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> TVar16;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar17;
  ulonglong uVar18;
  int iVar19;
  ForAnyElementType FVar20;
  int iVar21;
  FPCGTaggedData *pFVar22;
  undefined1 auStackY_258 [32];
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [24];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1f0;
  TSharedPtr<IPCGElement,1> local_1e0;
  ForAnyElementType local_1d0;
  undefined1 local_1c8 [16];
  int local_1b8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1b0;
  FTestData local_198;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_108;
  TObjectPtr<UPCGData_const_>_u_0 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_90;
  ulonglong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  TObjectPtr<UPCGSettings>_u_0 local_58;
  
  local_58.DebugPtr = (UPCGSettings *)(__security_cookie.value ^ (ulonglong)auStackY_258);
  local_1d0.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1d0.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d0.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_198,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1d0);
  iVar11 = 0;
  local_108._0_8_ = 0;
  local_108._40_8_ = 0;
  pUVar12 = PCGTestsCommon::GenerateSettings<UPCGAttributeFilteringRangeSettings>
                      (&local_198,&local_108);
  if (pUVar12 == (UPCGAttributeFilteringRangeSettings *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                       ,0x271,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
  }
  UPCGSettings::GetElement(local_198.Settings,&local_1e0);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar12->TargetAttribute,
             PCGPointFilterTest::DoubleAttributeName,true);
  dVar5 = __real_3fd0000000000000;
  dVar4 = __real_3ff0000000000000;
  (pUVar12->MinThreshold).bInclusive = true;
  (pUVar12->MinThreshold).bUseConstantThreshold = true;
  (pUVar12->MaxThreshold).bInclusive = true;
  (pUVar12->MaxThreshold).bUseConstantThreshold = true;
  (pUVar12->MinThreshold).AttributeTypes.Type = Double;
  (pUVar12->MaxThreshold).AttributeTypes.Type = Double;
  iVar19 = iVar11;
  do {
    local_70 = 0x100;
    local_90.InlineData[0] = '\0';
    local_90.InlineData[1] = '\0';
    local_90.InlineData[2] = '\0';
    local_90.InlineData[3] = '\0';
    local_90._padding_ = 0;
    local_80 = 0;
    local_c8._16_8_ = 0;
    uStack_b0 = 0;
    local_d8.DebugPtr = (UPCGData *)0x0;
    local_d0._0_1_ = false;
    local_d0._1_3_ = 0;
    local_d0._4_4_ = 0;
    local_c8._0_8_ = (FScriptContainerElement *)0x0;
    local_c8._8_8_ = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_9c = 0x80;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_90.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_78._0_1_ = NotExecuted;
    local_78._1_7_ = 0;
    local_6c = 0;
    local_64 = -1;
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
    if (local_90.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_90.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_c8,0,local_c8._8_4_);
    iVar21 = SUB84(local_c8._8_8_,4);
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
    if (iVar21 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_d8.ObjectPtr);
    pFVar14->Pin = PCGPinConstants::DefaultInputLabel;
    pUVar15 = PCGPointFilterTest::GenerateAttributeSetWithSingleValue
                        (((double)iVar19 + dVar4) * dVar5);
    FPCGDataPtrWrapper::operator=(&pFVar14->Data,(UPCGData *)pUVar15);
    iVar19 = iVar19 + 1;
  } while (iVar19 < 4);
  pUVar12->bGenerateOutputDataEvenIfEmpty = true;
  (pUVar12->MaxThreshold).AttributeTypes.DoubleValue = 1.0;
  (pUVar12->MinThreshold).AttributeTypes.DoubleValue = 0.0;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_198,(UPCGNode *)local_208);
  do {
    if ((FName)local_1e0.Object == (FName)0x0) {
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
    bVar9 = IPCGElement::Execute(local_1e0.Object,(FPCGContext *)local_208._0_8_);
  } while (!bVar9);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_208._0_8_ + 0x38),&local_1f0,
             &PCGPointFilterTest::InsideFilterLabel);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_208._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_208 + 8),
             &PCGPointFilterTest::OutsideFilterLabel);
  bVar9 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"InFilter pin has correct number of outputs",
                     local_1f0.ArrayNum,4);
  if (bVar9) {
    bVar9 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"OutFilter pin has correct number of outputs",
                       local_208._16_4_,4);
    iVar19 = local_1f0.ArrayNum;
    if (bVar9) {
      uVar18 = (ulonglong)local_1f0.ArrayNum;
      local_218[0] = local_228[0];
      pFVar14 = (FPCGTaggedData *)(local_1f0.AllocatorInstance.Data + uVar18 * 0x78);
      FVar20.Data = local_1f0.AllocatorInstance.Data;
      iVar21 = iVar11;
      while( true ) {
        if ((uint)uVar18 != iVar19) {
          local_220[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_220);
        }
        if ((FPCGTaggedData *)FVar20.Data == pFVar14) break;
        bVar9 = `PCGPointFilterTest::GetNumEmptyData'::__l2::<lambda_1>::operator()
                          (local_218,(FPCGTaggedData *)FVar20.Data);
        iVar8 = iVar21 + 1;
        if (!bVar9) {
          iVar8 = iVar21;
        }
        iVar21 = iVar8;
        FVar20.Data = FVar20.Data + 0x78;
        uVar18 = (ulonglong)(uint)local_1f0.ArrayNum;
      }
      bVar9 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,
                         L"InFilter data has correct number of empty outputs",iVar21,0);
      uVar7 = local_208._16_4_;
      if (bVar9) {
        uVar18 = (ulonglong)(int)local_208._16_4_;
        pFVar22 = (FPCGTaggedData *)(local_208._8_8_ + uVar18 * 0x78);
        pFVar14 = (FPCGTaggedData *)local_208._8_8_;
        while( true ) {
          if ((uint)uVar18 != uVar7) {
            local_210[0] = 0;
            `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_210);
          }
          if (pFVar14 == pFVar22) break;
          bVar9 = `PCGPointFilterTest::GetNumEmptyData'::__l2::<lambda_1>::operator()
                            (local_228,pFVar14);
          iVar19 = iVar11 + 1;
          if (!bVar9) {
            iVar19 = iVar11;
          }
          iVar11 = iVar19;
          pFVar14 = pFVar14 + 1;
          uVar18 = (ulonglong)(uint)local_208._16_4_;
        }
        bVar9 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,
                           L"OutFilter data has correct number of empty outputs",iVar11,4);
        if (bVar9) {
          (pUVar12->MinThreshold).AttributeTypes.DoubleValue = 0.0;
          (pUVar12->MaxThreshold).AttributeTypes.DoubleValue = 0.0;
          TVar16 = PCGTestsCommon::FTestData::InitializeTestContext
                             (&local_198,(UPCGNode *)local_1c8);
          uVar6 = local_208._0_8_;
          pFVar1 = (FPCGContext *)local_208._0_8_;
          if ((FPCGContext *)local_208 != TVar16.Ptr) {
            pFVar1 = (FPCGContext *)(TVar16.Ptr)->_padding_;
            (TVar16.Ptr)->_padding_ = 0;
            if ((FPCGContext *)local_208._0_8_ != (FPCGContext *)0x0) {
              plVar3 = (longlong *)local_208._0_8_;
              local_208._0_8_ = pFVar1;
              (**(code **)*plVar3)(uVar6,1);
              pFVar1 = (FPCGContext *)local_208._0_8_;
            }
          }
          local_208._0_8_ = pFVar1;
          if ((undefined8 *)local_1c8._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_1c8._0_8_)(local_1c8._0_8_,1);
          }
          do {
            if ((FName)local_1e0.Object == (FName)0x0) {
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
            bVar9 = IPCGElement::Execute(local_1e0.Object,(FPCGContext *)local_208._0_8_);
          } while (!bVar9);
          pTVar17 = FPCGDataCollection::GetInputsByPin
                              ((FPCGDataCollection *)(local_208._0_8_ + 0x38),
                               (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_1c8 + 8)
                               ,&PCGPointFilterTest::InsideFilterLabel);
          if (&local_1f0 != pTVar17) {
            DestructItems<FPCGTaggedData,int>
                      ((FPCGTaggedData *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
            if ((FPCGTaggedData *)local_1f0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
              FMemory::Free(local_1f0.AllocatorInstance.Data);
            }
            local_1f0.AllocatorInstance.Data = (pTVar17->AllocatorInstance).Data;
            (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_1f0.ArrayNum = pTVar17->ArrayNum;
            local_1f0.ArrayMax = pTVar17->ArrayMax;
            pTVar17->ArrayNum = 0;
            pTVar17->ArrayMax = 0;
          }
          DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_1c8._8_8_,local_1b8);
          if ((FPCGTaggedData *)local_1c8._8_8_ != (FPCGTaggedData *)0x0) {
            FMemory::Free((void *)local_1c8._8_8_);
          }
          pTVar17 = FPCGDataCollection::GetInputsByPin
                              ((FPCGDataCollection *)(local_208._0_8_ + 0x38),&local_1b0,
                               &PCGPointFilterTest::OutsideFilterLabel);
          if ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_208 + 8) != pTVar17) {
            DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_208._8_8_,local_208._16_4_);
            if ((FPCGTaggedData *)local_208._8_8_ != (FPCGTaggedData *)0x0) {
              FMemory::Free((void *)local_208._8_8_);
            }
            local_208._8_8_ = (pTVar17->AllocatorInstance).Data;
            (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_208._16_4_ = pTVar17->ArrayNum;
            local_208._20_4_ = pTVar17->ArrayMax;
            pTVar17->ArrayNum = 0;
            pTVar17->ArrayMax = 0;
          }
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
          if ((FPCGTaggedData *)local_1b0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
            FMemory::Free(local_1b0.AllocatorInstance.Data);
          }
          bVar9 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,
                             L"InFilter pin has correct number of outputs",local_1f0.ArrayNum,4);
          if (bVar9) {
            bVar9 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,
                               L"OutFilter pin has correct number of outputs",local_208._16_4_,4);
            if (bVar9) {
              iVar11 = PCGPointFilterTest::GetNumEmptyData(&local_1f0);
              bVar9 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,
                                 L"InFilter data has correct number of empty outputs",iVar11,4);
              if (bVar9) {
                iVar11 = PCGPointFilterTest::GetNumEmptyData
                                   ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                    (local_208 + 8));
                bVar9 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,
                                   L"OutFilter data has correct number of empty outputs",iVar11,0);
                if (bVar9) {
                  bVar9 = true;
                  goto LAB_149f8414f;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar9 = false;
LAB_149f8414f:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_208._8_8_,local_208._16_4_);
  if ((FPCGTaggedData *)local_208._8_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_208._8_8_);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
  if ((FPCGTaggedData *)local_1f0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  if ((FPCGContext *)local_208._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_208._0_8_)(local_208._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_198);
  return bVar9;
}

// GetBeautifiedTestName @ 149f84210

FString * __thiscall
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::GetBeautifiedTestName
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Plugins.PCG.AttributeFilter.ParamsRange.GenerateEmptyOutput");
  return __return_storage_ptr__;
}

