// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e675090

UClass * __cdecl UInterchangeAudioTranslator_MP3::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_MP3",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_MP3,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_MP3>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_MP3>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton;
}

// UInterchangeAudioTranslator_MP3 @ 14e6907c0

UInterchangeAudioTranslator_MP3 * __thiscall
UInterchangeAudioTranslator_MP3::UInterchangeAudioTranslator_MP3
          (UInterchangeAudioTranslator_MP3 *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// UInterchangeAudioTranslator_MP3 @ 14e690800

UInterchangeAudioTranslator_MP3 * __thiscall
UInterchangeAudioTranslator_MP3::UInterchangeAudioTranslator_MP3
          (UInterchangeAudioTranslator_MP3 *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// ~UInterchangeAudioTranslator_MP3 @ 14e691ef0

void __thiscall
UInterchangeAudioTranslator_MP3::~UInterchangeAudioTranslator_MP3
          (UInterchangeAudioTranslator_MP3 *this)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0240

UClass * __cdecl UInterchangeAudioTranslator_MP3::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_MP3",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_MP3,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_MP3>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_MP3>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton;
}

// GetSupportedFormats @ 14e6a1460

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAudioTranslator_MP3::GetSupportedFormats
          (UInterchangeAudioTranslator_MP3 *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeAudioTranslator_MP3 @ 14e6a8180

void __cdecl
UInterchangeAudioTranslator_MP3::StaticRegisterNativesUInterchangeAudioTranslator_MP3(void)

{
  return;
}

