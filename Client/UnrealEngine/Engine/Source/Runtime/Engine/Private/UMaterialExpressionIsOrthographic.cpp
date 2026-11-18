// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a4b90

UClass * __cdecl UMaterialExpressionIsOrthographic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionIsOrthographic",
               &Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionIsOrthographic,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionIsOrthographic>,
               InternalVTableHelperCtorCaller<UMaterialExpressionIsOrthographic>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.InnerSingleton;
}

// UMaterialExpressionIsOrthographic @ 1472adfe0

UMaterialExpressionIsOrthographic * __thiscall
UMaterialExpressionIsOrthographic::UMaterialExpressionIsOrthographic
          (UMaterialExpressionIsOrthographic *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionIsOrthographic__6B_;
  return this;
}

// UMaterialExpressionIsOrthographic @ 1472ae020

UMaterialExpressionIsOrthographic * __thiscall
UMaterialExpressionIsOrthographic::UMaterialExpressionIsOrthographic
          (UMaterialExpressionIsOrthographic *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionIsOrthographic__6B_;
  return this;
}

// ~UMaterialExpressionIsOrthographic @ 1472afa90

void __thiscall
UMaterialExpressionIsOrthographic::~UMaterialExpressionIsOrthographic
          (UMaterialExpressionIsOrthographic *this)

{
  *(undefined ***)this = &___7UMaterialExpressionExternalCodeBase__6B_;
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b33e0

UClass * __cdecl UMaterialExpressionIsOrthographic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionIsOrthographic",
               &Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionIsOrthographic,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionIsOrthographic>,
               InternalVTableHelperCtorCaller<UMaterialExpressionIsOrthographic>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionIsOrthographic @ 1472b4690

void __cdecl
UMaterialExpressionIsOrthographic::StaticRegisterNativesUMaterialExpressionIsOrthographic(void)

{
  return;
}

