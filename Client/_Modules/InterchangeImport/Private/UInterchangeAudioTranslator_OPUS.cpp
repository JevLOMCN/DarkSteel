// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e675290

UClass * __cdecl UInterchangeAudioTranslator_OPUS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_OPUS",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_OPUS,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_OPUS>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OPUS>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton;
}

// UInterchangeAudioTranslator_OPUS @ 14e6908c0

UInterchangeAudioTranslator_OPUS * __thiscall
UInterchangeAudioTranslator_OPUS::UInterchangeAudioTranslator_OPUS
          (UInterchangeAudioTranslator_OPUS *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// UInterchangeAudioTranslator_OPUS @ 14e690900

UInterchangeAudioTranslator_OPUS * __thiscall
UInterchangeAudioTranslator_OPUS::UInterchangeAudioTranslator_OPUS
          (UInterchangeAudioTranslator_OPUS *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// ~UInterchangeAudioTranslator_OPUS @ 14e691f30

void __thiscall
UInterchangeAudioTranslator_OPUS::~UInterchangeAudioTranslator_OPUS
          (UInterchangeAudioTranslator_OPUS *this)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a03c0

UClass * __cdecl UInterchangeAudioTranslator_OPUS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_OPUS",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_OPUS,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_OPUS>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OPUS>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton;
}

// GetSupportedFormats @ 14e6a14a0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAudioTranslator_OPUS::GetSupportedFormats
          (UInterchangeAudioTranslator_OPUS *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeAudioTranslator_OPUS @ 14e6a81a0

void __cdecl
UInterchangeAudioTranslator_OPUS::StaticRegisterNativesUInterchangeAudioTranslator_OPUS(void)

{
  return;
}

