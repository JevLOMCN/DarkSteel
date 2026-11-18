// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e674740

UClass * __cdecl UInterchangeTexturePayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton == (UClass *)0x0
     ) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeTexturePayloadInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton;
}

// UInterchangeTexturePayloadInterface @ 14e691140

UInterchangeTexturePayloadInterface * __thiscall
UInterchangeTexturePayloadInterface::UInterchangeTexturePayloadInterface
          (UInterchangeTexturePayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTexturePayloadInterface__6B_;
  return this;
}

// UInterchangeTexturePayloadInterface @ 14e691170

UInterchangeTexturePayloadInterface * __thiscall
UInterchangeTexturePayloadInterface::UInterchangeTexturePayloadInterface
          (UInterchangeTexturePayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTexturePayloadInterface__6B_;
  return this;
}

// ~UInterchangeTexturePayloadInterface @ 14e6920e0

void __thiscall
UInterchangeTexturePayloadInterface::~UInterchangeTexturePayloadInterface
          (UInterchangeTexturePayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0c00

UClass * __cdecl UInterchangeTexturePayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeTexturePayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeTexturePayloadInterface @ 14e6a8250

void __cdecl
UInterchangeTexturePayloadInterface::StaticRegisterNativesUInterchangeTexturePayloadInterface(void)

{
  return;
}

