// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149b32590

UClass * __cdecl UPCGCopyPointsAnalysisKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsAnalysisKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsAnalysisKernel",
               &Z_Registration_Info_UClass_UPCGCopyPointsAnalysisKernel.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsAnalysisKernel,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyPointsAnalysisKernel>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsAnalysisKernel.InnerSingleton;
}

// UPCGCopyPointsAnalysisKernel @ 149b55990

UPCGCopyPointsAnalysisKernel * __thiscall
UPCGCopyPointsAnalysisKernel::UPCGCopyPointsAnalysisKernel
          (UPCGCopyPointsAnalysisKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGCopyPointsAnalysisKernel__6B_;
  return this;
}

// UPCGCopyPointsAnalysisKernel @ 149b559c0

UPCGCopyPointsAnalysisKernel * __thiscall
UPCGCopyPointsAnalysisKernel::UPCGCopyPointsAnalysisKernel
          (UPCGCopyPointsAnalysisKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGCopyPointsAnalysisKernel__6B_;
  return this;
}

// ~UPCGCopyPointsAnalysisKernel @ 149b58bd0

void __thiscall
UPCGCopyPointsAnalysisKernel::~UPCGCopyPointsAnalysisKernel(UPCGCopyPointsAnalysisKernel *this)

{
  *(undefined ***)this = &___7UPCGCopyPointsAnalysisKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 149b67f60

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
UPCGCopyPointsAnalysisKernel::ComputeOutputBindingDataDesc
          (UPCGCopyPointsAnalysisKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FPCGDataCollectionDesc *pFVar5;
  FPCGMetadataDomainID FVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar9;
  FPCGKernelParams *this_00;
  char *pcVar10;
  FName *pFVar11;
  FPCGDataTypeIdentifier *pFVar12;
  FPCGDataDesc *this_01;
  atomic<unsigned_char> *paVar13;
  uint uVar14;
  FName local_res20;
  TSharedPtr<FPCGDataCollectionDesc,1> local_168;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_158;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_148;
  FPCGKernelPin local_138;
  FPCGKernelPin local_128;
  undefined1 local_118 [40];
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  FName local_b8;
  FPCGMetadataDomainID aFStack_b0 [4];
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  FPCGDataTypeIdentifier local_38;
  
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsAnalysisKernel.cpp"
                         ,0x2b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
    return pTVar9;
  }
  this_00 = UPCGDataBinding::GetCachedKernelParams(param_2,(UPCGComputeKernel *)this);
  if (this_00 == (FPCGKernelParams *)0x0) {
    pcVar10 = "KernelParams";
    iVar8 = 0x2f;
    paVar13 = &bGEnsureHasExecuted<4227708395907448879>;
  }
  else {
    if (param_1 == PCGPinConstants::DefaultOutputLabel) {
      local_138.KernelIndex = *(int *)&this->field_0x3c;
      local_138.PinLabel = PCGCopyPointsConstants::SourcePointsLabel;
      local_128.PinLabel = PCGCopyPointsConstants::TargetPointsLabel;
      local_138.bIsInput = true;
      local_128.bIsInput = true;
      local_128.KernelIndex = local_138.KernelIndex;
      UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_148,&local_138);
      UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_158,&local_128);
      if ((local_148.Object == (FPCGDataCollectionDesc *)0x0) ||
         (local_158.Object == (FPCGDataCollectionDesc *)0x0)) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4227708395907448896>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsAnalysisKernel.cpp"
                           ,0x40,"SourcesDesc && TargetsDesc");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar9;
        }
        __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        FPCGDataCollectionDesc::MakeShared(&local_168);
        if ((local_148.Object == (FPCGDataCollectionDesc *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar9;
        }
        uVar2 = ((local_148.Object)->DataDescs).ArrayNum;
        if (((int)uVar2 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar9;
        }
        if ((local_158.Object == (FPCGDataCollectionDesc *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar9;
        }
        uVar14 = ((local_158.Object)->DataDescs).ArrayNum;
        if (((int)uVar14 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar9;
        }
        pFVar11 = ::FName::FName(&local_res20,0x1c,L"bCopyEachSourceOnEveryTarget",FNAME_Add);
        bVar7 = FPCGKernelParams::GetValueBool(this_00,*pFVar11);
        if (bVar7) {
          uVar14 = uVar14 * uVar2;
        }
        else if (uVar14 < uVar2) {
          uVar14 = uVar2;
        }
        if ((local_168.Object == (FPCGDataCollectionDesc *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar9;
        }
        pFVar5 = local_168.Object;
        iVar8 = ((local_168.Object)->DataDescs).ArrayNum;
        piVar1 = &((local_168.Object)->DataDescs).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x868,(ForAnyElementType *)local_168.Object,piVar1);
          (pFVar5->DataDescs).ArrayNum = iVar8;
        }
        (pFVar5->DataDescs).ArrayNum = iVar8 + 1;
        pFVar3 = (pFVar5->DataDescs).AllocatorInstance.Data;
        pFVar12 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Param);
        this_01 = FPCGDataDesc::FPCGDataDesc
                            ((FPCGDataDesc *)(pFVar3 + (longlong)iVar8 * 0x68),pFVar12,uVar14);
        local_b8 = PCGCopyPointsConstants::SelectedFlagAttributeName;
        local_118[0x18] = Bool;
        aFStack_b0[0] = PCGMetadataDomainID::Default;
        FVar6 = aFStack_b0[0];
        local_6c = 0;
        aFStack_b0[0]._0_8_ = PCGMetadataDomainID::Default._0_8_;
        local_64 = 0;
        local_5c = 0;
        local_f0 = 0;
        local_ec = 0;
        local_e4 = 0;
        local_dc = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_118._0_4_ = PCGCopyPointsConstants::SelectedFlagAttributeName.ComparisonIndex.Value;
        local_118._4_4_ = PCGCopyPointsConstants::SelectedFlagAttributeName.Number;
        local_118[8] = aFStack_b0[0].Flag;
        local_118._9_3_ = aFStack_b0[0]._1_3_;
        local_118._12_4_ = aFStack_b0[0].CustomFlag;
        local_118._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
        local_118._16_8_ = PCGMetadataDomainID::Default.DebugName;
        aFStack_b0[0] = FVar6;
        FPCGDataDesc::AddAttribute
                  (this_01,(FPCGKernelAttributeKey *)local_118,param_2,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
        __return_storage_ptr__->Object = local_168.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_168.SharedReferenceCount.ReferenceController;
        if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        DestructItems<FString,int>((FString *)0x0,0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    pcVar10 = "InOutputPinLabel == PCGPinConstants::DefaultOutputLabel";
    iVar8 = 0x35;
    paVar13 = &bGEnsureHasExecuted<4227708395907448885>;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar13,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsAnalysisKernel.cpp"
                     ,iVar8,pcVar10);
  if (!bVar7) {
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pcVar4 = (code *)swi(3);
  pTVar9 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
  return pTVar9;
}

// ComputeThreadCount @ 149b69210

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
UPCGCopyPointsAnalysisKernel::ComputeThreadCount
          (UPCGCopyPointsAnalysisKernel *this,UPCGDataBinding *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_18;
  
  UPCGDataBinding::GetCachedKernelPinDataDesc
            (param_1,&local_18,(UPCGComputeKernel *)this,PCGPinConstants::DefaultOutputLabel,false);
  if (local_18.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4227708395907448922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsAnalysisKernel.cpp"
                       ,0x5a,"OutputPinDesc");
    if (!bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return 0;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((local_18.Object == (FPCGDataCollectionDesc *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar4 = FPCGDataCollectionDesc::ComputeTotalElementCount(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return uVar4;
}

// GetInputPins @ 149b8f060

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGCopyPointsAnalysisKernel::GetInputPins
          (UPCGCopyPointsAnalysisKernel *this,
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
             &PCGCopyPointsConstants::SourcePointsLabel,pFVar4,true,true,pFVar3);
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
             &PCGCopyPointsConstants::TargetPointsLabel,pFVar4,true,true,pFVar3);
  return;
}

// GetKernelAttributeKeys @ 149b8f2d0

void __thiscall
UPCGCopyPointsAnalysisKernel::GetKernelAttributeKeys
          (UPCGCopyPointsAnalysisKernel *this,
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
  
  local_68._0_8_ = PCGCopyPointsConstants::SelectedFlagAttributeName;
  local_68._8_8_ = PCGMetadataDomainID::Default._0_8_;
  local_68._16_8_ = PCGMetadataDomainID::Default.DebugName;
  local_68[0x18] = Bool;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_68._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPCGKernelAttributeKey>
            (param_1,(FPCGKernelAttributeKey *)local_68);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// GetOutputPins @ 149b8f360

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGCopyPointsAnalysisKernel::GetOutputPins
          (UPCGCopyPointsAnalysisKernel *this,
          TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinPropertiesGPU::FPCGPinPropertiesGPU
            ((FPCGPinPropertiesGPU *)(pFVar1 + (longlong)iVar2 * 0x78),
             &PCGPinConstants::DefaultOutputLabel,pFVar3);
  return;
}

// GetPrivateStaticClass @ 149b8fd80

UClass * __cdecl UPCGCopyPointsAnalysisKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsAnalysisKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsAnalysisKernel",
               &Z_Registration_Info_UClass_UPCGCopyPointsAnalysisKernel.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsAnalysisKernel,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyPointsAnalysisKernel>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsAnalysisKernel.InnerSingleton;
}

// IsKernelDataValid @ 149b93710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGCopyPointsAnalysisKernel::IsKernelDataValid
          (UPCGCopyPointsAnalysisKernel *this,FPCGContext *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId26,"UPCGCopyPointsAnalysisKernel::IsKernelDataValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsAnalysisKernel.cpp"
               ,0x1a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId26);
  }
  bVar1 = UPCGComputeKernel::IsKernelDataValid((UPCGComputeKernel *)this,param_1);
  if (bVar1) {
    if ((param_1 == (FPCGContext *)0x0) ||
       (cVar2 = (**(code **)(param_1->_padding_ + 0x10))(param_1), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = PCGCopyPointsKernel::IsKernelDataValid
                        ((UPCGComputeKernel *)this,(FPCGComputeGraphContext *)param_1);
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// StaticRegisterNativesUPCGCopyPointsAnalysisKernel @ 149b98380

void __cdecl UPCGCopyPointsAnalysisKernel::StaticRegisterNativesUPCGCopyPointsAnalysisKernel(void)

{
  return;
}

