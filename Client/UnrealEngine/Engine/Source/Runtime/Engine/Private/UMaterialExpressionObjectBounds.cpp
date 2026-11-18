// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b8f10

UClass * __cdecl UMaterialExpressionObjectBounds::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectBounds",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectBounds,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectBounds>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectBounds>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.InnerSingleton;
}

// UMaterialExpressionObjectBounds @ 1472c0530

UMaterialExpressionObjectBounds * __thiscall
UMaterialExpressionObjectBounds::UMaterialExpressionObjectBounds
          (UMaterialExpressionObjectBounds *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionObjectBounds__6B_;
  return this;
}

// UMaterialExpressionObjectBounds @ 1472c0560

UMaterialExpressionObjectBounds * __thiscall
UMaterialExpressionObjectBounds::UMaterialExpressionObjectBounds
          (UMaterialExpressionObjectBounds *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionObjectBounds__6B_;
  return this;
}

// ~UMaterialExpressionObjectBounds @ 1472c2150

void __thiscall
UMaterialExpressionObjectBounds::~UMaterialExpressionObjectBounds
          (UMaterialExpressionObjectBounds *this)

{
  *(undefined ***)this = &___7UMaterialExpressionObjectBounds__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4db0

UClass * __cdecl UMaterialExpressionObjectBounds::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectBounds",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectBounds,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectBounds>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectBounds>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionObjectBounds @ 1472c74f0

void __cdecl
UMaterialExpressionObjectBounds::StaticRegisterNativesUMaterialExpressionObjectBounds(void)

{
  return;
}

