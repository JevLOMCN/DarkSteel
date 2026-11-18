// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e106bc0

UClass * __cdecl UOptimusPersistentBufferProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPersistentBufferProvider",
               &Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.InnerSingleton,
               StaticRegisterNativesUOptimusPersistentBufferProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusPersistentBufferProvider>,
               InternalVTableHelperCtorCaller<UOptimusPersistentBufferProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.InnerSingleton;
}

// UOptimusPersistentBufferProvider @ 14e15c610

UOptimusPersistentBufferProvider * __thiscall
UOptimusPersistentBufferProvider::UOptimusPersistentBufferProvider
          (UOptimusPersistentBufferProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusPersistentBufferProvider__6B_;
  return this;
}

// UOptimusPersistentBufferProvider @ 14e15c640

UOptimusPersistentBufferProvider * __thiscall
UOptimusPersistentBufferProvider::UOptimusPersistentBufferProvider
          (UOptimusPersistentBufferProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusPersistentBufferProvider__6B_;
  return this;
}

// ~UOptimusPersistentBufferProvider @ 14e163cb0

void __thiscall
UOptimusPersistentBufferProvider::~UOptimusPersistentBufferProvider
          (UOptimusPersistentBufferProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d85a0

UClass * __cdecl UOptimusPersistentBufferProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPersistentBufferProvider",
               &Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.InnerSingleton,
               StaticRegisterNativesUOptimusPersistentBufferProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusPersistentBufferProvider>,
               InternalVTableHelperCtorCaller<UOptimusPersistentBufferProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusPersistentBufferProvider @ 14e225dc0

void __cdecl
UOptimusPersistentBufferProvider::StaticRegisterNativesUOptimusPersistentBufferProvider(void)

{
  return;
}

