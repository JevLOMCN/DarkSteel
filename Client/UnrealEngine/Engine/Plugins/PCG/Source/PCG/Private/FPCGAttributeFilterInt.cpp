// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f7f710

EAutomationTestFlags __thiscall FPCGAttributeFilterInt::GetTestFlags(FPCGAttributeFilterInt *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f7f720

bool __thiscall FPCGAttributeFilterInt::IsStressTest(FPCGAttributeFilterInt *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f7f730

uint __thiscall FPCGAttributeFilterInt::GetRequiredDeviceNum(FPCGAttributeFilterInt *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f7f740

FString * __thiscall
FPCGAttributeFilterInt::GetTestSourceFileName
          (FPCGAttributeFilterInt *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f7f770

int __thiscall FPCGAttributeFilterInt::GetTestSourceFileLine(FPCGAttributeFilterInt *this)

{
  return 0x14;
}

// GetTests @ 149f7f780

/* WARNING: Removing unreachable block (ram,0x000149f7f86d) */
/* WARNING: Removing unreachable block (ram,0x000149f7f938) */

void __thiscall
FPCGAttributeFilterInt::GetTests
          (FPCGAttributeFilterInt *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeFilter.Params.Int");
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

// RunTest @ 149f7f960

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

bool __thiscall FPCGAttributeFilterInt::RunTest(FPCGAttributeFilterInt *this,FString *param_1)

{
  code *pcVar1;
  undefined8 this_00;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UPCGAttributeFilteringSettings *pUVar5;
  longlong lVar6;
  FPCGTaggedData *this_01;
  UPCGParamData *pUVar7;
  UPCGParamData *pUVar8;
  FPCGMetadataAttribute<int> *pFVar9;
  long64 lVar10;
  ForAnyElementType FVar11;
  FPCGMetadataAttribute<int> *pFVar12;
  FPCGMetadataAttribute<int> *pFVar13;
  uint uVar14;
  FPCGMetadataAttribute<int> *pFVar15;
  undefined1 auStackY_298 [32];
  undefined1 local_268 [24];
  longlong lStack_250;
  FName local_248;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_238;
  int local_230;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_228;
  FString local_218;
  FString local_208;
  TSharedPtr<IPCGElement,1> local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FPCGAttributeIdentifier local_1b8;
  FPCGAttributeIdentifier local_198;
  FTestData local_178;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_e8;
  TObjectPtr<UPCGData_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  void *local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_268._8_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_268._8_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_268._8_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_178,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_268 + 8));
  pFVar13 = (FPCGMetadataAttribute<int> *)0x0;
  local_e8._0_8_ = 0;
  local_e8._40_8_ = 0;
  pUVar5 = PCGTestsCommon::GenerateSettings<UPCGAttributeFilteringSettings>(&local_178,&local_e8);
  if ((pUVar5 == (UPCGAttributeFilteringSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                         ,0xf8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  UPCGSettings::GetElement(local_178.Settings,&local_1f8);
  pUVar5->Operator = Lesser;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar5->TargetAttribute,
             PCGPointFilterTest::IntAttributeName,true);
  pUVar5->bUseConstantThreshold = true;
  (pUVar5->AttributeTypes).IntValue = 999999;
  (pUVar5->AttributeTypes).Type = Integer64;
  local_70 = 0;
  local_60 = 0;
  local_a8._16_8_ = 0;
  uStack_90 = 0;
  local_50 = 0x100;
  local_b8.DebugPtr = (UPCGData *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_58 = 0;
  local_4c = 0;
  local_44 = 0xffffffff;
  if (local_178.InputData.TaggedData.ArrayNum == local_178.InputData.TaggedData.ArrayMax) {
    local_178.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_178.InputData,
                    &local_178.InputData.TaggedData.ArrayMax);
  }
  lVar6 = (longlong)local_178.InputData.TaggedData.ArrayNum;
  local_178.InputData.TaggedData.ArrayNum = local_178.InputData.TaggedData.ArrayNum + 1;
  this_01 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       (local_178.InputData.TaggedData.AllocatorInstance.Data + lVar6 * 0x78),
                       (FPCGTaggedData *)&local_b8.ObjectPtr);
  local_60 = local_60 & 0xffffffff00000000;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar4 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_b8.ObjectPtr);
  this_01->Pin = PCGPinConstants::DefaultInputLabel;
  pUVar7 = PCGPointFilterTest::GenerateAttributeSetWithRandomInt(0x32,local_178.Seed);
  FPCGDataPtrWrapper::operator=(&this_01->Data,(UPCGData *)pUVar7);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_178,(UPCGNode *)local_268);
  do {
    if ((local_1f8.Object == (IPCGElement *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = IPCGElement::Execute(local_1f8.Object,(FPCGContext *)local_268._0_8_);
  } while (!bVar2);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_268._0_8_ + 0x38),&local_228,
             &PCGPointFilterTest::InsideFilterLabel);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_268._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&local_238.ObjectPtr,
             &PCGPointFilterTest::OutsideFilterLabel);
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"InFilter pin has 1 output",local_228.ArrayNum,1);
  if ((bVar2) &&
     (bVar2 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,L"OutFilter pin has 1 output",local_230,1),
     bVar2)) {
    if ((local_228.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar7 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)local_228.AllocatorInstance.Data);
    if ((local_230 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar8 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)local_238.DebugPtr);
    if (pUVar7 == (UPCGParamData *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_1e8,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_1e8,0);
    }
    else if (pUVar8 == (UPCGParamData *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)(local_268 + 0x10),L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,local_268 + 0x10,0);
      local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_268._16_8_;
    }
    else {
      local_268._16_4_ = PCGPointFilterTest::IntAttributeName.ComparisonIndex.Value;
      local_268._20_4_ = PCGPointFilterTest::IntAttributeName.Number;
      lStack_250._0_1_ = PCGMetadataDomainID::Default.Flag;
      lStack_250._1_3_ = PCGMetadataDomainID::Default._1_3_;
      lStack_250._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_248 = PCGMetadataDomainID::Default.DebugName;
      local_1b8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_1b8.Name = PCGPointFilterTest::IntAttributeName;
      local_1b8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_1b8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_1b8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      pFVar9 = (FPCGMetadataAttribute<int> *)
               UPCGMetadata::GetConstAttribute((UPCGMetadata *)pUVar7->_padding_,&local_1b8);
      if ((pFVar9 == (FPCGMetadataAttribute<int> *)0x0) || ((short)pFVar9->_padding_ != 2)) {
        pFVar9 = pFVar13;
      }
      local_268._16_4_ = PCGPointFilterTest::IntAttributeName.ComparisonIndex.Value;
      local_268._20_4_ = PCGPointFilterTest::IntAttributeName.Number;
      lStack_250._0_1_ = PCGMetadataDomainID::Default.Flag;
      lStack_250._1_3_ = PCGMetadataDomainID::Default._1_3_;
      lStack_250._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_248 = PCGMetadataDomainID::Default.DebugName;
      local_198.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_198.Name = PCGPointFilterTest::IntAttributeName;
      local_198.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_198.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_198.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_268._8_8_ =
           UPCGMetadata::GetConstAttribute((UPCGMetadata *)pUVar8->_padding_,&local_198);
      if (((UClass *)local_268._8_8_ == (UClass *)0x0) ||
         ((short)((UClass *)local_268._8_8_)->_padding_ != 2)) {
        local_268._8_8_ = (UClass *)0x0;
      }
      if (pFVar9 == (FPCGMetadataAttribute<int> *)0x0) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1d8,L"Expected \'%s\' to be not null.");
        (*pcVar1)(this,&local_1d8,0);
        local_1e8.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
      }
      else {
        if ((UClass *)local_268._8_8_ != (UClass *)0x0) {
          lVar10 = UPCGMetadata::GetLocalItemCount((UPCGMetadata *)pUVar7->_padding_);
          pFVar12 = pFVar13;
          pFVar15 = pFVar13;
          if (0 < lVar10) {
            do {
              iVar4 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)pFVar9,(long64)pFVar12);
              iVar4 = FPCGMetadataAttribute<int>::GetValue(pFVar9,iVar4);
              ::FString::PrintfImpl
                        (&local_218,L"Attribute has a value (%d) lower than the threshold (%d)");
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_218.Data.ArrayNum != 0) {
                FVar11.Data = local_218.Data.AllocatorInstance.Data;
              }
              bVar2 = FAutomationTestBase::TestTrue
                                ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar4 < 999999);
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
              if (!bVar2) goto LAB_149f7fdc8;
              uVar14 = (int)pFVar15 + 1;
              lVar10 = UPCGMetadata::GetLocalItemCount((UPCGMetadata *)pUVar7->_padding_);
              pFVar12 = (FPCGMetadataAttribute<int> *)(longlong)(int)uVar14;
              pFVar15 = (FPCGMetadataAttribute<int> *)(ulonglong)uVar14;
            } while ((int)uVar14 < lVar10);
          }
          lVar10 = UPCGMetadata::GetLocalItemCount((UPCGMetadata *)pUVar8->_padding_);
          this_00 = local_268._8_8_;
          pFVar9 = pFVar13;
          if (0 < lVar10) {
            do {
              iVar4 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)this_00,(long64)pFVar13);
              iVar4 = FPCGMetadataAttribute<int>::GetValue
                                ((FPCGMetadataAttribute<int> *)this_00,iVar4);
              ::FString::PrintfImpl
                        (&local_208,L"Attribute has a value (%d) higher than the threshold (%d)");
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_208.Data.ArrayNum != 0) {
                FVar11.Data = local_208.Data.AllocatorInstance.Data;
              }
              bVar2 = FAutomationTestBase::TestTrue
                                ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,0xf423e < iVar4)
              ;
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
              if (!bVar2) goto LAB_149f7fdc8;
              uVar14 = (int)pFVar9 + 1;
              pFVar13 = (FPCGMetadataAttribute<int> *)(longlong)(int)uVar14;
              lVar10 = UPCGMetadata::GetLocalItemCount((UPCGMetadata *)pUVar8->_padding_);
              pFVar9 = (FPCGMetadataAttribute<int> *)(ulonglong)uVar14;
            } while ((longlong)pFVar13 < lVar10);
          }
          bVar2 = true;
          goto LAB_149f7fdca;
        }
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1c8,L"Expected \'%s\' to be not null.");
        (*pcVar1)(this,&local_1c8,0);
        local_1e8.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
      }
    }
    if ((FName)local_1e8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
LAB_149f7fdc8:
  bVar2 = false;
LAB_149f7fdca:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_238.DebugPtr,local_230);
  if ((FPCGTaggedData *)local_238.DebugPtr != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_238.DebugPtr);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
  if ((FPCGTaggedData *)local_228.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  if ((FPCGContext *)local_268._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_268._0_8_)(local_268._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_178);
  return bVar2;
}

// GetBeautifiedTestName @ 149f80120

FString * __thiscall
FPCGAttributeFilterInt::GetBeautifiedTestName
          (FPCGAttributeFilterInt *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeFilter.Params.Int");
  return __return_storage_ptr__;
}

