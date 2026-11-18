// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dc230

UClass * __cdecl UMaterialExpressionVertexColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVertexColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVertexColor",
               &Z_Registration_Info_UClass_UMaterialExpressionVertexColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVertexColor,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVertexColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVertexColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVertexColor.InnerSingleton;
}

// UMaterialExpressionVertexColor @ 1472e2b80

UMaterialExpressionVertexColor * __thiscall
UMaterialExpressionVertexColor::UMaterialExpressionVertexColor
          (UMaterialExpressionVertexColor *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionVertexColor__6B_;
  return this;
}

// ~UMaterialExpressionVertexColor @ 1472e37d0

void __thiscall
UMaterialExpressionVertexColor::~UMaterialExpressionVertexColor
          (UMaterialExpressionVertexColor *this)

{
  *(undefined ***)this = &___7UMaterialExpressionVertexColor__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6a20

UClass * __cdecl UMaterialExpressionVertexColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVertexColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVertexColor",
               &Z_Registration_Info_UClass_UMaterialExpressionVertexColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVertexColor,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVertexColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVertexColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVertexColor.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVertexColor @ 1472e7990

void __cdecl
UMaterialExpressionVertexColor::StaticRegisterNativesUMaterialExpressionVertexColor(void)

{
  return;
}

// UMaterialExpressionVertexColor @ 148aff820

UMaterialExpressionVertexColor * __thiscall
UMaterialExpressionVertexColor::UMaterialExpressionVertexColor
          (UMaterialExpressionVertexColor *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionVertexColor__6B_;
  return this;
}

