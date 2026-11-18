// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e675190

UClass * __cdecl UInterchangeAudioTranslator_OGG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_OGG",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_OGG,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_OGG>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OGG>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton;
}

// UInterchangeAudioTranslator_OGG @ 14e690840

UInterchangeAudioTranslator_OGG * __thiscall
UInterchangeAudioTranslator_OGG::UInterchangeAudioTranslator_OGG
          (UInterchangeAudioTranslator_OGG *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// UInterchangeAudioTranslator_OGG @ 14e690880

UInterchangeAudioTranslator_OGG * __thiscall
UInterchangeAudioTranslator_OGG::UInterchangeAudioTranslator_OGG
          (UInterchangeAudioTranslator_OGG *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// ~UInterchangeAudioTranslator_OGG @ 14e691f10

void __thiscall
UInterchangeAudioTranslator_OGG::~UInterchangeAudioTranslator_OGG
          (UInterchangeAudioTranslator_OGG *this)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0300

UClass * __cdecl UInterchangeAudioTranslator_OGG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_OGG",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_OGG,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_OGG>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OGG>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton;
}

// GetSupportedFormats @ 14e6a1480

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAudioTranslator_OGG::GetSupportedFormats
          (UInterchangeAudioTranslator_OGG *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeAudioTranslator_OGG @ 14e6a8190

void __cdecl
UInterchangeAudioTranslator_OGG::StaticRegisterNativesUInterchangeAudioTranslator_OGG(void)

{
  return;
}

