// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f7ed40

EAutomationTestFlags __thiscall
FPCGPointFilterDensityRange::GetTestFlags(FPCGPointFilterDensityRange *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f7ed50

bool __thiscall FPCGPointFilterDensityRange::IsStressTest(FPCGPointFilterDensityRange *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f7ed60

uint __thiscall FPCGPointFilterDensityRange::GetRequiredDeviceNum(FPCGPointFilterDensityRange *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f7ed70

FString * __thiscall
FPCGPointFilterDensityRange::GetTestSourceFileName
          (FPCGPointFilterDensityRange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f7eda0

int __thiscall FPCGPointFilterDensityRange::GetTestSourceFileLine(FPCGPointFilterDensityRange *this)

{
  return 0x13;
}

// GetTests @ 149f7edb0

/* WARNING: Removing unreachable block (ram,0x000149f7ee9d) */
/* WARNING: Removing unreachable block (ram,0x000149f7ef68) */

void __thiscall
FPCGPointFilterDensityRange::GetTests
          (FPCGPointFilterDensityRange *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeFilter.Points.DensityRange");
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

// RunTest @ 149f7ef90

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
FPCGPointFilterDensityRange::RunTest(FPCGPointFilterDensityRange *this,FString *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  UPCGAttributeFilteringRangeSettings *pUVar7;
  longlong lVar8;
  FPCGTaggedData *this_00;
  UPCGBasePointData *pUVar9;
  UPCGBasePointData *pUVar10;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  undefined1 auStackY_298 [32];
  undefined1 local_268 [16];
  int local_258;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_250;
  FName local_240;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_238;
  int local_230;
  FString local_228;
  TSharedPtr<IPCGElement,1> local_218;
  longlong local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  ForAnyElementType local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  FString local_1d8;
  FString local_1c8;
  FTestData local_1b8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_128;
  TObjectPtr<UPCGData_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [24];
  undefined8 uStack_d0;
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  void *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_240 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_240 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_240);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_1b8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_240);
  iVar13 = 0;
  local_128._0_8_ = 0;
  local_128._40_8_ = 0;
  pUVar7 = PCGTestsCommon::GenerateSettings<UPCGAttributeFilteringRangeSettings>
                     (&local_1b8,&local_128);
  if (pUVar7 == (UPCGAttributeFilteringRangeSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                       ,0xba,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  UPCGSettings::GetElement(local_1b8.Settings,&local_218);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&pUVar7->TargetAttribute,Density,true);
  (pUVar7->MinThreshold).bUseConstantThreshold = true;
  (pUVar7->MinThreshold).AttributeTypes.FloatValue = 0.3;
  (pUVar7->MinThreshold).AttributeTypes.Type = Float;
  (pUVar7->MaxThreshold).bUseConstantThreshold = true;
  (pUVar7->MaxThreshold).AttributeTypes.FloatValue = 0.8;
  (pUVar7->MaxThreshold).AttributeTypes.Type = Float;
  local_b0 = 0;
  local_a0 = 0;
  local_e8._16_8_ = 0;
  uStack_d0 = 0;
  local_90 = 0x100;
  local_f8.DebugPtr = (UPCGData *)0x0;
  local_f0 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  local_8c = 0;
  local_84 = 0xffffffff;
  if (local_1b8.InputData.TaggedData.ArrayNum == local_1b8.InputData.TaggedData.ArrayMax) {
    local_1b8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_1b8.InputData,
                    &local_1b8.InputData.TaggedData.ArrayMax);
  }
  lVar8 = (longlong)local_1b8.InputData.TaggedData.ArrayNum;
  local_1b8.InputData.TaggedData.ArrayNum = local_1b8.InputData.TaggedData.ArrayNum + 1;
  this_00 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       (local_1b8.InputData.TaggedData.AllocatorInstance.Data + lVar8 * 0x78),
                       (FPCGTaggedData *)&local_f8.ObjectPtr);
  local_a0 = local_a0 & 0xffffffff00000000;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,0,local_e8._8_4_);
  iVar14 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_f8.ObjectPtr);
  this_00->Pin = PCGPinConstants::DefaultInputLabel;
  pUVar9 = PCGPointFilterTest::GeneratePointDataWithRandomDensity(0x32,local_1b8.Seed);
  FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar9);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_1b8,(UPCGNode *)local_268);
  do {
    if (local_218.Object == (IPCGElement *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    bVar5 = IPCGElement::Execute(local_218.Object,(FPCGContext *)local_268._0_8_);
  } while (!bVar5);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_268._0_8_ + 0x38),&local_250,
             &PCGPointFilterTest::InsideFilterLabel);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_268._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_268 + 8),
             &PCGPointFilterTest::OutsideFilterLabel);
  bVar5 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"InFilter pin has 1 output",local_250.ArrayNum,1);
  if (bVar5) {
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"OutFilter pin has 1 output",local_258,1);
    if (bVar5) {
      if (local_250.ArrayNum < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
      }
      pUVar9 = Cast<UPCGBasePointData>((FPCGDataPtrWrapper *)local_250.AllocatorInstance.Data);
      if (local_258 < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
      }
      pUVar10 = Cast<UPCGBasePointData>((FPCGDataPtrWrapper *)local_268._8_8_);
      if (pUVar9 == (UPCGBasePointData *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1d8,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_1d8,0);
      }
      else {
        if (pUVar10 != (UPCGBasePointData *)0x0) {
          (**(code **)(pUVar9->_padding_ + 0x508))(pUVar9,&local_208);
          fVar4 = __real_3f4ccccd;
          fVar3 = __real_3e99999a;
          for (iVar14 = iVar13; iVar14 != local_1f8; iVar14 = iVar14 + 1) {
            fVar1 = *(float *)((longlong)(iVar14 % local_1fc) * (longlong)local_200 + local_208);
            if ((fVar1 < fVar3) || (fVar4 < fVar1)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            ::FString::PrintfImpl
                      ((FString *)&local_238.ObjectPtr,
                       L"Point has a density (%f) within the range ([%f, %f])");
            TVar11 = (TObjectPtr<UPCGSettingsInterface>_u_0)L"";
            if (local_230 != 0) {
              TVar11 = local_238;
            }
            bVar5 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)TVar11.DebugPtr,bVar5);
            if (local_238.DebugPtr != (UPCGSettingsInterface *)0x0) {
              FMemory::Free(local_238.DebugPtr);
            }
            if (!bVar5) goto LAB_149f7f409;
          }
          (**(code **)(pUVar10->_padding_ + 0x508))(pUVar10,&local_1f0);
          for (; iVar13 != local_1e0; iVar13 = iVar13 + 1) {
            if ((*(float *)(local_1f0.Data + (longlong)(iVar13 % local_1e4) * (longlong)local_1e8) <
                 fVar3) ||
               (fVar4 < *(float *)(local_1f0.Data +
                                  (longlong)(iVar13 % local_1e4) * (longlong)local_1e8))) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            ::FString::PrintfImpl
                      (&local_228,L"Point has a density (%f) outside the range ([%f, %f])");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_228.Data.ArrayNum != 0) {
              FVar12.Data = local_228.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar5);
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            if (!bVar5) goto LAB_149f7f409;
          }
          bVar5 = true;
          goto LAB_149f7f40b;
        }
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1c8,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_1c8,0);
        local_1d8.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_149f7f409:
  bVar5 = false;
LAB_149f7f40b:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_268._8_8_,local_258);
  if ((FPCGTaggedData *)local_268._8_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_268._8_8_);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_250.AllocatorInstance.Data,local_250.ArrayNum);
  if ((FPCGTaggedData *)local_250.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  if ((FPCGContext *)local_268._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_268._0_8_)(local_268._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_1b8);
  return bVar5;
}

// GetBeautifiedTestName @ 149f7f6a0

FString * __thiscall
FPCGPointFilterDensityRange::GetBeautifiedTestName
          (FPCGPointFilterDensityRange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeFilter.Points.DensityRange");
  return __return_storage_ptr__;
}

