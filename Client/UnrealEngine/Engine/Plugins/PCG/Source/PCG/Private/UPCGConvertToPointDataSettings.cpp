// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149a18480

UClass * __cdecl UPCGConvertToPointDataSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGConvertToPointDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGConvertToPointDataSettings",
               &Z_Registration_Info_UClass_UPCGConvertToPointDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGConvertToPointDataSettings,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGConvertToPointDataSettings>,
               InternalVTableHelperCtorCaller<UPCGConvertToPointDataSettings>,local_res8,
               UPCGCollapseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGConvertToPointDataSettings.InnerSingleton;
}

// UPCGConvertToPointDataSettings @ 149ad1c70

UPCGConvertToPointDataSettings * __thiscall
UPCGConvertToPointDataSettings::UPCGConvertToPointDataSettings
          (UPCGConvertToPointDataSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGConvertToPointDataSettings__6B_;
  *(undefined8 *)&this->AttributeToConvert = 0;
  *(undefined8 *)&(this->AttributeToConvert).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeToConvert).field_0x20 = 0;
  this->bMatchAttributeNamesWithPropertyNames = false;
  *(undefined4 *)&(this->AttributeToConvert).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeToConvert).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeToConvert).field_0x34 = 0;
  *(undefined4 *)&(this->AttributeToConvert).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributeToConvert).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeToConvert).field_0x48 = 0;
  this->bDeleteOriginalRemappedAttribute = true;
  return this;
}

// UPCGConvertToPointDataSettings @ 149ad1cf0

UPCGConvertToPointDataSettings * __thiscall
UPCGConvertToPointDataSettings::UPCGConvertToPointDataSettings
          (UPCGConvertToPointDataSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGConvertToPointDataSettings__6B_;
  *(undefined8 *)&this->AttributeToConvert = 0;
  *(undefined8 *)&(this->AttributeToConvert).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeToConvert).field_0x20 = 0;
  this->bMatchAttributeNamesWithPropertyNames = false;
  *(undefined4 *)&(this->AttributeToConvert).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeToConvert).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeToConvert).field_0x34 = 0;
  *(undefined4 *)&(this->AttributeToConvert).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributeToConvert).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeToConvert).field_0x48 = 0;
  this->bDeleteOriginalRemappedAttribute = true;
  return this;
}

// ~UPCGConvertToPointDataSettings @ 149ad3780

void __thiscall
UPCGConvertToPointDataSettings::~UPCGConvertToPointDataSettings
          (UPCGConvertToPointDataSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGConvertToPointDataSettings__6B_;
  *(undefined4 *)&(this->AttributeToConvert).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AttributeToConvert).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AttributeToConvert);
  this->_padding_ = (longlong)&___7UPCGCollapseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetPrivateStaticClass @ 149b180f0

UClass * __cdecl UPCGConvertToPointDataSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGConvertToPointDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGConvertToPointDataSettings",
               &Z_Registration_Info_UClass_UPCGConvertToPointDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGConvertToPointDataSettings,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGConvertToPointDataSettings>,
               InternalVTableHelperCtorCaller<UPCGConvertToPointDataSettings>,local_res8,
               UPCGCollapseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGConvertToPointDataSettings.InnerSingleton;
}

// InputPinProperties @ 149b1c840

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGConvertToPointDataSettings::InputPinProperties
          (UPCGConvertToPointDataSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGConvertToPointDataSettings @ 149b2cfb0

void __cdecl
UPCGConvertToPointDataSettings::StaticRegisterNativesUPCGConvertToPointDataSettings(void)

{
  return;
}

