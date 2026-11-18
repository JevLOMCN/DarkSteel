// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e674cd0

UClass * __cdecl UInterchangeAudioTranslator_AIF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_AIF",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_AIF,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_AIF>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIF>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton;
}

// UInterchangeAudioTranslator_AIF @ 14e690640

UInterchangeAudioTranslator_AIF * __thiscall
UInterchangeAudioTranslator_AIF::UInterchangeAudioTranslator_AIF
          (UInterchangeAudioTranslator_AIF *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// UInterchangeAudioTranslator_AIF @ 14e690680

UInterchangeAudioTranslator_AIF * __thiscall
UInterchangeAudioTranslator_AIF::UInterchangeAudioTranslator_AIF
          (UInterchangeAudioTranslator_AIF *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// ~UInterchangeAudioTranslator_AIF @ 14e691e90

void __thiscall
UInterchangeAudioTranslator_AIF::~UInterchangeAudioTranslator_AIF
          (UInterchangeAudioTranslator_AIF *this)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0000

UClass * __cdecl UInterchangeAudioTranslator_AIF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_AIF",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_AIF,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_AIF>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIF>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton;
}

// GetSupportedFormats @ 14e6a1400

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAudioTranslator_AIF::GetSupportedFormats
          (UInterchangeAudioTranslator_AIF *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeAudioTranslator_AIF @ 14e6a8150

void __cdecl
UInterchangeAudioTranslator_AIF::StaticRegisterNativesUInterchangeAudioTranslator_AIF(void)

{
  return;
}

