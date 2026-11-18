// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472eed00

UClass * __cdecl UMaterialFunctionMaterialLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionMaterialLayer",
               &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionMaterialLayer,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunctionMaterialLayer>,
               InternalVTableHelperCtorCaller<UMaterialFunctionMaterialLayer>,local_res8,
               UMaterialFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.InnerSingleton;
}

// UMaterialFunctionMaterialLayer @ 1472f19d0

UMaterialFunctionMaterialLayer * __thiscall
UMaterialFunctionMaterialLayer::UMaterialFunctionMaterialLayer
          (UMaterialFunctionMaterialLayer *this,FVTableHelper *param_1)

{
  UMaterialFunction::UMaterialFunction((UMaterialFunction *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayer__6B_;
  return this;
}

// UMaterialFunctionMaterialLayer @ 1472f1a00

UMaterialFunctionMaterialLayer * __thiscall
UMaterialFunctionMaterialLayer::UMaterialFunctionMaterialLayer
          (UMaterialFunctionMaterialLayer *this,FObjectInitializer *param_1)

{
  UMaterialFunction::UMaterialFunction((UMaterialFunction *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayer__6B_;
  return this;
}

// ~UMaterialFunctionMaterialLayer @ 1472f2140

void __thiscall
UMaterialFunctionMaterialLayer::~UMaterialFunctionMaterialLayer
          (UMaterialFunctionMaterialLayer *this)

{
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayer__6B_;
  UMaterialFunction::~UMaterialFunction((UMaterialFunction *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3500

UClass * __cdecl UMaterialFunctionMaterialLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionMaterialLayer",
               &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionMaterialLayer,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunctionMaterialLayer>,
               InternalVTableHelperCtorCaller<UMaterialFunctionMaterialLayer>,local_res8,
               UMaterialFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.InnerSingleton;
}

// StaticRegisterNativesUMaterialFunctionMaterialLayer @ 1472f43d0

void __cdecl
UMaterialFunctionMaterialLayer::StaticRegisterNativesUMaterialFunctionMaterialLayer(void)

{
  return;
}

