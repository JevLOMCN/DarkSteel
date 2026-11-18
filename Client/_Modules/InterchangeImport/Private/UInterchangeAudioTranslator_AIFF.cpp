// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e674e90

UClass * __cdecl UInterchangeAudioTranslator_AIFF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_AIFF",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_AIFF,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_AIFF>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIFF>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton;
}

// UInterchangeAudioTranslator_AIFF @ 14e6906c0

UInterchangeAudioTranslator_AIFF * __thiscall
UInterchangeAudioTranslator_AIFF::UInterchangeAudioTranslator_AIFF
          (UInterchangeAudioTranslator_AIFF *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// UInterchangeAudioTranslator_AIFF @ 14e690700

UInterchangeAudioTranslator_AIFF * __thiscall
UInterchangeAudioTranslator_AIFF::UInterchangeAudioTranslator_AIFF
          (UInterchangeAudioTranslator_AIFF *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// ~UInterchangeAudioTranslator_AIFF @ 14e691eb0

void __thiscall
UInterchangeAudioTranslator_AIFF::~UInterchangeAudioTranslator_AIFF
          (UInterchangeAudioTranslator_AIFF *this)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a00c0

UClass * __cdecl UInterchangeAudioTranslator_AIFF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_AIFF",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_AIFF,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_AIFF>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIFF>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton;
}

// GetSupportedFormats @ 14e6a1420

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAudioTranslator_AIFF::GetSupportedFormats
          (UInterchangeAudioTranslator_AIFF *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeAudioTranslator_AIFF @ 14e6a8160

void __cdecl
UInterchangeAudioTranslator_AIFF::StaticRegisterNativesUInterchangeAudioTranslator_AIFF(void)

{
  return;
}

