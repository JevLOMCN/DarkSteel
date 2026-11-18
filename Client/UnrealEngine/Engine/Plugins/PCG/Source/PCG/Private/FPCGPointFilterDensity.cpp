// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f7e3c0

EAutomationTestFlags __thiscall FPCGPointFilterDensity::GetTestFlags(FPCGPointFilterDensity *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f7e3d0

bool __thiscall FPCGPointFilterDensity::IsStressTest(FPCGPointFilterDensity *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f7e3e0

uint __thiscall FPCGPointFilterDensity::GetRequiredDeviceNum(FPCGPointFilterDensity *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f7e3f0

FString * __thiscall
FPCGPointFilterDensity::GetTestSourceFileName
          (FPCGPointFilterDensity *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f7e420

int __thiscall FPCGPointFilterDensity::GetTestSourceFileLine(FPCGPointFilterDensity *this)

{
  return 0x12;
}

// GetTests @ 149f7e430

/* WARNING: Removing unreachable block (ram,0x000149f7e51d) */
/* WARNING: Removing unreachable block (ram,0x000149f7e5e8) */

void __thiscall
FPCGPointFilterDensity::GetTests
          (FPCGPointFilterDensity *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeFilter.Points.Density");
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

// RunTest @ 149f7e610

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

bool __thiscall FPCGPointFilterDensity::RunTest(FPCGPointFilterDensity *this,FString *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  UPCGAttributeFilteringSettings *pUVar6;
  longlong lVar7;
  FPCGTaggedData *this_00;
  UPCGBasePointData *pUVar8;
  UPCGBasePointData *pUVar9;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar10;
  ForAnyElementType FVar11;
  int iVar12;
  int iVar13;
  undefined1 auStackY_288 [32];
  undefined1 local_258 [16];
  int local_248;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_240;
  FName local_230;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_228;
  int local_220;
  FString local_218;
  TSharedPtr<IPCGElement,1> local_208;
  longlong local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  ForAnyElementType local_1e0;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  FString local_1c8;
  FString local_1b8;
  FTestData local_1a8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_118;
  TObjectPtr<UPCGData_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined8 uStack_c0;
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  void *local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_230 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_230);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_1a8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_230);
  iVar12 = 0;
  local_118._0_8_ = 0;
  local_118._40_8_ = 0;
  pUVar6 = PCGTestsCommon::GenerateSettings<UPCGAttributeFilteringSettings>(&local_1a8,&local_118);
  if (pUVar6 == (UPCGAttributeFilteringSettings *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                       ,0x81,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  UPCGSettings::GetElement(local_1a8.Settings,&local_208);
  pUVar6->Operator = Lesser;
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&pUVar6->TargetAttribute,Density,true);
  pUVar6->bUseConstantThreshold = true;
  (pUVar6->AttributeTypes).FloatValue = 0.5;
  (pUVar6->AttributeTypes).Type = Float;
  local_a0 = 0;
  local_90 = 0;
  local_d8._16_8_ = 0;
  uStack_c0 = 0;
  local_80 = 0x100;
  local_e8.DebugPtr = (UPCGData *)0x0;
  local_e0 = 0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_88 = 0;
  local_7c = 0;
  local_74 = 0xffffffff;
  if (local_1a8.InputData.TaggedData.ArrayNum == local_1a8.InputData.TaggedData.ArrayMax) {
    local_1a8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_1a8.InputData,
                    &local_1a8.InputData.TaggedData.ArrayMax);
  }
  lVar7 = (longlong)local_1a8.InputData.TaggedData.ArrayNum;
  local_1a8.InputData.TaggedData.ArrayNum = local_1a8.InputData.TaggedData.ArrayNum + 1;
  this_00 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       (local_1a8.InputData.TaggedData.AllocatorInstance.Data + lVar7 * 0x78),
                       (FPCGTaggedData *)&local_e8.ObjectPtr);
  local_90 = local_90 & 0xffffffff00000000;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar13 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_e8.ObjectPtr);
  this_00->Pin = PCGPinConstants::DefaultInputLabel;
  pUVar8 = PCGPointFilterTest::GeneratePointDataWithRandomDensity(0x32,local_1a8.Seed);
  FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_1a8,(UPCGNode *)local_258);
  do {
    if (local_208.Object == (IPCGElement *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    bVar4 = IPCGElement::Execute(local_208.Object,(FPCGContext *)local_258._0_8_);
  } while (!bVar4);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_258._0_8_ + 0x38),&local_240,
             &PCGPointFilterTest::InsideFilterLabel);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_258._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_258 + 8),
             &PCGPointFilterTest::OutsideFilterLabel);
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"InFilter pin has 1 output",local_240.ArrayNum,1);
  if (bVar4) {
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"OutFilter pin has 1 output",local_248,1);
    if (bVar4) {
      if (local_240.ArrayNum < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pUVar8 = Cast<UPCGBasePointData>((FPCGDataPtrWrapper *)local_240.AllocatorInstance.Data);
      if (local_248 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pUVar9 = Cast<UPCGBasePointData>((FPCGDataPtrWrapper *)local_258._8_8_);
      if (pUVar8 == (UPCGBasePointData *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1c8,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_1c8,0);
      }
      else {
        if (pUVar9 != (UPCGBasePointData *)0x0) {
          (**(code **)(pUVar8->_padding_ + 0x508))(pUVar8,&local_1f8);
          fVar3 = __real_3f000000;
          for (iVar13 = iVar12; iVar13 != local_1e8; iVar13 = iVar13 + 1) {
            fVar1 = *(float *)((longlong)(iVar13 % local_1ec) * (longlong)local_1f0 + local_1f8);
            ::FString::PrintfImpl
                      ((FString *)&local_228.ObjectPtr,
                       L"Point has a density (%f) lower than the threshold (%f)");
            TVar10 = (TObjectPtr<UPCGSettingsInterface>_u_0)L"";
            if (local_220 != 0) {
              TVar10 = local_228;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)TVar10.DebugPtr,fVar1 < fVar3)
            ;
            if (local_228.DebugPtr != (UPCGSettingsInterface *)0x0) {
              FMemory::Free(local_228.DebugPtr);
            }
            if (!bVar4) goto LAB_149f7ea70;
          }
          (**(code **)(pUVar9->_padding_ + 0x508))(pUVar9,&local_1e0);
          for (; iVar12 != local_1d0; iVar12 = iVar12 + 1) {
            fVar1 = *(float *)(local_1e0.Data + (longlong)(iVar12 % local_1d4) * (longlong)local_1d8
                              );
            ::FString::PrintfImpl
                      (&local_218,
                       L"Point has a density (%f) higher or equal than the threshold (%f)");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_218.Data.ArrayNum != 0) {
              FVar11.Data = local_218.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,fVar3 <= fVar1);
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
            if (!bVar4) goto LAB_149f7ea70;
          }
          bVar4 = true;
          goto LAB_149f7ea72;
        }
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1b8,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_1b8,0);
        local_1c8.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_149f7ea70:
  bVar4 = false;
LAB_149f7ea72:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_258._8_8_,local_248);
  if ((FPCGTaggedData *)local_258._8_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_258._8_8_);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_240.AllocatorInstance.Data,local_240.ArrayNum);
  if ((FPCGTaggedData *)local_240.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if ((FPCGContext *)local_258._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_258._0_8_)(local_258._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_1a8);
  return bVar4;
}

// GetBeautifiedTestName @ 149f7ecd0

FString * __thiscall
FPCGPointFilterDensity::GetBeautifiedTestName
          (FPCGPointFilterDensity *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeFilter.Points.Density");
  return __return_storage_ptr__;
}

