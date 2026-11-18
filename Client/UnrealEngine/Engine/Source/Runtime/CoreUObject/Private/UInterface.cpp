// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// ~UInterface @ 141e88500

void __thiscall UInterface::~UInterface(UInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// StaticClass @ 141ebe320

UClass * __cdecl UInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Interface",
               &Z_Registration_Info_UClass_UInterface.InnerSingleton,StaticRegisterNativesUInterface
               ,0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface>,InternalVTableHelperCtorCaller<UInterface>,aFStackX_8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface.InnerSingleton;
}

// UInterface @ 1420a31f0

UInterface * __thiscall UInterface::UInterface(UInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterface__6B_;
  return this;
}

// UInterface @ 1420a3220

UInterface * __thiscall UInterface::UInterface(UInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterface__6B_;
  return this;
}

// GetPrivateStaticClass @ 1420c8650

UClass * __cdecl UInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Interface",
               &Z_Registration_Info_UClass_UInterface.InnerSingleton,StaticRegisterNativesUInterface
               ,0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface>,InternalVTableHelperCtorCaller<UInterface>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface.InnerSingleton;
}

// StaticRegisterNativesUInterface @ 1420dbe30

void __cdecl UInterface::StaticRegisterNativesUInterface(void)

{
  return;
}

