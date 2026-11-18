// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e674f90

UClass * __cdecl UInterchangeAudioTranslator_FLAC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_FLAC",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_FLAC,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_FLAC>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_FLAC>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton;
}

// UInterchangeAudioTranslator_FLAC @ 14e690740

UInterchangeAudioTranslator_FLAC * __thiscall
UInterchangeAudioTranslator_FLAC::UInterchangeAudioTranslator_FLAC
          (UInterchangeAudioTranslator_FLAC *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// UInterchangeAudioTranslator_FLAC @ 14e690780

UInterchangeAudioTranslator_FLAC * __thiscall
UInterchangeAudioTranslator_FLAC::UInterchangeAudioTranslator_FLAC
          (UInterchangeAudioTranslator_FLAC *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// ~UInterchangeAudioTranslator_FLAC @ 14e691ed0

void __thiscall
UInterchangeAudioTranslator_FLAC::~UInterchangeAudioTranslator_FLAC
          (UInterchangeAudioTranslator_FLAC *this)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0180

UClass * __cdecl UInterchangeAudioTranslator_FLAC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_FLAC",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_FLAC,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_FLAC>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_FLAC>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton;
}

// GetSupportedFormats @ 14e6a1440

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAudioTranslator_FLAC::GetSupportedFormats
          (UInterchangeAudioTranslator_FLAC *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeAudioTranslator_FLAC @ 14e6a8170

void __cdecl
UInterchangeAudioTranslator_FLAC::StaticRegisterNativesUInterchangeAudioTranslator_FLAC(void)

{
  return;
}

