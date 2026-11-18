// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b9050

UClass * __cdecl UMaterialExpressionPerInstanceRandom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPerInstanceRandom.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPerInstanceRandom",
               &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceRandom.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPerInstanceRandom,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPerInstanceRandom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPerInstanceRandom>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceRandom.InnerSingleton;
}

// UMaterialExpressionPerInstanceRandom @ 1472c11b0

UMaterialExpressionPerInstanceRandom * __thiscall
UMaterialExpressionPerInstanceRandom::UMaterialExpressionPerInstanceRandom
          (UMaterialExpressionPerInstanceRandom *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPerInstanceRandom__6B_;
  return this;
}

// UMaterialExpressionPerInstanceRandom @ 1472c11e0

UMaterialExpressionPerInstanceRandom * __thiscall
UMaterialExpressionPerInstanceRandom::UMaterialExpressionPerInstanceRandom
          (UMaterialExpressionPerInstanceRandom *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPerInstanceRandom__6B_;
  return this;
}

// ~UMaterialExpressionPerInstanceRandom @ 1472c24f0

void __thiscall
UMaterialExpressionPerInstanceRandom::~UMaterialExpressionPerInstanceRandom
          (UMaterialExpressionPerInstanceRandom *this)

{
  *(undefined ***)this = &___7UMaterialExpressionPerInstanceRandom__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c62b0

UClass * __cdecl UMaterialExpressionPerInstanceRandom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPerInstanceRandom.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPerInstanceRandom",
               &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceRandom.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPerInstanceRandom,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPerInstanceRandom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPerInstanceRandom>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceRandom.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPerInstanceRandom @ 1472c76b0

void __cdecl
UMaterialExpressionPerInstanceRandom::StaticRegisterNativesUMaterialExpressionPerInstanceRandom
          (void)

{
  return;
}

