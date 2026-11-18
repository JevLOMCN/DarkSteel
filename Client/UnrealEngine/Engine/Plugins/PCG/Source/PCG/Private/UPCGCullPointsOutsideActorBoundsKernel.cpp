// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149789620

UClass * __cdecl UPCGCullPointsOutsideActorBoundsKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsKernel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCullPointsOutsideActorBoundsKernel",
               &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsKernel.InnerSingleton,
               StaticRegisterNativesUPCGCullPointsOutsideActorBoundsKernel,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCullPointsOutsideActorBoundsKernel>,
               InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsKernel.InnerSingleton;
}

// UPCGCullPointsOutsideActorBoundsKernel @ 1497e0a70

UPCGCullPointsOutsideActorBoundsKernel * __thiscall
UPCGCullPointsOutsideActorBoundsKernel::UPCGCullPointsOutsideActorBoundsKernel
          (UPCGCullPointsOutsideActorBoundsKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGCullPointsOutsideActorBoundsKernel__6B_;
  return this;
}

// UPCGCullPointsOutsideActorBoundsKernel @ 1497e0aa0

UPCGCullPointsOutsideActorBoundsKernel * __thiscall
UPCGCullPointsOutsideActorBoundsKernel::UPCGCullPointsOutsideActorBoundsKernel
          (UPCGCullPointsOutsideActorBoundsKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGCullPointsOutsideActorBoundsKernel__6B_;
  return this;
}

// ~UPCGCullPointsOutsideActorBoundsKernel @ 1497e2e60

void __thiscall
UPCGCullPointsOutsideActorBoundsKernel::~UPCGCullPointsOutsideActorBoundsKernel
          (UPCGCullPointsOutsideActorBoundsKernel *this)

{
  *(undefined ***)this = &___7UPCGCullPointsOutsideActorBoundsKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 1497f3500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGCullPointsOutsideActorBoundsKernel::ComputeOutputBindingDataDesc
          (UPCGCullPointsOutsideActorBoundsKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar3;
  FPCGKernelPin local_18;
  
  if (param_2 == (UPCGDataBinding *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCullPointsOutsideActorBoundsKernel.cpp"
                       ,0x13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1 == PCGPinConstants::DefaultOutputLabel) {
    local_18.KernelIndex = *(int *)&this->field_0x3c;
    local_18.PinLabel = PCGPinConstants::DefaultInputLabel;
    local_18.bIsInput = true;
    UPCGDataBinding::ComputeKernelPinDataDesc(param_2,__return_storage_ptr__,&local_18);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7887255187637665814>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCullPointsOutsideActorBoundsKernel.cpp"
                       ,0x16,"InOutputPinLabel == PCGPinConstants::DefaultOutputLabel");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 1497f5830

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
UPCGCullPointsOutsideActorBoundsKernel::ComputeThreadCount
          (UPCGCullPointsOutsideActorBoundsKernel *this,UPCGDataBinding *param_1)

{
  UPCGComputeGraph *this_00;
  code *pcVar1;
  FPCGDataCollectionDesc *this_01;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_28;
  FPCGKernelPin local_18;
  
  this_00 = (param_1->Graph).field0_0x0.DebugPtr;
  if (this_00 == (UPCGComputeGraph *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xa7,"Graph");
    if (bVar2) {
code_r0x0001497f58a9:
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    local_28.Object = (FPCGDataCollectionDesc *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else if (this == (UPCGCullPointsOutsideActorBoundsKernel *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xa7,"InKernel");
    if (bVar2) goto code_r0x0001497f58a9;
    local_28.Object = (FPCGDataCollectionDesc *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_18.KernelIndex = *(int *)&this->field_0x3c;
    local_18.PinLabel = PCGPinConstants::DefaultOutputLabel;
    local_18.bIsInput = false;
    iVar3 = UPCGComputeGraph::GetBindingIndex(this_00,&local_18);
    UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_28,iVar3);
  }
  this_01 = local_28.Object;
  if (local_28.Object != (FPCGDataCollectionDesc *)0x0) {
    if (local_28.Object == (FPCGDataCollectionDesc *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    uVar4 = FPCGDataCollectionDesc::ComputeTotalElementCount(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return uVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7887255187637665826>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCullPointsOutsideActorBoundsKernel.cpp"
                     ,0x22,"OutputPinDesc");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return 0;
}

// GetInputPins @ 149815100

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGCullPointsOutsideActorBoundsKernel::GetInputPins
          (UPCGCullPointsOutsideActorBoundsKernel *this,
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

// GetOutputPins @ 1498167f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGCullPointsOutsideActorBoundsKernel::GetOutputPins
          (UPCGCullPointsOutsideActorBoundsKernel *this,
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
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinPropertiesGPU::FPCGPinPropertiesGPU
            ((FPCGPinPropertiesGPU *)(pFVar1 + (longlong)iVar2 * 0x78),
             &PCGPinConstants::DefaultOutputLabel,pFVar3);
  return;
}

// GetPrivateStaticClass @ 1498175d0

UClass * __cdecl UPCGCullPointsOutsideActorBoundsKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsKernel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCullPointsOutsideActorBoundsKernel",
               &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsKernel.InnerSingleton,
               StaticRegisterNativesUPCGCullPointsOutsideActorBoundsKernel,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCullPointsOutsideActorBoundsKernel>,
               InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsKernel.InnerSingleton;
}

// StaticRegisterNativesUPCGCullPointsOutsideActorBoundsKernel @ 1498471b0

void __cdecl
UPCGCullPointsOutsideActorBoundsKernel::StaticRegisterNativesUPCGCullPointsOutsideActorBoundsKernel
          (void)

{
  return;
}

