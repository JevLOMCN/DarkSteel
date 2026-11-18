// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba960

UClass * __cdecl UMaterialExpressionParticleMacroUV::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleMacroUV",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleMacroUV,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleMacroUV>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleMacroUV>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.InnerSingleton;
}

// UMaterialExpressionParticleMacroUV @ 1472c0960

UMaterialExpressionParticleMacroUV * __thiscall
UMaterialExpressionParticleMacroUV::UMaterialExpressionParticleMacroUV
          (UMaterialExpressionParticleMacroUV *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleMacroUV__6B_;
  return this;
}

// UMaterialExpressionParticleMacroUV @ 1472c0990

UMaterialExpressionParticleMacroUV * __thiscall
UMaterialExpressionParticleMacroUV::UMaterialExpressionParticleMacroUV
          (UMaterialExpressionParticleMacroUV *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleMacroUV__6B_;
  return this;
}

// ~UMaterialExpressionParticleMacroUV @ 1472c22d0

void __thiscall
UMaterialExpressionParticleMacroUV::~UMaterialExpressionParticleMacroUV
          (UMaterialExpressionParticleMacroUV *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleMacroUV__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c55f0

UClass * __cdecl UMaterialExpressionParticleMacroUV::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleMacroUV",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleMacroUV,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleMacroUV>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleMacroUV>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleMacroUV @ 1472c75a0

void __cdecl
UMaterialExpressionParticleMacroUV::StaticRegisterNativesUMaterialExpressionParticleMacroUV(void)

{
  return;
}

