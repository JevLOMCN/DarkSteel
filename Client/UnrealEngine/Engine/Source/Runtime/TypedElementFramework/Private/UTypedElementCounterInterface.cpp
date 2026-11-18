// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 6

// StaticClass @ 142c86dd0

UClass * __cdecl UTypedElementCounterInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementCounterInterface",
               &Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementCounterInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementCounterInterface>,
               InternalVTableHelperCtorCaller<UTypedElementCounterInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton;
}

// UTypedElementCounterInterface @ 142c98d40

UTypedElementCounterInterface * __thiscall
UTypedElementCounterInterface::UTypedElementCounterInterface
          (UTypedElementCounterInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementCounterInterface__6B_;
  return this;
}

// UTypedElementCounterInterface @ 142c98d70

UTypedElementCounterInterface * __thiscall
UTypedElementCounterInterface::UTypedElementCounterInterface
          (UTypedElementCounterInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementCounterInterface__6B_;
  return this;
}

// ~UTypedElementCounterInterface @ 142c9a980

void __thiscall
UTypedElementCounterInterface::~UTypedElementCounterInterface(UTypedElementCounterInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 142cae990

UClass * __cdecl UTypedElementCounterInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementCounterInterface",
               &Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementCounterInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementCounterInterface>,
               InternalVTableHelperCtorCaller<UTypedElementCounterInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton;
}

// StaticRegisterNativesUTypedElementCounterInterface @ 142cbc310

void __cdecl UTypedElementCounterInterface::StaticRegisterNativesUTypedElementCounterInterface(void)

{
  return;
}

