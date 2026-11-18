// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147296560

UClass * __cdecl UMaterialExpressionDistanceCullFade::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDistanceCullFade",
               &Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDistanceCullFade,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDistanceCullFade>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDistanceCullFade>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.InnerSingleton;
}

// UMaterialExpressionDistanceCullFade @ 14729d290

UMaterialExpressionDistanceCullFade * __thiscall
UMaterialExpressionDistanceCullFade::UMaterialExpressionDistanceCullFade
          (UMaterialExpressionDistanceCullFade *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDistanceCullFade__6B_;
  return this;
}

// UMaterialExpressionDistanceCullFade @ 14729d2c0

UMaterialExpressionDistanceCullFade * __thiscall
UMaterialExpressionDistanceCullFade::UMaterialExpressionDistanceCullFade
          (UMaterialExpressionDistanceCullFade *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDistanceCullFade__6B_;
  return this;
}

// ~UMaterialExpressionDistanceCullFade @ 14729dd30

void __thiscall
UMaterialExpressionDistanceCullFade::~UMaterialExpressionDistanceCullFade
          (UMaterialExpressionDistanceCullFade *this)

{
  *(undefined ***)this = &___7UMaterialExpressionDistanceCullFade__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a16d0

UClass * __cdecl UMaterialExpressionDistanceCullFade::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDistanceCullFade",
               &Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDistanceCullFade,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDistanceCullFade>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDistanceCullFade>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDistanceCullFade @ 1472a1ed0

void __cdecl
UMaterialExpressionDistanceCullFade::StaticRegisterNativesUMaterialExpressionDistanceCullFade(void)

{
  return;
}

