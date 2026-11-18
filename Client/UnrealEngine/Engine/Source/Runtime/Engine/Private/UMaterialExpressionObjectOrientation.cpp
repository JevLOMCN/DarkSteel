// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b93d0

UClass * __cdecl UMaterialExpressionObjectOrientation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectOrientation",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectOrientation,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectOrientation>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectOrientation>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.InnerSingleton;
}

// UMaterialExpressionObjectOrientation @ 1472c05c0

UMaterialExpressionObjectOrientation * __thiscall
UMaterialExpressionObjectOrientation::UMaterialExpressionObjectOrientation
          (UMaterialExpressionObjectOrientation *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionObjectOrientation__6B_;
  return this;
}

// UMaterialExpressionObjectOrientation @ 1472c05f0

UMaterialExpressionObjectOrientation * __thiscall
UMaterialExpressionObjectOrientation::UMaterialExpressionObjectOrientation
          (UMaterialExpressionObjectOrientation *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionObjectOrientation__6B_;
  return this;
}

// ~UMaterialExpressionObjectOrientation @ 1472c2190

void __thiscall
UMaterialExpressionObjectOrientation::~UMaterialExpressionObjectOrientation
          (UMaterialExpressionObjectOrientation *this)

{
  *(undefined ***)this = &___7UMaterialExpressionObjectOrientation__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4f30

UClass * __cdecl UMaterialExpressionObjectOrientation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectOrientation",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectOrientation,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectOrientation>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectOrientation>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionObjectOrientation @ 1472c7510

void __cdecl
UMaterialExpressionObjectOrientation::StaticRegisterNativesUMaterialExpressionObjectOrientation
          (void)

{
  return;
}

