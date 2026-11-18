// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6749d0

UClass * __cdecl UInterchangeVolumePayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVolumePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeVolumePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeVolumePayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton;
}

// UInterchangeVolumePayloadInterface @ 14e691200

UInterchangeVolumePayloadInterface * __thiscall
UInterchangeVolumePayloadInterface::UInterchangeVolumePayloadInterface
          (UInterchangeVolumePayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeVolumePayloadInterface__6B_;
  return this;
}

// UInterchangeVolumePayloadInterface @ 14e691230

UInterchangeVolumePayloadInterface * __thiscall
UInterchangeVolumePayloadInterface::UInterchangeVolumePayloadInterface
          (UInterchangeVolumePayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeVolumePayloadInterface__6B_;
  return this;
}

// ~UInterchangeVolumePayloadInterface @ 14e692100

void __thiscall
UInterchangeVolumePayloadInterface::~UInterchangeVolumePayloadInterface
          (UInterchangeVolumePayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0d80

UClass * __cdecl UInterchangeVolumePayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVolumePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeVolumePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeVolumePayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeVolumePayloadInterface @ 14e6a8270

void __cdecl
UInterchangeVolumePayloadInterface::StaticRegisterNativesUInterchangeVolumePayloadInterface(void)

{
  return;
}

