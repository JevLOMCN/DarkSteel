// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba360

UClass * __cdecl UMaterialExpressionPreSkinnedNormal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPreSkinnedNormal",
               &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPreSkinnedNormal,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPreSkinnedNormal>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPreSkinnedNormal>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.InnerSingleton;
}

// UMaterialExpressionPreSkinnedNormal @ 1472c1460

UMaterialExpressionPreSkinnedNormal * __thiscall
UMaterialExpressionPreSkinnedNormal::UMaterialExpressionPreSkinnedNormal
          (UMaterialExpressionPreSkinnedNormal *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedNormal__6B_;
  return this;
}

// ~UMaterialExpressionPreSkinnedNormal @ 1472c25f0

void __thiscall
UMaterialExpressionPreSkinnedNormal::~UMaterialExpressionPreSkinnedNormal
          (UMaterialExpressionPreSkinnedNormal *this)

{
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedNormal__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c67f0

UClass * __cdecl UMaterialExpressionPreSkinnedNormal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPreSkinnedNormal",
               &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPreSkinnedNormal,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPreSkinnedNormal>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPreSkinnedNormal>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPreSkinnedNormal @ 1472c7720

void __cdecl
UMaterialExpressionPreSkinnedNormal::StaticRegisterNativesUMaterialExpressionPreSkinnedNormal(void)

{
  return;
}

// UMaterialExpressionPreSkinnedNormal @ 148afdc20

UMaterialExpressionPreSkinnedNormal * __thiscall
UMaterialExpressionPreSkinnedNormal::UMaterialExpressionPreSkinnedNormal
          (UMaterialExpressionPreSkinnedNormal *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPreSkinnedNormal__6B_;
  return this;
}

