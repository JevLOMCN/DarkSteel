// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e674480

UClass * __cdecl UInterchangeSlicedTexturePayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSlicedTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeSlicedTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeSlicedTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeSlicedTexturePayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton;
}

// UInterchangeSlicedTexturePayloadInterface @ 14e691080

UInterchangeSlicedTexturePayloadInterface * __thiscall
UInterchangeSlicedTexturePayloadInterface::UInterchangeSlicedTexturePayloadInterface
          (UInterchangeSlicedTexturePayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSlicedTexturePayloadInterface__6B_;
  return this;
}

// UInterchangeSlicedTexturePayloadInterface @ 14e6910b0

UInterchangeSlicedTexturePayloadInterface * __thiscall
UInterchangeSlicedTexturePayloadInterface::UInterchangeSlicedTexturePayloadInterface
          (UInterchangeSlicedTexturePayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSlicedTexturePayloadInterface__6B_;
  return this;
}

// ~UInterchangeSlicedTexturePayloadInterface @ 14e6920c0

void __thiscall
UInterchangeSlicedTexturePayloadInterface::~UInterchangeSlicedTexturePayloadInterface
          (UInterchangeSlicedTexturePayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0a80

UClass * __cdecl UInterchangeSlicedTexturePayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSlicedTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeSlicedTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeSlicedTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeSlicedTexturePayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeSlicedTexturePayloadInterface @ 14e6a8230

void __cdecl
UInterchangeSlicedTexturePayloadInterface::
StaticRegisterNativesUInterchangeSlicedTexturePayloadInterface(void)

{
  return;
}

