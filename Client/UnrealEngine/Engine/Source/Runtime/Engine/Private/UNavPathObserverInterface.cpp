// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472eec40

UClass * __cdecl UNavPathObserverInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavPathObserverInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavPathObserverInterface",
               &Z_Registration_Info_UClass_UNavPathObserverInterface.InnerSingleton,
               StaticRegisterNativesUNavPathObserverInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavPathObserverInterface>,
               InternalVTableHelperCtorCaller<UNavPathObserverInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavPathObserverInterface.InnerSingleton;
}

// UNavPathObserverInterface @ 1472f1f50

UNavPathObserverInterface * __thiscall
UNavPathObserverInterface::UNavPathObserverInterface
          (UNavPathObserverInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavPathObserverInterface__6B_;
  return this;
}

// ~UNavPathObserverInterface @ 1472f2450

void __thiscall
UNavPathObserverInterface::~UNavPathObserverInterface(UNavPathObserverInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3fe0

UClass * __cdecl UNavPathObserverInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavPathObserverInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavPathObserverInterface",
               &Z_Registration_Info_UClass_UNavPathObserverInterface.InnerSingleton,
               StaticRegisterNativesUNavPathObserverInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavPathObserverInterface>,
               InternalVTableHelperCtorCaller<UNavPathObserverInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavPathObserverInterface.InnerSingleton;
}

// StaticRegisterNativesUNavPathObserverInterface @ 1472f44c0

void __cdecl UNavPathObserverInterface::StaticRegisterNativesUNavPathObserverInterface(void)

{
  return;
}

// UNavPathObserverInterface @ 14737cbd0

UNavPathObserverInterface * __thiscall
UNavPathObserverInterface::UNavPathObserverInterface
          (UNavPathObserverInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavPathObserverInterface__6B_;
  return this;
}

