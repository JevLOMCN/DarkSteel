// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149b30d20

UClass * __cdecl UPCGFilterDataBaseSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterDataBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterDataBaseSettings",
               &Z_Registration_Info_UClass_UPCGFilterDataBaseSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterDataBaseSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGFilterDataBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterDataBaseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterDataBaseSettings.InnerSingleton;
}

// UPCGFilterDataBaseSettings @ 149b57680

UPCGFilterDataBaseSettings * __thiscall
UPCGFilterDataBaseSettings::UPCGFilterDataBaseSettings
          (UPCGFilterDataBaseSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGFilterDataBaseSettings__6B_;
  return this;
}

// UPCGFilterDataBaseSettings @ 149b576b0

UPCGFilterDataBaseSettings * __thiscall
UPCGFilterDataBaseSettings::UPCGFilterDataBaseSettings
          (UPCGFilterDataBaseSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGFilterDataBaseSettings__6B_;
  return this;
}

// ~UPCGFilterDataBaseSettings @ 149b592e0

void __thiscall
UPCGFilterDataBaseSettings::~UPCGFilterDataBaseSettings(UPCGFilterDataBaseSettings *this)

{
  *(undefined ***)this = &___7UPCGFilterDataBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetPrivateStaticClass @ 149b91340

UClass * __cdecl UPCGFilterDataBaseSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterDataBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterDataBaseSettings",
               &Z_Registration_Info_UClass_UPCGFilterDataBaseSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterDataBaseSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGFilterDataBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterDataBaseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterDataBaseSettings.InnerSingleton;
}

// HasDynamicPins @ 149b91ae0

bool __thiscall UPCGFilterDataBaseSettings::HasDynamicPins(UPCGFilterDataBaseSettings *this)

{
  return true;
}

// OutputPinProperties @ 149b94a40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGFilterDataBaseSettings::OutputPinProperties
          (UPCGFilterDataBaseSettings *this,
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
             &PCGPinConstants::DefaultInFilterLabel,pFVar4,true,true,pFVar3);
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutFilterLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGFilterDataBaseSettings @ 149b98580

void __cdecl UPCGFilterDataBaseSettings::StaticRegisterNativesUPCGFilterDataBaseSettings(void)

{
  return;
}

