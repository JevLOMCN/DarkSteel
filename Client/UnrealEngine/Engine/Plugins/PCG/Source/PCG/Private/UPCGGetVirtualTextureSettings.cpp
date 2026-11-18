// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149c39e10

UClass * __cdecl UPCGGetVirtualTextureSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetVirtualTextureSettings",
               &Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetVirtualTextureSettings,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetVirtualTextureSettings>,
               InternalVTableHelperCtorCaller<UPCGGetVirtualTextureSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton;
}

// UPCGGetVirtualTextureSettings @ 149c4b430

UPCGGetVirtualTextureSettings * __thiscall
UPCGGetVirtualTextureSettings::UPCGGetVirtualTextureSettings
          (UPCGGetVirtualTextureSettings *this,FVTableHelper *param_1)

{
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGGetVirtualTextureSettings__6B_;
  return this;
}

// UPCGGetVirtualTextureSettings @ 149c4b460

UPCGGetVirtualTextureSettings * __thiscall
UPCGGetVirtualTextureSettings::UPCGGetVirtualTextureSettings(UPCGGetVirtualTextureSettings *this)

{
  FObjectInitializer *pFVar1;
  UClass *pUVar2;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,pFVar1);
  this->field_0x188 = 0;
  *(undefined ***)this = &___7UPCGGetVirtualTextureSettings__6B_;
  this->field_0xc8 = 3;
  this->field_0x122 = 0;
  this->field_0xcc = 2;
  pUVar2 = Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UClass **)&this->field_0xd8 = pUVar2;
  *(undefined2 *)&this->field_0x124 = 0;
  this->field_0xca = 0;
  this->field_0x120 = 1;
  this->field_0x126 = 0;
  this->field_0x140 = 1;
  pUVar2 = Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UClass **)&this->field_0x150 = pUVar2;
  this->field_0x159 = 0;
  return this;
}

// ~UPCGGetVirtualTextureSettings @ 149c4d9a0

void __thiscall
UPCGGetVirtualTextureSettings::~UPCGGetVirtualTextureSettings(UPCGGetVirtualTextureSettings *this)

{
  *(undefined ***)this = &___7UPCGGetVirtualTextureSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  return;
}

// GetAdditionalTitleInformation @ 149c760e0

FString * __thiscall
UPCGGetVirtualTextureSettings::GetAdditionalTitleInformation
          (UPCGGetVirtualTextureSettings *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDataFilter @ 149c76540

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
UPCGGetVirtualTextureSettings::GetDataFilter(UPCGGetVirtualTextureSettings *this)

{
  return VirtualTexture;
}

// GetDefaultActorSelectorClass @ 149c765a0

TSubclassOf<AActor> __thiscall
UPCGGetVirtualTextureSettings::GetDefaultActorSelectorClass(UPCGGetVirtualTextureSettings *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<AActor>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 149c781b0

UClass * __cdecl UPCGGetVirtualTextureSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetVirtualTextureSettings",
               &Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetVirtualTextureSettings,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetVirtualTextureSettings>,
               InternalVTableHelperCtorCaller<UPCGGetVirtualTextureSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton;
}

// OutputPinProperties @ 149c810a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetVirtualTextureSettings::OutputPinProperties
          (UPCGGetVirtualTextureSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,VirtualTexture);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetVirtualTextureSettings @ 149c91f60

void __cdecl UPCGGetVirtualTextureSettings::StaticRegisterNativesUPCGGetVirtualTextureSettings(void)

{
  return;
}

