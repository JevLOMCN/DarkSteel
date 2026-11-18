// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472969a0

UClass * __cdecl UMaterialExpressionCloudSampleAttribute::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCloudSampleAttribute",
               &Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCloudSampleAttribute,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCloudSampleAttribute>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCloudSampleAttribute>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.InnerSingleton;
}

// UMaterialExpressionCloudSampleAttribute @ 14729c510

UMaterialExpressionCloudSampleAttribute * __thiscall
UMaterialExpressionCloudSampleAttribute::UMaterialExpressionCloudSampleAttribute
          (UMaterialExpressionCloudSampleAttribute *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionCloudSampleAttribute__6B_;
  return this;
}

// ~UMaterialExpressionCloudSampleAttribute @ 14729d7f0

void __thiscall
UMaterialExpressionCloudSampleAttribute::~UMaterialExpressionCloudSampleAttribute
          (UMaterialExpressionCloudSampleAttribute *this)

{
  *(undefined ***)this = &___7UMaterialExpressionCloudSampleAttribute__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14729fed0

UClass * __cdecl UMaterialExpressionCloudSampleAttribute::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCloudSampleAttribute",
               &Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCloudSampleAttribute,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCloudSampleAttribute>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCloudSampleAttribute>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCloudSampleAttribute @ 1472a1ca0

void __cdecl
UMaterialExpressionCloudSampleAttribute::
StaticRegisterNativesUMaterialExpressionCloudSampleAttribute(void)

{
  return;
}

// UMaterialExpressionCloudSampleAttribute @ 148afad80

UMaterialExpressionCloudSampleAttribute * __thiscall
UMaterialExpressionCloudSampleAttribute::UMaterialExpressionCloudSampleAttribute
          (UMaterialExpressionCloudSampleAttribute *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionCloudSampleAttribute__6B_;
  return this;
}

