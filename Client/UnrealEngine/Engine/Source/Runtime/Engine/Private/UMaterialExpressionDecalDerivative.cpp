// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147294ee0

UClass * __cdecl UMaterialExpressionDecalDerivative::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDecalDerivative",
               &Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDecalDerivative,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDecalDerivative>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDecalDerivative>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.InnerSingleton;
}

// UMaterialExpressionDecalDerivative @ 14729ceb0

UMaterialExpressionDecalDerivative * __thiscall
UMaterialExpressionDecalDerivative::UMaterialExpressionDecalDerivative
          (UMaterialExpressionDecalDerivative *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDecalDerivative__6B_;
  return this;
}

// ~UMaterialExpressionDecalDerivative @ 14729dc10

void __thiscall
UMaterialExpressionDecalDerivative::~UMaterialExpressionDecalDerivative
          (UMaterialExpressionDecalDerivative *this)

{
  *(undefined ***)this = &___7UMaterialExpressionDecalDerivative__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1010

UClass * __cdecl UMaterialExpressionDecalDerivative::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDecalDerivative",
               &Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDecalDerivative,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDecalDerivative>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDecalDerivative>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDecalDerivative @ 1472a1e40

void __cdecl
UMaterialExpressionDecalDerivative::StaticRegisterNativesUMaterialExpressionDecalDerivative(void)

{
  return;
}

// UMaterialExpressionDecalDerivative @ 148afb970

UMaterialExpressionDecalDerivative * __thiscall
UMaterialExpressionDecalDerivative::UMaterialExpressionDecalDerivative
          (UMaterialExpressionDecalDerivative *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionDecalDerivative__6B_;
  return this;
}

