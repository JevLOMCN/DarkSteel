// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e674810

UClass * __cdecl UInterchangeGroomPayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGroomPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeGroomPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGroomPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeGroomPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton;
}

// UInterchangeGroomPayloadInterface @ 14e690ee0

UInterchangeGroomPayloadInterface * __thiscall
UInterchangeGroomPayloadInterface::UInterchangeGroomPayloadInterface
          (UInterchangeGroomPayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeGroomPayloadInterface__6B_;
  return this;
}

// UInterchangeGroomPayloadInterface @ 14e690f10

UInterchangeGroomPayloadInterface * __thiscall
UInterchangeGroomPayloadInterface::UInterchangeGroomPayloadInterface
          (UInterchangeGroomPayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeGroomPayloadInterface__6B_;
  return this;
}

// ~UInterchangeGroomPayloadInterface @ 14e692040

void __thiscall
UInterchangeGroomPayloadInterface::~UInterchangeGroomPayloadInterface
          (UInterchangeGroomPayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0780

UClass * __cdecl UInterchangeGroomPayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGroomPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeGroomPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGroomPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeGroomPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeGroomPayloadInterface @ 14e6a81f0

void __cdecl
UInterchangeGroomPayloadInterface::StaticRegisterNativesUInterchangeGroomPayloadInterface(void)

{
  return;
}

