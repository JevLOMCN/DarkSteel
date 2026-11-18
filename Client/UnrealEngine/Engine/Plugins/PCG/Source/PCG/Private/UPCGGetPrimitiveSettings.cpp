// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149c39b40

UClass * __cdecl UPCGGetPrimitiveSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetPrimitiveSettings",
               &Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetPrimitiveSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetPrimitiveSettings>,
               InternalVTableHelperCtorCaller<UPCGGetPrimitiveSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton;
}

// UPCGGetPrimitiveSettings @ 149c4b270

UPCGGetPrimitiveSettings * __thiscall
UPCGGetPrimitiveSettings::UPCGGetPrimitiveSettings
          (UPCGGetPrimitiveSettings *this,FVTableHelper *param_1)

{
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGGetPrimitiveSettings__6B_;
  return this;
}

// UPCGGetPrimitiveSettings @ 149c4b2a0

UPCGGetPrimitiveSettings * __thiscall
UPCGGetPrimitiveSettings::UPCGGetPrimitiveSettings(UPCGGetPrimitiveSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,pFVar1);
  this->field_0x188 = 0;
  *(undefined ***)this = &___7UPCGGetPrimitiveSettings__6B_;
  return this;
}

// ~UPCGGetPrimitiveSettings @ 149c4d8f0

void __thiscall UPCGGetPrimitiveSettings::~UPCGGetPrimitiveSettings(UPCGGetPrimitiveSettings *this)

{
  *(undefined ***)this = &___7UPCGGetPrimitiveSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  return;
}

// GetDataFilter @ 149c76520

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGGetPrimitiveSettings::GetDataFilter(UPCGGetPrimitiveSettings *this)

{
  return Primitive;
}

// GetPrivateStaticClass @ 149c77f70

UClass * __cdecl UPCGGetPrimitiveSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetPrimitiveSettings",
               &Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetPrimitiveSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetPrimitiveSettings>,
               InternalVTableHelperCtorCaller<UPCGGetPrimitiveSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton;
}

// OutputPinProperties @ 149c80ed0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetPrimitiveSettings::OutputPinProperties
          (UPCGGetPrimitiveSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Primitive);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetPrimitiveSettings @ 149c91f30

void __cdecl UPCGGetPrimitiveSettings::StaticRegisterNativesUPCGGetPrimitiveSettings(void)

{
  return;
}

