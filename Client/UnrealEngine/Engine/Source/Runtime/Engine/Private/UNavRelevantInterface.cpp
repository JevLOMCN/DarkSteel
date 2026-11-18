// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ede90

UClass * __cdecl UNavRelevantInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNavRelevantInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavRelevantInterface",
               &Z_Registration_Info_UClass_UNavRelevantInterface.InnerSingleton,
               StaticRegisterNativesUNavRelevantInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavRelevantInterface>,
               InternalVTableHelperCtorCaller<UNavRelevantInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavRelevantInterface.InnerSingleton;
}

// UNavRelevantInterface @ 1472f1f80

UNavRelevantInterface * __thiscall
UNavRelevantInterface::UNavRelevantInterface(UNavRelevantInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavRelevantInterface__6B_;
  return this;
}

// ~UNavRelevantInterface @ 1472f2460

void __thiscall UNavRelevantInterface::~UNavRelevantInterface(UNavRelevantInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f40a0

UClass * __cdecl UNavRelevantInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavRelevantInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavRelevantInterface",
               &Z_Registration_Info_UClass_UNavRelevantInterface.InnerSingleton,
               StaticRegisterNativesUNavRelevantInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavRelevantInterface>,
               InternalVTableHelperCtorCaller<UNavRelevantInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavRelevantInterface.InnerSingleton;
}

// StaticRegisterNativesUNavRelevantInterface @ 1472f44d0

void __cdecl UNavRelevantInterface::StaticRegisterNativesUNavRelevantInterface(void)

{
  return;
}

// UNavRelevantInterface @ 14737cc00

UNavRelevantInterface * __thiscall
UNavRelevantInterface::UNavRelevantInterface
          (UNavRelevantInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavRelevantInterface__6B_;
  return this;
}

