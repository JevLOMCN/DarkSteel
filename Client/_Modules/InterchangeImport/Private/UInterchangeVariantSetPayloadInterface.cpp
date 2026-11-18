// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e674ad0

UClass * __cdecl UInterchangeVariantSetPayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVariantSetPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeVariantSetPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeVariantSetPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeVariantSetPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton;
}

// UInterchangeVariantSetPayloadInterface @ 14e6911a0

UInterchangeVariantSetPayloadInterface * __thiscall
UInterchangeVariantSetPayloadInterface::UInterchangeVariantSetPayloadInterface
          (UInterchangeVariantSetPayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeVariantSetPayloadInterface__6B_;
  return this;
}

// UInterchangeVariantSetPayloadInterface @ 14e6911d0

UInterchangeVariantSetPayloadInterface * __thiscall
UInterchangeVariantSetPayloadInterface::UInterchangeVariantSetPayloadInterface
          (UInterchangeVariantSetPayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeVariantSetPayloadInterface__6B_;
  return this;
}

// ~UInterchangeVariantSetPayloadInterface @ 14e6920f0

void __thiscall
UInterchangeVariantSetPayloadInterface::~UInterchangeVariantSetPayloadInterface
          (UInterchangeVariantSetPayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0cc0

UClass * __cdecl UInterchangeVariantSetPayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVariantSetPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeVariantSetPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeVariantSetPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeVariantSetPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeVariantSetPayloadInterface @ 14e6a8260

void __cdecl
UInterchangeVariantSetPayloadInterface::StaticRegisterNativesUInterchangeVariantSetPayloadInterface
          (void)

{
  return;
}

