// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b96d0

UClass * __cdecl UMaterialExpressionObjectRadius::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectRadius",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectRadius,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectRadius>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectRadius>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.InnerSingleton;
}

// UMaterialExpressionObjectRadius @ 1472c0680

UMaterialExpressionObjectRadius * __thiscall
UMaterialExpressionObjectRadius::UMaterialExpressionObjectRadius
          (UMaterialExpressionObjectRadius *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionObjectRadius__6B_;
  return this;
}

// UMaterialExpressionObjectRadius @ 1472c06b0

UMaterialExpressionObjectRadius * __thiscall
UMaterialExpressionObjectRadius::UMaterialExpressionObjectRadius
          (UMaterialExpressionObjectRadius *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionObjectRadius__6B_;
  return this;
}

// ~UMaterialExpressionObjectRadius @ 1472c21d0

void __thiscall
UMaterialExpressionObjectRadius::~UMaterialExpressionObjectRadius
          (UMaterialExpressionObjectRadius *this)

{
  *(undefined ***)this = &___7UMaterialExpressionObjectRadius__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c50b0

UClass * __cdecl UMaterialExpressionObjectRadius::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectRadius",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectRadius,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectRadius>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectRadius>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionObjectRadius @ 1472c7530

void __cdecl
UMaterialExpressionObjectRadius::StaticRegisterNativesUMaterialExpressionObjectRadius(void)

{
  return;
}

