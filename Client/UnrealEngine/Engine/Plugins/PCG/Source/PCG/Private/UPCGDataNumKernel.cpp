// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 14972b450

UClass * __cdecl UPCGDataNumKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataNumKernel",
               &Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton,
               StaticRegisterNativesUPCGDataNumKernel,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDataNumKernel>,
               InternalVTableHelperCtorCaller<UPCGDataNumKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton;
}

// UPCGDataNumKernel @ 14973b800

UPCGDataNumKernel * __thiscall
UPCGDataNumKernel::UPCGDataNumKernel(UPCGDataNumKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataNumKernel__6B_;
  (this->OutCountAttributeKey).Identifier.Name.ComparisonIndex = 0;
  (this->OutCountAttributeKey).Identifier.Name.Number = 0;
  (this->OutCountAttributeKey).Identifier.MetadataDomain.Flag = Default;
  (this->OutCountAttributeKey).Identifier.MetadataDomain.CustomFlag = -1;
  (this->OutCountAttributeKey).Identifier.MetadataDomain.DebugName.ComparisonIndex = 0;
  (this->OutCountAttributeKey).Identifier.MetadataDomain.DebugName.Number = 0;
  (this->OutCountAttributeKey).Type = Float;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x8 = 0;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x10 = 0;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x18 = 0;
  *(undefined4 *)&(this->OutCountAttributeKey).Name.field_0x20 = 0;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x28 = 0;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x30 = 0;
  (this->OutCountAttributeKey).Name.field_0x38 = 0;
  *(undefined ***)&(this->OutCountAttributeKey).Name =
       &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return this;
}

// UPCGDataNumKernel @ 14973b890

UPCGDataNumKernel * __thiscall
UPCGDataNumKernel::UPCGDataNumKernel(UPCGDataNumKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataNumKernel__6B_;
  (this->OutCountAttributeKey).Identifier.Name.ComparisonIndex = 0;
  (this->OutCountAttributeKey).Identifier.Name.Number = 0;
  (this->OutCountAttributeKey).Identifier.MetadataDomain.Flag = Default;
  (this->OutCountAttributeKey).Identifier.MetadataDomain.CustomFlag = -1;
  (this->OutCountAttributeKey).Identifier.MetadataDomain.DebugName.ComparisonIndex = 0;
  (this->OutCountAttributeKey).Identifier.MetadataDomain.DebugName.Number = 0;
  (this->OutCountAttributeKey).Type = Float;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x8 = 0;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x10 = 0;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x18 = 0;
  *(undefined4 *)&(this->OutCountAttributeKey).Name.field_0x20 = 0;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x28 = 0;
  *(undefined8 *)&(this->OutCountAttributeKey).Name.field_0x30 = 0;
  (this->OutCountAttributeKey).Name.field_0x38 = 0;
  *(undefined ***)&(this->OutCountAttributeKey).Name =
       &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return this;
}

// ~UPCGDataNumKernel @ 14973e020

void __thiscall UPCGDataNumKernel::~UPCGDataNumKernel(UPCGDataNumKernel *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGDataNumKernel__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutCountAttributeKey).Name.field_0x28,
             *(int *)&(this->OutCountAttributeKey).Name.field_0x30);
  pvVar1 = *(void **)&(this->OutCountAttributeKey).Name.field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 14974a510

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
UPCGDataNumKernel::ComputeOutputBindingDataDesc
          (UPCGDataNumKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FPCGDataCollectionDesc *pFVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar7;
  FPCGDataTypeIdentifier *pFVar8;
  FPCGDataDesc *this_00;
  TSharedPtr<FPCGDataCollectionDesc,1> local_98;
  undefined1 local_88 [32];
  FPCGAttributePropertySelector local_68;
  FPCGDataTypeIdentifier local_28;
  
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGDataNumKernel.cpp"
                         ,0x13,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar7;
  }
  if (param_1 == PCGPinConstants::DefaultOutputLabel) {
    FPCGDataCollectionDesc::MakeShared(&local_98);
    if ((local_98.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar4 = local_98.Object;
    iVar6 = ((local_98.Object)->DataDescs).ArrayNum;
    piVar1 = &((local_98.Object)->DataDescs).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,(ForAnyElementType *)local_98.Object,piVar1);
      (pFVar4->DataDescs).ArrayNum = iVar6;
    }
    (pFVar4->DataDescs).ArrayNum = iVar6 + 1;
    pFVar2 = (pFVar4->DataDescs).AllocatorInstance.Data;
    pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    this_00 = FPCGDataDesc::FPCGDataDesc((FPCGDataDesc *)(pFVar2 + (longlong)iVar6 * 0x68),pFVar8,1)
    ;
    local_88[0x18] = (this->OutCountAttributeKey).Type;
    local_88._0_8_ = (this->OutCountAttributeKey).Identifier.Name;
    local_88[8] = (this->OutCountAttributeKey).Identifier.MetadataDomain.Flag;
    local_88._9_3_ =
         *(undefined3 *)&(this->OutCountAttributeKey).Identifier.MetadataDomain.field_0x1;
    local_88._12_4_ = (this->OutCountAttributeKey).Identifier.MetadataDomain.CustomFlag;
    local_88._16_8_ = (this->OutCountAttributeKey).Identifier.MetadataDomain.DebugName;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              (&local_68,(FPCGAttributePropertySelector *)&(this->OutCountAttributeKey).Name);
    local_68._padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    FPCGDataDesc::AddAttribute
              (this_00,(FPCGKernelAttributeKey *)local_88,param_2,
               (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
    __return_storage_ptr__->Object = local_98.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3514860257039876074>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\BuiltInKernels\\PCGDataNumKernel.cpp"
                       ,0x16,"InOutputPinLabel == PCGPinConstants::DefaultOutputLabel");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
      return pTVar7;
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 14974a9b0

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
UPCGDataNumKernel::ComputeThreadCount(UPCGDataNumKernel *this,UPCGDataBinding *param_1)

{
  return 1;
}

// GetInputPins @ 149759ca0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGDataNumKernel::GetInputPins
          (UPCGDataNumKernel *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

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

// GetKernelAttributeKeys @ 149759e50

void __thiscall
UPCGDataNumKernel::GetKernelAttributeKeys
          (UPCGDataNumKernel *this,
          TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FPCGKernelAttributeKey_const_&>(param_1,&this->OutCountAttributeKey);
  return;
}

// GetOutputPins @ 14975a870

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGDataNumKernel::GetOutputPins
          (UPCGDataNumKernel *this,TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *param_1
          )

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

// GetPrivateStaticClass @ 14975ba40

UClass * __cdecl UPCGDataNumKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataNumKernel",
               &Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton,
               StaticRegisterNativesUPCGDataNumKernel,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDataNumKernel>,
               InternalVTableHelperCtorCaller<UPCGDataNumKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton;
}

// StaticRegisterNativesUPCGDataNumKernel @ 149778710

void __cdecl UPCGDataNumKernel::StaticRegisterNativesUPCGDataNumKernel(void)

{
  return;
}

