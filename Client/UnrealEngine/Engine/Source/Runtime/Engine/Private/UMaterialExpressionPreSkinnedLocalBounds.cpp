// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba210

UClass * __cdecl UMaterialExpressionPreSkinnedLocalBounds::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPreSkinnedLocalBounds",
               &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPreSkinnedLocalBounds,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPreSkinnedLocalBounds>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPreSkinnedLocalBounds>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.InnerSingleton;
}

// UMaterialExpressionPreSkinnedLocalBounds @ 1472c1430

UMaterialExpressionPreSkinnedLocalBounds * __thiscall
UMaterialExpressionPreSkinnedLocalBounds::UMaterialExpressionPreSkinnedLocalBounds
          (UMaterialExpressionPreSkinnedLocalBounds *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedLocalBounds__6B_;
  return this;
}

// ~UMaterialExpressionPreSkinnedLocalBounds @ 1472c25d0

void __thiscall
UMaterialExpressionPreSkinnedLocalBounds::~UMaterialExpressionPreSkinnedLocalBounds
          (UMaterialExpressionPreSkinnedLocalBounds *this)

{
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedLocalBounds__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6730

UClass * __cdecl UMaterialExpressionPreSkinnedLocalBounds::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPreSkinnedLocalBounds",
               &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPreSkinnedLocalBounds,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPreSkinnedLocalBounds>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPreSkinnedLocalBounds>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPreSkinnedLocalBounds @ 1472c7710

void __cdecl
UMaterialExpressionPreSkinnedLocalBounds::
StaticRegisterNativesUMaterialExpressionPreSkinnedLocalBounds(void)

{
  return;
}

// UMaterialExpressionPreSkinnedLocalBounds @ 148afdbb0

UMaterialExpressionPreSkinnedLocalBounds * __thiscall
UMaterialExpressionPreSkinnedLocalBounds::UMaterialExpressionPreSkinnedLocalBounds
          (UMaterialExpressionPreSkinnedLocalBounds *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedLocalBounds__6B_;
  return this;
}

