// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// StaticClass @ 14ad76860

UClass * __cdecl UMetaSoundDocumentInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundDocumentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetaSoundDocumentInterface",
               &Z_Registration_Info_UClass_UMetaSoundDocumentInterface.InnerSingleton,
               StaticRegisterNativesUMetaSoundDocumentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundDocumentInterface>,
               InternalVTableHelperCtorCaller<UMetaSoundDocumentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundDocumentInterface.InnerSingleton;
}

// UMetaSoundDocumentInterface @ 14ad9c650

UMetaSoundDocumentInterface * __thiscall
UMetaSoundDocumentInterface::UMetaSoundDocumentInterface
          (UMetaSoundDocumentInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundDocumentInterface__6B_;
  return this;
}

// UMetaSoundDocumentInterface @ 14ad9c680

UMetaSoundDocumentInterface * __thiscall
UMetaSoundDocumentInterface::UMetaSoundDocumentInterface
          (UMetaSoundDocumentInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundDocumentInterface__6B_;
  return this;
}

// ~UMetaSoundDocumentInterface @ 14ad9edb0

void __thiscall
UMetaSoundDocumentInterface::~UMetaSoundDocumentInterface(UMetaSoundDocumentInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14adc2550

UClass * __cdecl UMetaSoundDocumentInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundDocumentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetaSoundDocumentInterface",
               &Z_Registration_Info_UClass_UMetaSoundDocumentInterface.InnerSingleton,
               StaticRegisterNativesUMetaSoundDocumentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundDocumentInterface>,
               InternalVTableHelperCtorCaller<UMetaSoundDocumentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundDocumentInterface.InnerSingleton;
}

// StaticRegisterNativesUMetaSoundDocumentInterface @ 14add1450

void __cdecl UMetaSoundDocumentInterface::StaticRegisterNativesUMetaSoundDocumentInterface(void)

{
  return;
}

