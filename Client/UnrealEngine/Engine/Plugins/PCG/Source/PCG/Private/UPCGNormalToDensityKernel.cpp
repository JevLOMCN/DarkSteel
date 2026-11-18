// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14978b410

UClass * __cdecl UPCGNormalToDensityKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNormalToDensityKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNormalToDensityKernel",
               &Z_Registration_Info_UClass_UPCGNormalToDensityKernel.InnerSingleton,
               StaticRegisterNativesUPCGNormalToDensityKernel,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGNormalToDensityKernel>,
               InternalVTableHelperCtorCaller<UPCGNormalToDensityKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensityKernel.InnerSingleton;
}

// UPCGNormalToDensityKernel @ 1497e1600

UPCGNormalToDensityKernel * __thiscall
UPCGNormalToDensityKernel::UPCGNormalToDensityKernel
          (UPCGNormalToDensityKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGNormalToDensityKernel__6B_;
  return this;
}

// UPCGNormalToDensityKernel @ 1497e1630

UPCGNormalToDensityKernel * __thiscall
UPCGNormalToDensityKernel::UPCGNormalToDensityKernel
          (UPCGNormalToDensityKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGNormalToDensityKernel__6B_;
  return this;
}

// ~UPCGNormalToDensityKernel @ 1497e3260

void __thiscall
UPCGNormalToDensityKernel::~UPCGNormalToDensityKernel(UPCGNormalToDensityKernel *this)

{
  *(undefined ***)this = &___7UPCGNormalToDensityKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 1497f47e0

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
UPCGNormalToDensityKernel::ComputeOutputBindingDataDesc
          (UPCGNormalToDensityKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int iVar1;
  code *pcVar2;
  FPCGDataCollectionDesc *pFVar3;
  bool bVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [8];
  TSharedPtr<FPCGDataCollectionDesc,1> local_58;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_48;
  FPCGKernelPin local_38;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_28;
  
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGNormalToDensityKernel.cpp"
                         ,0x12,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
    return pTVar5;
  }
  if (param_1 == PCGPinConstants::DefaultOutputLabel) {
    local_38.KernelIndex = *(int *)&this->field_0x3c;
    local_38.PinLabel = PCGPinConstants::DefaultInputLabel;
    local_38.bIsInput = true;
    UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_48,&local_38);
    if (local_48.Object == (FPCGDataCollectionDesc *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5123830752164708381>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGNormalToDensityKernel.cpp"
                         ,0x1d,"InDataDesc");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
        return pTVar5;
      }
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_28.Object = local_48.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FPCGDataCollectionDesc::MakeSharedFrom(&local_58,&local_28);
      if ((local_58.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
        return pTVar5;
      }
      pFVar3 = local_58.Object;
      iVar1 = ((local_58.Object)->DataDescs).ArrayNum;
      pFVar6 = ((local_58.Object)->DataDescs).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)iVar1 * 0x68;
      while( true ) {
        if ((pFVar3->DataDescs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar6 == pFVar7) break;
        if ((*(uint *)(pFVar6 + 0x40) & 1) != 0) {
          *(uint *)(pFVar6 + 0x40) = *(uint *)(pFVar6 + 0x40) | 2;
        }
        pFVar6 = pFVar6 + 0x68;
      }
      __return_storage_ptr__->Object = local_58.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5123830752164708373>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGNormalToDensityKernel.cpp"
                       ,0x15,"InOutputPinLabel == PCGPinConstants::DefaultOutputLabel");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 1497f5d40

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
UPCGNormalToDensityKernel::ComputeThreadCount
          (UPCGNormalToDensityKernel *this,UPCGDataBinding *param_1)

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
code_r0x0001497f5db9:
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    local_28.Object = (FPCGDataCollectionDesc *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else if (this == (UPCGNormalToDensityKernel *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xa7,"InKernel");
    if (bVar2) goto code_r0x0001497f5db9;
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
                    (&bGEnsureHasExecuted<5123830752164708403>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGNormalToDensityKernel.cpp"
                     ,0x33,"OutputPinDesc");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return 0;
}

// GetInputPins @ 149815230

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGNormalToDensityKernel::GetInputPins
          (UPCGNormalToDensityKernel *this,
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

// GetOutputPins @ 149816900

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGNormalToDensityKernel::GetOutputPins
          (UPCGNormalToDensityKernel *this,
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

// GetPrivateStaticClass @ 1498178c0

UClass * __cdecl UPCGNormalToDensityKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNormalToDensityKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNormalToDensityKernel",
               &Z_Registration_Info_UClass_UPCGNormalToDensityKernel.InnerSingleton,
               StaticRegisterNativesUPCGNormalToDensityKernel,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGNormalToDensityKernel>,
               InternalVTableHelperCtorCaller<UPCGNormalToDensityKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensityKernel.InnerSingleton;
}

// StaticRegisterNativesUPCGNormalToDensityKernel @ 149847220

void __cdecl UPCGNormalToDensityKernel::StaticRegisterNativesUPCGNormalToDensityKernel(void)

{
  return;
}

