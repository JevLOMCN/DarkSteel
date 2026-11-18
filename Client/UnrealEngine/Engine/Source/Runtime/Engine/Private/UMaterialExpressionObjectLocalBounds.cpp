// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b9110

UClass * __cdecl UMaterialExpressionObjectLocalBounds::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectLocalBounds",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectLocalBounds,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectLocalBounds>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectLocalBounds>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.InnerSingleton;
}

// UMaterialExpressionObjectLocalBounds @ 1472c0590

UMaterialExpressionObjectLocalBounds * __thiscall
UMaterialExpressionObjectLocalBounds::UMaterialExpressionObjectLocalBounds
          (UMaterialExpressionObjectLocalBounds *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionObjectLocalBounds__6B_;
  return this;
}

// ~UMaterialExpressionObjectLocalBounds @ 1472c2170

void __thiscall
UMaterialExpressionObjectLocalBounds::~UMaterialExpressionObjectLocalBounds
          (UMaterialExpressionObjectLocalBounds *this)

{
  *(undefined ***)this = &___7UMaterialExpressionObjectLocalBounds__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4e70

UClass * __cdecl UMaterialExpressionObjectLocalBounds::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionObjectLocalBounds",
               &Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionObjectLocalBounds,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionObjectLocalBounds>,
               InternalVTableHelperCtorCaller<UMaterialExpressionObjectLocalBounds>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionObjectLocalBounds @ 1472c7500

void __cdecl
UMaterialExpressionObjectLocalBounds::StaticRegisterNativesUMaterialExpressionObjectLocalBounds
          (void)

{
  return;
}

// UMaterialExpressionObjectLocalBounds @ 148afd570

UMaterialExpressionObjectLocalBounds * __thiscall
UMaterialExpressionObjectLocalBounds::UMaterialExpressionObjectLocalBounds
          (UMaterialExpressionObjectLocalBounds *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionObjectLocalBounds__6B_;
  return this;
}

