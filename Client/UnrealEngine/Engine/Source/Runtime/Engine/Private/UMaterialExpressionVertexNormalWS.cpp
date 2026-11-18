// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dc430

UClass * __cdecl UMaterialExpressionVertexNormalWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVertexNormalWS",
               &Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVertexNormalWS,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVertexNormalWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVertexNormalWS>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.InnerSingleton;
}

// UMaterialExpressionVertexNormalWS @ 1472e2c00

UMaterialExpressionVertexNormalWS * __thiscall
UMaterialExpressionVertexNormalWS::UMaterialExpressionVertexNormalWS
          (UMaterialExpressionVertexNormalWS *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionVertexNormalWS__6B_;
  return this;
}

// UMaterialExpressionVertexNormalWS @ 1472e2c30

UMaterialExpressionVertexNormalWS * __thiscall
UMaterialExpressionVertexNormalWS::UMaterialExpressionVertexNormalWS
          (UMaterialExpressionVertexNormalWS *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionVertexNormalWS__6B_;
  return this;
}

// ~UMaterialExpressionVertexNormalWS @ 1472e3810

void __thiscall
UMaterialExpressionVertexNormalWS::~UMaterialExpressionVertexNormalWS
          (UMaterialExpressionVertexNormalWS *this)

{
  *(undefined ***)this = &___7UMaterialExpressionVertexNormalWS__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6ba0

UClass * __cdecl UMaterialExpressionVertexNormalWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVertexNormalWS",
               &Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVertexNormalWS,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVertexNormalWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVertexNormalWS>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVertexNormalWS @ 1472e79b0

void __cdecl
UMaterialExpressionVertexNormalWS::StaticRegisterNativesUMaterialExpressionVertexNormalWS(void)

{
  return;
}

