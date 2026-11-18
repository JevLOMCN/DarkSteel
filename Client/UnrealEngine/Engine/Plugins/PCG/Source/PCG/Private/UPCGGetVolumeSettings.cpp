// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149c39a10

UClass * __cdecl UPCGGetVolumeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetVolumeSettings",
               &Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetVolumeSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetVolumeSettings>,
               InternalVTableHelperCtorCaller<UPCGGetVolumeSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton;
}

// UPCGGetVolumeSettings @ 149c4b530

UPCGGetVolumeSettings * __thiscall
UPCGGetVolumeSettings::UPCGGetVolumeSettings(UPCGGetVolumeSettings *this,FVTableHelper *param_1)

{
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGGetVolumeSettings__6B_;
  return this;
}

// UPCGGetVolumeSettings @ 149c4b560

UPCGGetVolumeSettings * __thiscall
UPCGGetVolumeSettings::UPCGGetVolumeSettings(UPCGGetVolumeSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,pFVar1);
  this->field_0x188 = 0;
  *(undefined ***)this = &___7UPCGGetVolumeSettings__6B_;
  return this;
}

// ~UPCGGetVolumeSettings @ 149c4d9c0

void __thiscall UPCGGetVolumeSettings::~UPCGGetVolumeSettings(UPCGGetVolumeSettings *this)

{
  *(undefined ***)this = &___7UPCGGetVolumeSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  return;
}

// GetDataFilter @ 149c76550

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGGetVolumeSettings::GetDataFilter(UPCGGetVolumeSettings *this)

{
  return Volume;
}

// GetPrivateStaticClass @ 149c78270

UClass * __cdecl UPCGGetVolumeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetVolumeSettings",
               &Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetVolumeSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetVolumeSettings>,
               InternalVTableHelperCtorCaller<UPCGGetVolumeSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton;
}

// OutputPinProperties @ 149c81130

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetVolumeSettings::OutputPinProperties
          (UPCGGetVolumeSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Volume);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetVolumeSettings @ 149c91f70

void __cdecl UPCGGetVolumeSettings::StaticRegisterNativesUPCGGetVolumeSettings(void)

{
  return;
}

