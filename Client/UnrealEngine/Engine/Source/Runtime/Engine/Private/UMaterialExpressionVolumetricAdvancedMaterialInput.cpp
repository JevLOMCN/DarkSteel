// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dce90

UClass * __cdecl UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVolumetricAdvancedMaterialInput",
               &Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialInput,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVolumetricAdvancedMaterialInput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVolumetricAdvancedMaterialInput>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.
         InnerSingleton;
}

// UMaterialExpressionVolumetricAdvancedMaterialInput @ 1472e2e30

UMaterialExpressionVolumetricAdvancedMaterialInput * __thiscall
UMaterialExpressionVolumetricAdvancedMaterialInput::
UMaterialExpressionVolumetricAdvancedMaterialInput
          (UMaterialExpressionVolumetricAdvancedMaterialInput *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionVolumetricAdvancedMaterialInput__6B_;
  return this;
}

// ~UMaterialExpressionVolumetricAdvancedMaterialInput @ 1472e38b0

void __thiscall
UMaterialExpressionVolumetricAdvancedMaterialInput::
~UMaterialExpressionVolumetricAdvancedMaterialInput
          (UMaterialExpressionVolumetricAdvancedMaterialInput *this)

{
  *(undefined ***)this = &___7UMaterialExpressionVolumetricAdvancedMaterialInput__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6f60

UClass * __cdecl UMaterialExpressionVolumetricAdvancedMaterialInput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVolumetricAdvancedMaterialInput",
               &Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialInput,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVolumetricAdvancedMaterialInput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVolumetricAdvancedMaterialInput>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialInput @ 1472e7a00

void __cdecl
UMaterialExpressionVolumetricAdvancedMaterialInput::
StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialInput(void)

{
  return;
}

// UMaterialExpressionVolumetricAdvancedMaterialInput @ 148aff940

UMaterialExpressionVolumetricAdvancedMaterialInput * __thiscall
UMaterialExpressionVolumetricAdvancedMaterialInput::
UMaterialExpressionVolumetricAdvancedMaterialInput
          (UMaterialExpressionVolumetricAdvancedMaterialInput *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UMaterialExpressionVolumetricAdvancedMaterialInput__6B_;
  return this;
}

