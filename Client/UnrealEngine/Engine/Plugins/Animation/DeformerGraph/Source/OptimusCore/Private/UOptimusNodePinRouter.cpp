// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e103b30

UClass * __cdecl UOptimusNodePinRouter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodePinRouter.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodePinRouter",
               &Z_Registration_Info_UClass_UOptimusNodePinRouter.InnerSingleton,
               StaticRegisterNativesUOptimusNodePinRouter,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodePinRouter>,
               InternalVTableHelperCtorCaller<UOptimusNodePinRouter>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodePinRouter.InnerSingleton;
}

// UOptimusNodePinRouter @ 14e15ac80

UOptimusNodePinRouter * __thiscall
UOptimusNodePinRouter::UOptimusNodePinRouter(UOptimusNodePinRouter *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodePinRouter__6B_;
  return this;
}

// UOptimusNodePinRouter @ 14e15acb0

UOptimusNodePinRouter * __thiscall
UOptimusNodePinRouter::UOptimusNodePinRouter
          (UOptimusNodePinRouter *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodePinRouter__6B_;
  return this;
}

// ~UOptimusNodePinRouter @ 14e1630c0

void __thiscall UOptimusNodePinRouter::~UOptimusNodePinRouter(UOptimusNodePinRouter *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6fe0

UClass * __cdecl UOptimusNodePinRouter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodePinRouter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodePinRouter",
               &Z_Registration_Info_UClass_UOptimusNodePinRouter.InnerSingleton,
               StaticRegisterNativesUOptimusNodePinRouter,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodePinRouter>,
               InternalVTableHelperCtorCaller<UOptimusNodePinRouter>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodePinRouter.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodePinRouter @ 14e225bf0

void __cdecl UOptimusNodePinRouter::StaticRegisterNativesUOptimusNodePinRouter(void)

{
  return;
}

