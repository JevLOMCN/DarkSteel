// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149903be0

UClass * __cdecl UPCGDataAttributesAndTagsSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataAttributesAndTagsSettingsBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataAttributesAndTagsSettingsBase",
               &Z_Registration_Info_UClass_UPCGDataAttributesAndTagsSettingsBase.InnerSingleton,
               StaticRegisterNativesUPCGDataAttributesAndTagsSettingsBase,0x120,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDataAttributesAndTagsSettingsBase>,
               InternalVTableHelperCtorCaller<UPCGDataAttributesAndTagsSettingsBase>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataAttributesAndTagsSettingsBase.InnerSingleton;
}

// UPCGDataAttributesAndTagsSettingsBase @ 1499c3460

UPCGDataAttributesAndTagsSettingsBase * __thiscall
UPCGDataAttributesAndTagsSettingsBase::UPCGDataAttributesAndTagsSettingsBase
          (UPCGDataAttributesAndTagsSettingsBase *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataAttributesAndTagsSettingsBase__6B_;
  *(undefined8 *)&this->AttributesTagsMapping = 0;
  *(undefined8 *)&(this->AttributesTagsMapping).field_0x8 = 0;
  *(undefined8 *)&(this->AttributesTagsMapping).field_0x20 = 0;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x28 = 0;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x34 = 0;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributesTagsMapping).field_0x40 = 0;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x48 = 0;
  this->bDeleteInputsAfterOperation = false;
  return this;
}

// UPCGDataAttributesAndTagsSettingsBase @ 1499c34e0

UPCGDataAttributesAndTagsSettingsBase * __thiscall
UPCGDataAttributesAndTagsSettingsBase::UPCGDataAttributesAndTagsSettingsBase
          (UPCGDataAttributesAndTagsSettingsBase *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataAttributesAndTagsSettingsBase__6B_;
  *(undefined8 *)&this->AttributesTagsMapping = 0;
  *(undefined8 *)&(this->AttributesTagsMapping).field_0x8 = 0;
  *(undefined8 *)&(this->AttributesTagsMapping).field_0x20 = 0;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x28 = 0;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x34 = 0;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributesTagsMapping).field_0x40 = 0;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x48 = 0;
  this->bDeleteInputsAfterOperation = false;
  return this;
}

// ~UPCGDataAttributesAndTagsSettingsBase @ 1499c6370

void __thiscall
UPCGDataAttributesAndTagsSettingsBase::~UPCGDataAttributesAndTagsSettingsBase
          (UPCGDataAttributesAndTagsSettingsBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGDataAttributesAndTagsSettingsBase__6B_;
  *(undefined4 *)&(this->AttributesTagsMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AttributesTagsMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AttributesTagsMapping);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetPrivateStaticClass @ 1499fae50

UClass * __cdecl UPCGDataAttributesAndTagsSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataAttributesAndTagsSettingsBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataAttributesAndTagsSettingsBase",
               &Z_Registration_Info_UClass_UPCGDataAttributesAndTagsSettingsBase.InnerSingleton,
               StaticRegisterNativesUPCGDataAttributesAndTagsSettingsBase,0x120,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDataAttributesAndTagsSettingsBase>,
               InternalVTableHelperCtorCaller<UPCGDataAttributesAndTagsSettingsBase>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataAttributesAndTagsSettingsBase.InnerSingleton;
}

// HasDynamicPins @ 1499fe4a0

bool __thiscall
UPCGDataAttributesAndTagsSettingsBase::HasDynamicPins(UPCGDataAttributesAndTagsSettingsBase *this)

{
  return true;
}

// InputPinProperties @ 1499feea0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataAttributesAndTagsSettingsBase::InputPinProperties
          (UPCGDataAttributesAndTagsSettingsBase *this,
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
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a032f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataAttributesAndTagsSettingsBase::OutputPinProperties
          (UPCGDataAttributesAndTagsSettingsBase *this,
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

// StaticRegisterNativesUPCGDataAttributesAndTagsSettingsBase @ 149a0ffa0

void __cdecl
UPCGDataAttributesAndTagsSettingsBase::StaticRegisterNativesUPCGDataAttributesAndTagsSettingsBase
          (void)

{
  return;
}

