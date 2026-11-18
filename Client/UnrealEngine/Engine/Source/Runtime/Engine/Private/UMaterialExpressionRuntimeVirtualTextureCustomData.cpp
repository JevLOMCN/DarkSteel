// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cd880

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureCustomData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureCustomData.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureCustomData",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureCustomData.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureCustomData,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureCustomData>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureCustomData>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureCustomData.
         InnerSingleton;
}

// UMaterialExpressionRuntimeVirtualTextureCustomData @ 1472d1ea0

UMaterialExpressionRuntimeVirtualTextureCustomData * __thiscall
UMaterialExpressionRuntimeVirtualTextureCustomData::
UMaterialExpressionRuntimeVirtualTextureCustomData
          (UMaterialExpressionRuntimeVirtualTextureCustomData *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionRuntimeVirtualTextureCustomData__6B_;
  return this;
}

// UMaterialExpressionRuntimeVirtualTextureCustomData @ 1472d1ed0

UMaterialExpressionRuntimeVirtualTextureCustomData * __thiscall
UMaterialExpressionRuntimeVirtualTextureCustomData::
UMaterialExpressionRuntimeVirtualTextureCustomData
          (UMaterialExpressionRuntimeVirtualTextureCustomData *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionRuntimeVirtualTextureCustomData__6B_;
  return this;
}

// ~UMaterialExpressionRuntimeVirtualTextureCustomData @ 1472d4290

void __thiscall
UMaterialExpressionRuntimeVirtualTextureCustomData::
~UMaterialExpressionRuntimeVirtualTextureCustomData
          (UMaterialExpressionRuntimeVirtualTextureCustomData *this)

{
  *(undefined ***)this = &___7UMaterialExpressionRuntimeVirtualTextureCustomData__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6030

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureCustomData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureCustomData.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureCustomData",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureCustomData.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureCustomData,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureCustomData>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureCustomData>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureCustomData.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureCustomData @ 1472d87b0

void __cdecl
UMaterialExpressionRuntimeVirtualTextureCustomData::
StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureCustomData(void)

{
  return;
}

