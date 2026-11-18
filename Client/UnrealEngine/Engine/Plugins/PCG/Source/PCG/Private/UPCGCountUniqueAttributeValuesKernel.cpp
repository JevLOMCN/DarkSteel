// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 14972d790

UClass * __cdecl UPCGCountUniqueAttributeValuesKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesKernel",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton,
               StaticRegisterNativesUPCGCountUniqueAttributeValuesKernel,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCountUniqueAttributeValuesKernel>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton;
}

// UPCGCountUniqueAttributeValuesKernel @ 14973b040

UPCGCountUniqueAttributeValuesKernel * __thiscall
UPCGCountUniqueAttributeValuesKernel::UPCGCountUniqueAttributeValuesKernel
          (UPCGCountUniqueAttributeValuesKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->bEmitPerDataCounts = true;
  this->bOutputRawBuffer = false;
  this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesKernel__6B_;
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  return this;
}

// UPCGCountUniqueAttributeValuesKernel @ 14973b080

UPCGCountUniqueAttributeValuesKernel * __thiscall
UPCGCountUniqueAttributeValuesKernel::UPCGCountUniqueAttributeValuesKernel
          (UPCGCountUniqueAttributeValuesKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->bEmitPerDataCounts = true;
  this->bOutputRawBuffer = false;
  this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesKernel__6B_;
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  return this;
}

// ~UPCGCountUniqueAttributeValuesKernel @ 14973dc30

void __thiscall
UPCGCountUniqueAttributeValuesKernel::~UPCGCountUniqueAttributeValuesKernel
          (UPCGCountUniqueAttributeValuesKernel *this)

{
  this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 149749a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGCountUniqueAttributeValuesKernel::ComputeOutputBindingDataDesc
          (UPCGCountUniqueAttributeValuesKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FPCGDataCollectionDesc *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar8;
  FPCGDataTypeBaseId *pFVar9;
  FPCGDataTypeIdentifier *pFVar10;
  FPCGDataDesc *pFVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_4c8 [32];
  undefined1 local_478 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_470;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_460;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_450;
  TSharedPtr<FPCGDataCollectionDesc,1> local_448;
  UPCGDataBinding *local_438;
  FPCGKernelPin local_430;
  FName local_418;
  FPCGMetadataDomainID FStack_410;
  undefined1 local_3f8 [40];
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined1 local_3a0;
  undefined1 local_398 [40];
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_340;
  undefined1 local_338 [40];
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined1 local_2d8 [40];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280;
  FPCGAttributeIdentifier local_278;
  FName local_258;
  undefined1 auStack_250 [16];
  FName local_240;
  undefined1 auStack_238 [16];
  FName local_228;
  undefined1 auStack_220 [16];
  FName local_210;
  undefined1 auStack_208 [16];
  FPCGDataTypeIdentifier local_1f8;
  FPCGDataTypeIdentifier local_1e0;
  FPCGDataTypeIdentifier local_1c8;
  FPCGDataTypeIdentifier local_1b0;
  FPCGDataDesc local_198;
  FPCGDataDesc local_128;
  FPCGDataDesc local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_450 = __return_storage_ptr__;
  local_438 = param_2;
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGCountUniqueAttributeValuesKernel.cpp"
                         ,0x5d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar8;
  }
  if (param_1 != PCGPinConstants::DefaultOutputLabel) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1560502433434566752>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGCountUniqueAttributeValuesKernel.cpp"
                       ,0x60,"InOutputPinLabel == PCGPinConstants::DefaultOutputLabel");
    if (!bVar5) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar8;
  }
  local_430.KernelIndex = *(int *)((longlong)&this->_padding_ + 4);
  local_430.PinLabel = PCGPinConstants::DefaultInputLabel;
  local_430.bIsInput = true;
  UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_460,&local_430);
  if (local_460.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1560502433434566760>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGCountUniqueAttributeValuesKernel.cpp"
                       ,0x68,"InputDesc");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
      return pTVar8;
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    goto LAB_14974a302;
  }
  FPCGDataCollectionDesc::MakeShared(&local_448);
  if ((local_448.Object == (FPCGDataCollectionDesc *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar8;
  }
  pFVar4 = local_448.Object;
  local_418 = this->AttributeName;
  FStack_410.Flag = PCGMetadataDomainID::Default.Flag;
  FStack_410._1_3_ = PCGMetadataDomainID::Default._1_3_;
  FStack_410.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  FStack_410.DebugName = PCGMetadataDomainID::Default.DebugName;
  if ((param_2->bTablesInitialized == (atomic<bool>)0x0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8122861073268211627>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                         ,0x55,"bTablesInitialized"), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar8;
  }
  local_278.Name = local_418;
  local_278.MetadataDomain.Flag = FStack_410.Flag;
  local_278.MetadataDomain._1_3_ = FStack_410._1_3_;
  local_278.MetadataDomain.CustomFlag = FStack_410.CustomFlag;
  local_278.MetadataDomain.DebugName = FStack_410.DebugName;
  iVar6 = FPCGKernelAttributeTable::GetAttributeId(&param_2->AttributeTable,&local_278,StringKey);
  if (iVar6 == -1) {
    if (this->bOutputRawBuffer == false) {
      iVar6 = (pFVar4->DataDescs).ArrayNum;
      if (iVar6 == (pFVar4->DataDescs).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x868,(ForAnyElementType *)pFVar4,&(pFVar4->DataDescs).ArrayMax);
      }
      (pFVar4->DataDescs).ArrayNum = iVar6 + 1;
      pFVar15 = (pFVar4->DataDescs).AllocatorInstance.Data;
      pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_1b0,Param);
      pFVar11 = FPCGDataDesc::FPCGDataDesc
                          ((FPCGDataDesc *)(pFVar15 + (longlong)iVar6 * 0x68),pFVar10,1);
      auStack_220._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
      auStack_220._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
      auStack_220[0] = PCGMetadataDomainID::Default.Flag;
      auStack_220._1_3_ = PCGMetadataDomainID::Default._1_3_;
      auStack_220._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_228 = PCGCountUniqueAttributeValuesConstants::ValueAttributeName;
      local_338._0_4_ =
           PCGCountUniqueAttributeValuesConstants::ValueAttributeName.ComparisonIndex.Value;
      local_338._4_4_ = PCGCountUniqueAttributeValuesConstants::ValueAttributeName.Number;
      local_338[8] = PCGMetadataDomainID::Default.Flag;
      local_338._9_3_ = PCGMetadataDomainID::Default._1_3_;
      local_338._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_338[0x18] = Int;
      local_338._16_8_ = PCGMetadataDomainID::Default.DebugName;
      local_310 = 0;
      local_308 = 0;
      local_300 = 0;
      local_2f8 = 0;
      local_2f0 = 0;
      local_2e8 = 0;
      local_2e0 = 0;
      local_338._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
      FPCGDataDesc::AddAttribute
                (pFVar11,(FPCGKernelAttributeKey *)local_338,param_2,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
      auStack_208._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
      auStack_208._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
      auStack_208[0] = PCGMetadataDomainID::Default.Flag;
      auStack_208._1_3_ = PCGMetadataDomainID::Default._1_3_;
      auStack_208._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_210 = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
      local_2d8[0x18] = Int;
      local_2d8._0_4_ =
           PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName.ComparisonIndex.Value;
      local_2d8._4_4_ = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName.Number;
      local_2d8[8] = PCGMetadataDomainID::Default.Flag;
      local_2d8._9_3_ = PCGMetadataDomainID::Default._1_3_;
      local_2d8._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_2b0 = 0;
      local_2d8._16_8_ = PCGMetadataDomainID::Default.DebugName;
      local_2a8 = 0;
      local_2a0 = 0;
      local_298 = 0;
      local_290 = 0;
      local_288 = 0;
      local_280 = 0;
      local_2d8._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
      FPCGDataDesc::AddAttribute
                (pFVar11,(FPCGKernelAttributeKey *)local_2d8,param_2,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
    }
    else {
      pFVar9 = FPCGDataTypeInfoRawBuffer::AsId();
      iVar6 = (pFVar4->DataDescs).ArrayNum;
      if (iVar6 == (pFVar4->DataDescs).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x868,(ForAnyElementType *)pFVar4,&(pFVar4->DataDescs).ArrayMax);
      }
      (pFVar4->DataDescs).ArrayNum = iVar6 + 1;
      pFVar15 = (pFVar4->DataDescs).AllocatorInstance.Data;
      pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_1c8,pFVar9);
      FPCGDataDesc::FPCGDataDesc((FPCGDataDesc *)(pFVar15 + (longlong)iVar6 * 0x68),pFVar10,2);
    }
  }
  else {
    pFVar15 = (FScriptContainerElement *)0x0;
    local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_470.ArrayNum = 0;
    local_470.ArrayMax = 0;
    if ((local_460.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
      return pTVar8;
    }
    FPCGDataCollectionDesc::GetUniqueStringKeyValues(local_460.Object,iVar6,&local_470);
    iVar6 = local_470.ArrayNum;
    uVar12 = (ulonglong)local_470.ArrayNum;
    pFVar2 = local_470.AllocatorInstance.Data + uVar12 * 4;
    FVar13.Data = local_470.AllocatorInstance.Data;
    pFVar16 = pFVar15;
    while( true ) {
      if ((int)uVar12 != iVar6) {
        local_478[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_478);
        uVar12 = local_470._8_8_ & 0xffffffff;
      }
      if (FVar13.Data == pFVar2) break;
      if ((pFVar16 == (FScriptContainerElement *)0x0) || (*(int *)pFVar16 < *(int *)FVar13.Data)) {
        pFVar16 = FVar13.Data;
      }
      FVar13.Data = FVar13.Data + 4;
    }
    iVar6 = 0;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      iVar6 = *(int *)pFVar16;
    }
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_198.Type,Point);
    local_198.ElementDimension = One;
    local_198.AttributeDescs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.ElementCount.field0_0x0._s_0 = UE::Math::TIntVector4<int>::ZeroValue.field0_0x0;
    local_198.AttributeDescs.ArrayNum = 0;
    local_198.AttributeDescs.ArrayMax = 0;
    local_198.AllocatedPointProperties = None;
    local_198.TagStringKeys.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_198.TagStringKeys.ArrayNum = 0;
    local_198.TagStringKeys.ArrayMax = 4;
    if (this->bOutputRawBuffer == false) {
      pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_1e0,Param);
      pFVar11 = FPCGDataDesc::FPCGDataDesc(&local_b8,pFVar10,iVar6 + 1);
      FPCGDataDesc::operator=(&local_198,pFVar11);
      if (local_b8.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_b8.TagStringKeys.AllocatorInstance.SecondaryData);
      }
      DestructItems<FPCGKernelAttributeDesc,int>
                ((FPCGKernelAttributeDesc *)local_b8.AttributeDescs.AllocatorInstance.Data,
                 local_b8.AttributeDescs.ArrayNum);
      if ((FPCGKernelAttributeDesc *)local_b8.AttributeDescs.AllocatorInstance.Data !=
          (FPCGKernelAttributeDesc *)0x0) {
        FMemory::Free(local_b8.AttributeDescs.AllocatorInstance.Data);
      }
      if (local_b8.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Type.Ids.AllocatorInstance.Data);
      }
      auStack_250._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
      auStack_250._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
      auStack_250[0] = PCGMetadataDomainID::Default.Flag;
      auStack_250._1_3_ = PCGMetadataDomainID::Default._1_3_;
      auStack_250._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_258 = PCGCountUniqueAttributeValuesConstants::ValueAttributeName;
      local_3f8[0x18] = Int;
      local_3f8._0_4_ =
           PCGCountUniqueAttributeValuesConstants::ValueAttributeName.ComparisonIndex.Value;
      local_3f8._4_4_ = PCGCountUniqueAttributeValuesConstants::ValueAttributeName.Number;
      local_3f8[8] = PCGMetadataDomainID::Default.Flag;
      local_3f8._9_3_ = PCGMetadataDomainID::Default._1_3_;
      local_3f8._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_3d0 = 0;
      local_3f8._16_8_ = PCGMetadataDomainID::Default.DebugName;
      local_3c8 = 0;
      local_3c0 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_3a8 = 0;
      local_3a0 = 0;
      local_3f8._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
      FPCGDataDesc::AddAttribute
                (&local_198,(FPCGKernelAttributeKey *)local_3f8,local_438,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
      auStack_238._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
      auStack_238._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
      auStack_238[0] = PCGMetadataDomainID::Default.Flag;
      auStack_238._1_3_ = PCGMetadataDomainID::Default._1_3_;
      auStack_238._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_240 = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
      local_398[0x18] = Int;
      local_398._0_4_ =
           PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName.ComparisonIndex.Value;
      local_398._4_4_ = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName.Number;
      local_398[8] = PCGMetadataDomainID::Default.Flag;
      local_398._9_3_ = PCGMetadataDomainID::Default._1_3_;
      local_398._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_370 = 0;
      local_398._16_8_ = PCGMetadataDomainID::Default.DebugName;
      local_368 = 0;
      local_360 = 0;
      local_358 = 0;
      local_350 = 0;
      local_348 = 0;
      local_340 = 0;
      local_398._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
      FPCGDataDesc::AddAttribute
                (&local_198,(FPCGKernelAttributeKey *)local_398,local_438,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
    }
    else {
      pFVar9 = FPCGDataTypeInfoRawBuffer::AsId();
      pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_1f8,pFVar9);
      pFVar11 = FPCGDataDesc::FPCGDataDesc(&local_128,pFVar10,(iVar6 + 1) * 2);
      FPCGDataDesc::operator=(&local_198,pFVar11);
      if (local_128.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_128.TagStringKeys.AllocatorInstance.SecondaryData);
      }
      DestructItems<FPCGKernelAttributeDesc,int>
                ((FPCGKernelAttributeDesc *)local_128.AttributeDescs.AllocatorInstance.Data,
                 local_128.AttributeDescs.ArrayNum);
      if ((FPCGKernelAttributeDesc *)local_128.AttributeDescs.AllocatorInstance.Data !=
          (FPCGKernelAttributeDesc *)0x0) {
        FMemory::Free(local_128.AttributeDescs.AllocatorInstance.Data);
      }
      if (local_128.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Type.Ids.AllocatorInstance.Data);
      }
    }
    if (this->bEmitPerDataCounts == false) {
LAB_14974a1cf:
      pFVar11 = (FPCGDataDesc *)(pFVar4->DataDescs).AllocatorInstance.Data;
      if (((pFVar11 <= &local_198) && (&local_198 < pFVar11 + (pFVar4->DataDescs).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (pFVar4->DataDescs).ArrayNum;
      piVar1 = &(pFVar4->DataDescs).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x868,(ForAnyElementType *)pFVar4,piVar1);
      }
      (pFVar4->DataDescs).ArrayNum = iVar6 + 1;
      FPCGDataDesc::FPCGDataDesc
                ((FPCGDataDesc *)
                 ((pFVar4->DataDescs).AllocatorInstance.Data + (longlong)iVar6 * 0x68),&local_198);
    }
    else {
      if ((this->bOutputRawBuffer != false) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1560502433434566795>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGCountUniqueAttributeValuesKernel.cpp"
                             ,0x8b,"!bEmitPerDataCounts || !bOutputRawBuffer"), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
        return pTVar8;
      }
      if (this->bEmitPerDataCounts == false) goto LAB_14974a1cf;
      if ((local_460.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = ((local_460.Object)->DataDescs).ArrayNum;
      if ((iVar6 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
        return pTVar8;
      }
      if (0 < iVar6) {
        do {
          iVar14 = (int)pFVar15;
          if ((iVar14 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
            return pTVar8;
          }
          pFVar11 = (FPCGDataDesc *)(pFVar4->DataDescs).AllocatorInstance.Data;
          if (iVar14 < iVar6 + -1) {
            if (((pFVar11 <= &local_198) && (&local_198 < pFVar11 + (pFVar4->DataDescs).ArrayMax))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
              return pTVar8;
            }
            iVar7 = (pFVar4->DataDescs).ArrayNum;
            if (iVar7 == (pFVar4->DataDescs).ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x868,(ForAnyElementType *)pFVar4,&(pFVar4->DataDescs).ArrayMax);
            }
            (pFVar4->DataDescs).ArrayNum = iVar7 + 1;
            FPCGDataDesc::FPCGDataDesc
                      ((FPCGDataDesc *)
                       ((pFVar4->DataDescs).AllocatorInstance.Data + (longlong)iVar7 * 0x68),
                       &local_198);
          }
          else {
            if (((pFVar11 <= &local_198) && (&local_198 < pFVar11 + (pFVar4->DataDescs).ArrayMax))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
              return pTVar8;
            }
            iVar7 = (pFVar4->DataDescs).ArrayNum;
            if (iVar7 == (pFVar4->DataDescs).ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x868,(ForAnyElementType *)pFVar4,&(pFVar4->DataDescs).ArrayMax);
            }
            (pFVar4->DataDescs).ArrayNum = iVar7 + 1;
            FPCGDataDesc::FPCGDataDesc
                      ((FPCGDataDesc *)
                       ((pFVar4->DataDescs).AllocatorInstance.Data + (longlong)iVar7 * 0x68),
                       &local_198);
          }
          pFVar15 = (FScriptContainerElement *)(ulonglong)(iVar14 + 1U);
        } while ((int)(iVar14 + 1U) < iVar6);
      }
    }
    if (local_198.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_198.TagStringKeys.AllocatorInstance.SecondaryData);
    }
    DestructItems<FPCGKernelAttributeDesc,int>
              ((FPCGKernelAttributeDesc *)local_198.AttributeDescs.AllocatorInstance.Data,
               local_198.AttributeDescs.ArrayNum);
    if ((FPCGKernelAttributeDesc *)local_198.AttributeDescs.AllocatorInstance.Data !=
        (FPCGKernelAttributeDesc *)0x0) {
      FMemory::Free(local_198.AttributeDescs.AllocatorInstance.Data);
    }
    if (local_198.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Type.Ids.AllocatorInstance.Data);
    }
    __return_storage_ptr__ = local_450;
    if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.AllocatorInstance.Data);
      __return_storage_ptr__ = local_450;
    }
  }
  __return_storage_ptr__->Object = local_448.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_448.SharedReferenceCount.ReferenceController;
  if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.SharedReferenceCount.ReferenceController);
LAB_14974a302:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_460.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 14974a800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UPCGCountUniqueAttributeValuesKernel::ComputeThreadCount
          (UPCGCountUniqueAttributeValuesKernel *this,UPCGDataBinding *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_58;
  FName local_48;
  FPCGMetadataDomainID FStack_40;
  FPCGAttributeIdentifier local_28;
  
  UPCGDataBinding::GetCachedKernelPinDataDesc
            (param_1,&local_58,(UPCGComputeKernel *)this,PCGPinConstants::DefaultInputLabel,true);
  if (local_58.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1560502433434566844>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGCountUniqueAttributeValuesKernel.cpp"
                       ,0xbc,"InputPinDesc");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    uVar5 = 0;
  }
  else {
    if ((local_58.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    uVar4 = FPCGDataCollectionDesc::ComputeTotalElementCount(local_58.Object);
    local_48 = this->AttributeName;
    FStack_40.Flag = PCGMetadataDomainID::Default.Flag;
    FStack_40._1_3_ = PCGMetadataDomainID::Default._1_3_;
    FStack_40.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    FStack_40.DebugName = PCGMetadataDomainID::Default.DebugName;
    if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8122861073268211627>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                           ,0x55,"bTablesInitialized"), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    local_28.Name = local_48;
    local_28.MetadataDomain.Flag = FStack_40.Flag;
    local_28.MetadataDomain._1_3_ = FStack_40._1_3_;
    local_28.MetadataDomain.CustomFlag = FStack_40.CustomFlag;
    local_28.MetadataDomain.DebugName = FStack_40.DebugName;
    iVar3 = FPCGKernelAttributeTable::GetAttributeId(&param_1->AttributeTable,&local_28,StringKey);
    if (iVar3 == -1) {
      uVar5 = 0;
    }
    else {
      if ((local_58.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar5 = FPCGDataCollectionDesc::GetNumStringKeyValues(local_58.Object,iVar3);
    }
    if ((int)uVar5 < (int)uVar4) {
      uVar5 = uVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return uVar5;
}

// DoesOutputPinRequireZeroInitialization @ 14974fd40

bool __thiscall
UPCGCountUniqueAttributeValuesKernel::DoesOutputPinRequireZeroInitialization
          (UPCGCountUniqueAttributeValuesKernel *this,FName param_1)

{
  return param_1 == PCGPinConstants::DefaultOutputLabel;
}

// GetInputPins @ 149759c20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGCountUniqueAttributeValuesKernel::GetInputPins
          (UPCGCountUniqueAttributeValuesKernel *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return;
}

// GetKernelAttributeKeys @ 149759d20

void __thiscall
UPCGCountUniqueAttributeValuesKernel::GetKernelAttributeKeys
          (UPCGCountUniqueAttributeValuesKernel *this,
          TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  if (this->bOutputRawBuffer == false) {
    local_68._0_8_ = PCGCountUniqueAttributeValuesConstants::ValueAttributeName;
    local_68._8_8_ = PCGMetadataDomainID::Default._0_8_;
    local_68._16_8_ = PCGMetadataDomainID::Default.DebugName;
    local_68[0x18] = Int;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = (FString *)0x0;
    local_18 = 0;
    local_10 = 0;
    local_68._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FPCGKernelAttributeKey>(param_1,(FPCGKernelAttributeKey *)local_68);
    DestructItems<FString,int>(local_20,(int)local_18);
    if (local_20 != (FString *)0x0) {
      FMemory::Free(local_20);
    }
    local_68._0_4_ =
         PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName.ComparisonIndex.Value;
    local_68._4_4_ = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName.Number;
    local_68[8] = PCGMetadataDomainID::Default.Flag;
    local_68._9_3_ = PCGMetadataDomainID::Default._1_3_;
    local_68._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
    local_68._16_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
    local_68._20_4_ = PCGMetadataDomainID::Default.DebugName.Number;
    local_68[0x18] = Int;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = (FString *)0x0;
    local_18 = 0;
    local_10 = 0;
    local_68._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FPCGKernelAttributeKey>(param_1,(FPCGKernelAttributeKey *)local_68);
    DestructItems<FString,int>(local_20,(int)local_18);
    if (local_20 != (FString *)0x0) {
      FMemory::Free(local_20);
    }
  }
  return;
}

// GetOutputPins @ 14975a790

void __thiscall
UPCGCountUniqueAttributeValuesKernel::GetOutputPins
          (UPCGCountUniqueAttributeValuesKernel *this,
          TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGDataTypeBaseId *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  UScriptStruct *pUVar5;
  FPCGDataTypeIdentifier local_28;
  
  if (this->bOutputRawBuffer == false) {
    pFVar3 = &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
              ::__l2::Id;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        pUVar5 = FPCGDataTypeInfoParam::StaticStruct();
        FPCGDataTypeBaseId::FPCGDataTypeBaseId
                  (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                    ::__l2::Id,pUVar5);
        _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
  }
  else {
    pFVar3 = FPCGDataTypeInfoRawBuffer::AsId();
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,pFVar3);
  FPCGPinPropertiesGPU::FPCGPinPropertiesGPU
            ((FPCGPinPropertiesGPU *)(pFVar1 + (longlong)iVar2 * 0x78),
             &PCGPinConstants::DefaultOutputLabel,pFVar4);
  return;
}

// GetPrivateStaticClass @ 14975b080

UClass * __cdecl UPCGCountUniqueAttributeValuesKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesKernel",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton,
               StaticRegisterNativesUPCGCountUniqueAttributeValuesKernel,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCountUniqueAttributeValuesKernel>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton;
}

// IsKernelDataValid @ 14976b8d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UPCGCountUniqueAttributeValuesKernel::IsKernelDataValid
          (UPCGCountUniqueAttributeValuesKernel *this,FPCGContext *param_1)

{
  int iVar1;
  code *pcVar2;
  FPCGMetadataDomainID FVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  UPCGSettings *pUVar10;
  bool bVar11;
  bool local_res18 [8];
  bool local_res20 [8];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_1a8;
  undefined1 local_198 [48];
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  FString *pFStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ForAnyElementType local_130;
  undefined8 local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FPCGAttributeIdentifier local_98;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  FText local_38;
  FTextFormat local_28;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId25,"UPCGCountUniqueAttributeValuesKernel::IsKernelDataValid"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGCountUniqueAttributeValuesKernel.cpp"
               ,0x19);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId25);
  }
  bVar4 = UPCGComputeKernel::IsKernelDataValid((UPCGComputeKernel *)this,param_1);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_14976bdee;
  }
  if (((param_1 == (FPCGContext *)0x0) ||
      (cVar5 = (**(code **)(param_1->_padding_ + 0x10))(param_1), cVar5 == '\0')) ||
     ((UPCGDataBinding *)param_1[1]._padding_ == (UPCGDataBinding *)0x0)) {
LAB_14976bdeb:
    bVar4 = true;
    goto LAB_14976bdee;
  }
  UPCGDataBinding::GetCachedKernelPinDataDesc
            ((UPCGDataBinding *)param_1[1]._padding_,&local_1a8,(UPCGComputeKernel *)this,
             PCGPinConstants::DefaultInputLabel,true);
  if (local_1a8.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1560502433434566699>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGCountUniqueAttributeValuesKernel.cpp"
                       ,0x2b,"InputDataDesc");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  else {
    if ((local_1a8.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    iVar1 = ((local_1a8.Object)->DataDescs).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (iVar1 == 0) {
LAB_14976bde1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      goto LAB_14976bdeb;
    }
    local_198._0_4_ = -1;
    local_198._8_4_ = 0;
    local_198._12_4_ = 0;
    local_198[0x10] = Default;
    local_198._17_3_ = 0;
    local_198._20_4_ = -1;
    local_198._24_4_ = 0;
    local_198._28_4_ = 0;
    local_198[0x20] = Float;
    local_198._33_3_ = 0;
    local_198._36_4_ = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    pFStack_148 = (FString *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    local_198._40_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128._0_4_ = 0;
    local_128._4_4_ = 0;
    local_res20[0] = false;
    local_res18[0] = false;
    if ((local_1a8.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    local_b8 = this->AttributeName;
    FStack_b0 = PCGMetadataDomainID::Default;
    FVar3 = FStack_b0;
    FStack_b0._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_98.MetadataDomain.Flag = FStack_b0.Flag;
    local_98.MetadataDomain._1_3_ = FStack_b0._1_3_;
    local_98.MetadataDomain.CustomFlag = FStack_b0.CustomFlag;
    local_98.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    FStack_b0 = FVar3;
    local_98.Name = local_b8;
    FPCGDataCollectionDesc::GetAttributeDesc
              (local_1a8.Object,&local_98,(FPCGKernelAttributeDesc *)local_198,local_res20,
               local_res18);
    if (local_res18[0] == false) {
      if ((local_1a8.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar1 = ((local_1a8.Object)->DataDescs).ArrayNum;
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
LAB_14976bbc3:
        pFVar7 = FText::FromName(&local_78,&this->AttributeName);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_108,L"PCGCountUniqueAttributeValuesKernel",L"AttributeMissing",
                            L"Count attribute \'{0}\' not found, this attribute must be present on all input data, and be of type String Key."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_68,pFVar8,Default);
        pFVar7 = FText::Format<FText>(&local_118,pFVar9,pFVar7);
        pUVar10 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
        PCGComputeHelpers::LogKernelError(param_1,pUVar10,pFVar7);
        local_c8.TextData.Reference = local_108.TextData.Reference;
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
          local_c8.TextData.Reference = local_108.TextData.Reference;
        }
        goto LAB_14976bd77;
      }
      if (iVar1 != 0) goto LAB_14976bbc3;
    }
    else {
      if (local_res20[0] == false) {
        if (local_198[0x20] == StringKey) {
          if (local_130.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data);
          }
          DestructItems<FString,int>(pFStack_148,(int)local_140);
          if (pFStack_148 != (FString *)0x0) {
            FMemory::Free(pFStack_148);
          }
          goto LAB_14976bde1;
        }
        pFVar7 = FText::FromName(&local_38,&this->AttributeName);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_c8,L"PCGCountUniqueAttributeValuesKernel",L"AttributeTypeInvalid"
                            ,
                            L"Cannot count values for attribute \'{0}\', only attributes of type String Key are currently supported."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
        pFVar7 = FText::Format<FText>(&local_d8,pFVar9,pFVar7);
        pUVar10 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
        PCGComputeHelpers::LogKernelError(param_1,pUVar10,pFVar7);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
        }
      }
      else {
        pFVar7 = FText::FromName(&local_58,&this->AttributeName);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_e8,L"PCGCountUniqueAttributeValuesKernel",
                            L"AttributeHasMultipleTypes",
                            L"Count attribute \'{0}\' found with multiple types in input data, all attributes must be of type String Key."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
        pFVar7 = FText::Format<FText>(&local_f8,pFVar9,pFVar7);
        pUVar10 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
        PCGComputeHelpers::LogKernelError(param_1,pUVar10,pFVar7);
        local_c8.TextData.Reference = local_e8.TextData.Reference;
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
          local_c8.TextData.Reference = local_e8.TextData.Reference;
        }
      }
LAB_14976bd77:
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
    }
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    DestructItems<FString,int>(pFStack_148,(int)local_140);
    if (pFStack_148 != (FString *)0x0) {
      FMemory::Free(pFStack_148);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  bVar4 = false;
LAB_14976bdee:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// StaticRegisterNativesUPCGCountUniqueAttributeValuesKernel @ 149778640

void __cdecl
UPCGCountUniqueAttributeValuesKernel::StaticRegisterNativesUPCGCountUniqueAttributeValuesKernel
          (void)

{
  return;
}

