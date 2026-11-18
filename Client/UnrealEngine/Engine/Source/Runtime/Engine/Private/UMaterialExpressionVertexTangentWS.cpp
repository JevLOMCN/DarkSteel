// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dc530

UClass * __cdecl UMaterialExpressionVertexTangentWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVertexTangentWS",
               &Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVertexTangentWS,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVertexTangentWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVertexTangentWS>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.InnerSingleton;
}

// UMaterialExpressionVertexTangentWS @ 1472e2c60

UMaterialExpressionVertexTangentWS * __thiscall
UMaterialExpressionVertexTangentWS::UMaterialExpressionVertexTangentWS
          (UMaterialExpressionVertexTangentWS *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionVertexTangentWS__6B_;
  return this;
}

// UMaterialExpressionVertexTangentWS @ 1472e2c90

UMaterialExpressionVertexTangentWS * __thiscall
UMaterialExpressionVertexTangentWS::UMaterialExpressionVertexTangentWS
          (UMaterialExpressionVertexTangentWS *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionVertexTangentWS__6B_;
  return this;
}

// ~UMaterialExpressionVertexTangentWS @ 1472e3830

void __thiscall
UMaterialExpressionVertexTangentWS::~UMaterialExpressionVertexTangentWS
          (UMaterialExpressionVertexTangentWS *this)

{
  *(undefined ***)this = &___7UMaterialExpressionVertexTangentWS__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6c60

UClass * __cdecl UMaterialExpressionVertexTangentWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVertexTangentWS",
               &Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVertexTangentWS,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVertexTangentWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVertexTangentWS>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVertexTangentWS @ 1472e79c0

void __cdecl
UMaterialExpressionVertexTangentWS::StaticRegisterNativesUMaterialExpressionVertexTangentWS(void)

{
  return;
}

