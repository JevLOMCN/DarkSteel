// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b9bd0

UClass * __cdecl UMaterialExpressionPixelNormalWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPixelNormalWS",
               &Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPixelNormalWS,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPixelNormalWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPixelNormalWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.InnerSingleton;
}

// UMaterialExpressionPixelNormalWS @ 1472c1280

UMaterialExpressionPixelNormalWS * __thiscall
UMaterialExpressionPixelNormalWS::UMaterialExpressionPixelNormalWS
          (UMaterialExpressionPixelNormalWS *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPixelNormalWS__6B_;
  return this;
}

// UMaterialExpressionPixelNormalWS @ 1472c12b0

UMaterialExpressionPixelNormalWS * __thiscall
UMaterialExpressionPixelNormalWS::UMaterialExpressionPixelNormalWS
          (UMaterialExpressionPixelNormalWS *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPixelNormalWS__6B_;
  return this;
}

// ~UMaterialExpressionPixelNormalWS @ 1472c2570

void __thiscall
UMaterialExpressionPixelNormalWS::~UMaterialExpressionPixelNormalWS
          (UMaterialExpressionPixelNormalWS *this)

{
  *(undefined ***)this = &___7UMaterialExpressionPixelNormalWS__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c64f0

UClass * __cdecl UMaterialExpressionPixelNormalWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPixelNormalWS",
               &Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPixelNormalWS,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPixelNormalWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPixelNormalWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPixelNormalWS @ 1472c76e0

void __cdecl
UMaterialExpressionPixelNormalWS::StaticRegisterNativesUMaterialExpressionPixelNormalWS(void)

{
  return;
}

