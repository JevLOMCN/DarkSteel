// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e118730

UClass * __cdecl UOptimusDeformerInstanceAccessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerInstanceAccessor",
               &Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerInstanceAccessor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDeformerInstanceAccessor>,
               InternalVTableHelperCtorCaller<UOptimusDeformerInstanceAccessor>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.InnerSingleton;
}

// UOptimusDeformerInstanceAccessor @ 14e159cb0

UOptimusDeformerInstanceAccessor * __thiscall
UOptimusDeformerInstanceAccessor::UOptimusDeformerInstanceAccessor
          (UOptimusDeformerInstanceAccessor *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDeformerInstanceAccessor__6B_;
  return this;
}

// UOptimusDeformerInstanceAccessor @ 14e159ce0

UOptimusDeformerInstanceAccessor * __thiscall
UOptimusDeformerInstanceAccessor::UOptimusDeformerInstanceAccessor
          (UOptimusDeformerInstanceAccessor *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDeformerInstanceAccessor__6B_;
  return this;
}

// ~UOptimusDeformerInstanceAccessor @ 14e162ad0

void __thiscall
UOptimusDeformerInstanceAccessor::~UOptimusDeformerInstanceAccessor
          (UOptimusDeformerInstanceAccessor *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d5a70

UClass * __cdecl UOptimusDeformerInstanceAccessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerInstanceAccessor",
               &Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerInstanceAccessor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDeformerInstanceAccessor>,
               InternalVTableHelperCtorCaller<UOptimusDeformerInstanceAccessor>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.InnerSingleton;
}

// StaticRegisterNativesUOptimusDeformerInstanceAccessor @ 14e225990

void __cdecl
UOptimusDeformerInstanceAccessor::StaticRegisterNativesUOptimusDeformerInstanceAccessor(void)

{
  return;
}

