// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba050

UClass * __cdecl UMaterialExpressionPrecomputedAOMask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPrecomputedAOMask",
               &Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPrecomputedAOMask,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPrecomputedAOMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPrecomputedAOMask>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.InnerSingleton;
}

// UMaterialExpressionPrecomputedAOMask @ 1472c14c0

UMaterialExpressionPrecomputedAOMask * __thiscall
UMaterialExpressionPrecomputedAOMask::UMaterialExpressionPrecomputedAOMask
          (UMaterialExpressionPrecomputedAOMask *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPrecomputedAOMask__6B_;
  return this;
}

// ~UMaterialExpressionPrecomputedAOMask @ 1472c2630

void __thiscall
UMaterialExpressionPrecomputedAOMask::~UMaterialExpressionPrecomputedAOMask
          (UMaterialExpressionPrecomputedAOMask *this)

{
  *(undefined ***)this = &___7UMaterialExpressionPrecomputedAOMask__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6970

UClass * __cdecl UMaterialExpressionPrecomputedAOMask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPrecomputedAOMask",
               &Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPrecomputedAOMask,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPrecomputedAOMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPrecomputedAOMask>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPrecomputedAOMask @ 1472c7740

void __cdecl
UMaterialExpressionPrecomputedAOMask::StaticRegisterNativesUMaterialExpressionPrecomputedAOMask
          (void)

{
  return;
}

// UMaterialExpressionPrecomputedAOMask @ 148afdc80

UMaterialExpressionPrecomputedAOMask * __thiscall
UMaterialExpressionPrecomputedAOMask::UMaterialExpressionPrecomputedAOMask
          (UMaterialExpressionPrecomputedAOMask *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPrecomputedAOMask__6B_;
  return this;
}

