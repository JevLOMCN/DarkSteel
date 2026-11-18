// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5050

UClass * __cdecl UMaterialExpressionLightmapUVs::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLightmapUVs",
               &Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLightmapUVs,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLightmapUVs>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLightmapUVs>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.InnerSingleton;
}

// UMaterialExpressionLightmapUVs @ 1472ae180

UMaterialExpressionLightmapUVs * __thiscall
UMaterialExpressionLightmapUVs::UMaterialExpressionLightmapUVs
          (UMaterialExpressionLightmapUVs *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionLightmapUVs__6B_;
  return this;
}

// ~UMaterialExpressionLightmapUVs @ 1472afb30

void __thiscall
UMaterialExpressionLightmapUVs::~UMaterialExpressionLightmapUVs
          (UMaterialExpressionLightmapUVs *this)

{
  *(undefined ***)this = &___7UMaterialExpressionExternalCodeBase__6B_;
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3620

UClass * __cdecl UMaterialExpressionLightmapUVs::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLightmapUVs",
               &Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLightmapUVs,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLightmapUVs>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLightmapUVs>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLightmapUVs @ 1472b46c0

void __cdecl
UMaterialExpressionLightmapUVs::StaticRegisterNativesUMaterialExpressionLightmapUVs(void)

{
  return;
}

// UMaterialExpressionLightmapUVs @ 148afca60

UMaterialExpressionLightmapUVs * __thiscall
UMaterialExpressionLightmapUVs::UMaterialExpressionLightmapUVs
          (UMaterialExpressionLightmapUVs *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionLightmapUVs__6B_;
  return this;
}

