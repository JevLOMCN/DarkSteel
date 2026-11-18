// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 14a0057d0

UClass * __cdecl UPCGGraphAuthoringTestHelperSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphAuthoringTestHelperSettings",
               &Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton,
               StaticRegisterNativesUPCGGraphAuthoringTestHelperSettings,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGraphAuthoringTestHelperSettings>,
               InternalVTableHelperCtorCaller<UPCGGraphAuthoringTestHelperSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton;
}

// UPCGGraphAuthoringTestHelperSettings @ 14a018e40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGGraphAuthoringTestHelperSettings * __thiscall
UPCGGraphAuthoringTestHelperSettings::UPCGGraphAuthoringTestHelperSettings
          (UPCGGraphAuthoringTestHelperSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->PinType = None;
  this->_padding_ = (longlong)&___7UPCGGraphAuthoringTestHelperSettings__6B_;
  return this;
}

// UPCGGraphAuthoringTestHelperSettings @ 14a018e80

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGGraphAuthoringTestHelperSettings * __thiscall
UPCGGraphAuthoringTestHelperSettings::UPCGGraphAuthoringTestHelperSettings
          (UPCGGraphAuthoringTestHelperSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->PinType = None;
  this->_padding_ = (longlong)&___7UPCGGraphAuthoringTestHelperSettings__6B_;
  return this;
}

// ~UPCGGraphAuthoringTestHelperSettings @ 14a019230

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGGraphAuthoringTestHelperSettings::~UPCGGraphAuthoringTestHelperSettings
          (UPCGGraphAuthoringTestHelperSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGGraphAuthoringTestHelperSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14a01ad40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGraphAuthoringTestHelperSettings::CreateElement
          (UPCGGraphAuthoringTestHelperSettings *this,
          TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IPCGElement *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a01cff0

UClass * __cdecl UPCGGraphAuthoringTestHelperSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphAuthoringTestHelperSettings",
               &Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton,
               StaticRegisterNativesUPCGGraphAuthoringTestHelperSettings,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGraphAuthoringTestHelperSettings>,
               InternalVTableHelperCtorCaller<UPCGGraphAuthoringTestHelperSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton;
}

// InputPinProperties @ 14a01d370

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGraphAuthoringTestHelperSettings::InputPinProperties
          (UPCGGraphAuthoringTestHelperSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,this->PinType);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14a020710

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGraphAuthoringTestHelperSettings::OutputPinProperties
          (UPCGGraphAuthoringTestHelperSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,this->PinType);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGraphAuthoringTestHelperSettings @ 14a021ea0

void __cdecl
UPCGGraphAuthoringTestHelperSettings::StaticRegisterNativesUPCGGraphAuthoringTestHelperSettings
          (void)

{
  return;
}

