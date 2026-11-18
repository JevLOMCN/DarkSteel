// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5350

UClass * __cdecl UMaterialExpressionLightmassReplace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLightmassReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLightmassReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLightmassReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLightmassReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.InnerSingleton;
}

// UMaterialExpressionLightmassReplace @ 1472ae1c0

UMaterialExpressionLightmassReplace * __thiscall
UMaterialExpressionLightmassReplace::UMaterialExpressionLightmassReplace
          (UMaterialExpressionLightmassReplace *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLightmassReplace__6B_;
  (this->Realtime).OutputIndex = 0;
  (this->Realtime).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Realtime).InputName.Number = 0;
  (this->Realtime).MaskR = 0;
  (this->Realtime).MaskG = 0;
  (this->Realtime).MaskB = 0;
  (this->Realtime).MaskA = 0;
  (this->Realtime).Expression = (UMaterialExpression *)0x0;
  (this->Lightmass).OutputIndex = 0;
  (this->Lightmass).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Lightmass).InputName.Number = 0;
  (this->Lightmass).MaskR = 0;
  (this->Lightmass).MaskG = 0;
  (this->Lightmass).MaskB = 0;
  (this->Lightmass).MaskA = 0;
  (this->Lightmass).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionLightmassReplace @ 1472ae230

UMaterialExpressionLightmassReplace * __thiscall
UMaterialExpressionLightmassReplace::UMaterialExpressionLightmassReplace
          (UMaterialExpressionLightmassReplace *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLightmassReplace__6B_;
  (this->Realtime).OutputIndex = 0;
  (this->Realtime).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Realtime).InputName.Number = 0;
  (this->Realtime).MaskR = 0;
  (this->Realtime).MaskG = 0;
  (this->Realtime).MaskB = 0;
  (this->Realtime).MaskA = 0;
  (this->Realtime).Expression = (UMaterialExpression *)0x0;
  (this->Lightmass).OutputIndex = 0;
  (this->Lightmass).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Lightmass).InputName.Number = 0;
  (this->Lightmass).MaskR = 0;
  (this->Lightmass).MaskG = 0;
  (this->Lightmass).MaskB = 0;
  (this->Lightmass).MaskA = 0;
  (this->Lightmass).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionLightmassReplace @ 1472afb70

void __thiscall
UMaterialExpressionLightmassReplace::~UMaterialExpressionLightmassReplace
          (UMaterialExpressionLightmassReplace *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLightmassReplace__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b36e0

UClass * __cdecl UMaterialExpressionLightmassReplace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLightmassReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLightmassReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLightmassReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLightmassReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLightmassReplace @ 1472b46d0

void __cdecl
UMaterialExpressionLightmassReplace::StaticRegisterNativesUMaterialExpressionLightmassReplace(void)

{
  return;
}

