// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 6

// StaticClass @ 14cfa6b90

UClass * __cdecl UAppleImageInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleImageUtils",L"AppleImageInterface",
               &Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton,
               StaticRegisterNativesUAppleImageInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleImageInterface>,
               InternalVTableHelperCtorCaller<UAppleImageInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton;
}

// UAppleImageInterface @ 14cfa82a0

UAppleImageInterface * __thiscall
UAppleImageInterface::UAppleImageInterface(UAppleImageInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAppleImageInterface__6B_;
  return this;
}

// UAppleImageInterface @ 14cfa82d0

UAppleImageInterface * __thiscall
UAppleImageInterface::UAppleImageInterface(UAppleImageInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAppleImageInterface__6B_;
  return this;
}

// ~UAppleImageInterface @ 14cfa8430

void __thiscall UAppleImageInterface::~UAppleImageInterface(UAppleImageInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14cfa8ef0

UClass * __cdecl UAppleImageInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleImageUtils",L"AppleImageInterface",
               &Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton,
               StaticRegisterNativesUAppleImageInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleImageInterface>,
               InternalVTableHelperCtorCaller<UAppleImageInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton;
}

// StaticRegisterNativesUAppleImageInterface @ 14cfa9230

void __cdecl UAppleImageInterface::StaticRegisterNativesUAppleImageInterface(void)

{
  return;
}

