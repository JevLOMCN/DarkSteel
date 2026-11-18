// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472b7c90

UClass * __cdecl UMaterialExpressionNamedRerouteBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNamedRerouteBase",
               &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNamedRerouteBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionNamedRerouteBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNamedRerouteBase>,local_res8,
               UMaterialExpressionRerouteBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.InnerSingleton;
}

// UMaterialExpressionNamedRerouteBase @ 1472c0170

UMaterialExpressionNamedRerouteBase * __thiscall
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase
          (UMaterialExpressionNamedRerouteBase *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionNamedRerouteBase__6B_;
  return this;
}

// UMaterialExpressionNamedRerouteBase @ 1472c01a0

UMaterialExpressionNamedRerouteBase * __thiscall
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase
          (UMaterialExpressionNamedRerouteBase *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionNamedRerouteBase__6B_;
  return this;
}

// ~UMaterialExpressionNamedRerouteBase @ 1472c2070

void __thiscall
UMaterialExpressionNamedRerouteBase::~UMaterialExpressionNamedRerouteBase
          (UMaterialExpressionNamedRerouteBase *this)

{
  *(undefined ***)this = &___7UMaterialExpressionRerouteBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4870

UClass * __cdecl UMaterialExpressionNamedRerouteBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNamedRerouteBase",
               &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNamedRerouteBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionNamedRerouteBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNamedRerouteBase>,local_res8,
               UMaterialExpressionRerouteBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionNamedRerouteBase @ 1472c7480

void __cdecl
UMaterialExpressionNamedRerouteBase::StaticRegisterNativesUMaterialExpressionNamedRerouteBase(void)

{
  return;
}

// FindDeclarationInMaterial @ 148b004f0

UMaterialExpressionNamedRerouteDeclaration * __thiscall
UMaterialExpressionNamedRerouteBase::FindDeclarationInMaterial
          (UMaterialExpressionNamedRerouteBase *this,FGuid *param_1)

{
  return (UMaterialExpressionNamedRerouteDeclaration *)0x0;
}

