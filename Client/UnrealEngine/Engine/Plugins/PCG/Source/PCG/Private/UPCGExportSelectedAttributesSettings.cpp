// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 1499043b0

UClass * __cdecl UPCGExportSelectedAttributesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExportSelectedAttributesSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExportSelectedAttributesSettings",
               &Z_Registration_Info_UClass_UPCGExportSelectedAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGExportSelectedAttributesSettings,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGExportSelectedAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGExportSelectedAttributesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExportSelectedAttributesSettings.InnerSingleton;
}

// UPCGExportSelectedAttributesSettings @ 1499c3760

UPCGExportSelectedAttributesSettings * __thiscall
UPCGExportSelectedAttributesSettings::UPCGExportSelectedAttributesSettings
          (UPCGExportSelectedAttributesSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Format = Binary;
  this->Layout = ByElement;
  this->_padding_ = (longlong)&___7UPCGExportSelectedAttributesSettings__6B_;
  (this->Path).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Path.Data.ArrayNum = 0;
  (this->Path).Path.Data.ArrayMax = 0;
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  (this->AttributeSelectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeSelectors).ArrayNum = 0;
  (this->AttributeSelectors).ArrayMax = 0;
  this->bAddCustomDataVersion = false;
  this->CustomVersion = 0;
  this->bExportAllAttributes = true;
  return this;
}

// UPCGExportSelectedAttributesSettings @ 1499c37d0

UPCGExportSelectedAttributesSettings * __thiscall
UPCGExportSelectedAttributesSettings::UPCGExportSelectedAttributesSettings
          (UPCGExportSelectedAttributesSettings *this)

{
  int *piVar1;
  TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FObjectInitializer *pFVar4;
  
  pFVar4 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar4);
  pTVar2 = &this->AttributeSelectors;
  this->Format = Binary;
  this->Layout = ByElement;
  this->bExportAllAttributes = true;
  this->_padding_ = (longlong)&___7UPCGExportSelectedAttributesSettings__6B_;
  piVar1 = &(this->AttributeSelectors).ArrayMax;
  (this->Path).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Path.Data.ArrayNum = 0;
  (this->Path).Path.Data.ArrayMax = 0;
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AttributeSelectors).ArrayNum = 0;
  *piVar1 = 0;
  this->bAddCustomDataVersion = false;
  this->CustomVersion = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x840,&pTVar2->AllocatorInstance,piVar1);
  (this->AttributeSelectors).ArrayNum = iVar3 + 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)
             ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x40));
  return this;
}

// ~UPCGExportSelectedAttributesSettings @ 1499c64d0

void __thiscall
UPCGExportSelectedAttributesSettings::~UPCGExportSelectedAttributesSettings
          (UPCGExportSelectedAttributesSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGExportSelectedAttributesSettings__6B_;
  DestructItems<FPCGAttributePropertyInputSelector,int>
            ((FPCGAttributePropertyInputSelector *)(this->AttributeSelectors).AllocatorInstance.Data
             ,(this->AttributeSelectors).ArrayNum);
  pFVar1 = (this->AttributeSelectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Path).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499db490

TSharedPtr<IPCGElement,1> * __thiscall
UPCGExportSelectedAttributesSettings::CreateElement
          (UPCGExportSelectedAttributesSettings *this,
          TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGExportSelectedAttributesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGExportSelectedAttributesElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499fb150

UClass * __cdecl UPCGExportSelectedAttributesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExportSelectedAttributesSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExportSelectedAttributesSettings",
               &Z_Registration_Info_UClass_UPCGExportSelectedAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGExportSelectedAttributesSettings,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGExportSelectedAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGExportSelectedAttributesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExportSelectedAttributesSettings.InnerSingleton;
}

// InputPinProperties @ 1499ff060

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGExportSelectedAttributesSettings::InputPinProperties
          (UPCGExportSelectedAttributesSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,false,false,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a03410

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGExportSelectedAttributesSettings::OutputPinProperties
          (UPCGExportSelectedAttributesSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultExecutionDependencyLabel,pFVar4,true,true,pFVar3);
  pFVar5->Usage = DependencyOnly;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGExportSelectedAttributesSettings @ 149a0ffe0

void __cdecl
UPCGExportSelectedAttributesSettings::StaticRegisterNativesUPCGExportSelectedAttributesSettings
          (void)

{
  return;
}

