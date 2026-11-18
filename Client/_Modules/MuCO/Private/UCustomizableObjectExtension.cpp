// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 12

// StaticClass @ 14ab9aac0

UClass * __cdecl UCustomizableObjectExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectExtension",
               &Z_Registration_Info_UClass_UCustomizableObjectExtension.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectExtension,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectExtension>,
               InternalVTableHelperCtorCaller<UCustomizableObjectExtension>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectExtension.InnerSingleton;
}

// UCustomizableObjectExtension @ 14aba0020

UCustomizableObjectExtension * __thiscall
UCustomizableObjectExtension::UCustomizableObjectExtension
          (UCustomizableObjectExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCustomizableObjectExtension__6B_;
  return this;
}

// UCustomizableObjectExtension @ 14aba0050

UCustomizableObjectExtension * __thiscall
UCustomizableObjectExtension::UCustomizableObjectExtension
          (UCustomizableObjectExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCustomizableObjectExtension__6B_;
  return this;
}

// ~UCustomizableObjectExtension @ 14aba2970

void __thiscall
UCustomizableObjectExtension::~UCustomizableObjectExtension(UCustomizableObjectExtension *this)

{
  *(undefined ***)this = &___7UCustomizableObjectExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateExtensionInstanceData @ 14aba52d0

FInstancedStruct * __thiscall
UCustomizableObjectExtension::GenerateExtensionInstanceData
          (UCustomizableObjectExtension *this,FInstancedStruct *__return_storage_ptr__,
          TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_> *param_1)

{
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAdditionalObjectNodePins @ 14aba52f0

TArray<FObjectNodeInputPin,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableObjectExtension::GetAdditionalObjectNodePins
          (UCustomizableObjectExtension *this,
          TArray<FObjectNodeInputPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPinTypes @ 14aba5310

TArray<FCustomizableObjectPinType,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableObjectExtension::GetPinTypes
          (UCustomizableObjectExtension *this,
          TArray<FCustomizableObjectPinType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14aba5490

UClass * __cdecl UCustomizableObjectExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectExtension",
               &Z_Registration_Info_UClass_UCustomizableObjectExtension.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectExtension,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectExtension>,
               InternalVTableHelperCtorCaller<UCustomizableObjectExtension>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectExtension.InnerSingleton;
}

// OnCustomizableObjectInstanceUsageDiscarded @ 14aba68f0

void __thiscall
UCustomizableObjectExtension::OnCustomizableObjectInstanceUsageDiscarded
          (UCustomizableObjectExtension *this,UCustomizableObjectInstanceUsage *param_1)

{
  return;
}

// OnCustomizableObjectInstanceUsageUpdated @ 14aba6900

void __thiscall
UCustomizableObjectExtension::OnCustomizableObjectInstanceUsageUpdated
          (UCustomizableObjectExtension *this,UCustomizableObjectInstanceUsage *param_1)

{
  return;
}

// OnSkeletalMeshCreated @ 14aba6910

void __thiscall
UCustomizableObjectExtension::OnSkeletalMeshCreated
          (UCustomizableObjectExtension *this,
          TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          USkeletalMesh *param_3)

{
  return;
}

// StaticRegisterNativesUCustomizableObjectExtension @ 14aba6970

void __cdecl UCustomizableObjectExtension::StaticRegisterNativesUCustomizableObjectExtension(void)

{
  return;
}

