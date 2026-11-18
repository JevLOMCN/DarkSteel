// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e674680

UClass * __cdecl UInterchangeBlockedTexturePayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeBlockedTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton
               ,StaticRegisterNativesUInterchangeBlockedTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeBlockedTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeBlockedTexturePayloadInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton;
}

// UInterchangeBlockedTexturePayloadInterface @ 14e6909c0

UInterchangeBlockedTexturePayloadInterface * __thiscall
UInterchangeBlockedTexturePayloadInterface::UInterchangeBlockedTexturePayloadInterface
          (UInterchangeBlockedTexturePayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeBlockedTexturePayloadInterface__6B_;
  return this;
}

// UInterchangeBlockedTexturePayloadInterface @ 14e6909f0

UInterchangeBlockedTexturePayloadInterface * __thiscall
UInterchangeBlockedTexturePayloadInterface::UInterchangeBlockedTexturePayloadInterface
          (UInterchangeBlockedTexturePayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeBlockedTexturePayloadInterface__6B_;
  return this;
}

// ~UInterchangeBlockedTexturePayloadInterface @ 14e691f70

void __thiscall
UInterchangeBlockedTexturePayloadInterface::~UInterchangeBlockedTexturePayloadInterface
          (UInterchangeBlockedTexturePayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0540

UClass * __cdecl UInterchangeBlockedTexturePayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeBlockedTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton
               ,StaticRegisterNativesUInterchangeBlockedTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeBlockedTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeBlockedTexturePayloadInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeBlockedTexturePayloadInterface @ 14e6a81c0

void __cdecl
UInterchangeBlockedTexturePayloadInterface::
StaticRegisterNativesUInterchangeBlockedTexturePayloadInterface(void)

{
  return;
}

