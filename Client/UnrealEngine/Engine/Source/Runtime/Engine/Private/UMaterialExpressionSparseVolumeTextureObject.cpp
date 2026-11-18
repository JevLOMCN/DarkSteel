// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cb8d0

UClass * __cdecl UMaterialExpressionSparseVolumeTextureObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureObject",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObject,
               0xb8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureObject>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureObject>,
               local_res8,UMaterialExpressionSparseVolumeTextureBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.InnerSingleton;
}

// UMaterialExpressionSparseVolumeTextureObject @ 1472d36c0

UMaterialExpressionSparseVolumeTextureObject * __thiscall
UMaterialExpressionSparseVolumeTextureObject::UMaterialExpressionSparseVolumeTextureObject
          (UMaterialExpressionSparseVolumeTextureObject *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UMaterialExpressionSparseVolumeTextureObject__6B_;
  return this;
}

// ~UMaterialExpressionSparseVolumeTextureObject @ 1472d4760

void __thiscall
UMaterialExpressionSparseVolumeTextureObject::~UMaterialExpressionSparseVolumeTextureObject
          (UMaterialExpressionSparseVolumeTextureObject *this)

{
  *(undefined ***)this = &___7UMaterialExpressionSparseVolumeTextureBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7b30

UClass * __cdecl UMaterialExpressionSparseVolumeTextureObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureObject",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObject,
               0xb8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureObject>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureObject>,
               local_res8,UMaterialExpressionSparseVolumeTextureBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObject @ 1472d89f0

void __cdecl
UMaterialExpressionSparseVolumeTextureObject::
StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObject(void)

{
  return;
}

// UMaterialExpressionSparseVolumeTextureObject @ 148afe9c0

UMaterialExpressionSparseVolumeTextureObject * __thiscall
UMaterialExpressionSparseVolumeTextureObject::UMaterialExpressionSparseVolumeTextureObject
          (UMaterialExpressionSparseVolumeTextureObject *this,FObjectInitializer *param_1)

{
  UMaterialExpressionSparseVolumeTextureBase::UMaterialExpressionSparseVolumeTextureBase
            ((UMaterialExpressionSparseVolumeTextureBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionSparseVolumeTextureObject__6B_;
  return this;
}

