// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962dd50

UClass * __cdecl UToolContextTransactionProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolContextTransactionProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolContextTransactionProvider",
               &Z_Registration_Info_UClass_UToolContextTransactionProvider.InnerSingleton,
               StaticRegisterNativesUToolContextTransactionProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolContextTransactionProvider>,
               InternalVTableHelperCtorCaller<UToolContextTransactionProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolContextTransactionProvider.InnerSingleton;
}

// UToolContextTransactionProvider @ 14963d2a0

UToolContextTransactionProvider * __thiscall
UToolContextTransactionProvider::UToolContextTransactionProvider
          (UToolContextTransactionProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UToolContextTransactionProvider__6B_;
  return this;
}

// UToolContextTransactionProvider @ 14963d2d0

UToolContextTransactionProvider * __thiscall
UToolContextTransactionProvider::UToolContextTransactionProvider
          (UToolContextTransactionProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UToolContextTransactionProvider__6B_;
  return this;
}

// ~UToolContextTransactionProvider @ 14963f5e0

void __thiscall
UToolContextTransactionProvider::~UToolContextTransactionProvider
          (UToolContextTransactionProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149658380

UClass * __cdecl UToolContextTransactionProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolContextTransactionProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolContextTransactionProvider",
               &Z_Registration_Info_UClass_UToolContextTransactionProvider.InnerSingleton,
               StaticRegisterNativesUToolContextTransactionProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolContextTransactionProvider>,
               InternalVTableHelperCtorCaller<UToolContextTransactionProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolContextTransactionProvider.InnerSingleton;
}

// StaticRegisterNativesUToolContextTransactionProvider @ 149664d90

void __cdecl
UToolContextTransactionProvider::StaticRegisterNativesUToolContextTransactionProvider(void)

{
  return;
}

