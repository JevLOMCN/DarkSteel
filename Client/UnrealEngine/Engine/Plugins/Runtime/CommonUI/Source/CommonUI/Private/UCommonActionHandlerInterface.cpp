// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// StaticClass @ 14a7816c0

UClass * __cdecl UCommonActionHandlerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActionHandlerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActionHandlerInterface",
               &Z_Registration_Info_UClass_UCommonActionHandlerInterface.InnerSingleton,
               StaticRegisterNativesUCommonActionHandlerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonActionHandlerInterface>,
               InternalVTableHelperCtorCaller<UCommonActionHandlerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActionHandlerInterface.InnerSingleton;
}

// UCommonActionHandlerInterface @ 14a7ab480

UCommonActionHandlerInterface * __thiscall
UCommonActionHandlerInterface::UCommonActionHandlerInterface
          (UCommonActionHandlerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCommonActionHandlerInterface__6B_;
  return this;
}

// UCommonActionHandlerInterface @ 14a7ab4b0

UCommonActionHandlerInterface * __thiscall
UCommonActionHandlerInterface::UCommonActionHandlerInterface
          (UCommonActionHandlerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCommonActionHandlerInterface__6B_;
  return this;
}

// ~UCommonActionHandlerInterface @ 14a7b1b00

void __thiscall
UCommonActionHandlerInterface::~UCommonActionHandlerInterface(UCommonActionHandlerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e4700

UClass * __cdecl UCommonActionHandlerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActionHandlerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActionHandlerInterface",
               &Z_Registration_Info_UClass_UCommonActionHandlerInterface.InnerSingleton,
               StaticRegisterNativesUCommonActionHandlerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonActionHandlerInterface>,
               InternalVTableHelperCtorCaller<UCommonActionHandlerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActionHandlerInterface.InnerSingleton;
}

// StaticRegisterNativesUCommonActionHandlerInterface @ 14a81e240

void __cdecl UCommonActionHandlerInterface::StaticRegisterNativesUCommonActionHandlerInterface(void)

{
  return;
}

