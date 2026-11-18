// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14978c620

UClass * __cdecl UPCGTransformPointsKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsKernel",
               &Z_Registration_Info_UClass_UPCGTransformPointsKernel.InnerSingleton,
               StaticRegisterNativesUPCGTransformPointsKernel,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGTransformPointsKernel>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsKernel.InnerSingleton;
}

// UPCGTransformPointsKernel @ 1497e1760

UPCGTransformPointsKernel * __thiscall
UPCGTransformPointsKernel::UPCGTransformPointsKernel
          (UPCGTransformPointsKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGTransformPointsKernel__6B_;
  return this;
}

// UPCGTransformPointsKernel @ 1497e1790

UPCGTransformPointsKernel * __thiscall
UPCGTransformPointsKernel::UPCGTransformPointsKernel
          (UPCGTransformPointsKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGTransformPointsKernel__6B_;
  return this;
}

// ~UPCGTransformPointsKernel @ 1497e32f0

void __thiscall
UPCGTransformPointsKernel::~UPCGTransformPointsKernel(UPCGTransformPointsKernel *this)

{
  *(undefined ***)this = &___7UPCGTransformPointsKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 1497f49e0

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
UPCGTransformPointsKernel::ComputeOutputBindingDataDesc
          (UPCGTransformPointsKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FPCGDataCollectionDesc *pFVar4;
  bool bVar5;
  EPCGPointNativeProperties EVar6;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar7;
  UPCGTransformPointsSettings *this_00;
  UClass *pUVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 local_res18 [16];
  TSharedPtr<FPCGDataCollectionDesc,1> local_98;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_88;
  FPCGKernelPin local_78;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pwVar12 = L"";
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGTransformPointsKernel.cpp"
                         ,0x13,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar7;
  }
  if (param_1 != PCGPinConstants::DefaultOutputLabel) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9021411984423256042>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGTransformPointsKernel.cpp"
                       ,0x16,"InOutputPinLabel == PCGPinConstants::DefaultOutputLabel");
    if (!bVar5) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar7;
  }
  local_78.KernelIndex = *(int *)&this->field_0x3c;
  local_78.PinLabel = PCGPinConstants::DefaultInputLabel;
  local_78.bIsInput = true;
  UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_88,&local_78);
  if (local_88.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9021411984423256034>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGTransformPointsKernel.cpp"
                       ,0x1e,"InDataDesc");
    if (!bVar5) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar7;
  }
  local_68.Object = local_88.Object;
  local_68.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPCGDataCollectionDesc::MakeSharedFrom(&local_98,&local_68);
  this_00 = (UPCGTransformPointsSettings *)(**(code **)(*(longlong *)this + 0x2b0))(this);
  if (this_00 == (UPCGTransformPointsSettings *)0x0) {
    pFVar9 = GetTypeName<UPCGTransformPointsSettings>(&local_58);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar8 = Z_Construct_UClass_UPCGTransformPointsSettings_NoRegister();
  iVar1 = (int)pUVar8->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar8->_padding_)) {
    pFVar9 = GetTypeName<UPCGTransformPointsSettings>(&local_48);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_38,(UPCGSettings *)this_00);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar11);
  }
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
  pFVar2 = ((local_98.Object)->DataDescs).AllocatorInstance.Data;
  iVar1 = ((local_98.Object)->DataDescs).ArrayNum;
  pFVar10 = pFVar2 + 0x40;
  while( true ) {
    if ((pFVar4->DataDescs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar10 + -0x40 == pFVar2 + (longlong)iVar1 * 0x68) break;
    EVar6 = UPCGTransformPointsSettings::GetPropertiesToAllocate(this_00);
    *(EPCGPointNativeProperties *)pFVar10 = *(EPCGPointNativeProperties *)pFVar10 | EVar6;
    pFVar10 = pFVar10 + 0x68;
  }
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 1497f5ea0

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
UPCGTransformPointsKernel::ComputeThreadCount
          (UPCGTransformPointsKernel *this,UPCGDataBinding *param_1)

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
code_r0x0001497f5f19:
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    local_28.Object = (FPCGDataCollectionDesc *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else if (this == (UPCGTransformPointsKernel *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xa7,"InKernel");
    if (bVar2) goto code_r0x0001497f5f19;
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
                    (&bGEnsureHasExecuted<_9021411984423256009>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGTransformPointsKernel.cpp"
                     ,0x37,"OutputPinDesc");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return 0;
}

// GetInputPins @ 1498152b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGTransformPointsKernel::GetInputPins
          (UPCGTransformPointsKernel *this,
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

// GetOutputPins @ 149816960

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGTransformPointsKernel::GetOutputPins
          (UPCGTransformPointsKernel *this,
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

// GetPrivateStaticClass @ 149817b00

UClass * __cdecl UPCGTransformPointsKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsKernel",
               &Z_Registration_Info_UClass_UPCGTransformPointsKernel.InnerSingleton,
               StaticRegisterNativesUPCGTransformPointsKernel,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGTransformPointsKernel>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsKernel.InnerSingleton;
}

// StaticRegisterNativesUPCGTransformPointsKernel @ 149847250

void __cdecl UPCGTransformPointsKernel::StaticRegisterNativesUPCGTransformPointsKernel(void)

{
  return;
}

