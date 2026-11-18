// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e674300

UClass * __cdecl UInterchangeMeshPayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMeshPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMeshPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeMeshPayloadInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton;
}

// UInterchangeMeshPayloadInterface @ 14e691020

UInterchangeMeshPayloadInterface * __thiscall
UInterchangeMeshPayloadInterface::UInterchangeMeshPayloadInterface
          (UInterchangeMeshPayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeMeshPayloadInterface__6B_;
  return this;
}

// UInterchangeMeshPayloadInterface @ 14e691050

UInterchangeMeshPayloadInterface * __thiscall
UInterchangeMeshPayloadInterface::UInterchangeMeshPayloadInterface
          (UInterchangeMeshPayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeMeshPayloadInterface__6B_;
  return this;
}

// ~UInterchangeMeshPayloadInterface @ 14e6920b0

void __thiscall
UInterchangeMeshPayloadInterface::~UInterchangeMeshPayloadInterface
          (UInterchangeMeshPayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a09c0

UClass * __cdecl UInterchangeMeshPayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMeshPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMeshPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeMeshPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeMeshPayloadInterface @ 14e6a8220

void __cdecl
UInterchangeMeshPayloadInterface::StaticRegisterNativesUInterchangeMeshPayloadInterface(void)

{
  return;
}

