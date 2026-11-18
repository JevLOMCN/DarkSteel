// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149b9c8b0

UClass * __cdecl UPCGNamedRerouteDeclarationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNamedRerouteDeclarationSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNamedRerouteDeclarationSettings",
               &Z_Registration_Info_UClass_UPCGNamedRerouteDeclarationSettings.InnerSingleton,
               StaticRegisterNativesUPCGNamedRerouteDeclarationSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNamedRerouteDeclarationSettings>,
               InternalVTableHelperCtorCaller<UPCGNamedRerouteDeclarationSettings>,local_res8,
               UPCGNamedRerouteBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNamedRerouteDeclarationSettings.InnerSingleton;
}

// UPCGNamedRerouteDeclarationSettings @ 149be71b0

UPCGNamedRerouteDeclarationSettings * __thiscall
UPCGNamedRerouteDeclarationSettings::UPCGNamedRerouteDeclarationSettings
          (UPCGNamedRerouteDeclarationSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGNamedRerouteDeclarationSettings__6B_;
  return this;
}

// UPCGNamedRerouteDeclarationSettings @ 149be71e0

UPCGNamedRerouteDeclarationSettings * __thiscall
UPCGNamedRerouteDeclarationSettings::UPCGNamedRerouteDeclarationSettings
          (UPCGNamedRerouteDeclarationSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  *(undefined ***)this = &___7UPCGNamedRerouteDeclarationSettings__6B_;
  return this;
}

// ~UPCGNamedRerouteDeclarationSettings @ 149be9cc0

void __thiscall
UPCGNamedRerouteDeclarationSettings::~UPCGNamedRerouteDeclarationSettings
          (UPCGNamedRerouteDeclarationSettings *this)

{
  *(undefined ***)this = &___7UPCGRerouteSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ConvertNode @ 149c03870

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGNamedRerouteDeclarationSettings::ConvertNode
          (UPCGNamedRerouteDeclarationSettings *this,FPCGPreconfiguredInfo *param_1)

{
  UPCGNode *pUVar1;
  FPCGRerouteDeclarationConverter local_48;
  
  pUVar1 = CastChecked<UPCGNode,UObject>(*(UObject **)&this->field_0x20);
  if (param_1->PreconfiguredIndex != 0) {
    return false;
  }
  FPCGRerouteDeclarationConverter::FPCGRerouteDeclarationConverter
            (&local_48,pUVar1,PCGReroute::Constants::Conversion::DefaultRerouteTitle);
  if (((local_48._padding_._1_1_ & 1) != 0) && ((local_48._padding_._1_1_ & 2) != 0)) {
    FPCGConverterBase::PrepareData((FPCGConverterBase *)&local_48);
    FPCGConverterBase::ApplyStructural((FPCGConverterBase *)&local_48);
    FPCGSingleNodeConverter::Finalize((FPCGSingleNodeConverter *)&local_48);
    FPCGSingleNodeConverter::~FPCGSingleNodeConverter((FPCGSingleNodeConverter *)&local_48);
    return local_48._padding_._1_1_ == 0xf;
  }
  PCGLog::Settings::LogInvalidPreconfigurationWarning
            (param_1->PreconfiguredIndex,&PCGReroute::Constants::Conversion::ToNamedDeclarationLabel
            );
  FPCGSingleNodeConverter::~FPCGSingleNodeConverter((FPCGSingleNodeConverter *)&local_48);
  return false;
}

// GetPrivateStaticClass @ 149c25cd0

UClass * __cdecl UPCGNamedRerouteDeclarationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNamedRerouteDeclarationSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNamedRerouteDeclarationSettings",
               &Z_Registration_Info_UClass_UPCGNamedRerouteDeclarationSettings.InnerSingleton,
               StaticRegisterNativesUPCGNamedRerouteDeclarationSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNamedRerouteDeclarationSettings>,
               InternalVTableHelperCtorCaller<UPCGNamedRerouteDeclarationSettings>,local_res8,
               UPCGNamedRerouteBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNamedRerouteDeclarationSettings.InnerSingleton;
}

// OutputPinProperties @ 149c2e6a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGNamedRerouteDeclarationSettings::OutputPinProperties
          (UPCGNamedRerouteDeclarationSettings *this,
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
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
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
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGNamedRerouteConstants::InvisiblePinLabel,pFVar4,true,true,pFVar3);
  pFVar5->bInvisiblePin = true;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGNamedRerouteDeclarationSettings @ 149c354c0

void __cdecl
UPCGNamedRerouteDeclarationSettings::StaticRegisterNativesUPCGNamedRerouteDeclarationSettings(void)

{
  return;
}

