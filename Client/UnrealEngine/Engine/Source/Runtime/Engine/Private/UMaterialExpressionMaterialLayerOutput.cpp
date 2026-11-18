// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a4f90

UClass * __cdecl UMaterialExpressionMaterialLayerOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialLayerOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialLayerOutput,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialLayerOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialLayerOutput>,local_res8,
               UMaterialExpressionFunctionOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.InnerSingleton;
}

// UMaterialExpressionMaterialLayerOutput @ 1472af0f0

UMaterialExpressionMaterialLayerOutput * __thiscall
UMaterialExpressionMaterialLayerOutput::UMaterialExpressionMaterialLayerOutput
          (UMaterialExpressionMaterialLayerOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionFunctionOutput::UMaterialExpressionFunctionOutput
            ((UMaterialExpressionFunctionOutput *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionMaterialLayerOutput__6B_;
  return this;
}

// ~UMaterialExpressionMaterialLayerOutput @ 1472afd70

void __thiscall
UMaterialExpressionMaterialLayerOutput::~UMaterialExpressionMaterialLayerOutput
          (UMaterialExpressionMaterialLayerOutput *this)

{
  *(undefined ***)this = &___7UMaterialExpressionFunctionOutput__6B_;
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3f20

UClass * __cdecl UMaterialExpressionMaterialLayerOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialLayerOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialLayerOutput,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialLayerOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialLayerOutput>,local_res8,
               UMaterialExpressionFunctionOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialLayerOutput @ 1472b47b0

void __cdecl
UMaterialExpressionMaterialLayerOutput::StaticRegisterNativesUMaterialExpressionMaterialLayerOutput
          (void)

{
  return;
}

// UMaterialExpressionMaterialLayerOutput @ 148afce20

UMaterialExpressionMaterialLayerOutput * __thiscall
UMaterialExpressionMaterialLayerOutput::UMaterialExpressionMaterialLayerOutput
          (UMaterialExpressionMaterialLayerOutput *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
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
  *(undefined ***)this = &___7UMaterialExpressionFunctionOutput__6B_;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xfc = 0;
  *(undefined8 *)&this->field_0x104 = 0;
  ::FName::FName(local_res8,L"Result");
  *(uint *)&this->field_0xb0 = local_res8[0].ComparisonIndex.Value;
  *(uint *)&this->field_0xb4 = local_res8[0].Number;
  *(undefined ***)this = &___7UMaterialExpressionMaterialLayerOutput__6B_;
  ::FName::FName(local_res8,L"Material Attributes");
  *(uint *)&this->field_0xb0 = local_res8[0].ComparisonIndex.Value;
  *(uint *)&this->field_0xb4 = local_res8[0].Number;
  return this;
}

