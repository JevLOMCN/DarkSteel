// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 1499030c0

UClass * __cdecl UPCGExternalDataSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExternalDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExternalDataSettings",
               &Z_Registration_Info_UClass_UPCGExternalDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGExternalDataSettings,0x118,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGExternalDataSettings>,
               InternalVTableHelperCtorCaller<UPCGExternalDataSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExternalDataSettings.InnerSingleton;
}

// UPCGExternalDataSettings @ 1499c3880

UPCGExternalDataSettings * __thiscall
UPCGExternalDataSettings::UPCGExternalDataSettings
          (UPCGExternalDataSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGExternalDataSettings__6B_;
  *(undefined8 *)&this->AttributeMapping = 0;
  *(undefined8 *)&(this->AttributeMapping).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeMapping).field_0x20 = 0;
  *(undefined4 *)&(this->AttributeMapping).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeMapping).field_0x34 = 0;
  *(undefined4 *)&(this->AttributeMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributeMapping).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeMapping).field_0x48 = 0;
  return this;
}

// UPCGExternalDataSettings @ 1499c38f0

UPCGExternalDataSettings * __thiscall
UPCGExternalDataSettings::UPCGExternalDataSettings
          (UPCGExternalDataSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGExternalDataSettings__6B_;
  *(undefined8 *)&this->AttributeMapping = 0;
  *(undefined8 *)&(this->AttributeMapping).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeMapping).field_0x20 = 0;
  *(undefined4 *)&(this->AttributeMapping).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeMapping).field_0x34 = 0;
  *(undefined4 *)&(this->AttributeMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributeMapping).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeMapping).field_0x48 = 0;
  return this;
}

// ~UPCGExternalDataSettings @ 1499c6540

void __thiscall UPCGExternalDataSettings::~UPCGExternalDataSettings(UPCGExternalDataSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGExternalDataSettings__6B_;
  *(undefined4 *)&(this->AttributeMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AttributeMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AttributeMapping);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetPrivateStaticClass @ 1499fb210

UClass * __cdecl UPCGExternalDataSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExternalDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExternalDataSettings",
               &Z_Registration_Info_UClass_UPCGExternalDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGExternalDataSettings,0x118,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGExternalDataSettings>,
               InternalVTableHelperCtorCaller<UPCGExternalDataSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExternalDataSettings.InnerSingleton;
}

// InputPinProperties @ 1499ff100

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGExternalDataSettings::InputPinProperties
          (UPCGExternalDataSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a034b0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGExternalDataSettings::OutputPinProperties
          (UPCGExternalDataSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGExternalDataSettings @ 149a0fff0

void __cdecl UPCGExternalDataSettings::StaticRegisterNativesUPCGExternalDataSettings(void)

{
  return;
}

