// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e117dd0

UClass * __cdecl UOptimusNodeGraphCollectionOwner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeGraphCollectionOwner",
               &Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.InnerSingleton,
               StaticRegisterNativesUOptimusNodeGraphCollectionOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeGraphCollectionOwner>,
               InternalVTableHelperCtorCaller<UOptimusNodeGraphCollectionOwner>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.InnerSingleton;
}

// UOptimusNodeGraphCollectionOwner @ 14e15aa10

UOptimusNodeGraphCollectionOwner * __thiscall
UOptimusNodeGraphCollectionOwner::UOptimusNodeGraphCollectionOwner
          (UOptimusNodeGraphCollectionOwner *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeGraphCollectionOwner__6B_;
  return this;
}

// UOptimusNodeGraphCollectionOwner @ 14e15aa40

UOptimusNodeGraphCollectionOwner * __thiscall
UOptimusNodeGraphCollectionOwner::UOptimusNodeGraphCollectionOwner
          (UOptimusNodeGraphCollectionOwner *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeGraphCollectionOwner__6B_;
  return this;
}

// ~UOptimusNodeGraphCollectionOwner @ 14e162fd0

void __thiscall
UOptimusNodeGraphCollectionOwner::~UOptimusNodeGraphCollectionOwner
          (UOptimusNodeGraphCollectionOwner *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6b90

UClass * __cdecl UOptimusNodeGraphCollectionOwner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeGraphCollectionOwner",
               &Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.InnerSingleton,
               StaticRegisterNativesUOptimusNodeGraphCollectionOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeGraphCollectionOwner>,
               InternalVTableHelperCtorCaller<UOptimusNodeGraphCollectionOwner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodeGraphCollectionOwner @ 14e225b90

void __cdecl
UOptimusNodeGraphCollectionOwner::StaticRegisterNativesUOptimusNodeGraphCollectionOwner(void)

{
  return;
}

