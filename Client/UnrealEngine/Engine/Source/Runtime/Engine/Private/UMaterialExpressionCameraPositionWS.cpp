// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472953e0

UClass * __cdecl UMaterialExpressionCameraPositionWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCameraPositionWS",
               &Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCameraPositionWS,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCameraPositionWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCameraPositionWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.InnerSingleton;
}

// UMaterialExpressionCameraPositionWS @ 14729c1a0

UMaterialExpressionCameraPositionWS * __thiscall
UMaterialExpressionCameraPositionWS::UMaterialExpressionCameraPositionWS
          (UMaterialExpressionCameraPositionWS *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionCameraPositionWS__6B_;
  return this;
}

// UMaterialExpressionCameraPositionWS @ 14729c1d0

UMaterialExpressionCameraPositionWS * __thiscall
UMaterialExpressionCameraPositionWS::UMaterialExpressionCameraPositionWS
          (UMaterialExpressionCameraPositionWS *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionCameraPositionWS__6B_;
  return this;
}

// ~UMaterialExpressionCameraPositionWS @ 14729d730

void __thiscall
UMaterialExpressionCameraPositionWS::~UMaterialExpressionCameraPositionWS
          (UMaterialExpressionCameraPositionWS *this)

{
  *(undefined ***)this = &___7UMaterialExpressionCameraPositionWS__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729fa50

UClass * __cdecl UMaterialExpressionCameraPositionWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCameraPositionWS",
               &Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCameraPositionWS,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCameraPositionWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCameraPositionWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCameraPositionWS @ 1472a1c40

void __cdecl
UMaterialExpressionCameraPositionWS::StaticRegisterNativesUMaterialExpressionCameraPositionWS(void)

{
  return;
}

