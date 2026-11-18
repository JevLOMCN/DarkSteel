// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149a18000

UClass * __cdecl UPCGMetadataRenameSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataRenameSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataRenameSettings",
               &Z_Registration_Info_UClass_UPCGMetadataRenameSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataRenameSettings,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataRenameSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataRenameSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataRenameSettings.InnerSingleton;
}

// UPCGMetadataRenameSettings @ 149ad1fb0

UPCGMetadataRenameSettings * __thiscall
UPCGMetadataRenameSettings::UPCGMetadataRenameSettings
          (UPCGMetadataRenameSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMetadataRenameSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->AttributeToRename);
  (this->NewAttributeName).ComparisonIndex = 0;
  (this->NewAttributeName).Number = 0;
  return this;
}

// UPCGMetadataRenameSettings @ 149ad1ff0

UPCGMetadataRenameSettings * __thiscall
UPCGMetadataRenameSettings::UPCGMetadataRenameSettings
          (UPCGMetadataRenameSettings *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UPCGMetadataRenameSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->AttributeToRename);
  (this->NewAttributeName).ComparisonIndex = 0;
  (this->NewAttributeName).Number = 0;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->AttributeToRename,(FName)0x0,true);
  return this;
}

// ~UPCGMetadataRenameSettings @ 149ad3860

void __thiscall
UPCGMetadataRenameSettings::~UPCGMetadataRenameSettings(UPCGMetadataRenameSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGMetadataRenameSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->AttributeToRename).field_0x28,
             *(int *)&(this->AttributeToRename).field_0x30);
  pvVar1 = *(void **)&(this->AttributeToRename).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afcd70

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataRenameSettings::CreateElement
          (UPCGMetadataRenameSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataRenameElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataRenameElement__6B_;
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

// GetAdditionalTitleInformation @ 149b149f0

FString * __thiscall
UPCGMetadataRenameSettings::GetAdditionalTitleInformation
          (UPCGMetadataRenameSettings *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&this->NewAttributeName,&local_18);
  FPCGAttributePropertySelector::ToString
            ((FPCGAttributePropertySelector *)&this->AttributeToRename,&local_28,false);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s -> %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b18330

UClass * __cdecl UPCGMetadataRenameSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataRenameSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataRenameSettings",
               &Z_Registration_Info_UClass_UPCGMetadataRenameSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataRenameSettings,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataRenameSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataRenameSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataRenameSettings.InnerSingleton;
}

// HasDynamicPins @ 149b1a740

bool __thiscall UPCGMetadataRenameSettings::HasDynamicPins(UPCGMetadataRenameSettings *this)

{
  return true;
}

// OutputPinProperties @ 149b205d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMetadataRenameSettings::OutputPinProperties
          (UPCGMetadataRenameSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
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
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b20bf0

void __thiscall UPCGMetadataRenameSettings::PostLoad(UPCGMetadataRenameSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataRenameSettings @ 149b2cfe0

void __cdecl UPCGMetadataRenameSettings::StaticRegisterNativesUPCGMetadataRenameSettings(void)

{
  return;
}

