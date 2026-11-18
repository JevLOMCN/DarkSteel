// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e674230

UClass * __cdecl UInterchangeAudioPayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeAudioPayloadInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton;
}

// UInterchangeAudioPayloadInterface @ 14e6904e0

UInterchangeAudioPayloadInterface * __thiscall
UInterchangeAudioPayloadInterface::UInterchangeAudioPayloadInterface
          (UInterchangeAudioPayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeAudioPayloadInterface__6B_;
  return this;
}

// UInterchangeAudioPayloadInterface @ 14e690510

UInterchangeAudioPayloadInterface * __thiscall
UInterchangeAudioPayloadInterface::UInterchangeAudioPayloadInterface
          (UInterchangeAudioPayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeAudioPayloadInterface__6B_;
  return this;
}

// ~UInterchangeAudioPayloadInterface @ 14e691e20

void __thiscall
UInterchangeAudioPayloadInterface::~UInterchangeAudioPayloadInterface
          (UInterchangeAudioPayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e69fdc0

UClass * __cdecl UInterchangeAudioPayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeAudioPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeAudioPayloadInterface @ 14e6a8120

void __cdecl
UInterchangeAudioPayloadInterface::StaticRegisterNativesUInterchangeAudioPayloadInterface(void)

{
  return;
}

