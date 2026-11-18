// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b9ad0

UClass * __cdecl UMaterialExpressionPixelDepth::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPixelDepth",
               &Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPixelDepth,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPixelDepth>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPixelDepth>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.InnerSingleton;
}

// UMaterialExpressionPixelDepth @ 1472c1250

UMaterialExpressionPixelDepth * __thiscall
UMaterialExpressionPixelDepth::UMaterialExpressionPixelDepth
          (UMaterialExpressionPixelDepth *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPixelDepth__6B_;
  return this;
}

// ~UMaterialExpressionPixelDepth @ 1472c2550

void __thiscall
UMaterialExpressionPixelDepth::~UMaterialExpressionPixelDepth(UMaterialExpressionPixelDepth *this)

{
  *(undefined ***)this = &___7UMaterialExpressionPixelDepth__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6430

UClass * __cdecl UMaterialExpressionPixelDepth::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPixelDepth",
               &Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPixelDepth,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPixelDepth>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPixelDepth>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPixelDepth @ 1472c76d0

void __cdecl UMaterialExpressionPixelDepth::StaticRegisterNativesUMaterialExpressionPixelDepth(void)

{
  return;
}

// UMaterialExpressionPixelDepth @ 148afdaf0

UMaterialExpressionPixelDepth * __thiscall
UMaterialExpressionPixelDepth::UMaterialExpressionPixelDepth
          (UMaterialExpressionPixelDepth *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPixelDepth__6B_;
  return this;
}

