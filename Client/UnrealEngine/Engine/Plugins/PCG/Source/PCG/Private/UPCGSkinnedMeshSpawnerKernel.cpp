// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9e830

UClass * __cdecl UPCGSkinnedMeshSpawnerKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSpawnerKernel",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerKernel.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshSpawnerKernel,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSkinnedMeshSpawnerKernel>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerKernel.InnerSingleton;
}

// UPCGSkinnedMeshSpawnerKernel @ 149be8540

UPCGSkinnedMeshSpawnerKernel * __thiscall
UPCGSkinnedMeshSpawnerKernel::UPCGSkinnedMeshSpawnerKernel
          (UPCGSkinnedMeshSpawnerKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGSkinnedMeshSpawnerKernel__6B_;
  return this;
}

// UPCGSkinnedMeshSpawnerKernel @ 149be8570

UPCGSkinnedMeshSpawnerKernel * __thiscall
UPCGSkinnedMeshSpawnerKernel::UPCGSkinnedMeshSpawnerKernel
          (UPCGSkinnedMeshSpawnerKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGSkinnedMeshSpawnerKernel__6B_;
  return this;
}

// ~UPCGSkinnedMeshSpawnerKernel @ 149bea330

void __thiscall
UPCGSkinnedMeshSpawnerKernel::~UPCGSkinnedMeshSpawnerKernel(UPCGSkinnedMeshSpawnerKernel *this)

{
  *(undefined ***)this = &___7UPCGSkinnedMeshSpawnerKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 149c03440

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
UPCGSkinnedMeshSpawnerKernel::ComputeOutputBindingDataDesc
          (UPCGSkinnedMeshSpawnerKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar4;
  UPCGSettings *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  TSharedPtr<FPCGDataCollectionDesc,1> local_78;
  FPCGKernelPin local_68;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_58;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pwVar8 = L"";
  if (param_2 == (UPCGDataBinding *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawnerKernel.cpp"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (param_1 == PCGPinConstants::DefaultOutputLabel) {
    local_68.KernelIndex = *(int *)&this->field_0x3c;
    local_68.PinLabel = PCGPinConstants::DefaultInputLabel;
    local_68.bIsInput = true;
    UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_58,&local_68);
    local_48.Object = local_58.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FPCGDataCollectionDesc::MakeSharedFrom(&local_78,&local_48);
    pUVar5 = (UPCGSettings *)(**(code **)(*(longlong *)this + 0x2b0))(this);
    if (pUVar5 == (UPCGSettings *)0x0) {
      pFVar7 = GetTypeName<UPCGSkinnedMeshSpawnerSettings>(&local_38);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar8);
    }
    pUVar6 = UPCGSkinnedMeshSpawnerSettings::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      pFVar7 = GetTypeName<UPCGSkinnedMeshSpawnerSettings>(&local_28);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pFVar7 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_18,pUVar5);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar9);
    }
    if ((char)pUVar5[1]._padding_ != '\0') {
      if (local_78.Object == (FPCGDataCollectionDesc *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
          return pTVar4;
        }
      }
      FPCGDataCollectionDesc::AllocatePropertiesForAllData(local_78.Object,BoundsMax|BoundsMin);
    }
    __return_storage_ptr__->Object = local_78.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6728743018590896167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawnerKernel.cpp"
                       ,0x27,"InOutputPinLabel == PCGPinConstants::DefaultOutputLabel");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 149c03670

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
UPCGSkinnedMeshSpawnerKernel::ComputeThreadCount
          (UPCGSkinnedMeshSpawnerKernel *this,UPCGDataBinding *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_18;
  
  UPCGDataBinding::GetCachedKernelPinDataDesc
            (param_1,&local_18,(UPCGComputeKernel *)this,PCGPinConstants::DefaultInputLabel,true);
  if (local_18.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6728743018590896190>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawnerKernel.cpp"
                       ,0x3e,"InputPinDesc");
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

// GetInputPins @ 149c23ef0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGSkinnedMeshSpawnerKernel::GetInputPins
          (UPCGSkinnedMeshSpawnerKernel *this,
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
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGSkinnedMeshSpawnerConstants::InstanceCountsPinLabel,pFVar4,true,true,pFVar3);
  return;
}

// GetOutputPins @ 149c24bf0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGSkinnedMeshSpawnerKernel::GetOutputPins
          (UPCGSkinnedMeshSpawnerKernel *this,
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

// GetPrivateStaticClass @ 149c26f90

UClass * __cdecl UPCGSkinnedMeshSpawnerKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSpawnerKernel",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerKernel.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshSpawnerKernel,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSkinnedMeshSpawnerKernel>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerKernel.InnerSingleton;
}

// StaticRegisterNativesUPCGSkinnedMeshSpawnerKernel @ 149c35680

void __cdecl UPCGSkinnedMeshSpawnerKernel::StaticRegisterNativesUPCGSkinnedMeshSpawnerKernel(void)

{
  return;
}

