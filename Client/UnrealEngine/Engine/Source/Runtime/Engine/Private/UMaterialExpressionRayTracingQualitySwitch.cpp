// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472baaa0

UClass * __cdecl UMaterialExpressionRayTracingQualitySwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRayTracingQualitySwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionRayTracingQualitySwitch,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRayTracingQualitySwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRayTracingQualitySwitch>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.InnerSingleton;
}

// UMaterialExpressionRayTracingQualitySwitch @ 1472c1790

UMaterialExpressionRayTracingQualitySwitch * __thiscall
UMaterialExpressionRayTracingQualitySwitch::UMaterialExpressionRayTracingQualitySwitch
          (UMaterialExpressionRayTracingQualitySwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRayTracingQualitySwitch__6B_;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->RayTraced).OutputIndex = 0;
  (this->RayTraced).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RayTraced).InputName.Number = 0;
  (this->RayTraced).MaskR = 0;
  (this->RayTraced).MaskG = 0;
  (this->RayTraced).MaskB = 0;
  (this->RayTraced).MaskA = 0;
  (this->RayTraced).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionRayTracingQualitySwitch @ 1472c1800

UMaterialExpressionRayTracingQualitySwitch * __thiscall
UMaterialExpressionRayTracingQualitySwitch::UMaterialExpressionRayTracingQualitySwitch
          (UMaterialExpressionRayTracingQualitySwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRayTracingQualitySwitch__6B_;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->RayTraced).OutputIndex = 0;
  (this->RayTraced).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RayTraced).InputName.Number = 0;
  (this->RayTraced).MaskR = 0;
  (this->RayTraced).MaskG = 0;
  (this->RayTraced).MaskB = 0;
  (this->RayTraced).MaskA = 0;
  (this->RayTraced).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionRayTracingQualitySwitch @ 1472c2690

void __thiscall
UMaterialExpressionRayTracingQualitySwitch::~UMaterialExpressionRayTracingQualitySwitch
          (UMaterialExpressionRayTracingQualitySwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRayTracingQualitySwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6bb0

UClass * __cdecl UMaterialExpressionRayTracingQualitySwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRayTracingQualitySwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionRayTracingQualitySwitch,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRayTracingQualitySwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRayTracingQualitySwitch>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRayTracingQualitySwitch @ 1472c7770

void __cdecl
UMaterialExpressionRayTracingQualitySwitch::
StaticRegisterNativesUMaterialExpressionRayTracingQualitySwitch(void)

{
  return;
}

