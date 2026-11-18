// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b95d0

UClass * __cdecl UMaterialExpressionObjectPositionWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectPositionWS.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectPositionWS",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectPositionWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectPositionWS,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectPositionWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectPositionWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectPositionWS.InnerSingleton;
}

// UMaterialExpressionObjectPositionWS @ 1472c0620

UMaterialExpressionObjectPositionWS * __thiscall
UMaterialExpressionObjectPositionWS::UMaterialExpressionObjectPositionWS
          (UMaterialExpressionObjectPositionWS *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionObjectPositionWS__6B_;
  return this;
}

// UMaterialExpressionObjectPositionWS @ 1472c0650

UMaterialExpressionObjectPositionWS * __thiscall
UMaterialExpressionObjectPositionWS::UMaterialExpressionObjectPositionWS
          (UMaterialExpressionObjectPositionWS *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionObjectPositionWS__6B_;
  return this;
}

// ~UMaterialExpressionObjectPositionWS @ 1472c21b0

void __thiscall
UMaterialExpressionObjectPositionWS::~UMaterialExpressionObjectPositionWS
          (UMaterialExpressionObjectPositionWS *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionObjectPositionWS__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4ff0

UClass * __cdecl UMaterialExpressionObjectPositionWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectPositionWS.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectPositionWS",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectPositionWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectPositionWS,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectPositionWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectPositionWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectPositionWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionObjectPositionWS @ 1472c7520

void __cdecl
UMaterialExpressionObjectPositionWS::StaticRegisterNativesUMaterialExpressionObjectPositionWS(void)

{
  return;
}

