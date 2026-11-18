// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b8e50

UClass * __cdecl UMaterialExpressionPerInstanceFadeAmount::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPerInstanceFadeAmount.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPerInstanceFadeAmount",
               &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceFadeAmount.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPerInstanceFadeAmount,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPerInstanceFadeAmount>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPerInstanceFadeAmount>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceFadeAmount.InnerSingleton;
}

// UMaterialExpressionPerInstanceFadeAmount @ 1472c1150

UMaterialExpressionPerInstanceFadeAmount * __thiscall
UMaterialExpressionPerInstanceFadeAmount::UMaterialExpressionPerInstanceFadeAmount
          (UMaterialExpressionPerInstanceFadeAmount *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPerInstanceFadeAmount__6B_;
  return this;
}

// UMaterialExpressionPerInstanceFadeAmount @ 1472c1180

UMaterialExpressionPerInstanceFadeAmount * __thiscall
UMaterialExpressionPerInstanceFadeAmount::UMaterialExpressionPerInstanceFadeAmount
          (UMaterialExpressionPerInstanceFadeAmount *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionPerInstanceFadeAmount__6B_;
  return this;
}

// ~UMaterialExpressionPerInstanceFadeAmount @ 1472c24d0

void __thiscall
UMaterialExpressionPerInstanceFadeAmount::~UMaterialExpressionPerInstanceFadeAmount
          (UMaterialExpressionPerInstanceFadeAmount *this)

{
  *(undefined ***)this = &___7UMaterialExpressionPerInstanceFadeAmount__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c61f0

UClass * __cdecl UMaterialExpressionPerInstanceFadeAmount::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPerInstanceFadeAmount.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPerInstanceFadeAmount",
               &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceFadeAmount.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPerInstanceFadeAmount,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPerInstanceFadeAmount>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPerInstanceFadeAmount>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceFadeAmount.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPerInstanceFadeAmount @ 1472c76a0

void __cdecl
UMaterialExpressionPerInstanceFadeAmount::
StaticRegisterNativesUMaterialExpressionPerInstanceFadeAmount(void)

{
  return;
}

