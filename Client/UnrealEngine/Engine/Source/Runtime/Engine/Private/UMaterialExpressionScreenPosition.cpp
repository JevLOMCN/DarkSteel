// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cca00

UClass * __cdecl UMaterialExpressionScreenPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionScreenPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionScreenPosition,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionScreenPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionScreenPosition>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.InnerSingleton;
}

// UMaterialExpressionScreenPosition @ 1472d28b0

UMaterialExpressionScreenPosition * __thiscall
UMaterialExpressionScreenPosition::UMaterialExpressionScreenPosition
          (UMaterialExpressionScreenPosition *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionScreenPosition__6B_;
  return this;
}

// ~UMaterialExpressionScreenPosition @ 1472d44b0

void __thiscall
UMaterialExpressionScreenPosition::~UMaterialExpressionScreenPosition
          (UMaterialExpressionScreenPosition *this)

{
  *(undefined ***)this = &___7UMaterialExpressionScreenPosition__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6c30

UClass * __cdecl UMaterialExpressionScreenPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionScreenPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionScreenPosition,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionScreenPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionScreenPosition>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionScreenPosition @ 1472d88b0

void __cdecl
UMaterialExpressionScreenPosition::StaticRegisterNativesUMaterialExpressionScreenPosition(void)

{
  return;
}

// UMaterialExpressionScreenPosition @ 148afe7c0

UMaterialExpressionScreenPosition * __thiscall
UMaterialExpressionScreenPosition::UMaterialExpressionScreenPosition
          (UMaterialExpressionScreenPosition *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionScreenPosition__6B_;
  return this;
}

