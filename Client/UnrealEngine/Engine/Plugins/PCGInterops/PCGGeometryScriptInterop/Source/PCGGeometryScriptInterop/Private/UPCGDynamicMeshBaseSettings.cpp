// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 8

// StaticClass @ 14cedd240

UClass * __cdecl UPCGDynamicMeshBaseSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGDynamicMeshBaseSettings",
               &Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton,
               StaticRegisterNativesUPCGDynamicMeshBaseSettings,200,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPCGDynamicMeshBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshBaseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton;
}

// UPCGDynamicMeshBaseSettings @ 14cee37a0

UPCGDynamicMeshBaseSettings * __thiscall
UPCGDynamicMeshBaseSettings::UPCGDynamicMeshBaseSettings
          (UPCGDynamicMeshBaseSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGDynamicMeshBaseSettings__6B_;
  return this;
}

// UPCGDynamicMeshBaseSettings @ 14cee37d0

UPCGDynamicMeshBaseSettings * __thiscall
UPCGDynamicMeshBaseSettings::UPCGDynamicMeshBaseSettings
          (UPCGDynamicMeshBaseSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGDynamicMeshBaseSettings__6B_;
  return this;
}

// ~UPCGDynamicMeshBaseSettings @ 14cee4ac0

void __thiscall
UPCGDynamicMeshBaseSettings::~UPCGDynamicMeshBaseSettings(UPCGDynamicMeshBaseSettings *this)

{
  *(undefined ***)this = &___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14cef3260

UClass * __cdecl UPCGDynamicMeshBaseSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGDynamicMeshBaseSettings",
               &Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton,
               StaticRegisterNativesUPCGDynamicMeshBaseSettings,200,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPCGDynamicMeshBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshBaseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton;
}

// InputPinProperties @ 14cef3e50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDynamicMeshBaseSettings::InputPinProperties
          (UPCGDynamicMeshBaseSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14cef43f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDynamicMeshBaseSettings::OutputPinProperties
          (UPCGDynamicMeshBaseSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGDynamicMeshBaseSettings @ 14cef9bb0

void __cdecl UPCGDynamicMeshBaseSettings::StaticRegisterNativesUPCGDynamicMeshBaseSettings(void)

{
  return;
}

