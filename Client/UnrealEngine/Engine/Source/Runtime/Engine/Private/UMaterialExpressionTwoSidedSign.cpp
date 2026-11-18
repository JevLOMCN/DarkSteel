// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dbce0

UClass * __cdecl UMaterialExpressionTwoSidedSign::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTwoSidedSign",
               &Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTwoSidedSign,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTwoSidedSign>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTwoSidedSign>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.InnerSingleton;
}

// UMaterialExpressionTwoSidedSign @ 1472e29f0

UMaterialExpressionTwoSidedSign * __thiscall
UMaterialExpressionTwoSidedSign::UMaterialExpressionTwoSidedSign
          (UMaterialExpressionTwoSidedSign *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTwoSidedSign__6B_;
  return this;
}

// UMaterialExpressionTwoSidedSign @ 1472e2a20

UMaterialExpressionTwoSidedSign * __thiscall
UMaterialExpressionTwoSidedSign::UMaterialExpressionTwoSidedSign
          (UMaterialExpressionTwoSidedSign *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTwoSidedSign__6B_;
  return this;
}

// ~UMaterialExpressionTwoSidedSign @ 1472e3700

void __thiscall
UMaterialExpressionTwoSidedSign::~UMaterialExpressionTwoSidedSign
          (UMaterialExpressionTwoSidedSign *this)

{
  *(undefined ***)this = &___7UMaterialExpressionTwoSidedSign__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6720

UClass * __cdecl UMaterialExpressionTwoSidedSign::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTwoSidedSign",
               &Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTwoSidedSign,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTwoSidedSign>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTwoSidedSign>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTwoSidedSign @ 1472e7950

void __cdecl
UMaterialExpressionTwoSidedSign::StaticRegisterNativesUMaterialExpressionTwoSidedSign(void)

{
  return;
}

