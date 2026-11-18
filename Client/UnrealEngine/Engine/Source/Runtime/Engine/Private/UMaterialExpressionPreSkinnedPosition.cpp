// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba4a0

UClass * __cdecl UMaterialExpressionPreSkinnedPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPreSkinnedPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPreSkinnedPosition,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPreSkinnedPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPreSkinnedPosition>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.InnerSingleton;
}

// UMaterialExpressionPreSkinnedPosition @ 1472c1490

UMaterialExpressionPreSkinnedPosition * __thiscall
UMaterialExpressionPreSkinnedPosition::UMaterialExpressionPreSkinnedPosition
          (UMaterialExpressionPreSkinnedPosition *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedPosition__6B_;
  return this;
}

// ~UMaterialExpressionPreSkinnedPosition @ 1472c2610

void __thiscall
UMaterialExpressionPreSkinnedPosition::~UMaterialExpressionPreSkinnedPosition
          (UMaterialExpressionPreSkinnedPosition *this)

{
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedPosition__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c68b0

UClass * __cdecl UMaterialExpressionPreSkinnedPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPreSkinnedPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPreSkinnedPosition,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPreSkinnedPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPreSkinnedPosition>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPreSkinnedPosition @ 1472c7730

void __cdecl
UMaterialExpressionPreSkinnedPosition::StaticRegisterNativesUMaterialExpressionPreSkinnedPosition
          (void)

{
  return;
}

// UMaterialExpressionPreSkinnedPosition @ 148afdc50

UMaterialExpressionPreSkinnedPosition * __thiscall
UMaterialExpressionPreSkinnedPosition::UMaterialExpressionPreSkinnedPosition
          (UMaterialExpressionPreSkinnedPosition *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedPosition__6B_;
  return this;
}

