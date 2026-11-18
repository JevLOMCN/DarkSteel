// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5290

UClass * __cdecl UMaterialExpressionMaterialProxyReplace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialProxyReplace.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialProxyReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialProxyReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialProxyReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialProxyReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialProxyReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialProxyReplace.InnerSingleton;
}

// UMaterialExpressionMaterialProxyReplace @ 1472af120

UMaterialExpressionMaterialProxyReplace * __thiscall
UMaterialExpressionMaterialProxyReplace::UMaterialExpressionMaterialProxyReplace
          (UMaterialExpressionMaterialProxyReplace *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialProxyReplace__6B_;
  (this->Realtime).OutputIndex = 0;
  (this->Realtime).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Realtime).InputName.Number = 0;
  (this->Realtime).MaskR = 0;
  (this->Realtime).MaskG = 0;
  (this->Realtime).MaskB = 0;
  (this->Realtime).MaskA = 0;
  (this->Realtime).Expression = (UMaterialExpression *)0x0;
  (this->MaterialProxy).OutputIndex = 0;
  (this->MaterialProxy).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MaterialProxy).InputName.Number = 0;
  (this->MaterialProxy).MaskR = 0;
  (this->MaterialProxy).MaskG = 0;
  (this->MaterialProxy).MaskB = 0;
  (this->MaterialProxy).MaskA = 0;
  (this->MaterialProxy).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMaterialProxyReplace @ 1472af190

UMaterialExpressionMaterialProxyReplace * __thiscall
UMaterialExpressionMaterialProxyReplace::UMaterialExpressionMaterialProxyReplace
          (UMaterialExpressionMaterialProxyReplace *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialProxyReplace__6B_;
  (this->Realtime).OutputIndex = 0;
  (this->Realtime).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Realtime).InputName.Number = 0;
  (this->Realtime).MaskR = 0;
  (this->Realtime).MaskG = 0;
  (this->Realtime).MaskB = 0;
  (this->Realtime).MaskA = 0;
  (this->Realtime).Expression = (UMaterialExpression *)0x0;
  (this->MaterialProxy).OutputIndex = 0;
  (this->MaterialProxy).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MaterialProxy).InputName.Number = 0;
  (this->MaterialProxy).MaskR = 0;
  (this->MaterialProxy).MaskG = 0;
  (this->MaterialProxy).MaskB = 0;
  (this->MaterialProxy).MaskA = 0;
  (this->MaterialProxy).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionMaterialProxyReplace @ 1472afdb0

void __thiscall
UMaterialExpressionMaterialProxyReplace::~UMaterialExpressionMaterialProxyReplace
          (UMaterialExpressionMaterialProxyReplace *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialProxyReplace__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3fe0

UClass * __cdecl UMaterialExpressionMaterialProxyReplace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialProxyReplace.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialProxyReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialProxyReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialProxyReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialProxyReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialProxyReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialProxyReplace.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialProxyReplace @ 1472b47c0

void __cdecl
UMaterialExpressionMaterialProxyReplace::
StaticRegisterNativesUMaterialExpressionMaterialProxyReplace(void)

{
  return;
}

