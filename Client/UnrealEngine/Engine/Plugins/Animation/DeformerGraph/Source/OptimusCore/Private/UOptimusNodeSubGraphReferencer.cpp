// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e11a960

UClass * __cdecl UOptimusNodeSubGraphReferencer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeSubGraphReferencer",
               &Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.InnerSingleton,
               StaticRegisterNativesUOptimusNodeSubGraphReferencer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeSubGraphReferencer>,
               InternalVTableHelperCtorCaller<UOptimusNodeSubGraphReferencer>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.InnerSingleton;
}

// UOptimusNodeSubGraphReferencer @ 14e15af30

UOptimusNodeSubGraphReferencer * __thiscall
UOptimusNodeSubGraphReferencer::UOptimusNodeSubGraphReferencer
          (UOptimusNodeSubGraphReferencer *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeSubGraphReferencer__6B_;
  return this;
}

// UOptimusNodeSubGraphReferencer @ 14e15af60

UOptimusNodeSubGraphReferencer * __thiscall
UOptimusNodeSubGraphReferencer::UOptimusNodeSubGraphReferencer
          (UOptimusNodeSubGraphReferencer *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeSubGraphReferencer__6B_;
  return this;
}

// ~UOptimusNodeSubGraphReferencer @ 14e163290

void __thiscall
UOptimusNodeSubGraphReferencer::~UOptimusNodeSubGraphReferencer
          (UOptimusNodeSubGraphReferencer *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d7160

UClass * __cdecl UOptimusNodeSubGraphReferencer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeSubGraphReferencer",
               &Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.InnerSingleton,
               StaticRegisterNativesUOptimusNodeSubGraphReferencer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeSubGraphReferencer>,
               InternalVTableHelperCtorCaller<UOptimusNodeSubGraphReferencer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodeSubGraphReferencer @ 14e225c10

void __cdecl
UOptimusNodeSubGraphReferencer::StaticRegisterNativesUOptimusNodeSubGraphReferencer(void)

{
  return;
}

