// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a6f80

UClass * __cdecl UMaterialExpressionFontSignedDistance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFontSignedDistance",
               &Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFontSignedDistance,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFontSignedDistance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFontSignedDistance>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.InnerSingleton;
}

// UMaterialExpressionFontSignedDistance @ 1472ad450

UMaterialExpressionFontSignedDistance * __thiscall
UMaterialExpressionFontSignedDistance::UMaterialExpressionFontSignedDistance
          (UMaterialExpressionFontSignedDistance *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionFontSignedDistance__6B_;
  return this;
}

// ~UMaterialExpressionFontSignedDistance @ 1472af810

void __thiscall
UMaterialExpressionFontSignedDistance::~UMaterialExpressionFontSignedDistance
          (UMaterialExpressionFontSignedDistance *this)

{
  *(undefined ***)this = &___7UMaterialExpressionExternalCodeBase__6B_;
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b28a0

UClass * __cdecl UMaterialExpressionFontSignedDistance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFontSignedDistance",
               &Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFontSignedDistance,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFontSignedDistance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFontSignedDistance>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFontSignedDistance @ 1472b45a0

void __cdecl
UMaterialExpressionFontSignedDistance::StaticRegisterNativesUMaterialExpressionFontSignedDistance
          (void)

{
  return;
}

// UMaterialExpressionFontSignedDistance @ 148afc450

UMaterialExpressionFontSignedDistance * __thiscall
UMaterialExpressionFontSignedDistance::UMaterialExpressionFontSignedDistance
          (UMaterialExpressionFontSignedDistance *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionFontSignedDistance__6B_;
  return this;
}

