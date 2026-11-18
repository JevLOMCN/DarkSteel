// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// StaticClass @ 14a7817c0

UClass * __cdecl UCommonBoundActionButtonInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBoundActionButtonInterface",
               &Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.InnerSingleton,
               StaticRegisterNativesUCommonBoundActionButtonInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonBoundActionButtonInterface>,
               InternalVTableHelperCtorCaller<UCommonBoundActionButtonInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.InnerSingleton;
}

// UCommonBoundActionButtonInterface @ 14a7ac350

UCommonBoundActionButtonInterface * __thiscall
UCommonBoundActionButtonInterface::UCommonBoundActionButtonInterface
          (UCommonBoundActionButtonInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCommonBoundActionButtonInterface__6B_;
  return this;
}

// UCommonBoundActionButtonInterface @ 14a7ac380

UCommonBoundActionButtonInterface * __thiscall
UCommonBoundActionButtonInterface::UCommonBoundActionButtonInterface
          (UCommonBoundActionButtonInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCommonBoundActionButtonInterface__6B_;
  return this;
}

// ~UCommonBoundActionButtonInterface @ 14a7b2160

void __thiscall
UCommonBoundActionButtonInterface::~UCommonBoundActionButtonInterface
          (UCommonBoundActionButtonInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e4ff0

UClass * __cdecl UCommonBoundActionButtonInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBoundActionButtonInterface",
               &Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.InnerSingleton,
               StaticRegisterNativesUCommonBoundActionButtonInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonBoundActionButtonInterface>,
               InternalVTableHelperCtorCaller<UCommonBoundActionButtonInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.InnerSingleton;
}

// StaticRegisterNativesUCommonBoundActionButtonInterface @ 14a81e450

void __cdecl
UCommonBoundActionButtonInterface::StaticRegisterNativesUCommonBoundActionButtonInterface(void)

{
  return;
}

