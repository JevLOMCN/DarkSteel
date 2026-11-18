// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// StaticClass @ 146959b30

UClass * __cdecl UNamedSlotInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNamedSlotInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NamedSlotInterface",
               &Z_Registration_Info_UClass_UNamedSlotInterface.InnerSingleton,
               StaticRegisterNativesUNamedSlotInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNamedSlotInterface>,
               InternalVTableHelperCtorCaller<UNamedSlotInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamedSlotInterface.InnerSingleton;
}

// UNamedSlotInterface @ 14698c2c0

UNamedSlotInterface * __thiscall
UNamedSlotInterface::UNamedSlotInterface(UNamedSlotInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNamedSlotInterface__6B_;
  return this;
}

// UNamedSlotInterface @ 14698c2f0

UNamedSlotInterface * __thiscall
UNamedSlotInterface::UNamedSlotInterface(UNamedSlotInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNamedSlotInterface__6B_;
  return this;
}

// ~UNamedSlotInterface @ 146993ab0

void __thiscall UNamedSlotInterface::~UNamedSlotInterface(UNamedSlotInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1469d4b70

UClass * __cdecl UNamedSlotInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamedSlotInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NamedSlotInterface",
               &Z_Registration_Info_UClass_UNamedSlotInterface.InnerSingleton,
               StaticRegisterNativesUNamedSlotInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNamedSlotInterface>,
               InternalVTableHelperCtorCaller<UNamedSlotInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamedSlotInterface.InnerSingleton;
}

// StaticRegisterNativesUNamedSlotInterface @ 146a1eb80

void __cdecl UNamedSlotInterface::StaticRegisterNativesUNamedSlotInterface(void)

{
  return;
}

