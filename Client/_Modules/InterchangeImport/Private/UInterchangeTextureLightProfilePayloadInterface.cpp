// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e674580

UClass * __cdecl UInterchangeTextureLightProfilePayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeTextureLightProfilePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.
                InnerSingleton,StaticRegisterNativesUInterchangeTextureLightProfilePayloadInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTextureLightProfilePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeTextureLightProfilePayloadInterface>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.InnerSingleton;
}

// UInterchangeTextureLightProfilePayloadInterface @ 14e6910e0

UInterchangeTextureLightProfilePayloadInterface * __thiscall
UInterchangeTextureLightProfilePayloadInterface::UInterchangeTextureLightProfilePayloadInterface
          (UInterchangeTextureLightProfilePayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureLightProfilePayloadInterface__6B_;
  return this;
}

// UInterchangeTextureLightProfilePayloadInterface @ 14e691110

UInterchangeTextureLightProfilePayloadInterface * __thiscall
UInterchangeTextureLightProfilePayloadInterface::UInterchangeTextureLightProfilePayloadInterface
          (UInterchangeTextureLightProfilePayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureLightProfilePayloadInterface__6B_;
  return this;
}

// ~UInterchangeTextureLightProfilePayloadInterface @ 14e6920d0

void __thiscall
UInterchangeTextureLightProfilePayloadInterface::~UInterchangeTextureLightProfilePayloadInterface
          (UInterchangeTextureLightProfilePayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0b40

UClass * __cdecl UInterchangeTextureLightProfilePayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeTextureLightProfilePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.
                InnerSingleton,StaticRegisterNativesUInterchangeTextureLightProfilePayloadInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTextureLightProfilePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeTextureLightProfilePayloadInterface>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeTextureLightProfilePayloadInterface @ 14e6a8240

void __cdecl
UInterchangeTextureLightProfilePayloadInterface::
StaticRegisterNativesUInterchangeTextureLightProfilePayloadInterface(void)

{
  return;
}

